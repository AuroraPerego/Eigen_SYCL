## issue: deduce address space to do atomic operations

In the first reproducer (`atomici_sycl.cpp`) we know the address space, so in the `atomic_fetch_add` the `sycl::atomic_ref` is done based on that.
In the second reproducer (`atomici_alpaka.cpp`) the possibility of not knowing the address space is considered, so the first step is the deduction of the 
address space trying to create a pointer with address space global and creating a `sycl::atomic_ref` with address space global if that is successful,
with address space local otherwise.

W found a way to make it work that is to use the attribute `__attribute__((nonnull))`.

Note that it's all fine if we compile with `-O0`

How to reproduce:
```
dpcpp atomici_sycl.cpp -o atomici_sycl
``` 
--> compiles and runs
```
dpcpp atomici_alpaka.cpp -o atomici_alpaka
``` 
--> doesn't compile

**NOTE:** this issue has been solved with a commit in intel/llvm that introduced the new multi ptrs according to SYCL 2020 specs
