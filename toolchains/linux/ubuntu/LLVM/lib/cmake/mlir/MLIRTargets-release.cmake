#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "mlir-tblgen" for configuration "Release"
set_property(TARGET mlir-tblgen APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(mlir-tblgen PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/mlir-tblgen"
  )

list(APPEND _cmake_import_check_targets mlir-tblgen )
list(APPEND _cmake_import_check_files_for_mlir-tblgen "${_IMPORT_PREFIX}/bin/mlir-tblgen" )

# Import target "mlir-pdll" for configuration "Release"
set_property(TARGET mlir-pdll APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(mlir-pdll PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/mlir-pdll"
  )

list(APPEND _cmake_import_check_targets mlir-pdll )
list(APPEND _cmake_import_check_files_for_mlir-pdll "${_IMPORT_PREFIX}/bin/mlir-pdll" )

# Import target "MLIRPresburger" for configuration "Release"
set_property(TARGET MLIRPresburger APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRPresburger PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRPresburger.a"
  )

list(APPEND _cmake_import_check_targets MLIRPresburger )
list(APPEND _cmake_import_check_files_for_MLIRPresburger "${_IMPORT_PREFIX}/lib/libMLIRPresburger.a" )

# Import target "MLIRAnalysis" for configuration "Release"
set_property(TARGET MLIRAnalysis APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRAnalysis PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRAnalysis.a"
  )

list(APPEND _cmake_import_check_targets MLIRAnalysis )
list(APPEND _cmake_import_check_files_for_MLIRAnalysis "${_IMPORT_PREFIX}/lib/libMLIRAnalysis.a" )

# Import target "MLIRAsmParser" for configuration "Release"
set_property(TARGET MLIRAsmParser APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRAsmParser PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRAsmParser.a"
  )

list(APPEND _cmake_import_check_targets MLIRAsmParser )
list(APPEND _cmake_import_check_files_for_MLIRAsmParser "${_IMPORT_PREFIX}/lib/libMLIRAsmParser.a" )

# Import target "MLIRBytecodeReader" for configuration "Release"
set_property(TARGET MLIRBytecodeReader APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRBytecodeReader PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRBytecodeReader.a"
  )

list(APPEND _cmake_import_check_targets MLIRBytecodeReader )
list(APPEND _cmake_import_check_files_for_MLIRBytecodeReader "${_IMPORT_PREFIX}/lib/libMLIRBytecodeReader.a" )

# Import target "MLIRBytecodeWriter" for configuration "Release"
set_property(TARGET MLIRBytecodeWriter APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRBytecodeWriter PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRBytecodeWriter.a"
  )

list(APPEND _cmake_import_check_targets MLIRBytecodeWriter )
list(APPEND _cmake_import_check_files_for_MLIRBytecodeWriter "${_IMPORT_PREFIX}/lib/libMLIRBytecodeWriter.a" )

# Import target "MLIRBytecodeOpInterface" for configuration "Release"
set_property(TARGET MLIRBytecodeOpInterface APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRBytecodeOpInterface PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRBytecodeOpInterface.a"
  )

list(APPEND _cmake_import_check_targets MLIRBytecodeOpInterface )
list(APPEND _cmake_import_check_files_for_MLIRBytecodeOpInterface "${_IMPORT_PREFIX}/lib/libMLIRBytecodeOpInterface.a" )

# Import target "MLIRAffineToStandard" for configuration "Release"
set_property(TARGET MLIRAffineToStandard APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRAffineToStandard PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRAffineToStandard.a"
  )

list(APPEND _cmake_import_check_targets MLIRAffineToStandard )
list(APPEND _cmake_import_check_files_for_MLIRAffineToStandard "${_IMPORT_PREFIX}/lib/libMLIRAffineToStandard.a" )

# Import target "MLIRAMDGPUToROCDL" for configuration "Release"
set_property(TARGET MLIRAMDGPUToROCDL APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRAMDGPUToROCDL PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRAMDGPUToROCDL.a"
  )

list(APPEND _cmake_import_check_targets MLIRAMDGPUToROCDL )
list(APPEND _cmake_import_check_files_for_MLIRAMDGPUToROCDL "${_IMPORT_PREFIX}/lib/libMLIRAMDGPUToROCDL.a" )

# Import target "MLIRArithAttrToLLVMConversion" for configuration "Release"
set_property(TARGET MLIRArithAttrToLLVMConversion APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRArithAttrToLLVMConversion PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRArithAttrToLLVMConversion.a"
  )

list(APPEND _cmake_import_check_targets MLIRArithAttrToLLVMConversion )
list(APPEND _cmake_import_check_files_for_MLIRArithAttrToLLVMConversion "${_IMPORT_PREFIX}/lib/libMLIRArithAttrToLLVMConversion.a" )

# Import target "MLIRArithToLLVM" for configuration "Release"
set_property(TARGET MLIRArithToLLVM APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRArithToLLVM PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRArithToLLVM.a"
  )

list(APPEND _cmake_import_check_targets MLIRArithToLLVM )
list(APPEND _cmake_import_check_files_for_MLIRArithToLLVM "${_IMPORT_PREFIX}/lib/libMLIRArithToLLVM.a" )

# Import target "MLIRArithToSPIRV" for configuration "Release"
set_property(TARGET MLIRArithToSPIRV APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRArithToSPIRV PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRArithToSPIRV.a"
  )

list(APPEND _cmake_import_check_targets MLIRArithToSPIRV )
list(APPEND _cmake_import_check_files_for_MLIRArithToSPIRV "${_IMPORT_PREFIX}/lib/libMLIRArithToSPIRV.a" )

# Import target "MLIRArmNeon2dToIntr" for configuration "Release"
set_property(TARGET MLIRArmNeon2dToIntr APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRArmNeon2dToIntr PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRArmNeon2dToIntr.a"
  )

list(APPEND _cmake_import_check_targets MLIRArmNeon2dToIntr )
list(APPEND _cmake_import_check_files_for_MLIRArmNeon2dToIntr "${_IMPORT_PREFIX}/lib/libMLIRArmNeon2dToIntr.a" )

# Import target "MLIRAsyncToLLVM" for configuration "Release"
set_property(TARGET MLIRAsyncToLLVM APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRAsyncToLLVM PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRAsyncToLLVM.a"
  )

list(APPEND _cmake_import_check_targets MLIRAsyncToLLVM )
list(APPEND _cmake_import_check_files_for_MLIRAsyncToLLVM "${_IMPORT_PREFIX}/lib/libMLIRAsyncToLLVM.a" )

# Import target "MLIRBufferizationToMemRef" for configuration "Release"
set_property(TARGET MLIRBufferizationToMemRef APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRBufferizationToMemRef PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRBufferizationToMemRef.a"
  )

list(APPEND _cmake_import_check_targets MLIRBufferizationToMemRef )
list(APPEND _cmake_import_check_files_for_MLIRBufferizationToMemRef "${_IMPORT_PREFIX}/lib/libMLIRBufferizationToMemRef.a" )

# Import target "MLIRComplexToLibm" for configuration "Release"
set_property(TARGET MLIRComplexToLibm APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRComplexToLibm PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRComplexToLibm.a"
  )

list(APPEND _cmake_import_check_targets MLIRComplexToLibm )
list(APPEND _cmake_import_check_files_for_MLIRComplexToLibm "${_IMPORT_PREFIX}/lib/libMLIRComplexToLibm.a" )

# Import target "MLIRComplexToLLVM" for configuration "Release"
set_property(TARGET MLIRComplexToLLVM APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRComplexToLLVM PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRComplexToLLVM.a"
  )

list(APPEND _cmake_import_check_targets MLIRComplexToLLVM )
list(APPEND _cmake_import_check_files_for_MLIRComplexToLLVM "${_IMPORT_PREFIX}/lib/libMLIRComplexToLLVM.a" )

# Import target "MLIRComplexToSPIRV" for configuration "Release"
set_property(TARGET MLIRComplexToSPIRV APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRComplexToSPIRV PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRComplexToSPIRV.a"
  )

list(APPEND _cmake_import_check_targets MLIRComplexToSPIRV )
list(APPEND _cmake_import_check_files_for_MLIRComplexToSPIRV "${_IMPORT_PREFIX}/lib/libMLIRComplexToSPIRV.a" )

# Import target "MLIRComplexToStandard" for configuration "Release"
set_property(TARGET MLIRComplexToStandard APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRComplexToStandard PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRComplexToStandard.a"
  )

list(APPEND _cmake_import_check_targets MLIRComplexToStandard )
list(APPEND _cmake_import_check_files_for_MLIRComplexToStandard "${_IMPORT_PREFIX}/lib/libMLIRComplexToStandard.a" )

# Import target "MLIRControlFlowToLLVM" for configuration "Release"
set_property(TARGET MLIRControlFlowToLLVM APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRControlFlowToLLVM PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRControlFlowToLLVM.a"
  )

list(APPEND _cmake_import_check_targets MLIRControlFlowToLLVM )
list(APPEND _cmake_import_check_files_for_MLIRControlFlowToLLVM "${_IMPORT_PREFIX}/lib/libMLIRControlFlowToLLVM.a" )

# Import target "MLIRControlFlowToSPIRV" for configuration "Release"
set_property(TARGET MLIRControlFlowToSPIRV APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRControlFlowToSPIRV PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRControlFlowToSPIRV.a"
  )

list(APPEND _cmake_import_check_targets MLIRControlFlowToSPIRV )
list(APPEND _cmake_import_check_files_for_MLIRControlFlowToSPIRV "${_IMPORT_PREFIX}/lib/libMLIRControlFlowToSPIRV.a" )

# Import target "MLIRFuncToLLVM" for configuration "Release"
set_property(TARGET MLIRFuncToLLVM APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRFuncToLLVM PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRFuncToLLVM.a"
  )

list(APPEND _cmake_import_check_targets MLIRFuncToLLVM )
list(APPEND _cmake_import_check_files_for_MLIRFuncToLLVM "${_IMPORT_PREFIX}/lib/libMLIRFuncToLLVM.a" )

# Import target "MLIRFuncToSPIRV" for configuration "Release"
set_property(TARGET MLIRFuncToSPIRV APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRFuncToSPIRV PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRFuncToSPIRV.a"
  )

list(APPEND _cmake_import_check_targets MLIRFuncToSPIRV )
list(APPEND _cmake_import_check_files_for_MLIRFuncToSPIRV "${_IMPORT_PREFIX}/lib/libMLIRFuncToSPIRV.a" )

# Import target "MLIRGPUToGPURuntimeTransforms" for configuration "Release"
set_property(TARGET MLIRGPUToGPURuntimeTransforms APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRGPUToGPURuntimeTransforms PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRGPUToGPURuntimeTransforms.a"
  )

list(APPEND _cmake_import_check_targets MLIRGPUToGPURuntimeTransforms )
list(APPEND _cmake_import_check_files_for_MLIRGPUToGPURuntimeTransforms "${_IMPORT_PREFIX}/lib/libMLIRGPUToGPURuntimeTransforms.a" )

# Import target "MLIRGPUToNVVMTransforms" for configuration "Release"
set_property(TARGET MLIRGPUToNVVMTransforms APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRGPUToNVVMTransforms PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRGPUToNVVMTransforms.a"
  )

list(APPEND _cmake_import_check_targets MLIRGPUToNVVMTransforms )
list(APPEND _cmake_import_check_files_for_MLIRGPUToNVVMTransforms "${_IMPORT_PREFIX}/lib/libMLIRGPUToNVVMTransforms.a" )

# Import target "MLIRGPUToROCDLTransforms" for configuration "Release"
set_property(TARGET MLIRGPUToROCDLTransforms APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRGPUToROCDLTransforms PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRGPUToROCDLTransforms.a"
  )

list(APPEND _cmake_import_check_targets MLIRGPUToROCDLTransforms )
list(APPEND _cmake_import_check_files_for_MLIRGPUToROCDLTransforms "${_IMPORT_PREFIX}/lib/libMLIRGPUToROCDLTransforms.a" )

# Import target "MLIRGPUToSPIRV" for configuration "Release"
set_property(TARGET MLIRGPUToSPIRV APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRGPUToSPIRV PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRGPUToSPIRV.a"
  )

list(APPEND _cmake_import_check_targets MLIRGPUToSPIRV )
list(APPEND _cmake_import_check_files_for_MLIRGPUToSPIRV "${_IMPORT_PREFIX}/lib/libMLIRGPUToSPIRV.a" )

# Import target "MLIRGPUToVulkanTransforms" for configuration "Release"
set_property(TARGET MLIRGPUToVulkanTransforms APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRGPUToVulkanTransforms PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRGPUToVulkanTransforms.a"
  )

list(APPEND _cmake_import_check_targets MLIRGPUToVulkanTransforms )
list(APPEND _cmake_import_check_files_for_MLIRGPUToVulkanTransforms "${_IMPORT_PREFIX}/lib/libMLIRGPUToVulkanTransforms.a" )

# Import target "MLIRIndexToLLVM" for configuration "Release"
set_property(TARGET MLIRIndexToLLVM APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRIndexToLLVM PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRIndexToLLVM.a"
  )

list(APPEND _cmake_import_check_targets MLIRIndexToLLVM )
list(APPEND _cmake_import_check_files_for_MLIRIndexToLLVM "${_IMPORT_PREFIX}/lib/libMLIRIndexToLLVM.a" )

# Import target "MLIRLinalgToLLVM" for configuration "Release"
set_property(TARGET MLIRLinalgToLLVM APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRLinalgToLLVM PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRLinalgToLLVM.a"
  )

list(APPEND _cmake_import_check_targets MLIRLinalgToLLVM )
list(APPEND _cmake_import_check_files_for_MLIRLinalgToLLVM "${_IMPORT_PREFIX}/lib/libMLIRLinalgToLLVM.a" )

# Import target "MLIRLinalgToStandard" for configuration "Release"
set_property(TARGET MLIRLinalgToStandard APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRLinalgToStandard PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRLinalgToStandard.a"
  )

list(APPEND _cmake_import_check_targets MLIRLinalgToStandard )
list(APPEND _cmake_import_check_files_for_MLIRLinalgToStandard "${_IMPORT_PREFIX}/lib/libMLIRLinalgToStandard.a" )

# Import target "MLIRLLVMCommonConversion" for configuration "Release"
set_property(TARGET MLIRLLVMCommonConversion APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRLLVMCommonConversion PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRLLVMCommonConversion.a"
  )

list(APPEND _cmake_import_check_targets MLIRLLVMCommonConversion )
list(APPEND _cmake_import_check_files_for_MLIRLLVMCommonConversion "${_IMPORT_PREFIX}/lib/libMLIRLLVMCommonConversion.a" )

# Import target "MLIRMathToFuncs" for configuration "Release"
set_property(TARGET MLIRMathToFuncs APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRMathToFuncs PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRMathToFuncs.a"
  )

list(APPEND _cmake_import_check_targets MLIRMathToFuncs )
list(APPEND _cmake_import_check_files_for_MLIRMathToFuncs "${_IMPORT_PREFIX}/lib/libMLIRMathToFuncs.a" )

# Import target "MLIRMathToLibm" for configuration "Release"
set_property(TARGET MLIRMathToLibm APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRMathToLibm PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRMathToLibm.a"
  )

list(APPEND _cmake_import_check_targets MLIRMathToLibm )
list(APPEND _cmake_import_check_files_for_MLIRMathToLibm "${_IMPORT_PREFIX}/lib/libMLIRMathToLibm.a" )

# Import target "MLIRMathToLLVM" for configuration "Release"
set_property(TARGET MLIRMathToLLVM APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRMathToLLVM PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRMathToLLVM.a"
  )

list(APPEND _cmake_import_check_targets MLIRMathToLLVM )
list(APPEND _cmake_import_check_files_for_MLIRMathToLLVM "${_IMPORT_PREFIX}/lib/libMLIRMathToLLVM.a" )

# Import target "MLIRMathToSPIRV" for configuration "Release"
set_property(TARGET MLIRMathToSPIRV APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRMathToSPIRV PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRMathToSPIRV.a"
  )

list(APPEND _cmake_import_check_targets MLIRMathToSPIRV )
list(APPEND _cmake_import_check_files_for_MLIRMathToSPIRV "${_IMPORT_PREFIX}/lib/libMLIRMathToSPIRV.a" )

# Import target "MLIRMemRefToLLVM" for configuration "Release"
set_property(TARGET MLIRMemRefToLLVM APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRMemRefToLLVM PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRMemRefToLLVM.a"
  )

list(APPEND _cmake_import_check_targets MLIRMemRefToLLVM )
list(APPEND _cmake_import_check_files_for_MLIRMemRefToLLVM "${_IMPORT_PREFIX}/lib/libMLIRMemRefToLLVM.a" )

# Import target "MLIRMemRefToSPIRV" for configuration "Release"
set_property(TARGET MLIRMemRefToSPIRV APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRMemRefToSPIRV PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRMemRefToSPIRV.a"
  )

list(APPEND _cmake_import_check_targets MLIRMemRefToSPIRV )
list(APPEND _cmake_import_check_files_for_MLIRMemRefToSPIRV "${_IMPORT_PREFIX}/lib/libMLIRMemRefToSPIRV.a" )

# Import target "MLIRNVGPUToNVVM" for configuration "Release"
set_property(TARGET MLIRNVGPUToNVVM APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRNVGPUToNVVM PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRNVGPUToNVVM.a"
  )

list(APPEND _cmake_import_check_targets MLIRNVGPUToNVVM )
list(APPEND _cmake_import_check_files_for_MLIRNVGPUToNVVM "${_IMPORT_PREFIX}/lib/libMLIRNVGPUToNVVM.a" )

# Import target "MLIRNVVMToLLVM" for configuration "Release"
set_property(TARGET MLIRNVVMToLLVM APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRNVVMToLLVM PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRNVVMToLLVM.a"
  )

list(APPEND _cmake_import_check_targets MLIRNVVMToLLVM )
list(APPEND _cmake_import_check_files_for_MLIRNVVMToLLVM "${_IMPORT_PREFIX}/lib/libMLIRNVVMToLLVM.a" )

# Import target "MLIROpenACCToSCF" for configuration "Release"
set_property(TARGET MLIROpenACCToSCF APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIROpenACCToSCF PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIROpenACCToSCF.a"
  )

list(APPEND _cmake_import_check_targets MLIROpenACCToSCF )
list(APPEND _cmake_import_check_files_for_MLIROpenACCToSCF "${_IMPORT_PREFIX}/lib/libMLIROpenACCToSCF.a" )

# Import target "MLIROpenMPToLLVM" for configuration "Release"
set_property(TARGET MLIROpenMPToLLVM APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIROpenMPToLLVM PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIROpenMPToLLVM.a"
  )

list(APPEND _cmake_import_check_targets MLIROpenMPToLLVM )
list(APPEND _cmake_import_check_files_for_MLIROpenMPToLLVM "${_IMPORT_PREFIX}/lib/libMLIROpenMPToLLVM.a" )

# Import target "MLIRPDLToPDLInterp" for configuration "Release"
set_property(TARGET MLIRPDLToPDLInterp APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRPDLToPDLInterp PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRPDLToPDLInterp.a"
  )

list(APPEND _cmake_import_check_targets MLIRPDLToPDLInterp )
list(APPEND _cmake_import_check_files_for_MLIRPDLToPDLInterp "${_IMPORT_PREFIX}/lib/libMLIRPDLToPDLInterp.a" )

# Import target "MLIRReconcileUnrealizedCasts" for configuration "Release"
set_property(TARGET MLIRReconcileUnrealizedCasts APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRReconcileUnrealizedCasts PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRReconcileUnrealizedCasts.a"
  )

list(APPEND _cmake_import_check_targets MLIRReconcileUnrealizedCasts )
list(APPEND _cmake_import_check_files_for_MLIRReconcileUnrealizedCasts "${_IMPORT_PREFIX}/lib/libMLIRReconcileUnrealizedCasts.a" )

# Import target "MLIRSCFToControlFlow" for configuration "Release"
set_property(TARGET MLIRSCFToControlFlow APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRSCFToControlFlow PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRSCFToControlFlow.a"
  )

list(APPEND _cmake_import_check_targets MLIRSCFToControlFlow )
list(APPEND _cmake_import_check_files_for_MLIRSCFToControlFlow "${_IMPORT_PREFIX}/lib/libMLIRSCFToControlFlow.a" )

# Import target "MLIRSCFToGPU" for configuration "Release"
set_property(TARGET MLIRSCFToGPU APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRSCFToGPU PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRSCFToGPU.a"
  )

list(APPEND _cmake_import_check_targets MLIRSCFToGPU )
list(APPEND _cmake_import_check_files_for_MLIRSCFToGPU "${_IMPORT_PREFIX}/lib/libMLIRSCFToGPU.a" )

# Import target "MLIRSCFToOpenMP" for configuration "Release"
set_property(TARGET MLIRSCFToOpenMP APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRSCFToOpenMP PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRSCFToOpenMP.a"
  )

list(APPEND _cmake_import_check_targets MLIRSCFToOpenMP )
list(APPEND _cmake_import_check_files_for_MLIRSCFToOpenMP "${_IMPORT_PREFIX}/lib/libMLIRSCFToOpenMP.a" )

# Import target "MLIRSCFToSPIRV" for configuration "Release"
set_property(TARGET MLIRSCFToSPIRV APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRSCFToSPIRV PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRSCFToSPIRV.a"
  )

list(APPEND _cmake_import_check_targets MLIRSCFToSPIRV )
list(APPEND _cmake_import_check_files_for_MLIRSCFToSPIRV "${_IMPORT_PREFIX}/lib/libMLIRSCFToSPIRV.a" )

# Import target "MLIRShapeToStandard" for configuration "Release"
set_property(TARGET MLIRShapeToStandard APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRShapeToStandard PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRShapeToStandard.a"
  )

list(APPEND _cmake_import_check_targets MLIRShapeToStandard )
list(APPEND _cmake_import_check_files_for_MLIRShapeToStandard "${_IMPORT_PREFIX}/lib/libMLIRShapeToStandard.a" )

# Import target "MLIRSPIRVToLLVM" for configuration "Release"
set_property(TARGET MLIRSPIRVToLLVM APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRSPIRVToLLVM PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRSPIRVToLLVM.a"
  )

list(APPEND _cmake_import_check_targets MLIRSPIRVToLLVM )
list(APPEND _cmake_import_check_files_for_MLIRSPIRVToLLVM "${_IMPORT_PREFIX}/lib/libMLIRSPIRVToLLVM.a" )

# Import target "MLIRTensorToLinalg" for configuration "Release"
set_property(TARGET MLIRTensorToLinalg APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRTensorToLinalg PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRTensorToLinalg.a"
  )

list(APPEND _cmake_import_check_targets MLIRTensorToLinalg )
list(APPEND _cmake_import_check_files_for_MLIRTensorToLinalg "${_IMPORT_PREFIX}/lib/libMLIRTensorToLinalg.a" )

# Import target "MLIRTensorToSPIRV" for configuration "Release"
set_property(TARGET MLIRTensorToSPIRV APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRTensorToSPIRV PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRTensorToSPIRV.a"
  )

list(APPEND _cmake_import_check_targets MLIRTensorToSPIRV )
list(APPEND _cmake_import_check_files_for_MLIRTensorToSPIRV "${_IMPORT_PREFIX}/lib/libMLIRTensorToSPIRV.a" )

# Import target "MLIRTosaToArith" for configuration "Release"
set_property(TARGET MLIRTosaToArith APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRTosaToArith PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRTosaToArith.a"
  )

list(APPEND _cmake_import_check_targets MLIRTosaToArith )
list(APPEND _cmake_import_check_files_for_MLIRTosaToArith "${_IMPORT_PREFIX}/lib/libMLIRTosaToArith.a" )

# Import target "MLIRTosaToLinalg" for configuration "Release"
set_property(TARGET MLIRTosaToLinalg APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRTosaToLinalg PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRTosaToLinalg.a"
  )

list(APPEND _cmake_import_check_targets MLIRTosaToLinalg )
list(APPEND _cmake_import_check_files_for_MLIRTosaToLinalg "${_IMPORT_PREFIX}/lib/libMLIRTosaToLinalg.a" )

# Import target "MLIRTosaToSCF" for configuration "Release"
set_property(TARGET MLIRTosaToSCF APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRTosaToSCF PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRTosaToSCF.a"
  )

list(APPEND _cmake_import_check_targets MLIRTosaToSCF )
list(APPEND _cmake_import_check_files_for_MLIRTosaToSCF "${_IMPORT_PREFIX}/lib/libMLIRTosaToSCF.a" )

# Import target "MLIRTosaToTensor" for configuration "Release"
set_property(TARGET MLIRTosaToTensor APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRTosaToTensor PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRTosaToTensor.a"
  )

list(APPEND _cmake_import_check_targets MLIRTosaToTensor )
list(APPEND _cmake_import_check_files_for_MLIRTosaToTensor "${_IMPORT_PREFIX}/lib/libMLIRTosaToTensor.a" )

# Import target "MLIRUBToLLVM" for configuration "Release"
set_property(TARGET MLIRUBToLLVM APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRUBToLLVM PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRUBToLLVM.a"
  )

list(APPEND _cmake_import_check_targets MLIRUBToLLVM )
list(APPEND _cmake_import_check_files_for_MLIRUBToLLVM "${_IMPORT_PREFIX}/lib/libMLIRUBToLLVM.a" )

# Import target "MLIRUBToSPIRV" for configuration "Release"
set_property(TARGET MLIRUBToSPIRV APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRUBToSPIRV PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRUBToSPIRV.a"
  )

list(APPEND _cmake_import_check_targets MLIRUBToSPIRV )
list(APPEND _cmake_import_check_files_for_MLIRUBToSPIRV "${_IMPORT_PREFIX}/lib/libMLIRUBToSPIRV.a" )

# Import target "MLIRVectorToArmSME" for configuration "Release"
set_property(TARGET MLIRVectorToArmSME APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRVectorToArmSME PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRVectorToArmSME.a"
  )

list(APPEND _cmake_import_check_targets MLIRVectorToArmSME )
list(APPEND _cmake_import_check_files_for_MLIRVectorToArmSME "${_IMPORT_PREFIX}/lib/libMLIRVectorToArmSME.a" )

# Import target "MLIRVectorToGPU" for configuration "Release"
set_property(TARGET MLIRVectorToGPU APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRVectorToGPU PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRVectorToGPU.a"
  )

list(APPEND _cmake_import_check_targets MLIRVectorToGPU )
list(APPEND _cmake_import_check_files_for_MLIRVectorToGPU "${_IMPORT_PREFIX}/lib/libMLIRVectorToGPU.a" )

# Import target "MLIRVectorToLLVM" for configuration "Release"
set_property(TARGET MLIRVectorToLLVM APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRVectorToLLVM PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRVectorToLLVM.a"
  )

list(APPEND _cmake_import_check_targets MLIRVectorToLLVM )
list(APPEND _cmake_import_check_files_for_MLIRVectorToLLVM "${_IMPORT_PREFIX}/lib/libMLIRVectorToLLVM.a" )

# Import target "MLIRVectorToSCF" for configuration "Release"
set_property(TARGET MLIRVectorToSCF APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRVectorToSCF PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRVectorToSCF.a"
  )

list(APPEND _cmake_import_check_targets MLIRVectorToSCF )
list(APPEND _cmake_import_check_files_for_MLIRVectorToSCF "${_IMPORT_PREFIX}/lib/libMLIRVectorToSCF.a" )

# Import target "MLIRVectorToSPIRV" for configuration "Release"
set_property(TARGET MLIRVectorToSPIRV APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRVectorToSPIRV PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRVectorToSPIRV.a"
  )

list(APPEND _cmake_import_check_targets MLIRVectorToSPIRV )
list(APPEND _cmake_import_check_files_for_MLIRVectorToSPIRV "${_IMPORT_PREFIX}/lib/libMLIRVectorToSPIRV.a" )

# Import target "MLIRObservers" for configuration "Release"
set_property(TARGET MLIRObservers APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRObservers PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRObservers.a"
  )

list(APPEND _cmake_import_check_targets MLIRObservers )
list(APPEND _cmake_import_check_files_for_MLIRObservers "${_IMPORT_PREFIX}/lib/libMLIRObservers.a" )

# Import target "MLIRDebug" for configuration "Release"
set_property(TARGET MLIRDebug APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRDebug PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRDebug.a"
  )

list(APPEND _cmake_import_check_targets MLIRDebug )
list(APPEND _cmake_import_check_files_for_MLIRDebug "${_IMPORT_PREFIX}/lib/libMLIRDebug.a" )

# Import target "MLIRAffineAnalysis" for configuration "Release"
set_property(TARGET MLIRAffineAnalysis APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRAffineAnalysis PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRAffineAnalysis.a"
  )

list(APPEND _cmake_import_check_targets MLIRAffineAnalysis )
list(APPEND _cmake_import_check_files_for_MLIRAffineAnalysis "${_IMPORT_PREFIX}/lib/libMLIRAffineAnalysis.a" )

# Import target "MLIRAffineDialect" for configuration "Release"
set_property(TARGET MLIRAffineDialect APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRAffineDialect PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRAffineDialect.a"
  )

list(APPEND _cmake_import_check_targets MLIRAffineDialect )
list(APPEND _cmake_import_check_files_for_MLIRAffineDialect "${_IMPORT_PREFIX}/lib/libMLIRAffineDialect.a" )

# Import target "MLIRAffineTransforms" for configuration "Release"
set_property(TARGET MLIRAffineTransforms APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRAffineTransforms PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRAffineTransforms.a"
  )

list(APPEND _cmake_import_check_targets MLIRAffineTransforms )
list(APPEND _cmake_import_check_files_for_MLIRAffineTransforms "${_IMPORT_PREFIX}/lib/libMLIRAffineTransforms.a" )

# Import target "MLIRAffineTransformOps" for configuration "Release"
set_property(TARGET MLIRAffineTransformOps APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRAffineTransformOps PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRAffineTransformOps.a"
  )

list(APPEND _cmake_import_check_targets MLIRAffineTransformOps )
list(APPEND _cmake_import_check_files_for_MLIRAffineTransformOps "${_IMPORT_PREFIX}/lib/libMLIRAffineTransformOps.a" )

# Import target "MLIRAffineUtils" for configuration "Release"
set_property(TARGET MLIRAffineUtils APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRAffineUtils PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRAffineUtils.a"
  )

list(APPEND _cmake_import_check_targets MLIRAffineUtils )
list(APPEND _cmake_import_check_files_for_MLIRAffineUtils "${_IMPORT_PREFIX}/lib/libMLIRAffineUtils.a" )

# Import target "MLIRAMDGPUDialect" for configuration "Release"
set_property(TARGET MLIRAMDGPUDialect APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRAMDGPUDialect PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRAMDGPUDialect.a"
  )

list(APPEND _cmake_import_check_targets MLIRAMDGPUDialect )
list(APPEND _cmake_import_check_files_for_MLIRAMDGPUDialect "${_IMPORT_PREFIX}/lib/libMLIRAMDGPUDialect.a" )

# Import target "MLIRAMDGPUTransforms" for configuration "Release"
set_property(TARGET MLIRAMDGPUTransforms APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRAMDGPUTransforms PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRAMDGPUTransforms.a"
  )

list(APPEND _cmake_import_check_targets MLIRAMDGPUTransforms )
list(APPEND _cmake_import_check_files_for_MLIRAMDGPUTransforms "${_IMPORT_PREFIX}/lib/libMLIRAMDGPUTransforms.a" )

# Import target "MLIRAMDGPUUtils" for configuration "Release"
set_property(TARGET MLIRAMDGPUUtils APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRAMDGPUUtils PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRAMDGPUUtils.a"
  )

list(APPEND _cmake_import_check_targets MLIRAMDGPUUtils )
list(APPEND _cmake_import_check_files_for_MLIRAMDGPUUtils "${_IMPORT_PREFIX}/lib/libMLIRAMDGPUUtils.a" )

# Import target "MLIRAMXDialect" for configuration "Release"
set_property(TARGET MLIRAMXDialect APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRAMXDialect PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRAMXDialect.a"
  )

list(APPEND _cmake_import_check_targets MLIRAMXDialect )
list(APPEND _cmake_import_check_files_for_MLIRAMXDialect "${_IMPORT_PREFIX}/lib/libMLIRAMXDialect.a" )

# Import target "MLIRAMXTransforms" for configuration "Release"
set_property(TARGET MLIRAMXTransforms APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRAMXTransforms PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRAMXTransforms.a"
  )

list(APPEND _cmake_import_check_targets MLIRAMXTransforms )
list(APPEND _cmake_import_check_files_for_MLIRAMXTransforms "${_IMPORT_PREFIX}/lib/libMLIRAMXTransforms.a" )

# Import target "MLIRArithDialect" for configuration "Release"
set_property(TARGET MLIRArithDialect APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRArithDialect PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRArithDialect.a"
  )

list(APPEND _cmake_import_check_targets MLIRArithDialect )
list(APPEND _cmake_import_check_files_for_MLIRArithDialect "${_IMPORT_PREFIX}/lib/libMLIRArithDialect.a" )

# Import target "MLIRArithValueBoundsOpInterfaceImpl" for configuration "Release"
set_property(TARGET MLIRArithValueBoundsOpInterfaceImpl APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRArithValueBoundsOpInterfaceImpl PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRArithValueBoundsOpInterfaceImpl.a"
  )

list(APPEND _cmake_import_check_targets MLIRArithValueBoundsOpInterfaceImpl )
list(APPEND _cmake_import_check_files_for_MLIRArithValueBoundsOpInterfaceImpl "${_IMPORT_PREFIX}/lib/libMLIRArithValueBoundsOpInterfaceImpl.a" )

# Import target "MLIRArithTransforms" for configuration "Release"
set_property(TARGET MLIRArithTransforms APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRArithTransforms PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRArithTransforms.a"
  )

list(APPEND _cmake_import_check_targets MLIRArithTransforms )
list(APPEND _cmake_import_check_files_for_MLIRArithTransforms "${_IMPORT_PREFIX}/lib/libMLIRArithTransforms.a" )

# Import target "MLIRArithUtils" for configuration "Release"
set_property(TARGET MLIRArithUtils APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRArithUtils PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRArithUtils.a"
  )

list(APPEND _cmake_import_check_targets MLIRArithUtils )
list(APPEND _cmake_import_check_files_for_MLIRArithUtils "${_IMPORT_PREFIX}/lib/libMLIRArithUtils.a" )

# Import target "MLIRArmNeonDialect" for configuration "Release"
set_property(TARGET MLIRArmNeonDialect APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRArmNeonDialect PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRArmNeonDialect.a"
  )

list(APPEND _cmake_import_check_targets MLIRArmNeonDialect )
list(APPEND _cmake_import_check_files_for_MLIRArmNeonDialect "${_IMPORT_PREFIX}/lib/libMLIRArmNeonDialect.a" )

# Import target "MLIRArmSMEDialect" for configuration "Release"
set_property(TARGET MLIRArmSMEDialect APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRArmSMEDialect PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRArmSMEDialect.a"
  )

list(APPEND _cmake_import_check_targets MLIRArmSMEDialect )
list(APPEND _cmake_import_check_files_for_MLIRArmSMEDialect "${_IMPORT_PREFIX}/lib/libMLIRArmSMEDialect.a" )

# Import target "MLIRArmSMETransforms" for configuration "Release"
set_property(TARGET MLIRArmSMETransforms APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRArmSMETransforms PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRArmSMETransforms.a"
  )

list(APPEND _cmake_import_check_targets MLIRArmSMETransforms )
list(APPEND _cmake_import_check_files_for_MLIRArmSMETransforms "${_IMPORT_PREFIX}/lib/libMLIRArmSMETransforms.a" )

# Import target "MLIRArmSMEUtils" for configuration "Release"
set_property(TARGET MLIRArmSMEUtils APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRArmSMEUtils PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRArmSMEUtils.a"
  )

list(APPEND _cmake_import_check_targets MLIRArmSMEUtils )
list(APPEND _cmake_import_check_files_for_MLIRArmSMEUtils "${_IMPORT_PREFIX}/lib/libMLIRArmSMEUtils.a" )

# Import target "MLIRArmSVEDialect" for configuration "Release"
set_property(TARGET MLIRArmSVEDialect APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRArmSVEDialect PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRArmSVEDialect.a"
  )

list(APPEND _cmake_import_check_targets MLIRArmSVEDialect )
list(APPEND _cmake_import_check_files_for_MLIRArmSVEDialect "${_IMPORT_PREFIX}/lib/libMLIRArmSVEDialect.a" )

# Import target "MLIRArmSVETransforms" for configuration "Release"
set_property(TARGET MLIRArmSVETransforms APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRArmSVETransforms PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRArmSVETransforms.a"
  )

list(APPEND _cmake_import_check_targets MLIRArmSVETransforms )
list(APPEND _cmake_import_check_files_for_MLIRArmSVETransforms "${_IMPORT_PREFIX}/lib/libMLIRArmSVETransforms.a" )

# Import target "MLIRAsyncDialect" for configuration "Release"
set_property(TARGET MLIRAsyncDialect APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRAsyncDialect PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRAsyncDialect.a"
  )

list(APPEND _cmake_import_check_targets MLIRAsyncDialect )
list(APPEND _cmake_import_check_files_for_MLIRAsyncDialect "${_IMPORT_PREFIX}/lib/libMLIRAsyncDialect.a" )

# Import target "MLIRAsyncTransforms" for configuration "Release"
set_property(TARGET MLIRAsyncTransforms APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRAsyncTransforms PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRAsyncTransforms.a"
  )

list(APPEND _cmake_import_check_targets MLIRAsyncTransforms )
list(APPEND _cmake_import_check_files_for_MLIRAsyncTransforms "${_IMPORT_PREFIX}/lib/libMLIRAsyncTransforms.a" )

# Import target "MLIRBufferizationDialect" for configuration "Release"
set_property(TARGET MLIRBufferizationDialect APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRBufferizationDialect PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRBufferizationDialect.a"
  )

list(APPEND _cmake_import_check_targets MLIRBufferizationDialect )
list(APPEND _cmake_import_check_files_for_MLIRBufferizationDialect "${_IMPORT_PREFIX}/lib/libMLIRBufferizationDialect.a" )

# Import target "MLIRBufferizationTransformOps" for configuration "Release"
set_property(TARGET MLIRBufferizationTransformOps APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRBufferizationTransformOps PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRBufferizationTransformOps.a"
  )

list(APPEND _cmake_import_check_targets MLIRBufferizationTransformOps )
list(APPEND _cmake_import_check_files_for_MLIRBufferizationTransformOps "${_IMPORT_PREFIX}/lib/libMLIRBufferizationTransformOps.a" )

# Import target "MLIRBufferizationTransforms" for configuration "Release"
set_property(TARGET MLIRBufferizationTransforms APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRBufferizationTransforms PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRBufferizationTransforms.a"
  )

list(APPEND _cmake_import_check_targets MLIRBufferizationTransforms )
list(APPEND _cmake_import_check_files_for_MLIRBufferizationTransforms "${_IMPORT_PREFIX}/lib/libMLIRBufferizationTransforms.a" )

# Import target "MLIRComplexDialect" for configuration "Release"
set_property(TARGET MLIRComplexDialect APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRComplexDialect PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRComplexDialect.a"
  )

list(APPEND _cmake_import_check_targets MLIRComplexDialect )
list(APPEND _cmake_import_check_files_for_MLIRComplexDialect "${_IMPORT_PREFIX}/lib/libMLIRComplexDialect.a" )

# Import target "MLIRControlFlowDialect" for configuration "Release"
set_property(TARGET MLIRControlFlowDialect APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRControlFlowDialect PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRControlFlowDialect.a"
  )

list(APPEND _cmake_import_check_targets MLIRControlFlowDialect )
list(APPEND _cmake_import_check_files_for_MLIRControlFlowDialect "${_IMPORT_PREFIX}/lib/libMLIRControlFlowDialect.a" )

# Import target "MLIRDLTIDialect" for configuration "Release"
set_property(TARGET MLIRDLTIDialect APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRDLTIDialect PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRDLTIDialect.a"
  )

list(APPEND _cmake_import_check_targets MLIRDLTIDialect )
list(APPEND _cmake_import_check_files_for_MLIRDLTIDialect "${_IMPORT_PREFIX}/lib/libMLIRDLTIDialect.a" )

# Import target "MLIREmitCDialect" for configuration "Release"
set_property(TARGET MLIREmitCDialect APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIREmitCDialect PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIREmitCDialect.a"
  )

list(APPEND _cmake_import_check_targets MLIREmitCDialect )
list(APPEND _cmake_import_check_files_for_MLIREmitCDialect "${_IMPORT_PREFIX}/lib/libMLIREmitCDialect.a" )

# Import target "MLIRFuncInlinerExtension" for configuration "Release"
set_property(TARGET MLIRFuncInlinerExtension APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRFuncInlinerExtension PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRFuncInlinerExtension.a"
  )

list(APPEND _cmake_import_check_targets MLIRFuncInlinerExtension )
list(APPEND _cmake_import_check_files_for_MLIRFuncInlinerExtension "${_IMPORT_PREFIX}/lib/libMLIRFuncInlinerExtension.a" )

# Import target "MLIRFuncAllExtensions" for configuration "Release"
set_property(TARGET MLIRFuncAllExtensions APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRFuncAllExtensions PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRFuncAllExtensions.a"
  )

list(APPEND _cmake_import_check_targets MLIRFuncAllExtensions )
list(APPEND _cmake_import_check_files_for_MLIRFuncAllExtensions "${_IMPORT_PREFIX}/lib/libMLIRFuncAllExtensions.a" )

# Import target "MLIRFuncDialect" for configuration "Release"
set_property(TARGET MLIRFuncDialect APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRFuncDialect PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRFuncDialect.a"
  )

list(APPEND _cmake_import_check_targets MLIRFuncDialect )
list(APPEND _cmake_import_check_files_for_MLIRFuncDialect "${_IMPORT_PREFIX}/lib/libMLIRFuncDialect.a" )

# Import target "MLIRFuncTransforms" for configuration "Release"
set_property(TARGET MLIRFuncTransforms APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRFuncTransforms PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRFuncTransforms.a"
  )

list(APPEND _cmake_import_check_targets MLIRFuncTransforms )
list(APPEND _cmake_import_check_files_for_MLIRFuncTransforms "${_IMPORT_PREFIX}/lib/libMLIRFuncTransforms.a" )

# Import target "MLIRGPUDialect" for configuration "Release"
set_property(TARGET MLIRGPUDialect APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRGPUDialect PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRGPUDialect.a"
  )

list(APPEND _cmake_import_check_targets MLIRGPUDialect )
list(APPEND _cmake_import_check_files_for_MLIRGPUDialect "${_IMPORT_PREFIX}/lib/libMLIRGPUDialect.a" )

# Import target "MLIRGPUTransforms" for configuration "Release"
set_property(TARGET MLIRGPUTransforms APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRGPUTransforms PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRGPUTransforms.a"
  )

list(APPEND _cmake_import_check_targets MLIRGPUTransforms )
list(APPEND _cmake_import_check_files_for_MLIRGPUTransforms "${_IMPORT_PREFIX}/lib/libMLIRGPUTransforms.a" )

# Import target "MLIRGPUTransformOps" for configuration "Release"
set_property(TARGET MLIRGPUTransformOps APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRGPUTransformOps PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRGPUTransformOps.a"
  )

list(APPEND _cmake_import_check_targets MLIRGPUTransformOps )
list(APPEND _cmake_import_check_files_for_MLIRGPUTransformOps "${_IMPORT_PREFIX}/lib/libMLIRGPUTransformOps.a" )

# Import target "MLIRIndexDialect" for configuration "Release"
set_property(TARGET MLIRIndexDialect APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRIndexDialect PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRIndexDialect.a"
  )

list(APPEND _cmake_import_check_targets MLIRIndexDialect )
list(APPEND _cmake_import_check_files_for_MLIRIndexDialect "${_IMPORT_PREFIX}/lib/libMLIRIndexDialect.a" )

# Import target "MLIRIRDL" for configuration "Release"
set_property(TARGET MLIRIRDL APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRIRDL PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRIRDL.a"
  )

list(APPEND _cmake_import_check_targets MLIRIRDL )
list(APPEND _cmake_import_check_files_for_MLIRIRDL "${_IMPORT_PREFIX}/lib/libMLIRIRDL.a" )

# Import target "MLIRLinalgDialect" for configuration "Release"
set_property(TARGET MLIRLinalgDialect APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRLinalgDialect PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRLinalgDialect.a"
  )

list(APPEND _cmake_import_check_targets MLIRLinalgDialect )
list(APPEND _cmake_import_check_files_for_MLIRLinalgDialect "${_IMPORT_PREFIX}/lib/libMLIRLinalgDialect.a" )

# Import target "MLIRLinalgTransformOps" for configuration "Release"
set_property(TARGET MLIRLinalgTransformOps APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRLinalgTransformOps PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRLinalgTransformOps.a"
  )

list(APPEND _cmake_import_check_targets MLIRLinalgTransformOps )
list(APPEND _cmake_import_check_files_for_MLIRLinalgTransformOps "${_IMPORT_PREFIX}/lib/libMLIRLinalgTransformOps.a" )

# Import target "MLIRLinalgTransforms" for configuration "Release"
set_property(TARGET MLIRLinalgTransforms APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRLinalgTransforms PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRLinalgTransforms.a"
  )

list(APPEND _cmake_import_check_targets MLIRLinalgTransforms )
list(APPEND _cmake_import_check_files_for_MLIRLinalgTransforms "${_IMPORT_PREFIX}/lib/libMLIRLinalgTransforms.a" )

# Import target "MLIRLinalgUtils" for configuration "Release"
set_property(TARGET MLIRLinalgUtils APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRLinalgUtils PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRLinalgUtils.a"
  )

list(APPEND _cmake_import_check_targets MLIRLinalgUtils )
list(APPEND _cmake_import_check_files_for_MLIRLinalgUtils "${_IMPORT_PREFIX}/lib/libMLIRLinalgUtils.a" )

# Import target "MLIRLLVMIRTransforms" for configuration "Release"
set_property(TARGET MLIRLLVMIRTransforms APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRLLVMIRTransforms PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRLLVMIRTransforms.a"
  )

list(APPEND _cmake_import_check_targets MLIRLLVMIRTransforms )
list(APPEND _cmake_import_check_files_for_MLIRLLVMIRTransforms "${_IMPORT_PREFIX}/lib/libMLIRLLVMIRTransforms.a" )

# Import target "MLIRLLVMDialect" for configuration "Release"
set_property(TARGET MLIRLLVMDialect APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRLLVMDialect PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRLLVMDialect.a"
  )

list(APPEND _cmake_import_check_targets MLIRLLVMDialect )
list(APPEND _cmake_import_check_files_for_MLIRLLVMDialect "${_IMPORT_PREFIX}/lib/libMLIRLLVMDialect.a" )

# Import target "MLIRNVVMDialect" for configuration "Release"
set_property(TARGET MLIRNVVMDialect APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRNVVMDialect PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRNVVMDialect.a"
  )

list(APPEND _cmake_import_check_targets MLIRNVVMDialect )
list(APPEND _cmake_import_check_files_for_MLIRNVVMDialect "${_IMPORT_PREFIX}/lib/libMLIRNVVMDialect.a" )

# Import target "MLIRROCDLDialect" for configuration "Release"
set_property(TARGET MLIRROCDLDialect APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRROCDLDialect PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRROCDLDialect.a"
  )

list(APPEND _cmake_import_check_targets MLIRROCDLDialect )
list(APPEND _cmake_import_check_files_for_MLIRROCDLDialect "${_IMPORT_PREFIX}/lib/libMLIRROCDLDialect.a" )

# Import target "MLIRMathDialect" for configuration "Release"
set_property(TARGET MLIRMathDialect APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRMathDialect PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRMathDialect.a"
  )

list(APPEND _cmake_import_check_targets MLIRMathDialect )
list(APPEND _cmake_import_check_files_for_MLIRMathDialect "${_IMPORT_PREFIX}/lib/libMLIRMathDialect.a" )

# Import target "MLIRMathTransforms" for configuration "Release"
set_property(TARGET MLIRMathTransforms APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRMathTransforms PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRMathTransforms.a"
  )

list(APPEND _cmake_import_check_targets MLIRMathTransforms )
list(APPEND _cmake_import_check_files_for_MLIRMathTransforms "${_IMPORT_PREFIX}/lib/libMLIRMathTransforms.a" )

# Import target "MLIRMemRefDialect" for configuration "Release"
set_property(TARGET MLIRMemRefDialect APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRMemRefDialect PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRMemRefDialect.a"
  )

list(APPEND _cmake_import_check_targets MLIRMemRefDialect )
list(APPEND _cmake_import_check_files_for_MLIRMemRefDialect "${_IMPORT_PREFIX}/lib/libMLIRMemRefDialect.a" )

# Import target "MLIRMemRefTransformOps" for configuration "Release"
set_property(TARGET MLIRMemRefTransformOps APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRMemRefTransformOps PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRMemRefTransformOps.a"
  )

list(APPEND _cmake_import_check_targets MLIRMemRefTransformOps )
list(APPEND _cmake_import_check_files_for_MLIRMemRefTransformOps "${_IMPORT_PREFIX}/lib/libMLIRMemRefTransformOps.a" )

# Import target "MLIRMemRefTransforms" for configuration "Release"
set_property(TARGET MLIRMemRefTransforms APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRMemRefTransforms PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRMemRefTransforms.a"
  )

list(APPEND _cmake_import_check_targets MLIRMemRefTransforms )
list(APPEND _cmake_import_check_files_for_MLIRMemRefTransforms "${_IMPORT_PREFIX}/lib/libMLIRMemRefTransforms.a" )

# Import target "MLIRMemRefUtils" for configuration "Release"
set_property(TARGET MLIRMemRefUtils APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRMemRefUtils PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRMemRefUtils.a"
  )

list(APPEND _cmake_import_check_targets MLIRMemRefUtils )
list(APPEND _cmake_import_check_files_for_MLIRMemRefUtils "${_IMPORT_PREFIX}/lib/libMLIRMemRefUtils.a" )

# Import target "MLIRMLProgramDialect" for configuration "Release"
set_property(TARGET MLIRMLProgramDialect APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRMLProgramDialect PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRMLProgramDialect.a"
  )

list(APPEND _cmake_import_check_targets MLIRMLProgramDialect )
list(APPEND _cmake_import_check_files_for_MLIRMLProgramDialect "${_IMPORT_PREFIX}/lib/libMLIRMLProgramDialect.a" )

# Import target "MLIRNVGPUDialect" for configuration "Release"
set_property(TARGET MLIRNVGPUDialect APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRNVGPUDialect PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRNVGPUDialect.a"
  )

list(APPEND _cmake_import_check_targets MLIRNVGPUDialect )
list(APPEND _cmake_import_check_files_for_MLIRNVGPUDialect "${_IMPORT_PREFIX}/lib/libMLIRNVGPUDialect.a" )

# Import target "MLIRNVGPUUtils" for configuration "Release"
set_property(TARGET MLIRNVGPUUtils APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRNVGPUUtils PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRNVGPUUtils.a"
  )

list(APPEND _cmake_import_check_targets MLIRNVGPUUtils )
list(APPEND _cmake_import_check_files_for_MLIRNVGPUUtils "${_IMPORT_PREFIX}/lib/libMLIRNVGPUUtils.a" )

# Import target "MLIRNVGPUTransformOps" for configuration "Release"
set_property(TARGET MLIRNVGPUTransformOps APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRNVGPUTransformOps PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRNVGPUTransformOps.a"
  )

list(APPEND _cmake_import_check_targets MLIRNVGPUTransformOps )
list(APPEND _cmake_import_check_files_for_MLIRNVGPUTransformOps "${_IMPORT_PREFIX}/lib/libMLIRNVGPUTransformOps.a" )

# Import target "MLIRNVGPUTransforms" for configuration "Release"
set_property(TARGET MLIRNVGPUTransforms APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRNVGPUTransforms PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRNVGPUTransforms.a"
  )

list(APPEND _cmake_import_check_targets MLIRNVGPUTransforms )
list(APPEND _cmake_import_check_files_for_MLIRNVGPUTransforms "${_IMPORT_PREFIX}/lib/libMLIRNVGPUTransforms.a" )

# Import target "MLIROpenACCDialect" for configuration "Release"
set_property(TARGET MLIROpenACCDialect APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIROpenACCDialect PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIROpenACCDialect.a"
  )

list(APPEND _cmake_import_check_targets MLIROpenACCDialect )
list(APPEND _cmake_import_check_files_for_MLIROpenACCDialect "${_IMPORT_PREFIX}/lib/libMLIROpenACCDialect.a" )

# Import target "MLIROpenMPDialect" for configuration "Release"
set_property(TARGET MLIROpenMPDialect APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIROpenMPDialect PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIROpenMPDialect.a"
  )

list(APPEND _cmake_import_check_targets MLIROpenMPDialect )
list(APPEND _cmake_import_check_files_for_MLIROpenMPDialect "${_IMPORT_PREFIX}/lib/libMLIROpenMPDialect.a" )

# Import target "MLIRPDLDialect" for configuration "Release"
set_property(TARGET MLIRPDLDialect APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRPDLDialect PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRPDLDialect.a"
  )

list(APPEND _cmake_import_check_targets MLIRPDLDialect )
list(APPEND _cmake_import_check_files_for_MLIRPDLDialect "${_IMPORT_PREFIX}/lib/libMLIRPDLDialect.a" )

# Import target "MLIRPDLInterpDialect" for configuration "Release"
set_property(TARGET MLIRPDLInterpDialect APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRPDLInterpDialect PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRPDLInterpDialect.a"
  )

list(APPEND _cmake_import_check_targets MLIRPDLInterpDialect )
list(APPEND _cmake_import_check_files_for_MLIRPDLInterpDialect "${_IMPORT_PREFIX}/lib/libMLIRPDLInterpDialect.a" )

# Import target "MLIRQuantDialect" for configuration "Release"
set_property(TARGET MLIRQuantDialect APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRQuantDialect PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRQuantDialect.a"
  )

list(APPEND _cmake_import_check_targets MLIRQuantDialect )
list(APPEND _cmake_import_check_files_for_MLIRQuantDialect "${_IMPORT_PREFIX}/lib/libMLIRQuantDialect.a" )

# Import target "MLIRQuantUtils" for configuration "Release"
set_property(TARGET MLIRQuantUtils APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRQuantUtils PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRQuantUtils.a"
  )

list(APPEND _cmake_import_check_targets MLIRQuantUtils )
list(APPEND _cmake_import_check_files_for_MLIRQuantUtils "${_IMPORT_PREFIX}/lib/libMLIRQuantUtils.a" )

# Import target "MLIRSCFDialect" for configuration "Release"
set_property(TARGET MLIRSCFDialect APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRSCFDialect PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRSCFDialect.a"
  )

list(APPEND _cmake_import_check_targets MLIRSCFDialect )
list(APPEND _cmake_import_check_files_for_MLIRSCFDialect "${_IMPORT_PREFIX}/lib/libMLIRSCFDialect.a" )

# Import target "MLIRSCFTransformOps" for configuration "Release"
set_property(TARGET MLIRSCFTransformOps APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRSCFTransformOps PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRSCFTransformOps.a"
  )

list(APPEND _cmake_import_check_targets MLIRSCFTransformOps )
list(APPEND _cmake_import_check_files_for_MLIRSCFTransformOps "${_IMPORT_PREFIX}/lib/libMLIRSCFTransformOps.a" )

# Import target "MLIRSCFTransforms" for configuration "Release"
set_property(TARGET MLIRSCFTransforms APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRSCFTransforms PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRSCFTransforms.a"
  )

list(APPEND _cmake_import_check_targets MLIRSCFTransforms )
list(APPEND _cmake_import_check_files_for_MLIRSCFTransforms "${_IMPORT_PREFIX}/lib/libMLIRSCFTransforms.a" )

# Import target "MLIRSCFUtils" for configuration "Release"
set_property(TARGET MLIRSCFUtils APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRSCFUtils PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRSCFUtils.a"
  )

list(APPEND _cmake_import_check_targets MLIRSCFUtils )
list(APPEND _cmake_import_check_files_for_MLIRSCFUtils "${_IMPORT_PREFIX}/lib/libMLIRSCFUtils.a" )

# Import target "MLIRShapeDialect" for configuration "Release"
set_property(TARGET MLIRShapeDialect APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRShapeDialect PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRShapeDialect.a"
  )

list(APPEND _cmake_import_check_targets MLIRShapeDialect )
list(APPEND _cmake_import_check_files_for_MLIRShapeDialect "${_IMPORT_PREFIX}/lib/libMLIRShapeDialect.a" )

# Import target "MLIRShapeOpsTransforms" for configuration "Release"
set_property(TARGET MLIRShapeOpsTransforms APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRShapeOpsTransforms PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRShapeOpsTransforms.a"
  )

list(APPEND _cmake_import_check_targets MLIRShapeOpsTransforms )
list(APPEND _cmake_import_check_files_for_MLIRShapeOpsTransforms "${_IMPORT_PREFIX}/lib/libMLIRShapeOpsTransforms.a" )

# Import target "MLIRSparseTensorDialect" for configuration "Release"
set_property(TARGET MLIRSparseTensorDialect APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRSparseTensorDialect PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRSparseTensorDialect.a"
  )

list(APPEND _cmake_import_check_targets MLIRSparseTensorDialect )
list(APPEND _cmake_import_check_files_for_MLIRSparseTensorDialect "${_IMPORT_PREFIX}/lib/libMLIRSparseTensorDialect.a" )

# Import target "MLIRSparseTensorTransforms" for configuration "Release"
set_property(TARGET MLIRSparseTensorTransforms APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRSparseTensorTransforms PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRSparseTensorTransforms.a"
  )

list(APPEND _cmake_import_check_targets MLIRSparseTensorTransforms )
list(APPEND _cmake_import_check_files_for_MLIRSparseTensorTransforms "${_IMPORT_PREFIX}/lib/libMLIRSparseTensorTransforms.a" )

# Import target "MLIRSparseTensorPipelines" for configuration "Release"
set_property(TARGET MLIRSparseTensorPipelines APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRSparseTensorPipelines PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRSparseTensorPipelines.a"
  )

list(APPEND _cmake_import_check_targets MLIRSparseTensorPipelines )
list(APPEND _cmake_import_check_files_for_MLIRSparseTensorPipelines "${_IMPORT_PREFIX}/lib/libMLIRSparseTensorPipelines.a" )

# Import target "MLIRSparseTensorUtils" for configuration "Release"
set_property(TARGET MLIRSparseTensorUtils APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRSparseTensorUtils PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRSparseTensorUtils.a"
  )

list(APPEND _cmake_import_check_targets MLIRSparseTensorUtils )
list(APPEND _cmake_import_check_files_for_MLIRSparseTensorUtils "${_IMPORT_PREFIX}/lib/libMLIRSparseTensorUtils.a" )

# Import target "MLIRSPIRVDialect" for configuration "Release"
set_property(TARGET MLIRSPIRVDialect APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRSPIRVDialect PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRSPIRVDialect.a"
  )

list(APPEND _cmake_import_check_targets MLIRSPIRVDialect )
list(APPEND _cmake_import_check_files_for_MLIRSPIRVDialect "${_IMPORT_PREFIX}/lib/libMLIRSPIRVDialect.a" )

# Import target "MLIRSPIRVModuleCombiner" for configuration "Release"
set_property(TARGET MLIRSPIRVModuleCombiner APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRSPIRVModuleCombiner PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRSPIRVModuleCombiner.a"
  )

list(APPEND _cmake_import_check_targets MLIRSPIRVModuleCombiner )
list(APPEND _cmake_import_check_files_for_MLIRSPIRVModuleCombiner "${_IMPORT_PREFIX}/lib/libMLIRSPIRVModuleCombiner.a" )

# Import target "MLIRSPIRVConversion" for configuration "Release"
set_property(TARGET MLIRSPIRVConversion APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRSPIRVConversion PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRSPIRVConversion.a"
  )

list(APPEND _cmake_import_check_targets MLIRSPIRVConversion )
list(APPEND _cmake_import_check_files_for_MLIRSPIRVConversion "${_IMPORT_PREFIX}/lib/libMLIRSPIRVConversion.a" )

# Import target "MLIRSPIRVTransforms" for configuration "Release"
set_property(TARGET MLIRSPIRVTransforms APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRSPIRVTransforms PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRSPIRVTransforms.a"
  )

list(APPEND _cmake_import_check_targets MLIRSPIRVTransforms )
list(APPEND _cmake_import_check_files_for_MLIRSPIRVTransforms "${_IMPORT_PREFIX}/lib/libMLIRSPIRVTransforms.a" )

# Import target "MLIRSPIRVUtils" for configuration "Release"
set_property(TARGET MLIRSPIRVUtils APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRSPIRVUtils PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRSPIRVUtils.a"
  )

list(APPEND _cmake_import_check_targets MLIRSPIRVUtils )
list(APPEND _cmake_import_check_files_for_MLIRSPIRVUtils "${_IMPORT_PREFIX}/lib/libMLIRSPIRVUtils.a" )

# Import target "MLIRTensorDialect" for configuration "Release"
set_property(TARGET MLIRTensorDialect APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRTensorDialect PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRTensorDialect.a"
  )

list(APPEND _cmake_import_check_targets MLIRTensorDialect )
list(APPEND _cmake_import_check_files_for_MLIRTensorDialect "${_IMPORT_PREFIX}/lib/libMLIRTensorDialect.a" )

# Import target "MLIRTensorInferTypeOpInterfaceImpl" for configuration "Release"
set_property(TARGET MLIRTensorInferTypeOpInterfaceImpl APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRTensorInferTypeOpInterfaceImpl PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRTensorInferTypeOpInterfaceImpl.a"
  )

list(APPEND _cmake_import_check_targets MLIRTensorInferTypeOpInterfaceImpl )
list(APPEND _cmake_import_check_files_for_MLIRTensorInferTypeOpInterfaceImpl "${_IMPORT_PREFIX}/lib/libMLIRTensorInferTypeOpInterfaceImpl.a" )

# Import target "MLIRTensorTilingInterfaceImpl" for configuration "Release"
set_property(TARGET MLIRTensorTilingInterfaceImpl APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRTensorTilingInterfaceImpl PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRTensorTilingInterfaceImpl.a"
  )

list(APPEND _cmake_import_check_targets MLIRTensorTilingInterfaceImpl )
list(APPEND _cmake_import_check_files_for_MLIRTensorTilingInterfaceImpl "${_IMPORT_PREFIX}/lib/libMLIRTensorTilingInterfaceImpl.a" )

# Import target "MLIRTensorTransforms" for configuration "Release"
set_property(TARGET MLIRTensorTransforms APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRTensorTransforms PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRTensorTransforms.a"
  )

list(APPEND _cmake_import_check_targets MLIRTensorTransforms )
list(APPEND _cmake_import_check_files_for_MLIRTensorTransforms "${_IMPORT_PREFIX}/lib/libMLIRTensorTransforms.a" )

# Import target "MLIRTensorTransformOps" for configuration "Release"
set_property(TARGET MLIRTensorTransformOps APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRTensorTransformOps PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRTensorTransformOps.a"
  )

list(APPEND _cmake_import_check_targets MLIRTensorTransformOps )
list(APPEND _cmake_import_check_files_for_MLIRTensorTransformOps "${_IMPORT_PREFIX}/lib/libMLIRTensorTransformOps.a" )

# Import target "MLIRTensorUtils" for configuration "Release"
set_property(TARGET MLIRTensorUtils APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRTensorUtils PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRTensorUtils.a"
  )

list(APPEND _cmake_import_check_targets MLIRTensorUtils )
list(APPEND _cmake_import_check_files_for_MLIRTensorUtils "${_IMPORT_PREFIX}/lib/libMLIRTensorUtils.a" )

# Import target "MLIRTosaDialect" for configuration "Release"
set_property(TARGET MLIRTosaDialect APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRTosaDialect PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRTosaDialect.a"
  )

list(APPEND _cmake_import_check_targets MLIRTosaDialect )
list(APPEND _cmake_import_check_files_for_MLIRTosaDialect "${_IMPORT_PREFIX}/lib/libMLIRTosaDialect.a" )

# Import target "MLIRTosaTransforms" for configuration "Release"
set_property(TARGET MLIRTosaTransforms APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRTosaTransforms PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRTosaTransforms.a"
  )

list(APPEND _cmake_import_check_targets MLIRTosaTransforms )
list(APPEND _cmake_import_check_files_for_MLIRTosaTransforms "${_IMPORT_PREFIX}/lib/libMLIRTosaTransforms.a" )

# Import target "MLIRTransformDialect" for configuration "Release"
set_property(TARGET MLIRTransformDialect APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRTransformDialect PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRTransformDialect.a"
  )

list(APPEND _cmake_import_check_targets MLIRTransformDialect )
list(APPEND _cmake_import_check_files_for_MLIRTransformDialect "${_IMPORT_PREFIX}/lib/libMLIRTransformDialect.a" )

# Import target "MLIRTransformPDLExtension" for configuration "Release"
set_property(TARGET MLIRTransformPDLExtension APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRTransformPDLExtension PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRTransformPDLExtension.a"
  )

list(APPEND _cmake_import_check_targets MLIRTransformPDLExtension )
list(APPEND _cmake_import_check_files_for_MLIRTransformPDLExtension "${_IMPORT_PREFIX}/lib/libMLIRTransformPDLExtension.a" )

# Import target "MLIRTransformDialectTransforms" for configuration "Release"
set_property(TARGET MLIRTransformDialectTransforms APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRTransformDialectTransforms PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRTransformDialectTransforms.a"
  )

list(APPEND _cmake_import_check_targets MLIRTransformDialectTransforms )
list(APPEND _cmake_import_check_files_for_MLIRTransformDialectTransforms "${_IMPORT_PREFIX}/lib/libMLIRTransformDialectTransforms.a" )

# Import target "MLIRTransformDialectUtils" for configuration "Release"
set_property(TARGET MLIRTransformDialectUtils APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRTransformDialectUtils PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRTransformDialectUtils.a"
  )

list(APPEND _cmake_import_check_targets MLIRTransformDialectUtils )
list(APPEND _cmake_import_check_files_for_MLIRTransformDialectUtils "${_IMPORT_PREFIX}/lib/libMLIRTransformDialectUtils.a" )

# Import target "MLIRUBDialect" for configuration "Release"
set_property(TARGET MLIRUBDialect APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRUBDialect PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRUBDialect.a"
  )

list(APPEND _cmake_import_check_targets MLIRUBDialect )
list(APPEND _cmake_import_check_files_for_MLIRUBDialect "${_IMPORT_PREFIX}/lib/libMLIRUBDialect.a" )

# Import target "MLIRDialectUtils" for configuration "Release"
set_property(TARGET MLIRDialectUtils APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRDialectUtils PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRDialectUtils.a"
  )

list(APPEND _cmake_import_check_targets MLIRDialectUtils )
list(APPEND _cmake_import_check_files_for_MLIRDialectUtils "${_IMPORT_PREFIX}/lib/libMLIRDialectUtils.a" )

# Import target "MLIRVectorDialect" for configuration "Release"
set_property(TARGET MLIRVectorDialect APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRVectorDialect PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRVectorDialect.a"
  )

list(APPEND _cmake_import_check_targets MLIRVectorDialect )
list(APPEND _cmake_import_check_files_for_MLIRVectorDialect "${_IMPORT_PREFIX}/lib/libMLIRVectorDialect.a" )

# Import target "MLIRMaskableOpInterface" for configuration "Release"
set_property(TARGET MLIRMaskableOpInterface APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRMaskableOpInterface PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRMaskableOpInterface.a"
  )

list(APPEND _cmake_import_check_targets MLIRMaskableOpInterface )
list(APPEND _cmake_import_check_files_for_MLIRMaskableOpInterface "${_IMPORT_PREFIX}/lib/libMLIRMaskableOpInterface.a" )

# Import target "MLIRMaskingOpInterface" for configuration "Release"
set_property(TARGET MLIRMaskingOpInterface APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRMaskingOpInterface PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRMaskingOpInterface.a"
  )

list(APPEND _cmake_import_check_targets MLIRMaskingOpInterface )
list(APPEND _cmake_import_check_files_for_MLIRMaskingOpInterface "${_IMPORT_PREFIX}/lib/libMLIRMaskingOpInterface.a" )

# Import target "MLIRVectorTransforms" for configuration "Release"
set_property(TARGET MLIRVectorTransforms APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRVectorTransforms PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRVectorTransforms.a"
  )

list(APPEND _cmake_import_check_targets MLIRVectorTransforms )
list(APPEND _cmake_import_check_files_for_MLIRVectorTransforms "${_IMPORT_PREFIX}/lib/libMLIRVectorTransforms.a" )

# Import target "MLIRVectorTransformOps" for configuration "Release"
set_property(TARGET MLIRVectorTransformOps APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRVectorTransformOps PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRVectorTransformOps.a"
  )

list(APPEND _cmake_import_check_targets MLIRVectorTransformOps )
list(APPEND _cmake_import_check_files_for_MLIRVectorTransformOps "${_IMPORT_PREFIX}/lib/libMLIRVectorTransformOps.a" )

# Import target "MLIRVectorUtils" for configuration "Release"
set_property(TARGET MLIRVectorUtils APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRVectorUtils PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRVectorUtils.a"
  )

list(APPEND _cmake_import_check_targets MLIRVectorUtils )
list(APPEND _cmake_import_check_files_for_MLIRVectorUtils "${_IMPORT_PREFIX}/lib/libMLIRVectorUtils.a" )

# Import target "MLIRX86VectorDialect" for configuration "Release"
set_property(TARGET MLIRX86VectorDialect APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRX86VectorDialect PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRX86VectorDialect.a"
  )

list(APPEND _cmake_import_check_targets MLIRX86VectorDialect )
list(APPEND _cmake_import_check_files_for_MLIRX86VectorDialect "${_IMPORT_PREFIX}/lib/libMLIRX86VectorDialect.a" )

# Import target "MLIRX86VectorTransforms" for configuration "Release"
set_property(TARGET MLIRX86VectorTransforms APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRX86VectorTransforms PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRX86VectorTransforms.a"
  )

list(APPEND _cmake_import_check_targets MLIRX86VectorTransforms )
list(APPEND _cmake_import_check_files_for_MLIRX86VectorTransforms "${_IMPORT_PREFIX}/lib/libMLIRX86VectorTransforms.a" )

# Import target "MLIRDialect" for configuration "Release"
set_property(TARGET MLIRDialect APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRDialect PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRDialect.a"
  )

list(APPEND _cmake_import_check_targets MLIRDialect )
list(APPEND _cmake_import_check_files_for_MLIRDialect "${_IMPORT_PREFIX}/lib/libMLIRDialect.a" )

# Import target "MLIRIR" for configuration "Release"
set_property(TARGET MLIRIR APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRIR PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRIR.a"
  )

list(APPEND _cmake_import_check_targets MLIRIR )
list(APPEND _cmake_import_check_files_for_MLIRIR "${_IMPORT_PREFIX}/lib/libMLIRIR.a" )

# Import target "MLIRCallInterfaces" for configuration "Release"
set_property(TARGET MLIRCallInterfaces APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRCallInterfaces PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRCallInterfaces.a"
  )

list(APPEND _cmake_import_check_targets MLIRCallInterfaces )
list(APPEND _cmake_import_check_files_for_MLIRCallInterfaces "${_IMPORT_PREFIX}/lib/libMLIRCallInterfaces.a" )

# Import target "MLIRCastInterfaces" for configuration "Release"
set_property(TARGET MLIRCastInterfaces APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRCastInterfaces PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRCastInterfaces.a"
  )

list(APPEND _cmake_import_check_targets MLIRCastInterfaces )
list(APPEND _cmake_import_check_files_for_MLIRCastInterfaces "${_IMPORT_PREFIX}/lib/libMLIRCastInterfaces.a" )

# Import target "MLIRControlFlowInterfaces" for configuration "Release"
set_property(TARGET MLIRControlFlowInterfaces APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRControlFlowInterfaces PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRControlFlowInterfaces.a"
  )

list(APPEND _cmake_import_check_targets MLIRControlFlowInterfaces )
list(APPEND _cmake_import_check_files_for_MLIRControlFlowInterfaces "${_IMPORT_PREFIX}/lib/libMLIRControlFlowInterfaces.a" )

# Import target "MLIRCopyOpInterface" for configuration "Release"
set_property(TARGET MLIRCopyOpInterface APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRCopyOpInterface PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRCopyOpInterface.a"
  )

list(APPEND _cmake_import_check_targets MLIRCopyOpInterface )
list(APPEND _cmake_import_check_files_for_MLIRCopyOpInterface "${_IMPORT_PREFIX}/lib/libMLIRCopyOpInterface.a" )

# Import target "MLIRDataLayoutInterfaces" for configuration "Release"
set_property(TARGET MLIRDataLayoutInterfaces APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRDataLayoutInterfaces PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRDataLayoutInterfaces.a"
  )

list(APPEND _cmake_import_check_targets MLIRDataLayoutInterfaces )
list(APPEND _cmake_import_check_files_for_MLIRDataLayoutInterfaces "${_IMPORT_PREFIX}/lib/libMLIRDataLayoutInterfaces.a" )

# Import target "MLIRDerivedAttributeOpInterface" for configuration "Release"
set_property(TARGET MLIRDerivedAttributeOpInterface APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRDerivedAttributeOpInterface PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRDerivedAttributeOpInterface.a"
  )

list(APPEND _cmake_import_check_targets MLIRDerivedAttributeOpInterface )
list(APPEND _cmake_import_check_files_for_MLIRDerivedAttributeOpInterface "${_IMPORT_PREFIX}/lib/libMLIRDerivedAttributeOpInterface.a" )

# Import target "MLIRDestinationStyleOpInterface" for configuration "Release"
set_property(TARGET MLIRDestinationStyleOpInterface APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRDestinationStyleOpInterface PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRDestinationStyleOpInterface.a"
  )

list(APPEND _cmake_import_check_targets MLIRDestinationStyleOpInterface )
list(APPEND _cmake_import_check_files_for_MLIRDestinationStyleOpInterface "${_IMPORT_PREFIX}/lib/libMLIRDestinationStyleOpInterface.a" )

# Import target "MLIRInferIntRangeInterface" for configuration "Release"
set_property(TARGET MLIRInferIntRangeInterface APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRInferIntRangeInterface PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRInferIntRangeInterface.a"
  )

list(APPEND _cmake_import_check_targets MLIRInferIntRangeInterface )
list(APPEND _cmake_import_check_files_for_MLIRInferIntRangeInterface "${_IMPORT_PREFIX}/lib/libMLIRInferIntRangeInterface.a" )

# Import target "MLIRInferTypeOpInterface" for configuration "Release"
set_property(TARGET MLIRInferTypeOpInterface APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRInferTypeOpInterface PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRInferTypeOpInterface.a"
  )

list(APPEND _cmake_import_check_targets MLIRInferTypeOpInterface )
list(APPEND _cmake_import_check_files_for_MLIRInferTypeOpInterface "${_IMPORT_PREFIX}/lib/libMLIRInferTypeOpInterface.a" )

# Import target "MLIRLoopLikeInterface" for configuration "Release"
set_property(TARGET MLIRLoopLikeInterface APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRLoopLikeInterface PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRLoopLikeInterface.a"
  )

list(APPEND _cmake_import_check_targets MLIRLoopLikeInterface )
list(APPEND _cmake_import_check_files_for_MLIRLoopLikeInterface "${_IMPORT_PREFIX}/lib/libMLIRLoopLikeInterface.a" )

# Import target "MLIRMemorySlotInterfaces" for configuration "Release"
set_property(TARGET MLIRMemorySlotInterfaces APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRMemorySlotInterfaces PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRMemorySlotInterfaces.a"
  )

list(APPEND _cmake_import_check_targets MLIRMemorySlotInterfaces )
list(APPEND _cmake_import_check_files_for_MLIRMemorySlotInterfaces "${_IMPORT_PREFIX}/lib/libMLIRMemorySlotInterfaces.a" )

# Import target "MLIRParallelCombiningOpInterface" for configuration "Release"
set_property(TARGET MLIRParallelCombiningOpInterface APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRParallelCombiningOpInterface PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRParallelCombiningOpInterface.a"
  )

list(APPEND _cmake_import_check_targets MLIRParallelCombiningOpInterface )
list(APPEND _cmake_import_check_files_for_MLIRParallelCombiningOpInterface "${_IMPORT_PREFIX}/lib/libMLIRParallelCombiningOpInterface.a" )

# Import target "MLIRRuntimeVerifiableOpInterface" for configuration "Release"
set_property(TARGET MLIRRuntimeVerifiableOpInterface APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRRuntimeVerifiableOpInterface PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRRuntimeVerifiableOpInterface.a"
  )

list(APPEND _cmake_import_check_targets MLIRRuntimeVerifiableOpInterface )
list(APPEND _cmake_import_check_files_for_MLIRRuntimeVerifiableOpInterface "${_IMPORT_PREFIX}/lib/libMLIRRuntimeVerifiableOpInterface.a" )

# Import target "MLIRShapedOpInterfaces" for configuration "Release"
set_property(TARGET MLIRShapedOpInterfaces APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRShapedOpInterfaces PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRShapedOpInterfaces.a"
  )

list(APPEND _cmake_import_check_targets MLIRShapedOpInterfaces )
list(APPEND _cmake_import_check_files_for_MLIRShapedOpInterfaces "${_IMPORT_PREFIX}/lib/libMLIRShapedOpInterfaces.a" )

# Import target "MLIRSideEffectInterfaces" for configuration "Release"
set_property(TARGET MLIRSideEffectInterfaces APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRSideEffectInterfaces PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRSideEffectInterfaces.a"
  )

list(APPEND _cmake_import_check_targets MLIRSideEffectInterfaces )
list(APPEND _cmake_import_check_files_for_MLIRSideEffectInterfaces "${_IMPORT_PREFIX}/lib/libMLIRSideEffectInterfaces.a" )

# Import target "MLIRTilingInterface" for configuration "Release"
set_property(TARGET MLIRTilingInterface APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRTilingInterface PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRTilingInterface.a"
  )

list(APPEND _cmake_import_check_targets MLIRTilingInterface )
list(APPEND _cmake_import_check_files_for_MLIRTilingInterface "${_IMPORT_PREFIX}/lib/libMLIRTilingInterface.a" )

# Import target "MLIRVectorInterfaces" for configuration "Release"
set_property(TARGET MLIRVectorInterfaces APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRVectorInterfaces PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRVectorInterfaces.a"
  )

list(APPEND _cmake_import_check_targets MLIRVectorInterfaces )
list(APPEND _cmake_import_check_files_for_MLIRVectorInterfaces "${_IMPORT_PREFIX}/lib/libMLIRVectorInterfaces.a" )

# Import target "MLIRViewLikeInterface" for configuration "Release"
set_property(TARGET MLIRViewLikeInterface APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRViewLikeInterface PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRViewLikeInterface.a"
  )

list(APPEND _cmake_import_check_targets MLIRViewLikeInterface )
list(APPEND _cmake_import_check_files_for_MLIRViewLikeInterface "${_IMPORT_PREFIX}/lib/libMLIRViewLikeInterface.a" )

# Import target "MLIRValueBoundsOpInterface" for configuration "Release"
set_property(TARGET MLIRValueBoundsOpInterface APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRValueBoundsOpInterface PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRValueBoundsOpInterface.a"
  )

list(APPEND _cmake_import_check_targets MLIRValueBoundsOpInterface )
list(APPEND _cmake_import_check_files_for_MLIRValueBoundsOpInterface "${_IMPORT_PREFIX}/lib/libMLIRValueBoundsOpInterface.a" )

# Import target "MLIRInferIntRangeCommon" for configuration "Release"
set_property(TARGET MLIRInferIntRangeCommon APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRInferIntRangeCommon PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRInferIntRangeCommon.a"
  )

list(APPEND _cmake_import_check_targets MLIRInferIntRangeCommon )
list(APPEND _cmake_import_check_files_for_MLIRInferIntRangeCommon "${_IMPORT_PREFIX}/lib/libMLIRInferIntRangeCommon.a" )

# Import target "MLIRParser" for configuration "Release"
set_property(TARGET MLIRParser APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRParser PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRParser.a"
  )

list(APPEND _cmake_import_check_targets MLIRParser )
list(APPEND _cmake_import_check_files_for_MLIRParser "${_IMPORT_PREFIX}/lib/libMLIRParser.a" )

# Import target "MLIRPass" for configuration "Release"
set_property(TARGET MLIRPass APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRPass PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRPass.a"
  )

list(APPEND _cmake_import_check_targets MLIRPass )
list(APPEND _cmake_import_check_files_for_MLIRPass "${_IMPORT_PREFIX}/lib/libMLIRPass.a" )

# Import target "MLIRReduce" for configuration "Release"
set_property(TARGET MLIRReduce APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRReduce PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRReduce.a"
  )

list(APPEND _cmake_import_check_targets MLIRReduce )
list(APPEND _cmake_import_check_files_for_MLIRReduce "${_IMPORT_PREFIX}/lib/libMLIRReduce.a" )

# Import target "MLIRRewrite" for configuration "Release"
set_property(TARGET MLIRRewrite APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRRewrite PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRRewrite.a"
  )

list(APPEND _cmake_import_check_targets MLIRRewrite )
list(APPEND _cmake_import_check_files_for_MLIRRewrite "${_IMPORT_PREFIX}/lib/libMLIRRewrite.a" )

# Import target "MLIRSupport" for configuration "Release"
set_property(TARGET MLIRSupport APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRSupport PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRSupport.a"
  )

list(APPEND _cmake_import_check_targets MLIRSupport )
list(APPEND _cmake_import_check_files_for_MLIRSupport "${_IMPORT_PREFIX}/lib/libMLIRSupport.a" )

# Import target "MLIRTableGen" for configuration "Release"
set_property(TARGET MLIRTableGen APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRTableGen PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRTableGen.a"
  )

list(APPEND _cmake_import_check_targets MLIRTableGen )
list(APPEND _cmake_import_check_files_for_MLIRTableGen "${_IMPORT_PREFIX}/lib/libMLIRTableGen.a" )

# Import target "MLIRTargetCpp" for configuration "Release"
set_property(TARGET MLIRTargetCpp APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRTargetCpp PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRTargetCpp.a"
  )

list(APPEND _cmake_import_check_targets MLIRTargetCpp )
list(APPEND _cmake_import_check_files_for_MLIRTargetCpp "${_IMPORT_PREFIX}/lib/libMLIRTargetCpp.a" )

# Import target "MLIRSPIRVDeserialization" for configuration "Release"
set_property(TARGET MLIRSPIRVDeserialization APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRSPIRVDeserialization PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRSPIRVDeserialization.a"
  )

list(APPEND _cmake_import_check_targets MLIRSPIRVDeserialization )
list(APPEND _cmake_import_check_files_for_MLIRSPIRVDeserialization "${_IMPORT_PREFIX}/lib/libMLIRSPIRVDeserialization.a" )

# Import target "MLIRSPIRVSerialization" for configuration "Release"
set_property(TARGET MLIRSPIRVSerialization APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRSPIRVSerialization PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRSPIRVSerialization.a"
  )

list(APPEND _cmake_import_check_targets MLIRSPIRVSerialization )
list(APPEND _cmake_import_check_files_for_MLIRSPIRVSerialization "${_IMPORT_PREFIX}/lib/libMLIRSPIRVSerialization.a" )

# Import target "MLIRSPIRVBinaryUtils" for configuration "Release"
set_property(TARGET MLIRSPIRVBinaryUtils APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRSPIRVBinaryUtils PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRSPIRVBinaryUtils.a"
  )

list(APPEND _cmake_import_check_targets MLIRSPIRVBinaryUtils )
list(APPEND _cmake_import_check_files_for_MLIRSPIRVBinaryUtils "${_IMPORT_PREFIX}/lib/libMLIRSPIRVBinaryUtils.a" )

# Import target "MLIRSPIRVTranslateRegistration" for configuration "Release"
set_property(TARGET MLIRSPIRVTranslateRegistration APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRSPIRVTranslateRegistration PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRSPIRVTranslateRegistration.a"
  )

list(APPEND _cmake_import_check_targets MLIRSPIRVTranslateRegistration )
list(APPEND _cmake_import_check_files_for_MLIRSPIRVTranslateRegistration "${_IMPORT_PREFIX}/lib/libMLIRSPIRVTranslateRegistration.a" )

# Import target "MLIRArmNeonToLLVMIRTranslation" for configuration "Release"
set_property(TARGET MLIRArmNeonToLLVMIRTranslation APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRArmNeonToLLVMIRTranslation PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRArmNeonToLLVMIRTranslation.a"
  )

list(APPEND _cmake_import_check_targets MLIRArmNeonToLLVMIRTranslation )
list(APPEND _cmake_import_check_files_for_MLIRArmNeonToLLVMIRTranslation "${_IMPORT_PREFIX}/lib/libMLIRArmNeonToLLVMIRTranslation.a" )

# Import target "MLIRArmSMEToLLVMIRTranslation" for configuration "Release"
set_property(TARGET MLIRArmSMEToLLVMIRTranslation APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRArmSMEToLLVMIRTranslation PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRArmSMEToLLVMIRTranslation.a"
  )

list(APPEND _cmake_import_check_targets MLIRArmSMEToLLVMIRTranslation )
list(APPEND _cmake_import_check_files_for_MLIRArmSMEToLLVMIRTranslation "${_IMPORT_PREFIX}/lib/libMLIRArmSMEToLLVMIRTranslation.a" )

# Import target "MLIRArmSVEToLLVMIRTranslation" for configuration "Release"
set_property(TARGET MLIRArmSVEToLLVMIRTranslation APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRArmSVEToLLVMIRTranslation PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRArmSVEToLLVMIRTranslation.a"
  )

list(APPEND _cmake_import_check_targets MLIRArmSVEToLLVMIRTranslation )
list(APPEND _cmake_import_check_files_for_MLIRArmSVEToLLVMIRTranslation "${_IMPORT_PREFIX}/lib/libMLIRArmSVEToLLVMIRTranslation.a" )

# Import target "MLIRAMXToLLVMIRTranslation" for configuration "Release"
set_property(TARGET MLIRAMXToLLVMIRTranslation APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRAMXToLLVMIRTranslation PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRAMXToLLVMIRTranslation.a"
  )

list(APPEND _cmake_import_check_targets MLIRAMXToLLVMIRTranslation )
list(APPEND _cmake_import_check_files_for_MLIRAMXToLLVMIRTranslation "${_IMPORT_PREFIX}/lib/libMLIRAMXToLLVMIRTranslation.a" )

# Import target "MLIRBuiltinToLLVMIRTranslation" for configuration "Release"
set_property(TARGET MLIRBuiltinToLLVMIRTranslation APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRBuiltinToLLVMIRTranslation PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRBuiltinToLLVMIRTranslation.a"
  )

list(APPEND _cmake_import_check_targets MLIRBuiltinToLLVMIRTranslation )
list(APPEND _cmake_import_check_files_for_MLIRBuiltinToLLVMIRTranslation "${_IMPORT_PREFIX}/lib/libMLIRBuiltinToLLVMIRTranslation.a" )

# Import target "MLIRGPUToLLVMIRTranslation" for configuration "Release"
set_property(TARGET MLIRGPUToLLVMIRTranslation APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRGPUToLLVMIRTranslation PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRGPUToLLVMIRTranslation.a"
  )

list(APPEND _cmake_import_check_targets MLIRGPUToLLVMIRTranslation )
list(APPEND _cmake_import_check_files_for_MLIRGPUToLLVMIRTranslation "${_IMPORT_PREFIX}/lib/libMLIRGPUToLLVMIRTranslation.a" )

# Import target "MLIRLLVMIRToLLVMTranslation" for configuration "Release"
set_property(TARGET MLIRLLVMIRToLLVMTranslation APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRLLVMIRToLLVMTranslation PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRLLVMIRToLLVMTranslation.a"
  )

list(APPEND _cmake_import_check_targets MLIRLLVMIRToLLVMTranslation )
list(APPEND _cmake_import_check_files_for_MLIRLLVMIRToLLVMTranslation "${_IMPORT_PREFIX}/lib/libMLIRLLVMIRToLLVMTranslation.a" )

# Import target "MLIRLLVMToLLVMIRTranslation" for configuration "Release"
set_property(TARGET MLIRLLVMToLLVMIRTranslation APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRLLVMToLLVMIRTranslation PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRLLVMToLLVMIRTranslation.a"
  )

list(APPEND _cmake_import_check_targets MLIRLLVMToLLVMIRTranslation )
list(APPEND _cmake_import_check_files_for_MLIRLLVMToLLVMIRTranslation "${_IMPORT_PREFIX}/lib/libMLIRLLVMToLLVMIRTranslation.a" )

# Import target "MLIRNVVMToLLVMIRTranslation" for configuration "Release"
set_property(TARGET MLIRNVVMToLLVMIRTranslation APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRNVVMToLLVMIRTranslation PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRNVVMToLLVMIRTranslation.a"
  )

list(APPEND _cmake_import_check_targets MLIRNVVMToLLVMIRTranslation )
list(APPEND _cmake_import_check_files_for_MLIRNVVMToLLVMIRTranslation "${_IMPORT_PREFIX}/lib/libMLIRNVVMToLLVMIRTranslation.a" )

# Import target "MLIROpenACCToLLVMIRTranslation" for configuration "Release"
set_property(TARGET MLIROpenACCToLLVMIRTranslation APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIROpenACCToLLVMIRTranslation PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIROpenACCToLLVMIRTranslation.a"
  )

list(APPEND _cmake_import_check_targets MLIROpenACCToLLVMIRTranslation )
list(APPEND _cmake_import_check_files_for_MLIROpenACCToLLVMIRTranslation "${_IMPORT_PREFIX}/lib/libMLIROpenACCToLLVMIRTranslation.a" )

# Import target "MLIROpenMPToLLVMIRTranslation" for configuration "Release"
set_property(TARGET MLIROpenMPToLLVMIRTranslation APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIROpenMPToLLVMIRTranslation PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIROpenMPToLLVMIRTranslation.a"
  )

list(APPEND _cmake_import_check_targets MLIROpenMPToLLVMIRTranslation )
list(APPEND _cmake_import_check_files_for_MLIROpenMPToLLVMIRTranslation "${_IMPORT_PREFIX}/lib/libMLIROpenMPToLLVMIRTranslation.a" )

# Import target "MLIRROCDLToLLVMIRTranslation" for configuration "Release"
set_property(TARGET MLIRROCDLToLLVMIRTranslation APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRROCDLToLLVMIRTranslation PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRROCDLToLLVMIRTranslation.a"
  )

list(APPEND _cmake_import_check_targets MLIRROCDLToLLVMIRTranslation )
list(APPEND _cmake_import_check_files_for_MLIRROCDLToLLVMIRTranslation "${_IMPORT_PREFIX}/lib/libMLIRROCDLToLLVMIRTranslation.a" )

# Import target "MLIRX86VectorToLLVMIRTranslation" for configuration "Release"
set_property(TARGET MLIRX86VectorToLLVMIRTranslation APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRX86VectorToLLVMIRTranslation PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRX86VectorToLLVMIRTranslation.a"
  )

list(APPEND _cmake_import_check_targets MLIRX86VectorToLLVMIRTranslation )
list(APPEND _cmake_import_check_files_for_MLIRX86VectorToLLVMIRTranslation "${_IMPORT_PREFIX}/lib/libMLIRX86VectorToLLVMIRTranslation.a" )

# Import target "MLIRTargetLLVMIRExport" for configuration "Release"
set_property(TARGET MLIRTargetLLVMIRExport APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRTargetLLVMIRExport PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRTargetLLVMIRExport.a"
  )

list(APPEND _cmake_import_check_targets MLIRTargetLLVMIRExport )
list(APPEND _cmake_import_check_files_for_MLIRTargetLLVMIRExport "${_IMPORT_PREFIX}/lib/libMLIRTargetLLVMIRExport.a" )

# Import target "MLIRToLLVMIRTranslationRegistration" for configuration "Release"
set_property(TARGET MLIRToLLVMIRTranslationRegistration APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRToLLVMIRTranslationRegistration PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRToLLVMIRTranslationRegistration.a"
  )

list(APPEND _cmake_import_check_targets MLIRToLLVMIRTranslationRegistration )
list(APPEND _cmake_import_check_files_for_MLIRToLLVMIRTranslationRegistration "${_IMPORT_PREFIX}/lib/libMLIRToLLVMIRTranslationRegistration.a" )

# Import target "MLIRTargetLLVMIRImport" for configuration "Release"
set_property(TARGET MLIRTargetLLVMIRImport APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRTargetLLVMIRImport PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRTargetLLVMIRImport.a"
  )

list(APPEND _cmake_import_check_targets MLIRTargetLLVMIRImport )
list(APPEND _cmake_import_check_files_for_MLIRTargetLLVMIRImport "${_IMPORT_PREFIX}/lib/libMLIRTargetLLVMIRImport.a" )

# Import target "MLIRFromLLVMIRTranslationRegistration" for configuration "Release"
set_property(TARGET MLIRFromLLVMIRTranslationRegistration APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRFromLLVMIRTranslationRegistration PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRFromLLVMIRTranslationRegistration.a"
  )

list(APPEND _cmake_import_check_targets MLIRFromLLVMIRTranslationRegistration )
list(APPEND _cmake_import_check_files_for_MLIRFromLLVMIRTranslationRegistration "${_IMPORT_PREFIX}/lib/libMLIRFromLLVMIRTranslationRegistration.a" )

# Import target "MLIRLspServerSupportLib" for configuration "Release"
set_property(TARGET MLIRLspServerSupportLib APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRLspServerSupportLib PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRLspServerSupportLib.a"
  )

list(APPEND _cmake_import_check_targets MLIRLspServerSupportLib )
list(APPEND _cmake_import_check_files_for_MLIRLspServerSupportLib "${_IMPORT_PREFIX}/lib/libMLIRLspServerSupportLib.a" )

# Import target "MLIRLspServerLib" for configuration "Release"
set_property(TARGET MLIRLspServerLib APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRLspServerLib PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRLspServerLib.a"
  )

list(APPEND _cmake_import_check_targets MLIRLspServerLib )
list(APPEND _cmake_import_check_files_for_MLIRLspServerLib "${_IMPORT_PREFIX}/lib/libMLIRLspServerLib.a" )

# Import target "MLIROptLib" for configuration "Release"
set_property(TARGET MLIROptLib APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIROptLib PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIROptLib.a"
  )

list(APPEND _cmake_import_check_targets MLIROptLib )
list(APPEND _cmake_import_check_files_for_MLIROptLib "${_IMPORT_PREFIX}/lib/libMLIROptLib.a" )

# Import target "MLIRReduceLib" for configuration "Release"
set_property(TARGET MLIRReduceLib APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRReduceLib PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRReduceLib.a"
  )

list(APPEND _cmake_import_check_targets MLIRReduceLib )
list(APPEND _cmake_import_check_files_for_MLIRReduceLib "${_IMPORT_PREFIX}/lib/libMLIRReduceLib.a" )

# Import target "MLIRTblgenLib" for configuration "Release"
set_property(TARGET MLIRTblgenLib APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRTblgenLib PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRTblgenLib.a"
  )

list(APPEND _cmake_import_check_targets MLIRTblgenLib )
list(APPEND _cmake_import_check_files_for_MLIRTblgenLib "${_IMPORT_PREFIX}/lib/libMLIRTblgenLib.a" )

# Import target "MLIRTranslateLib" for configuration "Release"
set_property(TARGET MLIRTranslateLib APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRTranslateLib PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRTranslateLib.a"
  )

list(APPEND _cmake_import_check_targets MLIRTranslateLib )
list(APPEND _cmake_import_check_files_for_MLIRTranslateLib "${_IMPORT_PREFIX}/lib/libMLIRTranslateLib.a" )

# Import target "MLIRPDLLAST" for configuration "Release"
set_property(TARGET MLIRPDLLAST APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRPDLLAST PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRPDLLAST.a"
  )

list(APPEND _cmake_import_check_targets MLIRPDLLAST )
list(APPEND _cmake_import_check_files_for_MLIRPDLLAST "${_IMPORT_PREFIX}/lib/libMLIRPDLLAST.a" )

# Import target "MLIRPDLLCodeGen" for configuration "Release"
set_property(TARGET MLIRPDLLCodeGen APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRPDLLCodeGen PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRPDLLCodeGen.a"
  )

list(APPEND _cmake_import_check_targets MLIRPDLLCodeGen )
list(APPEND _cmake_import_check_files_for_MLIRPDLLCodeGen "${_IMPORT_PREFIX}/lib/libMLIRPDLLCodeGen.a" )

# Import target "MLIRPDLLODS" for configuration "Release"
set_property(TARGET MLIRPDLLODS APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRPDLLODS PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRPDLLODS.a"
  )

list(APPEND _cmake_import_check_targets MLIRPDLLODS )
list(APPEND _cmake_import_check_files_for_MLIRPDLLODS "${_IMPORT_PREFIX}/lib/libMLIRPDLLODS.a" )

# Import target "MLIRPluginsLib" for configuration "Release"
set_property(TARGET MLIRPluginsLib APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRPluginsLib PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRPluginsLib.a"
  )

list(APPEND _cmake_import_check_targets MLIRPluginsLib )
list(APPEND _cmake_import_check_files_for_MLIRPluginsLib "${_IMPORT_PREFIX}/lib/libMLIRPluginsLib.a" )

# Import target "MLIRTransformUtils" for configuration "Release"
set_property(TARGET MLIRTransformUtils APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRTransformUtils PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRTransformUtils.a"
  )

list(APPEND _cmake_import_check_targets MLIRTransformUtils )
list(APPEND _cmake_import_check_files_for_MLIRTransformUtils "${_IMPORT_PREFIX}/lib/libMLIRTransformUtils.a" )

# Import target "MLIRTransforms" for configuration "Release"
set_property(TARGET MLIRTransforms APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRTransforms PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRTransforms.a"
  )

list(APPEND _cmake_import_check_targets MLIRTransforms )
list(APPEND _cmake_import_check_files_for_MLIRTransforms "${_IMPORT_PREFIX}/lib/libMLIRTransforms.a" )

# Import target "MLIRExecutionEngineUtils" for configuration "Release"
set_property(TARGET MLIRExecutionEngineUtils APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRExecutionEngineUtils PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRExecutionEngineUtils.a"
  )

list(APPEND _cmake_import_check_targets MLIRExecutionEngineUtils )
list(APPEND _cmake_import_check_files_for_MLIRExecutionEngineUtils "${_IMPORT_PREFIX}/lib/libMLIRExecutionEngineUtils.a" )

# Import target "MLIRExecutionEngine" for configuration "Release"
set_property(TARGET MLIRExecutionEngine APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRExecutionEngine PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRExecutionEngine.a"
  )

list(APPEND _cmake_import_check_targets MLIRExecutionEngine )
list(APPEND _cmake_import_check_files_for_MLIRExecutionEngine "${_IMPORT_PREFIX}/lib/libMLIRExecutionEngine.a" )

# Import target "MLIRJitRunner" for configuration "Release"
set_property(TARGET MLIRJitRunner APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRJitRunner PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRJitRunner.a"
  )

list(APPEND _cmake_import_check_targets MLIRJitRunner )
list(APPEND _cmake_import_check_files_for_MLIRJitRunner "${_IMPORT_PREFIX}/lib/libMLIRJitRunner.a" )

# Import target "mlir_float16_utils" for configuration "Release"
set_property(TARGET mlir_float16_utils APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(mlir_float16_utils PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libmlir_float16_utils.so.17"
  IMPORTED_SONAME_RELEASE "libmlir_float16_utils.so.17"
  )

list(APPEND _cmake_import_check_targets mlir_float16_utils )
list(APPEND _cmake_import_check_files_for_mlir_float16_utils "${_IMPORT_PREFIX}/lib/libmlir_float16_utils.so.17" )

# Import target "MLIRSparseTensorRuntime" for configuration "Release"
set_property(TARGET MLIRSparseTensorRuntime APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRSparseTensorRuntime PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRSparseTensorRuntime.a"
  )

list(APPEND _cmake_import_check_targets MLIRSparseTensorRuntime )
list(APPEND _cmake_import_check_files_for_MLIRSparseTensorRuntime "${_IMPORT_PREFIX}/lib/libMLIRSparseTensorRuntime.a" )

# Import target "mlir_c_runner_utils" for configuration "Release"
set_property(TARGET mlir_c_runner_utils APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(mlir_c_runner_utils PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libmlir_c_runner_utils.so.17"
  IMPORTED_SONAME_RELEASE "libmlir_c_runner_utils.so.17"
  )

list(APPEND _cmake_import_check_targets mlir_c_runner_utils )
list(APPEND _cmake_import_check_files_for_mlir_c_runner_utils "${_IMPORT_PREFIX}/lib/libmlir_c_runner_utils.so.17" )

# Import target "mlir_runner_utils" for configuration "Release"
set_property(TARGET mlir_runner_utils APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(mlir_runner_utils PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libmlir_runner_utils.so.17"
  IMPORTED_SONAME_RELEASE "libmlir_runner_utils.so.17"
  )

list(APPEND _cmake_import_check_targets mlir_runner_utils )
list(APPEND _cmake_import_check_files_for_mlir_runner_utils "${_IMPORT_PREFIX}/lib/libmlir_runner_utils.so.17" )

# Import target "mlir_async_runtime" for configuration "Release"
set_property(TARGET mlir_async_runtime APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(mlir_async_runtime PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libmlir_async_runtime.so.17"
  IMPORTED_SONAME_RELEASE "libmlir_async_runtime.so.17"
  )

list(APPEND _cmake_import_check_targets mlir_async_runtime )
list(APPEND _cmake_import_check_files_for_mlir_async_runtime "${_IMPORT_PREFIX}/lib/libmlir_async_runtime.so.17" )

# Import target "MLIRCAPIDebug" for configuration "Release"
set_property(TARGET MLIRCAPIDebug APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRCAPIDebug PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRCAPIDebug.a"
  )

list(APPEND _cmake_import_check_targets MLIRCAPIDebug )
list(APPEND _cmake_import_check_files_for_MLIRCAPIDebug "${_IMPORT_PREFIX}/lib/libMLIRCAPIDebug.a" )

# Import target "obj.MLIRCAPIDebug" for configuration "Release"
set_property(TARGET obj.MLIRCAPIDebug APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(obj.MLIRCAPIDebug PROPERTIES
  IMPORTED_COMMON_LANGUAGE_RUNTIME_RELEASE ""
  IMPORTED_OBJECTS_RELEASE "${_IMPORT_PREFIX}/lib/objects-Release/obj.MLIRCAPIDebug/Debug.cpp.o"
  )

list(APPEND _cmake_import_check_targets obj.MLIRCAPIDebug )
list(APPEND _cmake_import_check_files_for_obj.MLIRCAPIDebug "${_IMPORT_PREFIX}/lib/objects-Release/obj.MLIRCAPIDebug/Debug.cpp.o" )

# Import target "MLIRCAPIArith" for configuration "Release"
set_property(TARGET MLIRCAPIArith APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRCAPIArith PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRCAPIArith.a"
  )

list(APPEND _cmake_import_check_targets MLIRCAPIArith )
list(APPEND _cmake_import_check_files_for_MLIRCAPIArith "${_IMPORT_PREFIX}/lib/libMLIRCAPIArith.a" )

# Import target "obj.MLIRCAPIArith" for configuration "Release"
set_property(TARGET obj.MLIRCAPIArith APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(obj.MLIRCAPIArith PROPERTIES
  IMPORTED_COMMON_LANGUAGE_RUNTIME_RELEASE ""
  IMPORTED_OBJECTS_RELEASE "${_IMPORT_PREFIX}/lib/objects-Release/obj.MLIRCAPIArith/Arith.cpp.o"
  )

list(APPEND _cmake_import_check_targets obj.MLIRCAPIArith )
list(APPEND _cmake_import_check_files_for_obj.MLIRCAPIArith "${_IMPORT_PREFIX}/lib/objects-Release/obj.MLIRCAPIArith/Arith.cpp.o" )

# Import target "MLIRCAPIAsync" for configuration "Release"
set_property(TARGET MLIRCAPIAsync APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRCAPIAsync PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRCAPIAsync.a"
  )

list(APPEND _cmake_import_check_targets MLIRCAPIAsync )
list(APPEND _cmake_import_check_files_for_MLIRCAPIAsync "${_IMPORT_PREFIX}/lib/libMLIRCAPIAsync.a" )

# Import target "obj.MLIRCAPIAsync" for configuration "Release"
set_property(TARGET obj.MLIRCAPIAsync APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(obj.MLIRCAPIAsync PROPERTIES
  IMPORTED_COMMON_LANGUAGE_RUNTIME_RELEASE ""
  IMPORTED_OBJECTS_RELEASE "${_IMPORT_PREFIX}/lib/objects-Release/obj.MLIRCAPIAsync/Async.cpp.o;${_IMPORT_PREFIX}/lib/objects-Release/obj.MLIRCAPIAsync/AsyncPasses.cpp.o"
  )

list(APPEND _cmake_import_check_targets obj.MLIRCAPIAsync )
list(APPEND _cmake_import_check_files_for_obj.MLIRCAPIAsync "${_IMPORT_PREFIX}/lib/objects-Release/obj.MLIRCAPIAsync/Async.cpp.o;${_IMPORT_PREFIX}/lib/objects-Release/obj.MLIRCAPIAsync/AsyncPasses.cpp.o" )

# Import target "MLIRCAPIControlFlow" for configuration "Release"
set_property(TARGET MLIRCAPIControlFlow APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRCAPIControlFlow PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRCAPIControlFlow.a"
  )

list(APPEND _cmake_import_check_targets MLIRCAPIControlFlow )
list(APPEND _cmake_import_check_files_for_MLIRCAPIControlFlow "${_IMPORT_PREFIX}/lib/libMLIRCAPIControlFlow.a" )

# Import target "obj.MLIRCAPIControlFlow" for configuration "Release"
set_property(TARGET obj.MLIRCAPIControlFlow APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(obj.MLIRCAPIControlFlow PROPERTIES
  IMPORTED_COMMON_LANGUAGE_RUNTIME_RELEASE ""
  IMPORTED_OBJECTS_RELEASE "${_IMPORT_PREFIX}/lib/objects-Release/obj.MLIRCAPIControlFlow/ControlFlow.cpp.o"
  )

list(APPEND _cmake_import_check_targets obj.MLIRCAPIControlFlow )
list(APPEND _cmake_import_check_files_for_obj.MLIRCAPIControlFlow "${_IMPORT_PREFIX}/lib/objects-Release/obj.MLIRCAPIControlFlow/ControlFlow.cpp.o" )

# Import target "MLIRCAPIMath" for configuration "Release"
set_property(TARGET MLIRCAPIMath APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRCAPIMath PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRCAPIMath.a"
  )

list(APPEND _cmake_import_check_targets MLIRCAPIMath )
list(APPEND _cmake_import_check_files_for_MLIRCAPIMath "${_IMPORT_PREFIX}/lib/libMLIRCAPIMath.a" )

# Import target "obj.MLIRCAPIMath" for configuration "Release"
set_property(TARGET obj.MLIRCAPIMath APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(obj.MLIRCAPIMath PROPERTIES
  IMPORTED_COMMON_LANGUAGE_RUNTIME_RELEASE ""
  IMPORTED_OBJECTS_RELEASE "${_IMPORT_PREFIX}/lib/objects-Release/obj.MLIRCAPIMath/Math.cpp.o"
  )

list(APPEND _cmake_import_check_targets obj.MLIRCAPIMath )
list(APPEND _cmake_import_check_files_for_obj.MLIRCAPIMath "${_IMPORT_PREFIX}/lib/objects-Release/obj.MLIRCAPIMath/Math.cpp.o" )

# Import target "MLIRCAPIMemRef" for configuration "Release"
set_property(TARGET MLIRCAPIMemRef APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRCAPIMemRef PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRCAPIMemRef.a"
  )

list(APPEND _cmake_import_check_targets MLIRCAPIMemRef )
list(APPEND _cmake_import_check_files_for_MLIRCAPIMemRef "${_IMPORT_PREFIX}/lib/libMLIRCAPIMemRef.a" )

# Import target "obj.MLIRCAPIMemRef" for configuration "Release"
set_property(TARGET obj.MLIRCAPIMemRef APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(obj.MLIRCAPIMemRef PROPERTIES
  IMPORTED_COMMON_LANGUAGE_RUNTIME_RELEASE ""
  IMPORTED_OBJECTS_RELEASE "${_IMPORT_PREFIX}/lib/objects-Release/obj.MLIRCAPIMemRef/MemRef.cpp.o"
  )

list(APPEND _cmake_import_check_targets obj.MLIRCAPIMemRef )
list(APPEND _cmake_import_check_files_for_obj.MLIRCAPIMemRef "${_IMPORT_PREFIX}/lib/objects-Release/obj.MLIRCAPIMemRef/MemRef.cpp.o" )

# Import target "MLIRCAPIGPU" for configuration "Release"
set_property(TARGET MLIRCAPIGPU APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRCAPIGPU PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRCAPIGPU.a"
  )

list(APPEND _cmake_import_check_targets MLIRCAPIGPU )
list(APPEND _cmake_import_check_files_for_MLIRCAPIGPU "${_IMPORT_PREFIX}/lib/libMLIRCAPIGPU.a" )

# Import target "obj.MLIRCAPIGPU" for configuration "Release"
set_property(TARGET obj.MLIRCAPIGPU APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(obj.MLIRCAPIGPU PROPERTIES
  IMPORTED_COMMON_LANGUAGE_RUNTIME_RELEASE ""
  IMPORTED_OBJECTS_RELEASE "${_IMPORT_PREFIX}/lib/objects-Release/obj.MLIRCAPIGPU/GPU.cpp.o;${_IMPORT_PREFIX}/lib/objects-Release/obj.MLIRCAPIGPU/GPUPasses.cpp.o"
  )

list(APPEND _cmake_import_check_targets obj.MLIRCAPIGPU )
list(APPEND _cmake_import_check_files_for_obj.MLIRCAPIGPU "${_IMPORT_PREFIX}/lib/objects-Release/obj.MLIRCAPIGPU/GPU.cpp.o;${_IMPORT_PREFIX}/lib/objects-Release/obj.MLIRCAPIGPU/GPUPasses.cpp.o" )

# Import target "MLIRCAPILLVM" for configuration "Release"
set_property(TARGET MLIRCAPILLVM APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRCAPILLVM PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRCAPILLVM.a"
  )

list(APPEND _cmake_import_check_targets MLIRCAPILLVM )
list(APPEND _cmake_import_check_files_for_MLIRCAPILLVM "${_IMPORT_PREFIX}/lib/libMLIRCAPILLVM.a" )

# Import target "obj.MLIRCAPILLVM" for configuration "Release"
set_property(TARGET obj.MLIRCAPILLVM APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(obj.MLIRCAPILLVM PROPERTIES
  IMPORTED_COMMON_LANGUAGE_RUNTIME_RELEASE ""
  IMPORTED_OBJECTS_RELEASE "${_IMPORT_PREFIX}/lib/objects-Release/obj.MLIRCAPILLVM/LLVM.cpp.o"
  )

list(APPEND _cmake_import_check_targets obj.MLIRCAPILLVM )
list(APPEND _cmake_import_check_files_for_obj.MLIRCAPILLVM "${_IMPORT_PREFIX}/lib/objects-Release/obj.MLIRCAPILLVM/LLVM.cpp.o" )

# Import target "MLIRCAPILinalg" for configuration "Release"
set_property(TARGET MLIRCAPILinalg APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRCAPILinalg PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRCAPILinalg.a"
  )

list(APPEND _cmake_import_check_targets MLIRCAPILinalg )
list(APPEND _cmake_import_check_files_for_MLIRCAPILinalg "${_IMPORT_PREFIX}/lib/libMLIRCAPILinalg.a" )

# Import target "obj.MLIRCAPILinalg" for configuration "Release"
set_property(TARGET obj.MLIRCAPILinalg APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(obj.MLIRCAPILinalg PROPERTIES
  IMPORTED_COMMON_LANGUAGE_RUNTIME_RELEASE ""
  IMPORTED_OBJECTS_RELEASE "${_IMPORT_PREFIX}/lib/objects-Release/obj.MLIRCAPILinalg/Linalg.cpp.o;${_IMPORT_PREFIX}/lib/objects-Release/obj.MLIRCAPILinalg/LinalgPasses.cpp.o"
  )

list(APPEND _cmake_import_check_targets obj.MLIRCAPILinalg )
list(APPEND _cmake_import_check_files_for_obj.MLIRCAPILinalg "${_IMPORT_PREFIX}/lib/objects-Release/obj.MLIRCAPILinalg/Linalg.cpp.o;${_IMPORT_PREFIX}/lib/objects-Release/obj.MLIRCAPILinalg/LinalgPasses.cpp.o" )

# Import target "MLIRCAPIMLProgram" for configuration "Release"
set_property(TARGET MLIRCAPIMLProgram APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRCAPIMLProgram PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRCAPIMLProgram.a"
  )

list(APPEND _cmake_import_check_targets MLIRCAPIMLProgram )
list(APPEND _cmake_import_check_files_for_MLIRCAPIMLProgram "${_IMPORT_PREFIX}/lib/libMLIRCAPIMLProgram.a" )

# Import target "obj.MLIRCAPIMLProgram" for configuration "Release"
set_property(TARGET obj.MLIRCAPIMLProgram APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(obj.MLIRCAPIMLProgram PROPERTIES
  IMPORTED_COMMON_LANGUAGE_RUNTIME_RELEASE ""
  IMPORTED_OBJECTS_RELEASE "${_IMPORT_PREFIX}/lib/objects-Release/obj.MLIRCAPIMLProgram/MLProgram.cpp.o"
  )

list(APPEND _cmake_import_check_targets obj.MLIRCAPIMLProgram )
list(APPEND _cmake_import_check_files_for_obj.MLIRCAPIMLProgram "${_IMPORT_PREFIX}/lib/objects-Release/obj.MLIRCAPIMLProgram/MLProgram.cpp.o" )

# Import target "MLIRCAPISCF" for configuration "Release"
set_property(TARGET MLIRCAPISCF APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRCAPISCF PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRCAPISCF.a"
  )

list(APPEND _cmake_import_check_targets MLIRCAPISCF )
list(APPEND _cmake_import_check_files_for_MLIRCAPISCF "${_IMPORT_PREFIX}/lib/libMLIRCAPISCF.a" )

# Import target "obj.MLIRCAPISCF" for configuration "Release"
set_property(TARGET obj.MLIRCAPISCF APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(obj.MLIRCAPISCF PROPERTIES
  IMPORTED_COMMON_LANGUAGE_RUNTIME_RELEASE ""
  IMPORTED_OBJECTS_RELEASE "${_IMPORT_PREFIX}/lib/objects-Release/obj.MLIRCAPISCF/SCF.cpp.o"
  )

list(APPEND _cmake_import_check_targets obj.MLIRCAPISCF )
list(APPEND _cmake_import_check_files_for_obj.MLIRCAPISCF "${_IMPORT_PREFIX}/lib/objects-Release/obj.MLIRCAPISCF/SCF.cpp.o" )

# Import target "MLIRCAPIShape" for configuration "Release"
set_property(TARGET MLIRCAPIShape APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRCAPIShape PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRCAPIShape.a"
  )

list(APPEND _cmake_import_check_targets MLIRCAPIShape )
list(APPEND _cmake_import_check_files_for_MLIRCAPIShape "${_IMPORT_PREFIX}/lib/libMLIRCAPIShape.a" )

# Import target "obj.MLIRCAPIShape" for configuration "Release"
set_property(TARGET obj.MLIRCAPIShape APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(obj.MLIRCAPIShape PROPERTIES
  IMPORTED_COMMON_LANGUAGE_RUNTIME_RELEASE ""
  IMPORTED_OBJECTS_RELEASE "${_IMPORT_PREFIX}/lib/objects-Release/obj.MLIRCAPIShape/Shape.cpp.o"
  )

list(APPEND _cmake_import_check_targets obj.MLIRCAPIShape )
list(APPEND _cmake_import_check_files_for_obj.MLIRCAPIShape "${_IMPORT_PREFIX}/lib/objects-Release/obj.MLIRCAPIShape/Shape.cpp.o" )

# Import target "MLIRCAPISparseTensor" for configuration "Release"
set_property(TARGET MLIRCAPISparseTensor APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRCAPISparseTensor PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRCAPISparseTensor.a"
  )

list(APPEND _cmake_import_check_targets MLIRCAPISparseTensor )
list(APPEND _cmake_import_check_files_for_MLIRCAPISparseTensor "${_IMPORT_PREFIX}/lib/libMLIRCAPISparseTensor.a" )

# Import target "obj.MLIRCAPISparseTensor" for configuration "Release"
set_property(TARGET obj.MLIRCAPISparseTensor APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(obj.MLIRCAPISparseTensor PROPERTIES
  IMPORTED_COMMON_LANGUAGE_RUNTIME_RELEASE ""
  IMPORTED_OBJECTS_RELEASE "${_IMPORT_PREFIX}/lib/objects-Release/obj.MLIRCAPISparseTensor/SparseTensor.cpp.o;${_IMPORT_PREFIX}/lib/objects-Release/obj.MLIRCAPISparseTensor/SparseTensorPasses.cpp.o"
  )

list(APPEND _cmake_import_check_targets obj.MLIRCAPISparseTensor )
list(APPEND _cmake_import_check_files_for_obj.MLIRCAPISparseTensor "${_IMPORT_PREFIX}/lib/objects-Release/obj.MLIRCAPISparseTensor/SparseTensor.cpp.o;${_IMPORT_PREFIX}/lib/objects-Release/obj.MLIRCAPISparseTensor/SparseTensorPasses.cpp.o" )

# Import target "MLIRCAPIFunc" for configuration "Release"
set_property(TARGET MLIRCAPIFunc APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRCAPIFunc PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRCAPIFunc.a"
  )

list(APPEND _cmake_import_check_targets MLIRCAPIFunc )
list(APPEND _cmake_import_check_files_for_MLIRCAPIFunc "${_IMPORT_PREFIX}/lib/libMLIRCAPIFunc.a" )

# Import target "obj.MLIRCAPIFunc" for configuration "Release"
set_property(TARGET obj.MLIRCAPIFunc APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(obj.MLIRCAPIFunc PROPERTIES
  IMPORTED_COMMON_LANGUAGE_RUNTIME_RELEASE ""
  IMPORTED_OBJECTS_RELEASE "${_IMPORT_PREFIX}/lib/objects-Release/obj.MLIRCAPIFunc/Func.cpp.o"
  )

list(APPEND _cmake_import_check_targets obj.MLIRCAPIFunc )
list(APPEND _cmake_import_check_files_for_obj.MLIRCAPIFunc "${_IMPORT_PREFIX}/lib/objects-Release/obj.MLIRCAPIFunc/Func.cpp.o" )

# Import target "MLIRCAPITensor" for configuration "Release"
set_property(TARGET MLIRCAPITensor APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRCAPITensor PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRCAPITensor.a"
  )

list(APPEND _cmake_import_check_targets MLIRCAPITensor )
list(APPEND _cmake_import_check_files_for_MLIRCAPITensor "${_IMPORT_PREFIX}/lib/libMLIRCAPITensor.a" )

# Import target "obj.MLIRCAPITensor" for configuration "Release"
set_property(TARGET obj.MLIRCAPITensor APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(obj.MLIRCAPITensor PROPERTIES
  IMPORTED_COMMON_LANGUAGE_RUNTIME_RELEASE ""
  IMPORTED_OBJECTS_RELEASE "${_IMPORT_PREFIX}/lib/objects-Release/obj.MLIRCAPITensor/Tensor.cpp.o"
  )

list(APPEND _cmake_import_check_targets obj.MLIRCAPITensor )
list(APPEND _cmake_import_check_files_for_obj.MLIRCAPITensor "${_IMPORT_PREFIX}/lib/objects-Release/obj.MLIRCAPITensor/Tensor.cpp.o" )

# Import target "MLIRCAPITransformDialect" for configuration "Release"
set_property(TARGET MLIRCAPITransformDialect APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRCAPITransformDialect PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRCAPITransformDialect.a"
  )

list(APPEND _cmake_import_check_targets MLIRCAPITransformDialect )
list(APPEND _cmake_import_check_files_for_MLIRCAPITransformDialect "${_IMPORT_PREFIX}/lib/libMLIRCAPITransformDialect.a" )

# Import target "obj.MLIRCAPITransformDialect" for configuration "Release"
set_property(TARGET obj.MLIRCAPITransformDialect APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(obj.MLIRCAPITransformDialect PROPERTIES
  IMPORTED_COMMON_LANGUAGE_RUNTIME_RELEASE ""
  IMPORTED_OBJECTS_RELEASE "${_IMPORT_PREFIX}/lib/objects-Release/obj.MLIRCAPITransformDialect/Transform.cpp.o"
  )

list(APPEND _cmake_import_check_targets obj.MLIRCAPITransformDialect )
list(APPEND _cmake_import_check_files_for_obj.MLIRCAPITransformDialect "${_IMPORT_PREFIX}/lib/objects-Release/obj.MLIRCAPITransformDialect/Transform.cpp.o" )

# Import target "MLIRCAPIQuant" for configuration "Release"
set_property(TARGET MLIRCAPIQuant APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRCAPIQuant PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRCAPIQuant.a"
  )

list(APPEND _cmake_import_check_targets MLIRCAPIQuant )
list(APPEND _cmake_import_check_files_for_MLIRCAPIQuant "${_IMPORT_PREFIX}/lib/libMLIRCAPIQuant.a" )

# Import target "obj.MLIRCAPIQuant" for configuration "Release"
set_property(TARGET obj.MLIRCAPIQuant APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(obj.MLIRCAPIQuant PROPERTIES
  IMPORTED_COMMON_LANGUAGE_RUNTIME_RELEASE ""
  IMPORTED_OBJECTS_RELEASE "${_IMPORT_PREFIX}/lib/objects-Release/obj.MLIRCAPIQuant/Quant.cpp.o"
  )

list(APPEND _cmake_import_check_targets obj.MLIRCAPIQuant )
list(APPEND _cmake_import_check_files_for_obj.MLIRCAPIQuant "${_IMPORT_PREFIX}/lib/objects-Release/obj.MLIRCAPIQuant/Quant.cpp.o" )

# Import target "MLIRCAPIPDL" for configuration "Release"
set_property(TARGET MLIRCAPIPDL APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRCAPIPDL PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRCAPIPDL.a"
  )

list(APPEND _cmake_import_check_targets MLIRCAPIPDL )
list(APPEND _cmake_import_check_files_for_MLIRCAPIPDL "${_IMPORT_PREFIX}/lib/libMLIRCAPIPDL.a" )

# Import target "obj.MLIRCAPIPDL" for configuration "Release"
set_property(TARGET obj.MLIRCAPIPDL APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(obj.MLIRCAPIPDL PROPERTIES
  IMPORTED_COMMON_LANGUAGE_RUNTIME_RELEASE ""
  IMPORTED_OBJECTS_RELEASE "${_IMPORT_PREFIX}/lib/objects-Release/obj.MLIRCAPIPDL/PDL.cpp.o"
  )

list(APPEND _cmake_import_check_targets obj.MLIRCAPIPDL )
list(APPEND _cmake_import_check_files_for_obj.MLIRCAPIPDL "${_IMPORT_PREFIX}/lib/objects-Release/obj.MLIRCAPIPDL/PDL.cpp.o" )

# Import target "MLIRCAPIVector" for configuration "Release"
set_property(TARGET MLIRCAPIVector APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRCAPIVector PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRCAPIVector.a"
  )

list(APPEND _cmake_import_check_targets MLIRCAPIVector )
list(APPEND _cmake_import_check_files_for_MLIRCAPIVector "${_IMPORT_PREFIX}/lib/libMLIRCAPIVector.a" )

# Import target "obj.MLIRCAPIVector" for configuration "Release"
set_property(TARGET obj.MLIRCAPIVector APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(obj.MLIRCAPIVector PROPERTIES
  IMPORTED_COMMON_LANGUAGE_RUNTIME_RELEASE ""
  IMPORTED_OBJECTS_RELEASE "${_IMPORT_PREFIX}/lib/objects-Release/obj.MLIRCAPIVector/Vector.cpp.o"
  )

list(APPEND _cmake_import_check_targets obj.MLIRCAPIVector )
list(APPEND _cmake_import_check_files_for_obj.MLIRCAPIVector "${_IMPORT_PREFIX}/lib/objects-Release/obj.MLIRCAPIVector/Vector.cpp.o" )

# Import target "MLIRCAPIConversion" for configuration "Release"
set_property(TARGET MLIRCAPIConversion APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRCAPIConversion PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRCAPIConversion.a"
  )

list(APPEND _cmake_import_check_targets MLIRCAPIConversion )
list(APPEND _cmake_import_check_files_for_MLIRCAPIConversion "${_IMPORT_PREFIX}/lib/libMLIRCAPIConversion.a" )

# Import target "obj.MLIRCAPIConversion" for configuration "Release"
set_property(TARGET obj.MLIRCAPIConversion APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(obj.MLIRCAPIConversion PROPERTIES
  IMPORTED_COMMON_LANGUAGE_RUNTIME_RELEASE ""
  IMPORTED_OBJECTS_RELEASE "${_IMPORT_PREFIX}/lib/objects-Release/obj.MLIRCAPIConversion/Passes.cpp.o"
  )

list(APPEND _cmake_import_check_targets obj.MLIRCAPIConversion )
list(APPEND _cmake_import_check_files_for_obj.MLIRCAPIConversion "${_IMPORT_PREFIX}/lib/objects-Release/obj.MLIRCAPIConversion/Passes.cpp.o" )

# Import target "MLIRCAPIInterfaces" for configuration "Release"
set_property(TARGET MLIRCAPIInterfaces APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRCAPIInterfaces PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRCAPIInterfaces.a"
  )

list(APPEND _cmake_import_check_targets MLIRCAPIInterfaces )
list(APPEND _cmake_import_check_files_for_MLIRCAPIInterfaces "${_IMPORT_PREFIX}/lib/libMLIRCAPIInterfaces.a" )

# Import target "obj.MLIRCAPIInterfaces" for configuration "Release"
set_property(TARGET obj.MLIRCAPIInterfaces APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(obj.MLIRCAPIInterfaces PROPERTIES
  IMPORTED_COMMON_LANGUAGE_RUNTIME_RELEASE ""
  IMPORTED_OBJECTS_RELEASE "${_IMPORT_PREFIX}/lib/objects-Release/obj.MLIRCAPIInterfaces/Interfaces.cpp.o"
  )

list(APPEND _cmake_import_check_targets obj.MLIRCAPIInterfaces )
list(APPEND _cmake_import_check_files_for_obj.MLIRCAPIInterfaces "${_IMPORT_PREFIX}/lib/objects-Release/obj.MLIRCAPIInterfaces/Interfaces.cpp.o" )

# Import target "MLIRCAPIIR" for configuration "Release"
set_property(TARGET MLIRCAPIIR APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRCAPIIR PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRCAPIIR.a"
  )

list(APPEND _cmake_import_check_targets MLIRCAPIIR )
list(APPEND _cmake_import_check_files_for_MLIRCAPIIR "${_IMPORT_PREFIX}/lib/libMLIRCAPIIR.a" )

# Import target "obj.MLIRCAPIIR" for configuration "Release"
set_property(TARGET obj.MLIRCAPIIR APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(obj.MLIRCAPIIR PROPERTIES
  IMPORTED_COMMON_LANGUAGE_RUNTIME_RELEASE ""
  IMPORTED_OBJECTS_RELEASE "${_IMPORT_PREFIX}/lib/objects-Release/obj.MLIRCAPIIR/AffineExpr.cpp.o;${_IMPORT_PREFIX}/lib/objects-Release/obj.MLIRCAPIIR/AffineMap.cpp.o;${_IMPORT_PREFIX}/lib/objects-Release/obj.MLIRCAPIIR/BuiltinAttributes.cpp.o;${_IMPORT_PREFIX}/lib/objects-Release/obj.MLIRCAPIIR/BuiltinTypes.cpp.o;${_IMPORT_PREFIX}/lib/objects-Release/obj.MLIRCAPIIR/Diagnostics.cpp.o;${_IMPORT_PREFIX}/lib/objects-Release/obj.MLIRCAPIIR/DialectHandle.cpp.o;${_IMPORT_PREFIX}/lib/objects-Release/obj.MLIRCAPIIR/IntegerSet.cpp.o;${_IMPORT_PREFIX}/lib/objects-Release/obj.MLIRCAPIIR/IR.cpp.o;${_IMPORT_PREFIX}/lib/objects-Release/obj.MLIRCAPIIR/Pass.cpp.o;${_IMPORT_PREFIX}/lib/objects-Release/obj.MLIRCAPIIR/Support.cpp.o"
  )

list(APPEND _cmake_import_check_targets obj.MLIRCAPIIR )
list(APPEND _cmake_import_check_files_for_obj.MLIRCAPIIR "${_IMPORT_PREFIX}/lib/objects-Release/obj.MLIRCAPIIR/AffineExpr.cpp.o;${_IMPORT_PREFIX}/lib/objects-Release/obj.MLIRCAPIIR/AffineMap.cpp.o;${_IMPORT_PREFIX}/lib/objects-Release/obj.MLIRCAPIIR/BuiltinAttributes.cpp.o;${_IMPORT_PREFIX}/lib/objects-Release/obj.MLIRCAPIIR/BuiltinTypes.cpp.o;${_IMPORT_PREFIX}/lib/objects-Release/obj.MLIRCAPIIR/Diagnostics.cpp.o;${_IMPORT_PREFIX}/lib/objects-Release/obj.MLIRCAPIIR/DialectHandle.cpp.o;${_IMPORT_PREFIX}/lib/objects-Release/obj.MLIRCAPIIR/IntegerSet.cpp.o;${_IMPORT_PREFIX}/lib/objects-Release/obj.MLIRCAPIIR/IR.cpp.o;${_IMPORT_PREFIX}/lib/objects-Release/obj.MLIRCAPIIR/Pass.cpp.o;${_IMPORT_PREFIX}/lib/objects-Release/obj.MLIRCAPIIR/Support.cpp.o" )

# Import target "MLIRCAPIRegisterEverything" for configuration "Release"
set_property(TARGET MLIRCAPIRegisterEverything APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRCAPIRegisterEverything PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRCAPIRegisterEverything.a"
  )

list(APPEND _cmake_import_check_targets MLIRCAPIRegisterEverything )
list(APPEND _cmake_import_check_files_for_MLIRCAPIRegisterEverything "${_IMPORT_PREFIX}/lib/libMLIRCAPIRegisterEverything.a" )

# Import target "obj.MLIRCAPIRegisterEverything" for configuration "Release"
set_property(TARGET obj.MLIRCAPIRegisterEverything APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(obj.MLIRCAPIRegisterEverything PROPERTIES
  IMPORTED_COMMON_LANGUAGE_RUNTIME_RELEASE ""
  IMPORTED_OBJECTS_RELEASE "${_IMPORT_PREFIX}/lib/objects-Release/obj.MLIRCAPIRegisterEverything/RegisterEverything.cpp.o"
  )

list(APPEND _cmake_import_check_targets obj.MLIRCAPIRegisterEverything )
list(APPEND _cmake_import_check_files_for_obj.MLIRCAPIRegisterEverything "${_IMPORT_PREFIX}/lib/objects-Release/obj.MLIRCAPIRegisterEverything/RegisterEverything.cpp.o" )

# Import target "MLIRCAPITransforms" for configuration "Release"
set_property(TARGET MLIRCAPITransforms APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRCAPITransforms PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRCAPITransforms.a"
  )

list(APPEND _cmake_import_check_targets MLIRCAPITransforms )
list(APPEND _cmake_import_check_files_for_MLIRCAPITransforms "${_IMPORT_PREFIX}/lib/libMLIRCAPITransforms.a" )

# Import target "obj.MLIRCAPITransforms" for configuration "Release"
set_property(TARGET obj.MLIRCAPITransforms APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(obj.MLIRCAPITransforms PROPERTIES
  IMPORTED_COMMON_LANGUAGE_RUNTIME_RELEASE ""
  IMPORTED_OBJECTS_RELEASE "${_IMPORT_PREFIX}/lib/objects-Release/obj.MLIRCAPITransforms/Passes.cpp.o"
  )

list(APPEND _cmake_import_check_targets obj.MLIRCAPITransforms )
list(APPEND _cmake_import_check_files_for_obj.MLIRCAPITransforms "${_IMPORT_PREFIX}/lib/objects-Release/obj.MLIRCAPITransforms/Passes.cpp.o" )

# Import target "MLIRCAPIExecutionEngine" for configuration "Release"
set_property(TARGET MLIRCAPIExecutionEngine APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRCAPIExecutionEngine PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRCAPIExecutionEngine.a"
  )

list(APPEND _cmake_import_check_targets MLIRCAPIExecutionEngine )
list(APPEND _cmake_import_check_files_for_MLIRCAPIExecutionEngine "${_IMPORT_PREFIX}/lib/libMLIRCAPIExecutionEngine.a" )

# Import target "obj.MLIRCAPIExecutionEngine" for configuration "Release"
set_property(TARGET obj.MLIRCAPIExecutionEngine APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(obj.MLIRCAPIExecutionEngine PROPERTIES
  IMPORTED_COMMON_LANGUAGE_RUNTIME_RELEASE ""
  IMPORTED_OBJECTS_RELEASE "${_IMPORT_PREFIX}/lib/objects-Release/obj.MLIRCAPIExecutionEngine/ExecutionEngine.cpp.o"
  )

list(APPEND _cmake_import_check_targets obj.MLIRCAPIExecutionEngine )
list(APPEND _cmake_import_check_files_for_obj.MLIRCAPIExecutionEngine "${_IMPORT_PREFIX}/lib/objects-Release/obj.MLIRCAPIExecutionEngine/ExecutionEngine.cpp.o" )

# Import target "MLIRTestAnalysis" for configuration "Release"
set_property(TARGET MLIRTestAnalysis APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRTestAnalysis PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRTestAnalysis.a"
  )

list(APPEND _cmake_import_check_targets MLIRTestAnalysis )
list(APPEND _cmake_import_check_files_for_MLIRTestAnalysis "${_IMPORT_PREFIX}/lib/libMLIRTestAnalysis.a" )

# Import target "MLIRTestFuncToLLVM" for configuration "Release"
set_property(TARGET MLIRTestFuncToLLVM APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRTestFuncToLLVM PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRTestFuncToLLVM.a"
  )

list(APPEND _cmake_import_check_targets MLIRTestFuncToLLVM )
list(APPEND _cmake_import_check_files_for_MLIRTestFuncToLLVM "${_IMPORT_PREFIX}/lib/libMLIRTestFuncToLLVM.a" )

# Import target "MLIRTestOneToNTypeConversionPass" for configuration "Release"
set_property(TARGET MLIRTestOneToNTypeConversionPass APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRTestOneToNTypeConversionPass PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRTestOneToNTypeConversionPass.a"
  )

list(APPEND _cmake_import_check_targets MLIRTestOneToNTypeConversionPass )
list(APPEND _cmake_import_check_files_for_MLIRTestOneToNTypeConversionPass "${_IMPORT_PREFIX}/lib/libMLIRTestOneToNTypeConversionPass.a" )

# Import target "MLIRTestVectorToSPIRV" for configuration "Release"
set_property(TARGET MLIRTestVectorToSPIRV APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRTestVectorToSPIRV PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRTestVectorToSPIRV.a"
  )

list(APPEND _cmake_import_check_targets MLIRTestVectorToSPIRV )
list(APPEND _cmake_import_check_files_for_MLIRTestVectorToSPIRV "${_IMPORT_PREFIX}/lib/libMLIRTestVectorToSPIRV.a" )

# Import target "MLIRAffineTransformsTestPasses" for configuration "Release"
set_property(TARGET MLIRAffineTransformsTestPasses APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRAffineTransformsTestPasses PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRAffineTransformsTestPasses.a"
  )

list(APPEND _cmake_import_check_targets MLIRAffineTransformsTestPasses )
list(APPEND _cmake_import_check_files_for_MLIRAffineTransformsTestPasses "${_IMPORT_PREFIX}/lib/libMLIRAffineTransformsTestPasses.a" )

# Import target "MLIRArithTestPasses" for configuration "Release"
set_property(TARGET MLIRArithTestPasses APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRArithTestPasses PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRArithTestPasses.a"
  )

list(APPEND _cmake_import_check_targets MLIRArithTestPasses )
list(APPEND _cmake_import_check_files_for_MLIRArithTestPasses "${_IMPORT_PREFIX}/lib/libMLIRArithTestPasses.a" )

# Import target "MLIRBufferizationTestPasses" for configuration "Release"
set_property(TARGET MLIRBufferizationTestPasses APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRBufferizationTestPasses PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRBufferizationTestPasses.a"
  )

list(APPEND _cmake_import_check_targets MLIRBufferizationTestPasses )
list(APPEND _cmake_import_check_files_for_MLIRBufferizationTestPasses "${_IMPORT_PREFIX}/lib/libMLIRBufferizationTestPasses.a" )

# Import target "MLIRControlFlowTestPasses" for configuration "Release"
set_property(TARGET MLIRControlFlowTestPasses APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRControlFlowTestPasses PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRControlFlowTestPasses.a"
  )

list(APPEND _cmake_import_check_targets MLIRControlFlowTestPasses )
list(APPEND _cmake_import_check_files_for_MLIRControlFlowTestPasses "${_IMPORT_PREFIX}/lib/libMLIRControlFlowTestPasses.a" )

# Import target "MLIRDLTITestPasses" for configuration "Release"
set_property(TARGET MLIRDLTITestPasses APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRDLTITestPasses PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRDLTITestPasses.a"
  )

list(APPEND _cmake_import_check_targets MLIRDLTITestPasses )
list(APPEND _cmake_import_check_files_for_MLIRDLTITestPasses "${_IMPORT_PREFIX}/lib/libMLIRDLTITestPasses.a" )

# Import target "MLIRFuncTestPasses" for configuration "Release"
set_property(TARGET MLIRFuncTestPasses APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRFuncTestPasses PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRFuncTestPasses.a"
  )

list(APPEND _cmake_import_check_targets MLIRFuncTestPasses )
list(APPEND _cmake_import_check_files_for_MLIRFuncTestPasses "${_IMPORT_PREFIX}/lib/libMLIRFuncTestPasses.a" )

# Import target "MLIRGPUTestPasses" for configuration "Release"
set_property(TARGET MLIRGPUTestPasses APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRGPUTestPasses PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRGPUTestPasses.a"
  )

list(APPEND _cmake_import_check_targets MLIRGPUTestPasses )
list(APPEND _cmake_import_check_files_for_MLIRGPUTestPasses "${_IMPORT_PREFIX}/lib/libMLIRGPUTestPasses.a" )

# Import target "MLIRLinalgTestPasses" for configuration "Release"
set_property(TARGET MLIRLinalgTestPasses APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRLinalgTestPasses PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRLinalgTestPasses.a"
  )

list(APPEND _cmake_import_check_targets MLIRLinalgTestPasses )
list(APPEND _cmake_import_check_files_for_MLIRLinalgTestPasses "${_IMPORT_PREFIX}/lib/libMLIRLinalgTestPasses.a" )

# Import target "MLIRLLVMTestPasses" for configuration "Release"
set_property(TARGET MLIRLLVMTestPasses APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRLLVMTestPasses PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRLLVMTestPasses.a"
  )

list(APPEND _cmake_import_check_targets MLIRLLVMTestPasses )
list(APPEND _cmake_import_check_files_for_MLIRLLVMTestPasses "${_IMPORT_PREFIX}/lib/libMLIRLLVMTestPasses.a" )

# Import target "MLIRMathTestPasses" for configuration "Release"
set_property(TARGET MLIRMathTestPasses APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRMathTestPasses PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRMathTestPasses.a"
  )

list(APPEND _cmake_import_check_targets MLIRMathTestPasses )
list(APPEND _cmake_import_check_files_for_MLIRMathTestPasses "${_IMPORT_PREFIX}/lib/libMLIRMathTestPasses.a" )

# Import target "MLIRMemRefTestPasses" for configuration "Release"
set_property(TARGET MLIRMemRefTestPasses APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRMemRefTestPasses PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRMemRefTestPasses.a"
  )

list(APPEND _cmake_import_check_targets MLIRMemRefTestPasses )
list(APPEND _cmake_import_check_files_for_MLIRMemRefTestPasses "${_IMPORT_PREFIX}/lib/libMLIRMemRefTestPasses.a" )

# Import target "MLIRNVGPUTestPasses" for configuration "Release"
set_property(TARGET MLIRNVGPUTestPasses APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRNVGPUTestPasses PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRNVGPUTestPasses.a"
  )

list(APPEND _cmake_import_check_targets MLIRNVGPUTestPasses )
list(APPEND _cmake_import_check_files_for_MLIRNVGPUTestPasses "${_IMPORT_PREFIX}/lib/libMLIRNVGPUTestPasses.a" )

# Import target "MLIRSCFTestPasses" for configuration "Release"
set_property(TARGET MLIRSCFTestPasses APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRSCFTestPasses PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRSCFTestPasses.a"
  )

list(APPEND _cmake_import_check_targets MLIRSCFTestPasses )
list(APPEND _cmake_import_check_files_for_MLIRSCFTestPasses "${_IMPORT_PREFIX}/lib/libMLIRSCFTestPasses.a" )

# Import target "MLIRShapeTestPasses" for configuration "Release"
set_property(TARGET MLIRShapeTestPasses APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRShapeTestPasses PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRShapeTestPasses.a"
  )

list(APPEND _cmake_import_check_targets MLIRShapeTestPasses )
list(APPEND _cmake_import_check_files_for_MLIRShapeTestPasses "${_IMPORT_PREFIX}/lib/libMLIRShapeTestPasses.a" )

# Import target "MLIRSPIRVTestPasses" for configuration "Release"
set_property(TARGET MLIRSPIRVTestPasses APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRSPIRVTestPasses PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRSPIRVTestPasses.a"
  )

list(APPEND _cmake_import_check_targets MLIRSPIRVTestPasses )
list(APPEND _cmake_import_check_files_for_MLIRSPIRVTestPasses "${_IMPORT_PREFIX}/lib/libMLIRSPIRVTestPasses.a" )

# Import target "MLIRTensorTestPasses" for configuration "Release"
set_property(TARGET MLIRTensorTestPasses APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRTensorTestPasses PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRTensorTestPasses.a"
  )

list(APPEND _cmake_import_check_targets MLIRTensorTestPasses )
list(APPEND _cmake_import_check_files_for_MLIRTensorTestPasses "${_IMPORT_PREFIX}/lib/libMLIRTensorTestPasses.a" )

# Import target "MLIRTestDialect" for configuration "Release"
set_property(TARGET MLIRTestDialect APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRTestDialect PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRTestDialect.a"
  )

list(APPEND _cmake_import_check_targets MLIRTestDialect )
list(APPEND _cmake_import_check_files_for_MLIRTestDialect "${_IMPORT_PREFIX}/lib/libMLIRTestDialect.a" )

# Import target "MLIRTestDynDialect" for configuration "Release"
set_property(TARGET MLIRTestDynDialect APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRTestDynDialect PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRTestDynDialect.a"
  )

list(APPEND _cmake_import_check_targets MLIRTestDynDialect )
list(APPEND _cmake_import_check_files_for_MLIRTestDynDialect "${_IMPORT_PREFIX}/lib/libMLIRTestDynDialect.a" )

# Import target "MLIRTosaTestPasses" for configuration "Release"
set_property(TARGET MLIRTosaTestPasses APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRTosaTestPasses PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRTosaTestPasses.a"
  )

list(APPEND _cmake_import_check_targets MLIRTosaTestPasses )
list(APPEND _cmake_import_check_files_for_MLIRTosaTestPasses "${_IMPORT_PREFIX}/lib/libMLIRTosaTestPasses.a" )

# Import target "MLIRTestTransformDialect" for configuration "Release"
set_property(TARGET MLIRTestTransformDialect APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRTestTransformDialect PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRTestTransformDialect.a"
  )

list(APPEND _cmake_import_check_targets MLIRTestTransformDialect )
list(APPEND _cmake_import_check_files_for_MLIRTestTransformDialect "${_IMPORT_PREFIX}/lib/libMLIRTestTransformDialect.a" )

# Import target "MLIRVectorTestPasses" for configuration "Release"
set_property(TARGET MLIRVectorTestPasses APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRVectorTestPasses PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRVectorTestPasses.a"
  )

list(APPEND _cmake_import_check_targets MLIRVectorTestPasses )
list(APPEND _cmake_import_check_files_for_MLIRVectorTestPasses "${_IMPORT_PREFIX}/lib/libMLIRVectorTestPasses.a" )

# Import target "MLIRLoopLikeInterfaceTestPasses" for configuration "Release"
set_property(TARGET MLIRLoopLikeInterfaceTestPasses APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRLoopLikeInterfaceTestPasses PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRLoopLikeInterfaceTestPasses.a"
  )

list(APPEND _cmake_import_check_targets MLIRLoopLikeInterfaceTestPasses )
list(APPEND _cmake_import_check_files_for_MLIRLoopLikeInterfaceTestPasses "${_IMPORT_PREFIX}/lib/libMLIRLoopLikeInterfaceTestPasses.a" )

# Import target "MLIRTilingInterfaceTestPasses" for configuration "Release"
set_property(TARGET MLIRTilingInterfaceTestPasses APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRTilingInterfaceTestPasses PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRTilingInterfaceTestPasses.a"
  )

list(APPEND _cmake_import_check_targets MLIRTilingInterfaceTestPasses )
list(APPEND _cmake_import_check_files_for_MLIRTilingInterfaceTestPasses "${_IMPORT_PREFIX}/lib/libMLIRTilingInterfaceTestPasses.a" )

# Import target "MLIRTestIR" for configuration "Release"
set_property(TARGET MLIRTestIR APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRTestIR PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRTestIR.a"
  )

list(APPEND _cmake_import_check_targets MLIRTestIR )
list(APPEND _cmake_import_check_files_for_MLIRTestIR "${_IMPORT_PREFIX}/lib/libMLIRTestIR.a" )

# Import target "MLIRTestPass" for configuration "Release"
set_property(TARGET MLIRTestPass APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRTestPass PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRTestPass.a"
  )

list(APPEND _cmake_import_check_targets MLIRTestPass )
list(APPEND _cmake_import_check_files_for_MLIRTestPass "${_IMPORT_PREFIX}/lib/libMLIRTestPass.a" )

# Import target "MLIRTestReducer" for configuration "Release"
set_property(TARGET MLIRTestReducer APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRTestReducer PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRTestReducer.a"
  )

list(APPEND _cmake_import_check_targets MLIRTestReducer )
list(APPEND _cmake_import_check_files_for_MLIRTestReducer "${_IMPORT_PREFIX}/lib/libMLIRTestReducer.a" )

# Import target "MLIRTestRewrite" for configuration "Release"
set_property(TARGET MLIRTestRewrite APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRTestRewrite PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRTestRewrite.a"
  )

list(APPEND _cmake_import_check_targets MLIRTestRewrite )
list(APPEND _cmake_import_check_files_for_MLIRTestRewrite "${_IMPORT_PREFIX}/lib/libMLIRTestRewrite.a" )

# Import target "MLIRTestPDLL" for configuration "Release"
set_property(TARGET MLIRTestPDLL APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRTestPDLL PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRTestPDLL.a"
  )

list(APPEND _cmake_import_check_targets MLIRTestPDLL )
list(APPEND _cmake_import_check_files_for_MLIRTestPDLL "${_IMPORT_PREFIX}/lib/libMLIRTestPDLL.a" )

# Import target "MLIRTestTransforms" for configuration "Release"
set_property(TARGET MLIRTestTransforms APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRTestTransforms PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRTestTransforms.a"
  )

list(APPEND _cmake_import_check_targets MLIRTestTransforms )
list(APPEND _cmake_import_check_files_for_MLIRTestTransforms "${_IMPORT_PREFIX}/lib/libMLIRTestTransforms.a" )

# Import target "MLIRMlirOptMain" for configuration "Release"
set_property(TARGET MLIRMlirOptMain APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MLIRMlirOptMain PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMLIRMlirOptMain.a"
  )

list(APPEND _cmake_import_check_targets MLIRMlirOptMain )
list(APPEND _cmake_import_check_files_for_MLIRMlirOptMain "${_IMPORT_PREFIX}/lib/libMLIRMlirOptMain.a" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
