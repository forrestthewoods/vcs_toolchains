/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Interface Definitions                                                      *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

/// Return the one based elemental indices.
mlir::Block::BlockArgListType hlfir::ElementalOpInterface::getIndices() {
      return getImpl()->getIndices(getImpl(), getOperation());
  }
/// Return the element entity being computed
mlir::Value hlfir::ElementalOpInterface::getElementEntity() {
      return getImpl()->getElementEntity(getImpl(), getOperation());
  }
/// Get element cleanup region, if any.
mlir::Region*hlfir::ElementalOpInterface::getElementCleanup() {
      return getImpl()->getElementCleanup(getImpl(), getOperation());
  }
/// Get elemental region.
mlir::Region&hlfir::ElementalOpInterface::getElementalRegion() {
      return getImpl()->getElementalRegion(getImpl(), getOperation());
  }
/// Must this elemental operation be evaluated in order?
bool hlfir::ElementalOpInterface::isOrdered() {
      return getImpl()->isOrdered(getImpl(), getOperation());
  }
/// Get the OrderedAssignmentTreeOpInterface leaf regions that contain evaluation code
void hlfir::OrderedAssignmentTreeOpInterface::getLeafRegions(llvm::SmallVectorImpl<mlir::Region*>& regions) {
      return getImpl()->getLeafRegions(getImpl(), getOperation(), regions);
  }
/// Get the region, if any, containing the list of sub-tree OrderedAssignmentTreeOpInterface nodes
mlir::Region*hlfir::OrderedAssignmentTreeOpInterface::getSubTreeRegion() {
      return getImpl()->getSubTreeRegion(getImpl(), getOperation());
  }
