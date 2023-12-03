# This file allows users to call find_package(Flang) and pick up our targets.

# Compute the installation prefix from this LLVMConfig.cmake file location.
get_filename_component(FLANG_INSTALL_PREFIX "${CMAKE_CURRENT_LIST_FILE}" PATH)
get_filename_component(FLANG_INSTALL_PREFIX "${FLANG_INSTALL_PREFIX}" PATH)
get_filename_component(FLANG_INSTALL_PREFIX "${FLANG_INSTALL_PREFIX}" PATH)
get_filename_component(FLANG_INSTALL_PREFIX "${FLANG_INSTALL_PREFIX}" PATH)

set(LLVM_VERSION 17.0.6)
find_package(LLVM ${LLVM_VERSION} EXACT REQUIRED CONFIG
             HINTS "${FLANG_INSTALL_PREFIX}/lib/cmake/llvm")

set(FLANG_EXPORTED_TARGETS "FortranCommon;FortranEvaluate;FortranDecimal;FortranLower;FortranParser;FortranSemantics;flangFrontend;flangFrontendTool;FIRBuilder;FIRCodeGen;FIRDialectSupport;FIRDialect;HLFIRDialect;HLFIRTransforms;FIRSupport;FIRTransforms;FIRAnalysis")
set(FLANG_CMAKE_DIR "${FLANG_INSTALL_PREFIX}/lib/cmake/flang")
set(FLANG_INCLUDE_DIRS "${FLANG_INSTALL_PREFIX}/include")

# Provide all our library targets to users.
include("${FLANG_CMAKE_DIR}/FlangTargets.cmake")
