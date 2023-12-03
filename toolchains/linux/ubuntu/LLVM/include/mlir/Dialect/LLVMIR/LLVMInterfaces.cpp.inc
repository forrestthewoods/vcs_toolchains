/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Interface Definitions                                                      *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

/// Returns the access groups attribute or nullptr
ArrayAttr mlir::LLVM::AccessGroupOpInterface::getAccessGroupsOrNull() {
      return getImpl()->getAccessGroupsOrNull(getImpl(), getOperation());
  }
/// Sets the access groups attribute
void mlir::LLVM::AccessGroupOpInterface::setAccessGroups(const ArrayAttr attr) {
      return getImpl()->setAccessGroups(getImpl(), getOperation(), attr);
  }
/// Returns the alias scopes attribute or nullptr
ArrayAttr mlir::LLVM::AliasAnalysisOpInterface::getAliasScopesOrNull() {
      return getImpl()->getAliasScopesOrNull(getImpl(), getOperation());
  }
/// Sets the alias scopes attribute
void mlir::LLVM::AliasAnalysisOpInterface::setAliasScopes(const ArrayAttr attr) {
      return getImpl()->setAliasScopes(getImpl(), getOperation(), attr);
  }
/// Returns the noalias scopes attribute or nullptr
ArrayAttr mlir::LLVM::AliasAnalysisOpInterface::getNoAliasScopesOrNull() {
      return getImpl()->getNoAliasScopesOrNull(getImpl(), getOperation());
  }
/// Sets the noalias scopes attribute
void mlir::LLVM::AliasAnalysisOpInterface::setNoAliasScopes(const ArrayAttr attr) {
      return getImpl()->setNoAliasScopes(getImpl(), getOperation(), attr);
  }
/// Returns the tbaa attribute or nullptr
ArrayAttr mlir::LLVM::AliasAnalysisOpInterface::getTBAATagsOrNull() {
      return getImpl()->getTBAATagsOrNull(getImpl(), getOperation());
  }
/// Sets the tbaa attribute
void mlir::LLVM::AliasAnalysisOpInterface::setTBAATags(const ArrayAttr attr) {
      return getImpl()->setTBAATags(getImpl(), getOperation(), attr);
  }
/// Returns a list of all pointer operands accessed by the operation
::llvm::SmallVector<::mlir::Value> mlir::LLVM::AliasAnalysisOpInterface::getAccessedOperands() {
      return getImpl()->getAccessedOperands(getImpl(), getOperation());
  }
/// Returns the branch weights attribute or nullptr
DenseI32ArrayAttr mlir::LLVM::BranchWeightOpInterface::getBranchWeightsOrNull() {
      return getImpl()->getBranchWeightsOrNull(getImpl(), getOperation());
  }
/// Sets the branch weights attribute
void mlir::LLVM::BranchWeightOpInterface::setBranchWeights(DenseI32ArrayAttr attr) {
      return getImpl()->setBranchWeights(getImpl(), getOperation(), attr);
  }
/// Returns a FastmathFlagsAttr attribute for the operation
FastmathFlagsAttr mlir::LLVM::FastmathFlagsInterface::getFastmathAttr() {
      return getImpl()->getFastmathAttr(getImpl(), getOperation());
  }
/// Returns the name of the FastmathFlagsAttr attribute
///                          for the operation
StringRef mlir::LLVM::FastmathFlagsInterface::getFastmathAttrName() {
      return getImpl()->getFastmathAttrName();
  }
/// Returns the the element type hint of the result
///                          LLVMPointer, if known. Returns nullptr if the
///                          requested result is not an LLVMPointer or if the
///                          element type is unknown.
Type mlir::LLVM::GetResultPtrElementType::getResultPtrElementType() {
      return getImpl()->getResultPtrElementType(getImpl(), getOperation());
  }