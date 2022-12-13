// This is auto-generated SYCL integration header.

#include <sycl/detail/defines_elementary.hpp>
#include <sycl/detail/kernel_desc.hpp>

#ifndef SYCL_LANGUAGE_VERSION
#define SYCL_LANGUAGE_VERSION 202001
#endif //SYCL_LANGUAGE_VERSION

// Forward declarations of templated kernel function types:

namespace sycl {
__SYCL_INLINE_VER_NAMESPACE(_V1) {
namespace detail {
// names of all kernels defined in the corresponding source
static constexpr
const char* const kernel_names[] = {
  "_ZTSZNK6alpaka21TaskKernelGenericSyclINS_15AccCpuSyclIntelISt17integral_constantImLm1EEjEES3_jN15alpaka_cpu_sycl13kernelFastFitILi3EEEJRPKN3cms11alpakatools14HistoContainerIjLj32768ELj163840ELj32EtLj1EEERPKNSA_IjLj8ELj24576ELj32EtLj1EEEiRPK23TrackingRecHit2DSoAViewPdPfSN_RjEEclERN4sycl3_V17handlerERNSS_6bufferIiLi1ENSS_6detail17aligned_allocatorIiEEvEEEUlNSS_7nd_itemILi1EEEE_",
  "_ZTSZNK6alpaka21TaskKernelGenericSyclINS_15AccCpuSyclIntelISt17integral_constantImLm1EEjEES3_jN15alpaka_cpu_sycl15kernelCircleFitILi3EEEJRPKN3cms11alpakatools14HistoContainerIjLj8ELj24576ELj32EtLj1EEEiRfPdPfSG_PNS5_4Rfit10circle_fitERjEEclERN4sycl3_V17handlerERNSO_6bufferIiLi1ENSO_6detail17aligned_allocatorIiEEvEEEUlNSO_7nd_itemILi1EEEE_",
  "_ZTSZNK6alpaka21TaskKernelGenericSyclINS_15AccCpuSyclIntelISt17integral_constantImLm1EEjEES3_jN15alpaka_cpu_sycl13kernelLineFitILi3EEEJRPKN3cms11alpakatools14HistoContainerIjLj8ELj24576ELj32EtLj1EEEiRfRPN10pixelTrack9TrackSoATILi32768EEEPdPfSL_PNS5_4Rfit10circle_fitERjEEclERN4sycl3_V17handlerERNST_6bufferIiLi1ENST_6detail17aligned_allocatorIiEEvEEEUlNST_7nd_itemILi1EEEE_",
  "_ZTSZNK6alpaka21TaskKernelGenericSyclINS_15AccCpuSyclIntelISt17integral_constantImLm1EEjEES3_jN15alpaka_cpu_sycl13kernelFastFitILi4EEEJRPKN3cms11alpakatools14HistoContainerIjLj32768ELj163840ELj32EtLj1EEERPKNSA_IjLj8ELj24576ELj32EtLj1EEEiRPK23TrackingRecHit2DSoAViewPdPfSN_RjEEclERN4sycl3_V17handlerERNSS_6bufferIiLi1ENSS_6detail17aligned_allocatorIiEEvEEEUlNSS_7nd_itemILi1EEEE_",
  "_ZTSZNK6alpaka21TaskKernelGenericSyclINS_15AccCpuSyclIntelISt17integral_constantImLm1EEjEES3_jN15alpaka_cpu_sycl15kernelCircleFitILi4EEEJRPKN3cms11alpakatools14HistoContainerIjLj8ELj24576ELj32EtLj1EEEiRfPdPfSG_PNS5_4Rfit10circle_fitERjEEclERN4sycl3_V17handlerERNSO_6bufferIiLi1ENSO_6detail17aligned_allocatorIiEEvEEEUlNSO_7nd_itemILi1EEEE_",
  "_ZTSZNK6alpaka21TaskKernelGenericSyclINS_15AccCpuSyclIntelISt17integral_constantImLm1EEjEES3_jN15alpaka_cpu_sycl13kernelLineFitILi4EEEJRPKN3cms11alpakatools14HistoContainerIjLj8ELj24576ELj32EtLj1EEEiRfRPN10pixelTrack9TrackSoATILi32768EEEPdPfSL_PNS5_4Rfit10circle_fitERjEEclERN4sycl3_V17handlerERNST_6bufferIiLi1ENST_6detail17aligned_allocatorIiEEvEEEUlNST_7nd_itemILi1EEEE_",
  "_ZTSZNK6alpaka21TaskKernelGenericSyclINS_15AccCpuSyclIntelISt17integral_constantImLm1EEjEES3_jN15alpaka_cpu_sycl13kernelFastFitILi5EEEJRPKN3cms11alpakatools14HistoContainerIjLj32768ELj163840ELj32EtLj1EEERPKNSA_IjLj8ELj24576ELj32EtLj1EEEiRPK23TrackingRecHit2DSoAViewPdPfSN_RjEEclERN4sycl3_V17handlerERNSS_6bufferIiLi1ENSS_6detail17aligned_allocatorIiEEvEEEUlNSS_7nd_itemILi1EEEE_",
  "_ZTSZNK6alpaka21TaskKernelGenericSyclINS_15AccCpuSyclIntelISt17integral_constantImLm1EEjEES3_jN15alpaka_cpu_sycl15kernelCircleFitILi5EEEJRPKN3cms11alpakatools14HistoContainerIjLj8ELj24576ELj32EtLj1EEEiRfPdPfSG_PNS5_4Rfit10circle_fitERjEEclERN4sycl3_V17handlerERNSO_6bufferIiLi1ENSO_6detail17aligned_allocatorIiEEvEEEUlNSO_7nd_itemILi1EEEE_",
  "_ZTSZNK6alpaka21TaskKernelGenericSyclINS_15AccCpuSyclIntelISt17integral_constantImLm1EEjEES3_jN15alpaka_cpu_sycl13kernelLineFitILi5EEEJRPKN3cms11alpakatools14HistoContainerIjLj8ELj24576ELj32EtLj1EEEiRfRPN10pixelTrack9TrackSoATILi32768EEEPdPfSL_PNS5_4Rfit10circle_fitERjEEclERN4sycl3_V17handlerERNST_6bufferIiLi1ENST_6detail17aligned_allocatorIiEEvEEEUlNST_7nd_itemILi1EEEE_"
};

// array representing signatures of all kernels defined in the
// corresponding source
static constexpr
const kernel_param_desc_t kernel_signatures[] = {
  //--- _ZTSZNK6alpaka21TaskKernelGenericSyclINS_15AccCpuSyclIntelISt17integral_constantImLm1EEjEES3_jN15alpaka_cpu_sycl13kernelFastFitILi3EEEJRPKN3cms11alpakatools14HistoContainerIjLj32768ELj163840ELj32EtLj1EEERPKNSA_IjLj8ELj24576ELj32EtLj1EEEiRPK23TrackingRecHit2DSoAViewPdPfSN_RjEEclERN4sycl3_V17handlerERNSS_6bufferIiLi1ENSS_6detail17aligned_allocatorIiEEvEEEUlNSS_7nd_itemILi1EEEE_
  { kernel_param_kind_t::kind_std_layout, 4, 0 },
  { kernel_param_kind_t::kind_accessor, 4064, 8 },
  { kernel_param_kind_t::kind_accessor, 4064, 40 },
  { kernel_param_kind_t::kind_accessor, 4062, 72 },
  { kernel_param_kind_t::kind_accessor, 4064, 104 },
  { kernel_param_kind_t::kind_std_layout, 1, 136 },
  { kernel_param_kind_t::kind_std_layout, 64, 144 },

  //--- _ZTSZNK6alpaka21TaskKernelGenericSyclINS_15AccCpuSyclIntelISt17integral_constantImLm1EEjEES3_jN15alpaka_cpu_sycl15kernelCircleFitILi3EEEJRPKN3cms11alpakatools14HistoContainerIjLj8ELj24576ELj32EtLj1EEEiRfPdPfSG_PNS5_4Rfit10circle_fitERjEEclERN4sycl3_V17handlerERNSO_6bufferIiLi1ENSO_6detail17aligned_allocatorIiEEvEEEUlNSO_7nd_itemILi1EEEE_
  { kernel_param_kind_t::kind_std_layout, 4, 0 },
  { kernel_param_kind_t::kind_accessor, 4064, 8 },
  { kernel_param_kind_t::kind_accessor, 4064, 40 },
  { kernel_param_kind_t::kind_accessor, 4062, 72 },
  { kernel_param_kind_t::kind_accessor, 4064, 104 },
  { kernel_param_kind_t::kind_std_layout, 1, 136 },
  { kernel_param_kind_t::kind_std_layout, 64, 144 },

  //--- _ZTSZNK6alpaka21TaskKernelGenericSyclINS_15AccCpuSyclIntelISt17integral_constantImLm1EEjEES3_jN15alpaka_cpu_sycl13kernelLineFitILi3EEEJRPKN3cms11alpakatools14HistoContainerIjLj8ELj24576ELj32EtLj1EEEiRfRPN10pixelTrack9TrackSoATILi32768EEEPdPfSL_PNS5_4Rfit10circle_fitERjEEclERN4sycl3_V17handlerERNST_6bufferIiLi1ENST_6detail17aligned_allocatorIiEEvEEEUlNST_7nd_itemILi1EEEE_
  { kernel_param_kind_t::kind_std_layout, 4, 0 },
  { kernel_param_kind_t::kind_accessor, 4064, 8 },
  { kernel_param_kind_t::kind_accessor, 4064, 40 },
  { kernel_param_kind_t::kind_accessor, 4062, 72 },
  { kernel_param_kind_t::kind_accessor, 4064, 104 },
  { kernel_param_kind_t::kind_std_layout, 1, 136 },
  { kernel_param_kind_t::kind_std_layout, 72, 144 },

  //--- _ZTSZNK6alpaka21TaskKernelGenericSyclINS_15AccCpuSyclIntelISt17integral_constantImLm1EEjEES3_jN15alpaka_cpu_sycl13kernelFastFitILi4EEEJRPKN3cms11alpakatools14HistoContainerIjLj32768ELj163840ELj32EtLj1EEERPKNSA_IjLj8ELj24576ELj32EtLj1EEEiRPK23TrackingRecHit2DSoAViewPdPfSN_RjEEclERN4sycl3_V17handlerERNSS_6bufferIiLi1ENSS_6detail17aligned_allocatorIiEEvEEEUlNSS_7nd_itemILi1EEEE_
  { kernel_param_kind_t::kind_std_layout, 4, 0 },
  { kernel_param_kind_t::kind_accessor, 4064, 8 },
  { kernel_param_kind_t::kind_accessor, 4064, 40 },
  { kernel_param_kind_t::kind_accessor, 4062, 72 },
  { kernel_param_kind_t::kind_accessor, 4064, 104 },
  { kernel_param_kind_t::kind_std_layout, 1, 136 },
  { kernel_param_kind_t::kind_std_layout, 64, 144 },

  //--- _ZTSZNK6alpaka21TaskKernelGenericSyclINS_15AccCpuSyclIntelISt17integral_constantImLm1EEjEES3_jN15alpaka_cpu_sycl15kernelCircleFitILi4EEEJRPKN3cms11alpakatools14HistoContainerIjLj8ELj24576ELj32EtLj1EEEiRfPdPfSG_PNS5_4Rfit10circle_fitERjEEclERN4sycl3_V17handlerERNSO_6bufferIiLi1ENSO_6detail17aligned_allocatorIiEEvEEEUlNSO_7nd_itemILi1EEEE_
  { kernel_param_kind_t::kind_std_layout, 4, 0 },
  { kernel_param_kind_t::kind_accessor, 4064, 8 },
  { kernel_param_kind_t::kind_accessor, 4064, 40 },
  { kernel_param_kind_t::kind_accessor, 4062, 72 },
  { kernel_param_kind_t::kind_accessor, 4064, 104 },
  { kernel_param_kind_t::kind_std_layout, 1, 136 },
  { kernel_param_kind_t::kind_std_layout, 64, 144 },

  //--- _ZTSZNK6alpaka21TaskKernelGenericSyclINS_15AccCpuSyclIntelISt17integral_constantImLm1EEjEES3_jN15alpaka_cpu_sycl13kernelLineFitILi4EEEJRPKN3cms11alpakatools14HistoContainerIjLj8ELj24576ELj32EtLj1EEEiRfRPN10pixelTrack9TrackSoATILi32768EEEPdPfSL_PNS5_4Rfit10circle_fitERjEEclERN4sycl3_V17handlerERNST_6bufferIiLi1ENST_6detail17aligned_allocatorIiEEvEEEUlNST_7nd_itemILi1EEEE_
  { kernel_param_kind_t::kind_std_layout, 4, 0 },
  { kernel_param_kind_t::kind_accessor, 4064, 8 },
  { kernel_param_kind_t::kind_accessor, 4064, 40 },
  { kernel_param_kind_t::kind_accessor, 4062, 72 },
  { kernel_param_kind_t::kind_accessor, 4064, 104 },
  { kernel_param_kind_t::kind_std_layout, 1, 136 },
  { kernel_param_kind_t::kind_std_layout, 72, 144 },

  //--- _ZTSZNK6alpaka21TaskKernelGenericSyclINS_15AccCpuSyclIntelISt17integral_constantImLm1EEjEES3_jN15alpaka_cpu_sycl13kernelFastFitILi5EEEJRPKN3cms11alpakatools14HistoContainerIjLj32768ELj163840ELj32EtLj1EEERPKNSA_IjLj8ELj24576ELj32EtLj1EEEiRPK23TrackingRecHit2DSoAViewPdPfSN_RjEEclERN4sycl3_V17handlerERNSS_6bufferIiLi1ENSS_6detail17aligned_allocatorIiEEvEEEUlNSS_7nd_itemILi1EEEE_
  { kernel_param_kind_t::kind_std_layout, 4, 0 },
  { kernel_param_kind_t::kind_accessor, 4064, 8 },
  { kernel_param_kind_t::kind_accessor, 4064, 40 },
  { kernel_param_kind_t::kind_accessor, 4062, 72 },
  { kernel_param_kind_t::kind_accessor, 4064, 104 },
  { kernel_param_kind_t::kind_std_layout, 1, 136 },
  { kernel_param_kind_t::kind_std_layout, 64, 144 },

  //--- _ZTSZNK6alpaka21TaskKernelGenericSyclINS_15AccCpuSyclIntelISt17integral_constantImLm1EEjEES3_jN15alpaka_cpu_sycl15kernelCircleFitILi5EEEJRPKN3cms11alpakatools14HistoContainerIjLj8ELj24576ELj32EtLj1EEEiRfPdPfSG_PNS5_4Rfit10circle_fitERjEEclERN4sycl3_V17handlerERNSO_6bufferIiLi1ENSO_6detail17aligned_allocatorIiEEvEEEUlNSO_7nd_itemILi1EEEE_
  { kernel_param_kind_t::kind_std_layout, 4, 0 },
  { kernel_param_kind_t::kind_accessor, 4064, 8 },
  { kernel_param_kind_t::kind_accessor, 4064, 40 },
  { kernel_param_kind_t::kind_accessor, 4062, 72 },
  { kernel_param_kind_t::kind_accessor, 4064, 104 },
  { kernel_param_kind_t::kind_std_layout, 1, 136 },
  { kernel_param_kind_t::kind_std_layout, 64, 144 },

  //--- _ZTSZNK6alpaka21TaskKernelGenericSyclINS_15AccCpuSyclIntelISt17integral_constantImLm1EEjEES3_jN15alpaka_cpu_sycl13kernelLineFitILi5EEEJRPKN3cms11alpakatools14HistoContainerIjLj8ELj24576ELj32EtLj1EEEiRfRPN10pixelTrack9TrackSoATILi32768EEEPdPfSL_PNS5_4Rfit10circle_fitERjEEclERN4sycl3_V17handlerERNST_6bufferIiLi1ENST_6detail17aligned_allocatorIiEEvEEEUlNST_7nd_itemILi1EEEE_
  { kernel_param_kind_t::kind_std_layout, 4, 0 },
  { kernel_param_kind_t::kind_accessor, 4064, 8 },
  { kernel_param_kind_t::kind_accessor, 4064, 40 },
  { kernel_param_kind_t::kind_accessor, 4062, 72 },
  { kernel_param_kind_t::kind_accessor, 4064, 104 },
  { kernel_param_kind_t::kind_std_layout, 1, 136 },
  { kernel_param_kind_t::kind_std_layout, 72, 144 },

  { kernel_param_kind_t::kind_invalid, -987654321, -987654321 }, 
};

// Specializations of KernelInfo for kernel function types:
template <> struct KernelInfoData<'_', 'Z', 'T', 'S', 'Z', 'N', 'K', '6', 'a', 'l', 'p', 'a', 'k', 'a', '2', '1', 'T', 'a', 's', 'k', 'K', 'e', 'r', 'n', 'e', 'l', 'G', 'e', 'n', 'e', 'r', 'i', 'c', 'S', 'y', 'c', 'l', 'I', 'N', 'S', '_', '1', '5', 'A', 'c', 'c', 'C', 'p', 'u', 'S', 'y', 'c', 'l', 'I', 'n', 't', 'e', 'l', 'I', 'S', 't', '1', '7', 'i', 'n', 't', 'e', 'g', 'r', 'a', 'l', '_', 'c', 'o', 'n', 's', 't', 'a', 'n', 't', 'I', 'm', 'L', 'm', '1', 'E', 'E', 'j', 'E', 'E', 'S', '3', '_', 'j', 'N', '1', '5', 'a', 'l', 'p', 'a', 'k', 'a', '_', 'c', 'p', 'u', '_', 's', 'y', 'c', 'l', '1', '3', 'k', 'e', 'r', 'n', 'e', 'l', 'F', 'a', 's', 't', 'F', 'i', 't', 'I', 'L', 'i', '3', 'E', 'E', 'E', 'J', 'R', 'P', 'K', 'N', '3', 'c', 'm', 's', '1', '1', 'a', 'l', 'p', 'a', 'k', 'a', 't', 'o', 'o', 'l', 's', '1', '4', 'H', 'i', 's', 't', 'o', 'C', 'o', 'n', 't', 'a', 'i', 'n', 'e', 'r', 'I', 'j', 'L', 'j', '3', '2', '7', '6', '8', 'E', 'L', 'j', '1', '6', '3', '8', '4', '0', 'E', 'L', 'j', '3', '2', 'E', 't', 'L', 'j', '1', 'E', 'E', 'E', 'R', 'P', 'K', 'N', 'S', 'A', '_', 'I', 'j', 'L', 'j', '8', 'E', 'L', 'j', '2', '4', '5', '7', '6', 'E', 'L', 'j', '3', '2', 'E', 't', 'L', 'j', '1', 'E', 'E', 'E', 'i', 'R', 'P', 'K', '2', '3', 'T', 'r', 'a', 'c', 'k', 'i', 'n', 'g', 'R', 'e', 'c', 'H', 'i', 't', '2', 'D', 'S', 'o', 'A', 'V', 'i', 'e', 'w', 'P', 'd', 'P', 'f', 'S', 'N', '_', 'R', 'j', 'E', 'E', 'c', 'l', 'E', 'R', 'N', '4', 's', 'y', 'c', 'l', '3', '_', 'V', '1', '7', 'h', 'a', 'n', 'd', 'l', 'e', 'r', 'E', 'R', 'N', 'S', 'S', '_', '6', 'b', 'u', 'f', 'f', 'e', 'r', 'I', 'i', 'L', 'i', '1', 'E', 'N', 'S', 'S', '_', '6', 'd', 'e', 't', 'a', 'i', 'l', '1', '7', 'a', 'l', 'i', 'g', 'n', 'e', 'd', '_', 'a', 'l', 'l', 'o', 'c', 'a', 't', 'o', 'r', 'I', 'i', 'E', 'E', 'v', 'E', 'E', 'E', 'U', 'l', 'N', 'S', 'S', '_', '7', 'n', 'd', '_', 'i', 't', 'e', 'm', 'I', 'L', 'i', '1', 'E', 'E', 'E', 'E', '_'> {
  __SYCL_DLL_LOCAL
  static constexpr const char* getName() { return "_ZTSZNK6alpaka21TaskKernelGenericSyclINS_15AccCpuSyclIntelISt17integral_constantImLm1EEjEES3_jN15alpaka_cpu_sycl13kernelFastFitILi3EEEJRPKN3cms11alpakatools14HistoContainerIjLj32768ELj163840ELj32EtLj1EEERPKNSA_IjLj8ELj24576ELj32EtLj1EEEiRPK23TrackingRecHit2DSoAViewPdPfSN_RjEEclERN4sycl3_V17handlerERNSS_6bufferIiLi1ENSS_6detail17aligned_allocatorIiEEvEEEUlNSS_7nd_itemILi1EEEE_"; }
  __SYCL_DLL_LOCAL
  static constexpr unsigned getNumParams() { return 7; }
  __SYCL_DLL_LOCAL
  static constexpr const kernel_param_desc_t& getParamDesc(unsigned i) {
    return kernel_signatures[i+0];
  }
  __SYCL_DLL_LOCAL
  static constexpr bool isESIMD() { return 0; }
  __SYCL_DLL_LOCAL
  static constexpr const char* getFileName() {
#ifndef NDEBUG
    return "TaskKernelGenericSycl.hpp";
#else
    return "";
#endif
  }
  __SYCL_DLL_LOCAL
  static constexpr const char* getFunctionName() {
#ifndef NDEBUG
    return "alpaka::class (lambda)";
#else
    return "";
#endif
  }
  __SYCL_DLL_LOCAL
  static constexpr unsigned getLineNumber() {
#ifndef NDEBUG
    return 154;
#else
    return 0;
#endif
  }
  __SYCL_DLL_LOCAL
  static constexpr unsigned getColumnNumber() {
#ifndef NDEBUG
    return 17;
#else
    return 0;
#endif
  }
  // Returns the size of the kernel object in bytes.
  __SYCL_DLL_LOCAL
  static constexpr long long getKernelSize() { return 208; }
};
template <> struct KernelInfoData<'_', 'Z', 'T', 'S', 'Z', 'N', 'K', '6', 'a', 'l', 'p', 'a', 'k', 'a', '2', '1', 'T', 'a', 's', 'k', 'K', 'e', 'r', 'n', 'e', 'l', 'G', 'e', 'n', 'e', 'r', 'i', 'c', 'S', 'y', 'c', 'l', 'I', 'N', 'S', '_', '1', '5', 'A', 'c', 'c', 'C', 'p', 'u', 'S', 'y', 'c', 'l', 'I', 'n', 't', 'e', 'l', 'I', 'S', 't', '1', '7', 'i', 'n', 't', 'e', 'g', 'r', 'a', 'l', '_', 'c', 'o', 'n', 's', 't', 'a', 'n', 't', 'I', 'm', 'L', 'm', '1', 'E', 'E', 'j', 'E', 'E', 'S', '3', '_', 'j', 'N', '1', '5', 'a', 'l', 'p', 'a', 'k', 'a', '_', 'c', 'p', 'u', '_', 's', 'y', 'c', 'l', '1', '5', 'k', 'e', 'r', 'n', 'e', 'l', 'C', 'i', 'r', 'c', 'l', 'e', 'F', 'i', 't', 'I', 'L', 'i', '3', 'E', 'E', 'E', 'J', 'R', 'P', 'K', 'N', '3', 'c', 'm', 's', '1', '1', 'a', 'l', 'p', 'a', 'k', 'a', 't', 'o', 'o', 'l', 's', '1', '4', 'H', 'i', 's', 't', 'o', 'C', 'o', 'n', 't', 'a', 'i', 'n', 'e', 'r', 'I', 'j', 'L', 'j', '8', 'E', 'L', 'j', '2', '4', '5', '7', '6', 'E', 'L', 'j', '3', '2', 'E', 't', 'L', 'j', '1', 'E', 'E', 'E', 'i', 'R', 'f', 'P', 'd', 'P', 'f', 'S', 'G', '_', 'P', 'N', 'S', '5', '_', '4', 'R', 'f', 'i', 't', '1', '0', 'c', 'i', 'r', 'c', 'l', 'e', '_', 'f', 'i', 't', 'E', 'R', 'j', 'E', 'E', 'c', 'l', 'E', 'R', 'N', '4', 's', 'y', 'c', 'l', '3', '_', 'V', '1', '7', 'h', 'a', 'n', 'd', 'l', 'e', 'r', 'E', 'R', 'N', 'S', 'O', '_', '6', 'b', 'u', 'f', 'f', 'e', 'r', 'I', 'i', 'L', 'i', '1', 'E', 'N', 'S', 'O', '_', '6', 'd', 'e', 't', 'a', 'i', 'l', '1', '7', 'a', 'l', 'i', 'g', 'n', 'e', 'd', '_', 'a', 'l', 'l', 'o', 'c', 'a', 't', 'o', 'r', 'I', 'i', 'E', 'E', 'v', 'E', 'E', 'E', 'U', 'l', 'N', 'S', 'O', '_', '7', 'n', 'd', '_', 'i', 't', 'e', 'm', 'I', 'L', 'i', '1', 'E', 'E', 'E', 'E', '_'> {
  __SYCL_DLL_LOCAL
  static constexpr const char* getName() { return "_ZTSZNK6alpaka21TaskKernelGenericSyclINS_15AccCpuSyclIntelISt17integral_constantImLm1EEjEES3_jN15alpaka_cpu_sycl15kernelCircleFitILi3EEEJRPKN3cms11alpakatools14HistoContainerIjLj8ELj24576ELj32EtLj1EEEiRfPdPfSG_PNS5_4Rfit10circle_fitERjEEclERN4sycl3_V17handlerERNSO_6bufferIiLi1ENSO_6detail17aligned_allocatorIiEEvEEEUlNSO_7nd_itemILi1EEEE_"; }
  __SYCL_DLL_LOCAL
  static constexpr unsigned getNumParams() { return 7; }
  __SYCL_DLL_LOCAL
  static constexpr const kernel_param_desc_t& getParamDesc(unsigned i) {
    return kernel_signatures[i+7];
  }
  __SYCL_DLL_LOCAL
  static constexpr bool isESIMD() { return 0; }
  __SYCL_DLL_LOCAL
  static constexpr const char* getFileName() {
#ifndef NDEBUG
    return "TaskKernelGenericSycl.hpp";
#else
    return "";
#endif
  }
  __SYCL_DLL_LOCAL
  static constexpr const char* getFunctionName() {
#ifndef NDEBUG
    return "alpaka::class (lambda)";
#else
    return "";
#endif
  }
  __SYCL_DLL_LOCAL
  static constexpr unsigned getLineNumber() {
#ifndef NDEBUG
    return 154;
#else
    return 0;
#endif
  }
  __SYCL_DLL_LOCAL
  static constexpr unsigned getColumnNumber() {
#ifndef NDEBUG
    return 17;
#else
    return 0;
#endif
  }
  // Returns the size of the kernel object in bytes.
  __SYCL_DLL_LOCAL
  static constexpr long long getKernelSize() { return 208; }
};
template <> struct KernelInfoData<'_', 'Z', 'T', 'S', 'Z', 'N', 'K', '6', 'a', 'l', 'p', 'a', 'k', 'a', '2', '1', 'T', 'a', 's', 'k', 'K', 'e', 'r', 'n', 'e', 'l', 'G', 'e', 'n', 'e', 'r', 'i', 'c', 'S', 'y', 'c', 'l', 'I', 'N', 'S', '_', '1', '5', 'A', 'c', 'c', 'C', 'p', 'u', 'S', 'y', 'c', 'l', 'I', 'n', 't', 'e', 'l', 'I', 'S', 't', '1', '7', 'i', 'n', 't', 'e', 'g', 'r', 'a', 'l', '_', 'c', 'o', 'n', 's', 't', 'a', 'n', 't', 'I', 'm', 'L', 'm', '1', 'E', 'E', 'j', 'E', 'E', 'S', '3', '_', 'j', 'N', '1', '5', 'a', 'l', 'p', 'a', 'k', 'a', '_', 'c', 'p', 'u', '_', 's', 'y', 'c', 'l', '1', '3', 'k', 'e', 'r', 'n', 'e', 'l', 'L', 'i', 'n', 'e', 'F', 'i', 't', 'I', 'L', 'i', '3', 'E', 'E', 'E', 'J', 'R', 'P', 'K', 'N', '3', 'c', 'm', 's', '1', '1', 'a', 'l', 'p', 'a', 'k', 'a', 't', 'o', 'o', 'l', 's', '1', '4', 'H', 'i', 's', 't', 'o', 'C', 'o', 'n', 't', 'a', 'i', 'n', 'e', 'r', 'I', 'j', 'L', 'j', '8', 'E', 'L', 'j', '2', '4', '5', '7', '6', 'E', 'L', 'j', '3', '2', 'E', 't', 'L', 'j', '1', 'E', 'E', 'E', 'i', 'R', 'f', 'R', 'P', 'N', '1', '0', 'p', 'i', 'x', 'e', 'l', 'T', 'r', 'a', 'c', 'k', '9', 'T', 'r', 'a', 'c', 'k', 'S', 'o', 'A', 'T', 'I', 'L', 'i', '3', '2', '7', '6', '8', 'E', 'E', 'E', 'P', 'd', 'P', 'f', 'S', 'L', '_', 'P', 'N', 'S', '5', '_', '4', 'R', 'f', 'i', 't', '1', '0', 'c', 'i', 'r', 'c', 'l', 'e', '_', 'f', 'i', 't', 'E', 'R', 'j', 'E', 'E', 'c', 'l', 'E', 'R', 'N', '4', 's', 'y', 'c', 'l', '3', '_', 'V', '1', '7', 'h', 'a', 'n', 'd', 'l', 'e', 'r', 'E', 'R', 'N', 'S', 'T', '_', '6', 'b', 'u', 'f', 'f', 'e', 'r', 'I', 'i', 'L', 'i', '1', 'E', 'N', 'S', 'T', '_', '6', 'd', 'e', 't', 'a', 'i', 'l', '1', '7', 'a', 'l', 'i', 'g', 'n', 'e', 'd', '_', 'a', 'l', 'l', 'o', 'c', 'a', 't', 'o', 'r', 'I', 'i', 'E', 'E', 'v', 'E', 'E', 'E', 'U', 'l', 'N', 'S', 'T', '_', '7', 'n', 'd', '_', 'i', 't', 'e', 'm', 'I', 'L', 'i', '1', 'E', 'E', 'E', 'E', '_'> {
  __SYCL_DLL_LOCAL
  static constexpr const char* getName() { return "_ZTSZNK6alpaka21TaskKernelGenericSyclINS_15AccCpuSyclIntelISt17integral_constantImLm1EEjEES3_jN15alpaka_cpu_sycl13kernelLineFitILi3EEEJRPKN3cms11alpakatools14HistoContainerIjLj8ELj24576ELj32EtLj1EEEiRfRPN10pixelTrack9TrackSoATILi32768EEEPdPfSL_PNS5_4Rfit10circle_fitERjEEclERN4sycl3_V17handlerERNST_6bufferIiLi1ENST_6detail17aligned_allocatorIiEEvEEEUlNST_7nd_itemILi1EEEE_"; }
  __SYCL_DLL_LOCAL
  static constexpr unsigned getNumParams() { return 7; }
  __SYCL_DLL_LOCAL
  static constexpr const kernel_param_desc_t& getParamDesc(unsigned i) {
    return kernel_signatures[i+14];
  }
  __SYCL_DLL_LOCAL
  static constexpr bool isESIMD() { return 0; }
  __SYCL_DLL_LOCAL
  static constexpr const char* getFileName() {
#ifndef NDEBUG
    return "TaskKernelGenericSycl.hpp";
#else
    return "";
#endif
  }
  __SYCL_DLL_LOCAL
  static constexpr const char* getFunctionName() {
#ifndef NDEBUG
    return "alpaka::class (lambda)";
#else
    return "";
#endif
  }
  __SYCL_DLL_LOCAL
  static constexpr unsigned getLineNumber() {
#ifndef NDEBUG
    return 154;
#else
    return 0;
#endif
  }
  __SYCL_DLL_LOCAL
  static constexpr unsigned getColumnNumber() {
#ifndef NDEBUG
    return 17;
#else
    return 0;
#endif
  }
  // Returns the size of the kernel object in bytes.
  __SYCL_DLL_LOCAL
  static constexpr long long getKernelSize() { return 216; }
};
template <> struct KernelInfoData<'_', 'Z', 'T', 'S', 'Z', 'N', 'K', '6', 'a', 'l', 'p', 'a', 'k', 'a', '2', '1', 'T', 'a', 's', 'k', 'K', 'e', 'r', 'n', 'e', 'l', 'G', 'e', 'n', 'e', 'r', 'i', 'c', 'S', 'y', 'c', 'l', 'I', 'N', 'S', '_', '1', '5', 'A', 'c', 'c', 'C', 'p', 'u', 'S', 'y', 'c', 'l', 'I', 'n', 't', 'e', 'l', 'I', 'S', 't', '1', '7', 'i', 'n', 't', 'e', 'g', 'r', 'a', 'l', '_', 'c', 'o', 'n', 's', 't', 'a', 'n', 't', 'I', 'm', 'L', 'm', '1', 'E', 'E', 'j', 'E', 'E', 'S', '3', '_', 'j', 'N', '1', '5', 'a', 'l', 'p', 'a', 'k', 'a', '_', 'c', 'p', 'u', '_', 's', 'y', 'c', 'l', '1', '3', 'k', 'e', 'r', 'n', 'e', 'l', 'F', 'a', 's', 't', 'F', 'i', 't', 'I', 'L', 'i', '4', 'E', 'E', 'E', 'J', 'R', 'P', 'K', 'N', '3', 'c', 'm', 's', '1', '1', 'a', 'l', 'p', 'a', 'k', 'a', 't', 'o', 'o', 'l', 's', '1', '4', 'H', 'i', 's', 't', 'o', 'C', 'o', 'n', 't', 'a', 'i', 'n', 'e', 'r', 'I', 'j', 'L', 'j', '3', '2', '7', '6', '8', 'E', 'L', 'j', '1', '6', '3', '8', '4', '0', 'E', 'L', 'j', '3', '2', 'E', 't', 'L', 'j', '1', 'E', 'E', 'E', 'R', 'P', 'K', 'N', 'S', 'A', '_', 'I', 'j', 'L', 'j', '8', 'E', 'L', 'j', '2', '4', '5', '7', '6', 'E', 'L', 'j', '3', '2', 'E', 't', 'L', 'j', '1', 'E', 'E', 'E', 'i', 'R', 'P', 'K', '2', '3', 'T', 'r', 'a', 'c', 'k', 'i', 'n', 'g', 'R', 'e', 'c', 'H', 'i', 't', '2', 'D', 'S', 'o', 'A', 'V', 'i', 'e', 'w', 'P', 'd', 'P', 'f', 'S', 'N', '_', 'R', 'j', 'E', 'E', 'c', 'l', 'E', 'R', 'N', '4', 's', 'y', 'c', 'l', '3', '_', 'V', '1', '7', 'h', 'a', 'n', 'd', 'l', 'e', 'r', 'E', 'R', 'N', 'S', 'S', '_', '6', 'b', 'u', 'f', 'f', 'e', 'r', 'I', 'i', 'L', 'i', '1', 'E', 'N', 'S', 'S', '_', '6', 'd', 'e', 't', 'a', 'i', 'l', '1', '7', 'a', 'l', 'i', 'g', 'n', 'e', 'd', '_', 'a', 'l', 'l', 'o', 'c', 'a', 't', 'o', 'r', 'I', 'i', 'E', 'E', 'v', 'E', 'E', 'E', 'U', 'l', 'N', 'S', 'S', '_', '7', 'n', 'd', '_', 'i', 't', 'e', 'm', 'I', 'L', 'i', '1', 'E', 'E', 'E', 'E', '_'> {
  __SYCL_DLL_LOCAL
  static constexpr const char* getName() { return "_ZTSZNK6alpaka21TaskKernelGenericSyclINS_15AccCpuSyclIntelISt17integral_constantImLm1EEjEES3_jN15alpaka_cpu_sycl13kernelFastFitILi4EEEJRPKN3cms11alpakatools14HistoContainerIjLj32768ELj163840ELj32EtLj1EEERPKNSA_IjLj8ELj24576ELj32EtLj1EEEiRPK23TrackingRecHit2DSoAViewPdPfSN_RjEEclERN4sycl3_V17handlerERNSS_6bufferIiLi1ENSS_6detail17aligned_allocatorIiEEvEEEUlNSS_7nd_itemILi1EEEE_"; }
  __SYCL_DLL_LOCAL
  static constexpr unsigned getNumParams() { return 7; }
  __SYCL_DLL_LOCAL
  static constexpr const kernel_param_desc_t& getParamDesc(unsigned i) {
    return kernel_signatures[i+21];
  }
  __SYCL_DLL_LOCAL
  static constexpr bool isESIMD() { return 0; }
  __SYCL_DLL_LOCAL
  static constexpr const char* getFileName() {
#ifndef NDEBUG
    return "TaskKernelGenericSycl.hpp";
#else
    return "";
#endif
  }
  __SYCL_DLL_LOCAL
  static constexpr const char* getFunctionName() {
#ifndef NDEBUG
    return "alpaka::class (lambda)";
#else
    return "";
#endif
  }
  __SYCL_DLL_LOCAL
  static constexpr unsigned getLineNumber() {
#ifndef NDEBUG
    return 154;
#else
    return 0;
#endif
  }
  __SYCL_DLL_LOCAL
  static constexpr unsigned getColumnNumber() {
#ifndef NDEBUG
    return 17;
#else
    return 0;
#endif
  }
  // Returns the size of the kernel object in bytes.
  __SYCL_DLL_LOCAL
  static constexpr long long getKernelSize() { return 208; }
};
template <> struct KernelInfoData<'_', 'Z', 'T', 'S', 'Z', 'N', 'K', '6', 'a', 'l', 'p', 'a', 'k', 'a', '2', '1', 'T', 'a', 's', 'k', 'K', 'e', 'r', 'n', 'e', 'l', 'G', 'e', 'n', 'e', 'r', 'i', 'c', 'S', 'y', 'c', 'l', 'I', 'N', 'S', '_', '1', '5', 'A', 'c', 'c', 'C', 'p', 'u', 'S', 'y', 'c', 'l', 'I', 'n', 't', 'e', 'l', 'I', 'S', 't', '1', '7', 'i', 'n', 't', 'e', 'g', 'r', 'a', 'l', '_', 'c', 'o', 'n', 's', 't', 'a', 'n', 't', 'I', 'm', 'L', 'm', '1', 'E', 'E', 'j', 'E', 'E', 'S', '3', '_', 'j', 'N', '1', '5', 'a', 'l', 'p', 'a', 'k', 'a', '_', 'c', 'p', 'u', '_', 's', 'y', 'c', 'l', '1', '5', 'k', 'e', 'r', 'n', 'e', 'l', 'C', 'i', 'r', 'c', 'l', 'e', 'F', 'i', 't', 'I', 'L', 'i', '4', 'E', 'E', 'E', 'J', 'R', 'P', 'K', 'N', '3', 'c', 'm', 's', '1', '1', 'a', 'l', 'p', 'a', 'k', 'a', 't', 'o', 'o', 'l', 's', '1', '4', 'H', 'i', 's', 't', 'o', 'C', 'o', 'n', 't', 'a', 'i', 'n', 'e', 'r', 'I', 'j', 'L', 'j', '8', 'E', 'L', 'j', '2', '4', '5', '7', '6', 'E', 'L', 'j', '3', '2', 'E', 't', 'L', 'j', '1', 'E', 'E', 'E', 'i', 'R', 'f', 'P', 'd', 'P', 'f', 'S', 'G', '_', 'P', 'N', 'S', '5', '_', '4', 'R', 'f', 'i', 't', '1', '0', 'c', 'i', 'r', 'c', 'l', 'e', '_', 'f', 'i', 't', 'E', 'R', 'j', 'E', 'E', 'c', 'l', 'E', 'R', 'N', '4', 's', 'y', 'c', 'l', '3', '_', 'V', '1', '7', 'h', 'a', 'n', 'd', 'l', 'e', 'r', 'E', 'R', 'N', 'S', 'O', '_', '6', 'b', 'u', 'f', 'f', 'e', 'r', 'I', 'i', 'L', 'i', '1', 'E', 'N', 'S', 'O', '_', '6', 'd', 'e', 't', 'a', 'i', 'l', '1', '7', 'a', 'l', 'i', 'g', 'n', 'e', 'd', '_', 'a', 'l', 'l', 'o', 'c', 'a', 't', 'o', 'r', 'I', 'i', 'E', 'E', 'v', 'E', 'E', 'E', 'U', 'l', 'N', 'S', 'O', '_', '7', 'n', 'd', '_', 'i', 't', 'e', 'm', 'I', 'L', 'i', '1', 'E', 'E', 'E', 'E', '_'> {
  __SYCL_DLL_LOCAL
  static constexpr const char* getName() { return "_ZTSZNK6alpaka21TaskKernelGenericSyclINS_15AccCpuSyclIntelISt17integral_constantImLm1EEjEES3_jN15alpaka_cpu_sycl15kernelCircleFitILi4EEEJRPKN3cms11alpakatools14HistoContainerIjLj8ELj24576ELj32EtLj1EEEiRfPdPfSG_PNS5_4Rfit10circle_fitERjEEclERN4sycl3_V17handlerERNSO_6bufferIiLi1ENSO_6detail17aligned_allocatorIiEEvEEEUlNSO_7nd_itemILi1EEEE_"; }
  __SYCL_DLL_LOCAL
  static constexpr unsigned getNumParams() { return 7; }
  __SYCL_DLL_LOCAL
  static constexpr const kernel_param_desc_t& getParamDesc(unsigned i) {
    return kernel_signatures[i+28];
  }
  __SYCL_DLL_LOCAL
  static constexpr bool isESIMD() { return 0; }
  __SYCL_DLL_LOCAL
  static constexpr const char* getFileName() {
#ifndef NDEBUG
    return "TaskKernelGenericSycl.hpp";
#else
    return "";
#endif
  }
  __SYCL_DLL_LOCAL
  static constexpr const char* getFunctionName() {
#ifndef NDEBUG
    return "alpaka::class (lambda)";
#else
    return "";
#endif
  }
  __SYCL_DLL_LOCAL
  static constexpr unsigned getLineNumber() {
#ifndef NDEBUG
    return 154;
#else
    return 0;
#endif
  }
  __SYCL_DLL_LOCAL
  static constexpr unsigned getColumnNumber() {
#ifndef NDEBUG
    return 17;
#else
    return 0;
#endif
  }
  // Returns the size of the kernel object in bytes.
  __SYCL_DLL_LOCAL
  static constexpr long long getKernelSize() { return 208; }
};
template <> struct KernelInfoData<'_', 'Z', 'T', 'S', 'Z', 'N', 'K', '6', 'a', 'l', 'p', 'a', 'k', 'a', '2', '1', 'T', 'a', 's', 'k', 'K', 'e', 'r', 'n', 'e', 'l', 'G', 'e', 'n', 'e', 'r', 'i', 'c', 'S', 'y', 'c', 'l', 'I', 'N', 'S', '_', '1', '5', 'A', 'c', 'c', 'C', 'p', 'u', 'S', 'y', 'c', 'l', 'I', 'n', 't', 'e', 'l', 'I', 'S', 't', '1', '7', 'i', 'n', 't', 'e', 'g', 'r', 'a', 'l', '_', 'c', 'o', 'n', 's', 't', 'a', 'n', 't', 'I', 'm', 'L', 'm', '1', 'E', 'E', 'j', 'E', 'E', 'S', '3', '_', 'j', 'N', '1', '5', 'a', 'l', 'p', 'a', 'k', 'a', '_', 'c', 'p', 'u', '_', 's', 'y', 'c', 'l', '1', '3', 'k', 'e', 'r', 'n', 'e', 'l', 'L', 'i', 'n', 'e', 'F', 'i', 't', 'I', 'L', 'i', '4', 'E', 'E', 'E', 'J', 'R', 'P', 'K', 'N', '3', 'c', 'm', 's', '1', '1', 'a', 'l', 'p', 'a', 'k', 'a', 't', 'o', 'o', 'l', 's', '1', '4', 'H', 'i', 's', 't', 'o', 'C', 'o', 'n', 't', 'a', 'i', 'n', 'e', 'r', 'I', 'j', 'L', 'j', '8', 'E', 'L', 'j', '2', '4', '5', '7', '6', 'E', 'L', 'j', '3', '2', 'E', 't', 'L', 'j', '1', 'E', 'E', 'E', 'i', 'R', 'f', 'R', 'P', 'N', '1', '0', 'p', 'i', 'x', 'e', 'l', 'T', 'r', 'a', 'c', 'k', '9', 'T', 'r', 'a', 'c', 'k', 'S', 'o', 'A', 'T', 'I', 'L', 'i', '3', '2', '7', '6', '8', 'E', 'E', 'E', 'P', 'd', 'P', 'f', 'S', 'L', '_', 'P', 'N', 'S', '5', '_', '4', 'R', 'f', 'i', 't', '1', '0', 'c', 'i', 'r', 'c', 'l', 'e', '_', 'f', 'i', 't', 'E', 'R', 'j', 'E', 'E', 'c', 'l', 'E', 'R', 'N', '4', 's', 'y', 'c', 'l', '3', '_', 'V', '1', '7', 'h', 'a', 'n', 'd', 'l', 'e', 'r', 'E', 'R', 'N', 'S', 'T', '_', '6', 'b', 'u', 'f', 'f', 'e', 'r', 'I', 'i', 'L', 'i', '1', 'E', 'N', 'S', 'T', '_', '6', 'd', 'e', 't', 'a', 'i', 'l', '1', '7', 'a', 'l', 'i', 'g', 'n', 'e', 'd', '_', 'a', 'l', 'l', 'o', 'c', 'a', 't', 'o', 'r', 'I', 'i', 'E', 'E', 'v', 'E', 'E', 'E', 'U', 'l', 'N', 'S', 'T', '_', '7', 'n', 'd', '_', 'i', 't', 'e', 'm', 'I', 'L', 'i', '1', 'E', 'E', 'E', 'E', '_'> {
  __SYCL_DLL_LOCAL
  static constexpr const char* getName() { return "_ZTSZNK6alpaka21TaskKernelGenericSyclINS_15AccCpuSyclIntelISt17integral_constantImLm1EEjEES3_jN15alpaka_cpu_sycl13kernelLineFitILi4EEEJRPKN3cms11alpakatools14HistoContainerIjLj8ELj24576ELj32EtLj1EEEiRfRPN10pixelTrack9TrackSoATILi32768EEEPdPfSL_PNS5_4Rfit10circle_fitERjEEclERN4sycl3_V17handlerERNST_6bufferIiLi1ENST_6detail17aligned_allocatorIiEEvEEEUlNST_7nd_itemILi1EEEE_"; }
  __SYCL_DLL_LOCAL
  static constexpr unsigned getNumParams() { return 7; }
  __SYCL_DLL_LOCAL
  static constexpr const kernel_param_desc_t& getParamDesc(unsigned i) {
    return kernel_signatures[i+35];
  }
  __SYCL_DLL_LOCAL
  static constexpr bool isESIMD() { return 0; }
  __SYCL_DLL_LOCAL
  static constexpr const char* getFileName() {
#ifndef NDEBUG
    return "TaskKernelGenericSycl.hpp";
#else
    return "";
#endif
  }
  __SYCL_DLL_LOCAL
  static constexpr const char* getFunctionName() {
#ifndef NDEBUG
    return "alpaka::class (lambda)";
#else
    return "";
#endif
  }
  __SYCL_DLL_LOCAL
  static constexpr unsigned getLineNumber() {
#ifndef NDEBUG
    return 154;
#else
    return 0;
#endif
  }
  __SYCL_DLL_LOCAL
  static constexpr unsigned getColumnNumber() {
#ifndef NDEBUG
    return 17;
#else
    return 0;
#endif
  }
  // Returns the size of the kernel object in bytes.
  __SYCL_DLL_LOCAL
  static constexpr long long getKernelSize() { return 216; }
};
template <> struct KernelInfoData<'_', 'Z', 'T', 'S', 'Z', 'N', 'K', '6', 'a', 'l', 'p', 'a', 'k', 'a', '2', '1', 'T', 'a', 's', 'k', 'K', 'e', 'r', 'n', 'e', 'l', 'G', 'e', 'n', 'e', 'r', 'i', 'c', 'S', 'y', 'c', 'l', 'I', 'N', 'S', '_', '1', '5', 'A', 'c', 'c', 'C', 'p', 'u', 'S', 'y', 'c', 'l', 'I', 'n', 't', 'e', 'l', 'I', 'S', 't', '1', '7', 'i', 'n', 't', 'e', 'g', 'r', 'a', 'l', '_', 'c', 'o', 'n', 's', 't', 'a', 'n', 't', 'I', 'm', 'L', 'm', '1', 'E', 'E', 'j', 'E', 'E', 'S', '3', '_', 'j', 'N', '1', '5', 'a', 'l', 'p', 'a', 'k', 'a', '_', 'c', 'p', 'u', '_', 's', 'y', 'c', 'l', '1', '3', 'k', 'e', 'r', 'n', 'e', 'l', 'F', 'a', 's', 't', 'F', 'i', 't', 'I', 'L', 'i', '5', 'E', 'E', 'E', 'J', 'R', 'P', 'K', 'N', '3', 'c', 'm', 's', '1', '1', 'a', 'l', 'p', 'a', 'k', 'a', 't', 'o', 'o', 'l', 's', '1', '4', 'H', 'i', 's', 't', 'o', 'C', 'o', 'n', 't', 'a', 'i', 'n', 'e', 'r', 'I', 'j', 'L', 'j', '3', '2', '7', '6', '8', 'E', 'L', 'j', '1', '6', '3', '8', '4', '0', 'E', 'L', 'j', '3', '2', 'E', 't', 'L', 'j', '1', 'E', 'E', 'E', 'R', 'P', 'K', 'N', 'S', 'A', '_', 'I', 'j', 'L', 'j', '8', 'E', 'L', 'j', '2', '4', '5', '7', '6', 'E', 'L', 'j', '3', '2', 'E', 't', 'L', 'j', '1', 'E', 'E', 'E', 'i', 'R', 'P', 'K', '2', '3', 'T', 'r', 'a', 'c', 'k', 'i', 'n', 'g', 'R', 'e', 'c', 'H', 'i', 't', '2', 'D', 'S', 'o', 'A', 'V', 'i', 'e', 'w', 'P', 'd', 'P', 'f', 'S', 'N', '_', 'R', 'j', 'E', 'E', 'c', 'l', 'E', 'R', 'N', '4', 's', 'y', 'c', 'l', '3', '_', 'V', '1', '7', 'h', 'a', 'n', 'd', 'l', 'e', 'r', 'E', 'R', 'N', 'S', 'S', '_', '6', 'b', 'u', 'f', 'f', 'e', 'r', 'I', 'i', 'L', 'i', '1', 'E', 'N', 'S', 'S', '_', '6', 'd', 'e', 't', 'a', 'i', 'l', '1', '7', 'a', 'l', 'i', 'g', 'n', 'e', 'd', '_', 'a', 'l', 'l', 'o', 'c', 'a', 't', 'o', 'r', 'I', 'i', 'E', 'E', 'v', 'E', 'E', 'E', 'U', 'l', 'N', 'S', 'S', '_', '7', 'n', 'd', '_', 'i', 't', 'e', 'm', 'I', 'L', 'i', '1', 'E', 'E', 'E', 'E', '_'> {
  __SYCL_DLL_LOCAL
  static constexpr const char* getName() { return "_ZTSZNK6alpaka21TaskKernelGenericSyclINS_15AccCpuSyclIntelISt17integral_constantImLm1EEjEES3_jN15alpaka_cpu_sycl13kernelFastFitILi5EEEJRPKN3cms11alpakatools14HistoContainerIjLj32768ELj163840ELj32EtLj1EEERPKNSA_IjLj8ELj24576ELj32EtLj1EEEiRPK23TrackingRecHit2DSoAViewPdPfSN_RjEEclERN4sycl3_V17handlerERNSS_6bufferIiLi1ENSS_6detail17aligned_allocatorIiEEvEEEUlNSS_7nd_itemILi1EEEE_"; }
  __SYCL_DLL_LOCAL
  static constexpr unsigned getNumParams() { return 7; }
  __SYCL_DLL_LOCAL
  static constexpr const kernel_param_desc_t& getParamDesc(unsigned i) {
    return kernel_signatures[i+42];
  }
  __SYCL_DLL_LOCAL
  static constexpr bool isESIMD() { return 0; }
  __SYCL_DLL_LOCAL
  static constexpr const char* getFileName() {
#ifndef NDEBUG
    return "TaskKernelGenericSycl.hpp";
#else
    return "";
#endif
  }
  __SYCL_DLL_LOCAL
  static constexpr const char* getFunctionName() {
#ifndef NDEBUG
    return "alpaka::class (lambda)";
#else
    return "";
#endif
  }
  __SYCL_DLL_LOCAL
  static constexpr unsigned getLineNumber() {
#ifndef NDEBUG
    return 154;
#else
    return 0;
#endif
  }
  __SYCL_DLL_LOCAL
  static constexpr unsigned getColumnNumber() {
#ifndef NDEBUG
    return 17;
#else
    return 0;
#endif
  }
  // Returns the size of the kernel object in bytes.
  __SYCL_DLL_LOCAL
  static constexpr long long getKernelSize() { return 208; }
};
template <> struct KernelInfoData<'_', 'Z', 'T', 'S', 'Z', 'N', 'K', '6', 'a', 'l', 'p', 'a', 'k', 'a', '2', '1', 'T', 'a', 's', 'k', 'K', 'e', 'r', 'n', 'e', 'l', 'G', 'e', 'n', 'e', 'r', 'i', 'c', 'S', 'y', 'c', 'l', 'I', 'N', 'S', '_', '1', '5', 'A', 'c', 'c', 'C', 'p', 'u', 'S', 'y', 'c', 'l', 'I', 'n', 't', 'e', 'l', 'I', 'S', 't', '1', '7', 'i', 'n', 't', 'e', 'g', 'r', 'a', 'l', '_', 'c', 'o', 'n', 's', 't', 'a', 'n', 't', 'I', 'm', 'L', 'm', '1', 'E', 'E', 'j', 'E', 'E', 'S', '3', '_', 'j', 'N', '1', '5', 'a', 'l', 'p', 'a', 'k', 'a', '_', 'c', 'p', 'u', '_', 's', 'y', 'c', 'l', '1', '5', 'k', 'e', 'r', 'n', 'e', 'l', 'C', 'i', 'r', 'c', 'l', 'e', 'F', 'i', 't', 'I', 'L', 'i', '5', 'E', 'E', 'E', 'J', 'R', 'P', 'K', 'N', '3', 'c', 'm', 's', '1', '1', 'a', 'l', 'p', 'a', 'k', 'a', 't', 'o', 'o', 'l', 's', '1', '4', 'H', 'i', 's', 't', 'o', 'C', 'o', 'n', 't', 'a', 'i', 'n', 'e', 'r', 'I', 'j', 'L', 'j', '8', 'E', 'L', 'j', '2', '4', '5', '7', '6', 'E', 'L', 'j', '3', '2', 'E', 't', 'L', 'j', '1', 'E', 'E', 'E', 'i', 'R', 'f', 'P', 'd', 'P', 'f', 'S', 'G', '_', 'P', 'N', 'S', '5', '_', '4', 'R', 'f', 'i', 't', '1', '0', 'c', 'i', 'r', 'c', 'l', 'e', '_', 'f', 'i', 't', 'E', 'R', 'j', 'E', 'E', 'c', 'l', 'E', 'R', 'N', '4', 's', 'y', 'c', 'l', '3', '_', 'V', '1', '7', 'h', 'a', 'n', 'd', 'l', 'e', 'r', 'E', 'R', 'N', 'S', 'O', '_', '6', 'b', 'u', 'f', 'f', 'e', 'r', 'I', 'i', 'L', 'i', '1', 'E', 'N', 'S', 'O', '_', '6', 'd', 'e', 't', 'a', 'i', 'l', '1', '7', 'a', 'l', 'i', 'g', 'n', 'e', 'd', '_', 'a', 'l', 'l', 'o', 'c', 'a', 't', 'o', 'r', 'I', 'i', 'E', 'E', 'v', 'E', 'E', 'E', 'U', 'l', 'N', 'S', 'O', '_', '7', 'n', 'd', '_', 'i', 't', 'e', 'm', 'I', 'L', 'i', '1', 'E', 'E', 'E', 'E', '_'> {
  __SYCL_DLL_LOCAL
  static constexpr const char* getName() { return "_ZTSZNK6alpaka21TaskKernelGenericSyclINS_15AccCpuSyclIntelISt17integral_constantImLm1EEjEES3_jN15alpaka_cpu_sycl15kernelCircleFitILi5EEEJRPKN3cms11alpakatools14HistoContainerIjLj8ELj24576ELj32EtLj1EEEiRfPdPfSG_PNS5_4Rfit10circle_fitERjEEclERN4sycl3_V17handlerERNSO_6bufferIiLi1ENSO_6detail17aligned_allocatorIiEEvEEEUlNSO_7nd_itemILi1EEEE_"; }
  __SYCL_DLL_LOCAL
  static constexpr unsigned getNumParams() { return 7; }
  __SYCL_DLL_LOCAL
  static constexpr const kernel_param_desc_t& getParamDesc(unsigned i) {
    return kernel_signatures[i+49];
  }
  __SYCL_DLL_LOCAL
  static constexpr bool isESIMD() { return 0; }
  __SYCL_DLL_LOCAL
  static constexpr const char* getFileName() {
#ifndef NDEBUG
    return "TaskKernelGenericSycl.hpp";
#else
    return "";
#endif
  }
  __SYCL_DLL_LOCAL
  static constexpr const char* getFunctionName() {
#ifndef NDEBUG
    return "alpaka::class (lambda)";
#else
    return "";
#endif
  }
  __SYCL_DLL_LOCAL
  static constexpr unsigned getLineNumber() {
#ifndef NDEBUG
    return 154;
#else
    return 0;
#endif
  }
  __SYCL_DLL_LOCAL
  static constexpr unsigned getColumnNumber() {
#ifndef NDEBUG
    return 17;
#else
    return 0;
#endif
  }
  // Returns the size of the kernel object in bytes.
  __SYCL_DLL_LOCAL
  static constexpr long long getKernelSize() { return 208; }
};
template <> struct KernelInfoData<'_', 'Z', 'T', 'S', 'Z', 'N', 'K', '6', 'a', 'l', 'p', 'a', 'k', 'a', '2', '1', 'T', 'a', 's', 'k', 'K', 'e', 'r', 'n', 'e', 'l', 'G', 'e', 'n', 'e', 'r', 'i', 'c', 'S', 'y', 'c', 'l', 'I', 'N', 'S', '_', '1', '5', 'A', 'c', 'c', 'C', 'p', 'u', 'S', 'y', 'c', 'l', 'I', 'n', 't', 'e', 'l', 'I', 'S', 't', '1', '7', 'i', 'n', 't', 'e', 'g', 'r', 'a', 'l', '_', 'c', 'o', 'n', 's', 't', 'a', 'n', 't', 'I', 'm', 'L', 'm', '1', 'E', 'E', 'j', 'E', 'E', 'S', '3', '_', 'j', 'N', '1', '5', 'a', 'l', 'p', 'a', 'k', 'a', '_', 'c', 'p', 'u', '_', 's', 'y', 'c', 'l', '1', '3', 'k', 'e', 'r', 'n', 'e', 'l', 'L', 'i', 'n', 'e', 'F', 'i', 't', 'I', 'L', 'i', '5', 'E', 'E', 'E', 'J', 'R', 'P', 'K', 'N', '3', 'c', 'm', 's', '1', '1', 'a', 'l', 'p', 'a', 'k', 'a', 't', 'o', 'o', 'l', 's', '1', '4', 'H', 'i', 's', 't', 'o', 'C', 'o', 'n', 't', 'a', 'i', 'n', 'e', 'r', 'I', 'j', 'L', 'j', '8', 'E', 'L', 'j', '2', '4', '5', '7', '6', 'E', 'L', 'j', '3', '2', 'E', 't', 'L', 'j', '1', 'E', 'E', 'E', 'i', 'R', 'f', 'R', 'P', 'N', '1', '0', 'p', 'i', 'x', 'e', 'l', 'T', 'r', 'a', 'c', 'k', '9', 'T', 'r', 'a', 'c', 'k', 'S', 'o', 'A', 'T', 'I', 'L', 'i', '3', '2', '7', '6', '8', 'E', 'E', 'E', 'P', 'd', 'P', 'f', 'S', 'L', '_', 'P', 'N', 'S', '5', '_', '4', 'R', 'f', 'i', 't', '1', '0', 'c', 'i', 'r', 'c', 'l', 'e', '_', 'f', 'i', 't', 'E', 'R', 'j', 'E', 'E', 'c', 'l', 'E', 'R', 'N', '4', 's', 'y', 'c', 'l', '3', '_', 'V', '1', '7', 'h', 'a', 'n', 'd', 'l', 'e', 'r', 'E', 'R', 'N', 'S', 'T', '_', '6', 'b', 'u', 'f', 'f', 'e', 'r', 'I', 'i', 'L', 'i', '1', 'E', 'N', 'S', 'T', '_', '6', 'd', 'e', 't', 'a', 'i', 'l', '1', '7', 'a', 'l', 'i', 'g', 'n', 'e', 'd', '_', 'a', 'l', 'l', 'o', 'c', 'a', 't', 'o', 'r', 'I', 'i', 'E', 'E', 'v', 'E', 'E', 'E', 'U', 'l', 'N', 'S', 'T', '_', '7', 'n', 'd', '_', 'i', 't', 'e', 'm', 'I', 'L', 'i', '1', 'E', 'E', 'E', 'E', '_'> {
  __SYCL_DLL_LOCAL
  static constexpr const char* getName() { return "_ZTSZNK6alpaka21TaskKernelGenericSyclINS_15AccCpuSyclIntelISt17integral_constantImLm1EEjEES3_jN15alpaka_cpu_sycl13kernelLineFitILi5EEEJRPKN3cms11alpakatools14HistoContainerIjLj8ELj24576ELj32EtLj1EEEiRfRPN10pixelTrack9TrackSoATILi32768EEEPdPfSL_PNS5_4Rfit10circle_fitERjEEclERN4sycl3_V17handlerERNST_6bufferIiLi1ENST_6detail17aligned_allocatorIiEEvEEEUlNST_7nd_itemILi1EEEE_"; }
  __SYCL_DLL_LOCAL
  static constexpr unsigned getNumParams() { return 7; }
  __SYCL_DLL_LOCAL
  static constexpr const kernel_param_desc_t& getParamDesc(unsigned i) {
    return kernel_signatures[i+56];
  }
  __SYCL_DLL_LOCAL
  static constexpr bool isESIMD() { return 0; }
  __SYCL_DLL_LOCAL
  static constexpr const char* getFileName() {
#ifndef NDEBUG
    return "TaskKernelGenericSycl.hpp";
#else
    return "";
#endif
  }
  __SYCL_DLL_LOCAL
  static constexpr const char* getFunctionName() {
#ifndef NDEBUG
    return "alpaka::class (lambda)";
#else
    return "";
#endif
  }
  __SYCL_DLL_LOCAL
  static constexpr unsigned getLineNumber() {
#ifndef NDEBUG
    return 154;
#else
    return 0;
#endif
  }
  __SYCL_DLL_LOCAL
  static constexpr unsigned getColumnNumber() {
#ifndef NDEBUG
    return 17;
#else
    return 0;
#endif
  }
  // Returns the size of the kernel object in bytes.
  __SYCL_DLL_LOCAL
  static constexpr long long getKernelSize() { return 216; }
};

} // namespace detail
} // __SYCL_INLINE_VER_NAMESPACE(_V1)
} // namespace sycl

