#include <CL/sycl.hpp>
#include <iostream>

namespace hierarchy
{
    struct Grids
    {};

    struct Blocks
    {};

    struct Threads
    {};
} // namespace hierarchy

template<typename THierarchy>
struct SyclMemoryScope
{
};

template<>
struct SyclMemoryScope<hierarchy::Grids>
{
    static constexpr auto value = sycl::memory_scope::device;
};

template<>
struct SyclMemoryScope<hierarchy::Blocks>
{
    static constexpr auto value = sycl::memory_scope::device;
};

template<>
struct SyclMemoryScope<hierarchy::Threads>
{
    static constexpr auto value = sycl::memory_scope::work_group;
};

template<typename T>
inline auto get_global_ptr(T* const addr)
{
    return sycl::make_ptr<T, sycl::access::address_space::global_space>(addr);
}

template<typename T>
inline auto get_local_ptr(T* const addr)
{
    return sycl::make_ptr<T, sycl::access::address_space::local_space>(addr);
}

template<typename T, typename THierarchy>
using global_ref = sycl::atomic_ref<
    T,
    sycl::memory_order::relaxed,
    SyclMemoryScope<THierarchy>::value,
    sycl::access::address_space::global_space>;

template<typename T, typename THierarchy>
using local_ref = sycl::atomic_ref<
    T,
    sycl::memory_order::relaxed,
    SyclMemoryScope<THierarchy>::value,
    sycl::access::address_space::local_space>;

template<typename THierarchy, typename T, typename TOp>
inline auto callAtomicOp(T* const addr, TOp&& op) //__attribute__((nonnull))
{
    if(auto ptr = get_global_ptr(addr); ptr != nullptr)
    {
        auto ref = global_ref<T, THierarchy>{*addr};
        return op(ref);
    }
    else
    {
        auto ref = local_ref<T, THierarchy>{*addr};
        return op(ref);
    }
}

template<typename T, typename THierarchy>
auto AtomicOp(T* const addr, T const& value) -> T
{
    static_assert(std::is_integral_v<T> || std::is_floating_point_v<T>, "SYCL atomics do not support this type");

        return callAtomicOp<THierarchy>(
            addr,
            [&value](auto& ref) { return ref.fetch_add(value); });
};

