/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Op Definitions                                                             *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#ifdef GET_OP_LIST
#undef GET_OP_LIST

::mlir::transform::ApplyExpandOpsPatternsOp,
::mlir::transform::ApplyExpandStridedMetadataPatternsOp,
::mlir::transform::ApplyExtractAddressComputationsPatternsOp,
::mlir::transform::ApplyFoldMemrefAliasOpsPatternsOp,
::mlir::transform::ApplyResolveRankedShapedTypeResultDimsPatternsOp,
::mlir::transform::MemRefMakeLoopIndependentOp,
::mlir::transform::MemRefMultiBufferOp
#endif  // GET_OP_LIST

#ifdef GET_OP_CLASSES
#undef GET_OP_CLASSES


//===----------------------------------------------------------------------===//
// Local Utility Method Definitions
//===----------------------------------------------------------------------===//

namespace mlir {
namespace transform {

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_MemRefTransformOps0(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((::llvm::isa<::mlir::transform::TransformHandleTypeInterface>(type)))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be TransformHandleTypeInterface instance, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_MemRefTransformOps1(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!(((::llvm::isa<::mlir::transform::OperationType>(type))) && ((::llvm::cast<::mlir::transform::OperationType>(type).getOperationName() == "memref.alloc")))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be Transform IR handle to memref.alloc operations, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_MemRefTransformOps0(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> getDiag) {
  if (attr && !(((::llvm::isa<::mlir::IntegerAttr>(attr))) && ((::llvm::cast<::mlir::IntegerAttr>(attr).getType().isSignlessInteger(64)))))
    return getDiag() << "attribute '" << attrName
        << "' failed to satisfy constraint: 64-bit signless integer attribute";
  return ::mlir::success();
}
static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_MemRefTransformOps0(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_MemRefTransformOps0(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_MemRefTransformOps1(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> getDiag) {
  if (attr && !((((::llvm::isa<::mlir::IntegerAttr>(attr))) && ((::llvm::cast<::mlir::IntegerAttr>(attr).getType().isSignlessInteger(64)))) && ((::llvm::cast<::mlir::IntegerAttr>(attr).getValue().isStrictlyPositive()))))
    return getDiag() << "attribute '" << attrName
        << "' failed to satisfy constraint: 64-bit signless integer attribute whose value is positive";
  return ::mlir::success();
}
static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_MemRefTransformOps1(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_MemRefTransformOps1(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_MemRefTransformOps2(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> getDiag) {
  if (attr && !((::llvm::isa<::mlir::UnitAttr>(attr))))
    return getDiag() << "attribute '" << attrName
        << "' failed to satisfy constraint: unit attribute";
  return ::mlir::success();
}
static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_MemRefTransformOps2(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_MemRefTransformOps2(attr, attrName, [op]() {
    return op->emitOpError();
  });
}
} // namespace transform
} // namespace mlir
namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::ApplyExpandOpsPatternsOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
ApplyExpandOpsPatternsOpGenericAdaptorBase::ApplyExpandOpsPatternsOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("transform.apply_patterns.memref.expand_ops", odsAttrs.getContext());
}

std::pair<unsigned, unsigned> ApplyExpandOpsPatternsOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr ApplyExpandOpsPatternsOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
ApplyExpandOpsPatternsOpAdaptor::ApplyExpandOpsPatternsOpAdaptor(ApplyExpandOpsPatternsOp op) : ApplyExpandOpsPatternsOpAdaptor(op->getOperands(), op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

::mlir::LogicalResult ApplyExpandOpsPatternsOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> ApplyExpandOpsPatternsOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range ApplyExpandOpsPatternsOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> ApplyExpandOpsPatternsOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ApplyExpandOpsPatternsOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void ApplyExpandOpsPatternsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState) {
}

void ApplyExpandOpsPatternsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes) {
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ApplyExpandOpsPatternsOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult ApplyExpandOpsPatternsOp::verifyInvariantsImpl() {
  return ::mlir::success();
}

::mlir::LogicalResult ApplyExpandOpsPatternsOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult ApplyExpandOpsPatternsOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  return ::mlir::success();
}

void ApplyExpandOpsPatternsOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::ApplyExpandOpsPatternsOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::ApplyExpandStridedMetadataPatternsOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
ApplyExpandStridedMetadataPatternsOpGenericAdaptorBase::ApplyExpandStridedMetadataPatternsOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("transform.apply_patterns.memref.expand_strided_metadata", odsAttrs.getContext());
}

std::pair<unsigned, unsigned> ApplyExpandStridedMetadataPatternsOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr ApplyExpandStridedMetadataPatternsOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
ApplyExpandStridedMetadataPatternsOpAdaptor::ApplyExpandStridedMetadataPatternsOpAdaptor(ApplyExpandStridedMetadataPatternsOp op) : ApplyExpandStridedMetadataPatternsOpAdaptor(op->getOperands(), op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

::mlir::LogicalResult ApplyExpandStridedMetadataPatternsOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> ApplyExpandStridedMetadataPatternsOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range ApplyExpandStridedMetadataPatternsOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> ApplyExpandStridedMetadataPatternsOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ApplyExpandStridedMetadataPatternsOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void ApplyExpandStridedMetadataPatternsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState) {
}

void ApplyExpandStridedMetadataPatternsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes) {
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ApplyExpandStridedMetadataPatternsOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult ApplyExpandStridedMetadataPatternsOp::verifyInvariantsImpl() {
  return ::mlir::success();
}

::mlir::LogicalResult ApplyExpandStridedMetadataPatternsOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult ApplyExpandStridedMetadataPatternsOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  return ::mlir::success();
}

void ApplyExpandStridedMetadataPatternsOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::ApplyExpandStridedMetadataPatternsOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::ApplyExtractAddressComputationsPatternsOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
ApplyExtractAddressComputationsPatternsOpGenericAdaptorBase::ApplyExtractAddressComputationsPatternsOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("transform.apply_patterns.memref.extract_address_computations", odsAttrs.getContext());
}

std::pair<unsigned, unsigned> ApplyExtractAddressComputationsPatternsOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr ApplyExtractAddressComputationsPatternsOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
ApplyExtractAddressComputationsPatternsOpAdaptor::ApplyExtractAddressComputationsPatternsOpAdaptor(ApplyExtractAddressComputationsPatternsOp op) : ApplyExtractAddressComputationsPatternsOpAdaptor(op->getOperands(), op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

::mlir::LogicalResult ApplyExtractAddressComputationsPatternsOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> ApplyExtractAddressComputationsPatternsOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range ApplyExtractAddressComputationsPatternsOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> ApplyExtractAddressComputationsPatternsOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ApplyExtractAddressComputationsPatternsOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void ApplyExtractAddressComputationsPatternsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState) {
}

void ApplyExtractAddressComputationsPatternsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes) {
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ApplyExtractAddressComputationsPatternsOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult ApplyExtractAddressComputationsPatternsOp::verifyInvariantsImpl() {
  return ::mlir::success();
}

::mlir::LogicalResult ApplyExtractAddressComputationsPatternsOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult ApplyExtractAddressComputationsPatternsOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  return ::mlir::success();
}

void ApplyExtractAddressComputationsPatternsOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::ApplyExtractAddressComputationsPatternsOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::ApplyFoldMemrefAliasOpsPatternsOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
ApplyFoldMemrefAliasOpsPatternsOpGenericAdaptorBase::ApplyFoldMemrefAliasOpsPatternsOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("transform.apply_patterns.memref.fold_memref_alias_ops", odsAttrs.getContext());
}

std::pair<unsigned, unsigned> ApplyFoldMemrefAliasOpsPatternsOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr ApplyFoldMemrefAliasOpsPatternsOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
ApplyFoldMemrefAliasOpsPatternsOpAdaptor::ApplyFoldMemrefAliasOpsPatternsOpAdaptor(ApplyFoldMemrefAliasOpsPatternsOp op) : ApplyFoldMemrefAliasOpsPatternsOpAdaptor(op->getOperands(), op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

::mlir::LogicalResult ApplyFoldMemrefAliasOpsPatternsOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> ApplyFoldMemrefAliasOpsPatternsOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range ApplyFoldMemrefAliasOpsPatternsOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> ApplyFoldMemrefAliasOpsPatternsOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ApplyFoldMemrefAliasOpsPatternsOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void ApplyFoldMemrefAliasOpsPatternsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState) {
}

void ApplyFoldMemrefAliasOpsPatternsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes) {
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ApplyFoldMemrefAliasOpsPatternsOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult ApplyFoldMemrefAliasOpsPatternsOp::verifyInvariantsImpl() {
  return ::mlir::success();
}

::mlir::LogicalResult ApplyFoldMemrefAliasOpsPatternsOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult ApplyFoldMemrefAliasOpsPatternsOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  return ::mlir::success();
}

void ApplyFoldMemrefAliasOpsPatternsOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::ApplyFoldMemrefAliasOpsPatternsOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::ApplyResolveRankedShapedTypeResultDimsPatternsOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
ApplyResolveRankedShapedTypeResultDimsPatternsOpGenericAdaptorBase::ApplyResolveRankedShapedTypeResultDimsPatternsOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("transform.apply_patterns.memref.resolve_ranked_shaped_type_result_dims", odsAttrs.getContext());
}

std::pair<unsigned, unsigned> ApplyResolveRankedShapedTypeResultDimsPatternsOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr ApplyResolveRankedShapedTypeResultDimsPatternsOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
ApplyResolveRankedShapedTypeResultDimsPatternsOpAdaptor::ApplyResolveRankedShapedTypeResultDimsPatternsOpAdaptor(ApplyResolveRankedShapedTypeResultDimsPatternsOp op) : ApplyResolveRankedShapedTypeResultDimsPatternsOpAdaptor(op->getOperands(), op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

::mlir::LogicalResult ApplyResolveRankedShapedTypeResultDimsPatternsOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> ApplyResolveRankedShapedTypeResultDimsPatternsOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range ApplyResolveRankedShapedTypeResultDimsPatternsOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> ApplyResolveRankedShapedTypeResultDimsPatternsOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ApplyResolveRankedShapedTypeResultDimsPatternsOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void ApplyResolveRankedShapedTypeResultDimsPatternsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState) {
}

void ApplyResolveRankedShapedTypeResultDimsPatternsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes) {
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ApplyResolveRankedShapedTypeResultDimsPatternsOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult ApplyResolveRankedShapedTypeResultDimsPatternsOp::verifyInvariantsImpl() {
  return ::mlir::success();
}

::mlir::LogicalResult ApplyResolveRankedShapedTypeResultDimsPatternsOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult ApplyResolveRankedShapedTypeResultDimsPatternsOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  return ::mlir::success();
}

void ApplyResolveRankedShapedTypeResultDimsPatternsOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::ApplyResolveRankedShapedTypeResultDimsPatternsOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::MemRefMakeLoopIndependentOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
MemRefMakeLoopIndependentOpGenericAdaptorBase::MemRefMakeLoopIndependentOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("transform.memref.make_loop_independent", odsAttrs.getContext());
}

std::pair<unsigned, unsigned> MemRefMakeLoopIndependentOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr MemRefMakeLoopIndependentOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::IntegerAttr MemRefMakeLoopIndependentOpGenericAdaptorBase::getNumLoopsAttr() {
  auto attr = ::llvm::cast<::mlir::IntegerAttr>(getProperties().num_loops);
  return attr;
}

uint64_t MemRefMakeLoopIndependentOpGenericAdaptorBase::getNumLoops() {
  auto attr = getNumLoopsAttr();
  return attr.getValue().getZExtValue();
}

} // namespace detail
MemRefMakeLoopIndependentOpAdaptor::MemRefMakeLoopIndependentOpAdaptor(MemRefMakeLoopIndependentOp op) : MemRefMakeLoopIndependentOpAdaptor(op->getOperands(), op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

::mlir::LogicalResult MemRefMakeLoopIndependentOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_num_loops = getProperties().num_loops; (void)tblgen_num_loops;
  if (!tblgen_num_loops) return emitError(loc, "'transform.memref.make_loop_independent' op ""requires attribute 'num_loops'");

  if (tblgen_num_loops && !(((::llvm::isa<::mlir::IntegerAttr>(tblgen_num_loops))) && ((::llvm::cast<::mlir::IntegerAttr>(tblgen_num_loops).getType().isSignlessInteger(64)))))
    return emitError(loc, "'transform.memref.make_loop_independent' op ""attribute 'num_loops' failed to satisfy constraint: 64-bit signless integer attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> MemRefMakeLoopIndependentOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range MemRefMakeLoopIndependentOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> MemRefMakeLoopIndependentOp::getTarget() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface>>(*getODSOperands(0).begin());
}

::mlir::MutableOperandRange MemRefMakeLoopIndependentOp::getTargetMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> MemRefMakeLoopIndependentOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range MemRefMakeLoopIndependentOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> MemRefMakeLoopIndependentOp::getTransformed() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface>>(*getODSResults(0).begin());
}

::mlir::LogicalResult MemRefMakeLoopIndependentOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::mlir::InFlightDiagnostic *diag) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    if (diag)
      *diag << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.num_loops;
       auto attr = dict.get("num_loops");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        if (diag)
          *diag << "expected key entry for num_loops in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        if (diag)
          *diag << "Invalid attribute `num_loops` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute MemRefMakeLoopIndependentOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.num_loops;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("num_loops",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code MemRefMakeLoopIndependentOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.num_loops.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> MemRefMakeLoopIndependentOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "num_loops")
      return prop.num_loops;
  return std::nullopt;
}

void MemRefMakeLoopIndependentOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "num_loops") {
       prop.num_loops = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.num_loops)>>(value);
       return;
    }
}

void MemRefMakeLoopIndependentOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.num_loops) attrs.append("num_loops", prop.num_loops);
}

::mlir::LogicalResult MemRefMakeLoopIndependentOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> getDiag) {
    {
      ::mlir::Attribute attr = attrs.get(getNumLoopsAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_MemRefTransformOps0(attr, "num_loops", getDiag)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult MemRefMakeLoopIndependentOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readAttribute(prop.num_loops)))
    return ::mlir::failure();
  return ::mlir::success();
}

void MemRefMakeLoopIndependentOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;
  writer.writeAttribute(prop.num_loops);
}

::mlir::IntegerAttr MemRefMakeLoopIndependentOp::getNumLoopsAttr() {
  return ::llvm::cast<::mlir::IntegerAttr>(getProperties().num_loops);
}

uint64_t MemRefMakeLoopIndependentOp::getNumLoops() {
  auto attr = getNumLoopsAttr();
  return attr.getValue().getZExtValue();
}

void MemRefMakeLoopIndependentOp::setNumLoopsAttr(::mlir::IntegerAttr attr) {
  (*this)->setAttr(getNumLoopsAttrName(), attr);
}

void MemRefMakeLoopIndependentOp::setNumLoops(uint64_t attrValue) {
  (*this)->setAttr(getNumLoopsAttrName(), ::mlir::Builder((*this)->getContext()).getIntegerAttr(::mlir::Builder((*this)->getContext()).getIntegerType(64), attrValue));
}

void MemRefMakeLoopIndependentOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type transformed, ::mlir::Value target, ::mlir::IntegerAttr num_loops) {
  odsState.addOperands(target);
  odsState.getOrAddProperties<Properties>().num_loops = num_loops;
  odsState.addTypes(transformed);
}

void MemRefMakeLoopIndependentOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, ::mlir::IntegerAttr num_loops) {
  odsState.addOperands(target);
  odsState.getOrAddProperties<Properties>().num_loops = num_loops;
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void MemRefMakeLoopIndependentOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type transformed, ::mlir::Value target, uint64_t num_loops) {
  odsState.addOperands(target);
  odsState.getOrAddProperties<Properties>().num_loops = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), num_loops);
  odsState.addTypes(transformed);
}

void MemRefMakeLoopIndependentOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, uint64_t num_loops) {
  odsState.addOperands(target);
  odsState.getOrAddProperties<Properties>().num_loops = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), num_loops);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void MemRefMakeLoopIndependentOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult MemRefMakeLoopIndependentOp::verifyInvariantsImpl() {
  auto tblgen_num_loops = getProperties().num_loops; (void)tblgen_num_loops;
  if (!tblgen_num_loops) return emitOpError("requires attribute 'num_loops'");

  if (::mlir::failed(__mlir_ods_local_attr_constraint_MemRefTransformOps0(*this, tblgen_num_loops, "num_loops")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_MemRefTransformOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_MemRefTransformOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult MemRefMakeLoopIndependentOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult MemRefMakeLoopIndependentOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand targetRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> targetOperands(targetRawOperands);  ::llvm::SMLoc targetOperandsLoc;
  (void)targetOperandsLoc;
  ::llvm::ArrayRef<::mlir::Type> targetTypes;
  ::llvm::ArrayRef<::mlir::Type> transformedTypes;

  targetOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(targetRawOperands[0]))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
    if (failed(verifyInherentAttrs(result.name, result.attributes, [&]() {
        return parser.emitError(loc) << "'" << result.name.getStringRef() << "' op ";
      })))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  ::mlir::FunctionType target__transformed_functionType;
  if (parser.parseType(target__transformed_functionType))
    return ::mlir::failure();
  targetTypes = target__transformed_functionType.getInputs();
  transformedTypes = target__transformed_functionType.getResults();
  result.addTypes(transformedTypes);
  if (parser.resolveOperands(targetOperands, targetTypes, targetOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void MemRefMakeLoopIndependentOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getTarget();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(::llvm::ArrayRef<::mlir::Type>(getTarget().getType()), ::llvm::ArrayRef<::mlir::Type>(getTransformed().getType()));
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::MemRefMakeLoopIndependentOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::MemRefMultiBufferOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
MemRefMultiBufferOpGenericAdaptorBase::MemRefMultiBufferOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("transform.memref.multibuffer", odsAttrs.getContext());
}

std::pair<unsigned, unsigned> MemRefMultiBufferOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr MemRefMultiBufferOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::IntegerAttr MemRefMultiBufferOpGenericAdaptorBase::getFactorAttr() {
  auto attr = ::llvm::cast<::mlir::IntegerAttr>(getProperties().factor);
  return attr;
}

uint64_t MemRefMultiBufferOpGenericAdaptorBase::getFactor() {
  auto attr = getFactorAttr();
  return attr.getValue().getZExtValue();
}

::mlir::UnitAttr MemRefMultiBufferOpGenericAdaptorBase::getSkipAnalysisAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(getProperties().skip_analysis);
  if (!attr)
    attr = ((false) ? ::mlir::Builder(odsAttrs.getContext()).getUnitAttr() : nullptr);
  return attr;
}

bool MemRefMultiBufferOpGenericAdaptorBase::getSkipAnalysis() {
  auto attr = getSkipAnalysisAttr();
    if (!attr)
      return ((false) ? ::mlir::Builder(odsAttrs.getContext()).getUnitAttr() : nullptr) != nullptr;
  return attr != nullptr;
}

} // namespace detail
MemRefMultiBufferOpAdaptor::MemRefMultiBufferOpAdaptor(MemRefMultiBufferOp op) : MemRefMultiBufferOpAdaptor(op->getOperands(), op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

::mlir::LogicalResult MemRefMultiBufferOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_factor = getProperties().factor; (void)tblgen_factor;
  if (!tblgen_factor) return emitError(loc, "'transform.memref.multibuffer' op ""requires attribute 'factor'");
  auto tblgen_skip_analysis = getProperties().skip_analysis; (void)tblgen_skip_analysis;

  if (tblgen_factor && !((((::llvm::isa<::mlir::IntegerAttr>(tblgen_factor))) && ((::llvm::cast<::mlir::IntegerAttr>(tblgen_factor).getType().isSignlessInteger(64)))) && ((::llvm::cast<::mlir::IntegerAttr>(tblgen_factor).getValue().isStrictlyPositive()))))
    return emitError(loc, "'transform.memref.multibuffer' op ""attribute 'factor' failed to satisfy constraint: 64-bit signless integer attribute whose value is positive");

  if (tblgen_skip_analysis && !((::llvm::isa<::mlir::UnitAttr>(tblgen_skip_analysis))))
    return emitError(loc, "'transform.memref.multibuffer' op ""attribute 'skip_analysis' failed to satisfy constraint: unit attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> MemRefMultiBufferOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range MemRefMultiBufferOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::transform::OperationType> MemRefMultiBufferOp::getTarget() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::transform::OperationType>>(*getODSOperands(0).begin());
}

::mlir::MutableOperandRange MemRefMultiBufferOp::getTargetMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> MemRefMultiBufferOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range MemRefMultiBufferOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> MemRefMultiBufferOp::getTransformed() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface>>(*getODSResults(0).begin());
}

::mlir::LogicalResult MemRefMultiBufferOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::mlir::InFlightDiagnostic *diag) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    if (diag)
      *diag << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.factor;
       auto attr = dict.get("factor");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        if (diag)
          *diag << "expected key entry for factor in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        if (diag)
          *diag << "Invalid attribute `factor` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.skip_analysis;
       auto attr = dict.get("skip_analysis");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        if (diag)
          *diag << "expected key entry for skip_analysis in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        if (diag)
          *diag << "Invalid attribute `skip_analysis` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute MemRefMultiBufferOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.factor;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("factor",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.skip_analysis;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("skip_analysis",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code MemRefMultiBufferOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.factor.getAsOpaquePointer()), 
    llvm::hash_value(prop.skip_analysis.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> MemRefMultiBufferOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "factor")
      return prop.factor;

    if (name == "skip_analysis")
      return prop.skip_analysis;
  return std::nullopt;
}

void MemRefMultiBufferOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "factor") {
       prop.factor = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.factor)>>(value);
       return;
    }

    if (name == "skip_analysis") {
       prop.skip_analysis = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.skip_analysis)>>(value);
       return;
    }
}

void MemRefMultiBufferOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.factor) attrs.append("factor", prop.factor);

    if (prop.skip_analysis) attrs.append("skip_analysis", prop.skip_analysis);
}

::mlir::LogicalResult MemRefMultiBufferOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> getDiag) {
    {
      ::mlir::Attribute attr = attrs.get(getFactorAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_MemRefTransformOps1(attr, "factor", getDiag)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getSkipAnalysisAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_MemRefTransformOps2(attr, "skip_analysis", getDiag)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult MemRefMultiBufferOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readAttribute(prop.factor)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.skip_analysis)))
    return ::mlir::failure();
  return ::mlir::success();
}

void MemRefMultiBufferOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;
  writer.writeAttribute(prop.factor);

  writer.writeOptionalAttribute(prop.skip_analysis);
}

::mlir::IntegerAttr MemRefMultiBufferOp::getFactorAttr() {
  return ::llvm::cast<::mlir::IntegerAttr>(getProperties().factor);
}

uint64_t MemRefMultiBufferOp::getFactor() {
  auto attr = getFactorAttr();
  return attr.getValue().getZExtValue();
}

::mlir::UnitAttr MemRefMultiBufferOp::getSkipAnalysisAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(getProperties().skip_analysis);
}

bool MemRefMultiBufferOp::getSkipAnalysis() {
  auto attr = getSkipAnalysisAttr();
    if (!attr)
      return ((false) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr) != nullptr;
  return attr != nullptr;
}

void MemRefMultiBufferOp::setFactorAttr(::mlir::IntegerAttr attr) {
  (*this)->setAttr(getFactorAttrName(), attr);
}

void MemRefMultiBufferOp::setFactor(uint64_t attrValue) {
  (*this)->setAttr(getFactorAttrName(), ::mlir::Builder((*this)->getContext()).getIntegerAttr(::mlir::Builder((*this)->getContext()).getIntegerType(64), attrValue));
}

void MemRefMultiBufferOp::setSkipAnalysisAttr(::mlir::UnitAttr attr) {
  (*this)->setAttr(getSkipAnalysisAttrName(), attr);
}

void MemRefMultiBufferOp::setSkipAnalysis(bool attrValue) {
    if (attrValue)
      return (*this)->setAttr(getSkipAnalysisAttrName(), ((attrValue) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr));
    (*this)->removeAttr(getSkipAnalysisAttrName());
}

::mlir::Attribute MemRefMultiBufferOp::removeSkipAnalysisAttr() {
    auto &attr = getProperties().skip_analysis;
    attr = {};
    return attr;
}

void MemRefMultiBufferOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type transformed, ::mlir::Value target, ::mlir::IntegerAttr factor, /*optional*/::mlir::UnitAttr skip_analysis) {
  odsState.addOperands(target);
  odsState.getOrAddProperties<Properties>().factor = factor;
  if (skip_analysis) {
    odsState.getOrAddProperties<Properties>().skip_analysis = skip_analysis;
  }
  odsState.addTypes(transformed);
}

void MemRefMultiBufferOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, ::mlir::IntegerAttr factor, /*optional*/::mlir::UnitAttr skip_analysis) {
  odsState.addOperands(target);
  odsState.getOrAddProperties<Properties>().factor = factor;
  if (skip_analysis) {
    odsState.getOrAddProperties<Properties>().skip_analysis = skip_analysis;
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void MemRefMultiBufferOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type transformed, ::mlir::Value target, uint64_t factor, /*optional*/bool skip_analysis) {
  odsState.addOperands(target);
  odsState.getOrAddProperties<Properties>().factor = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), factor);
  if (skip_analysis) {
    odsState.getOrAddProperties<Properties>().skip_analysis = ((skip_analysis) ? odsBuilder.getUnitAttr() : nullptr);
  }
  odsState.addTypes(transformed);
}

void MemRefMultiBufferOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, uint64_t factor, /*optional*/bool skip_analysis) {
  odsState.addOperands(target);
  odsState.getOrAddProperties<Properties>().factor = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), factor);
  if (skip_analysis) {
    odsState.getOrAddProperties<Properties>().skip_analysis = ((skip_analysis) ? odsBuilder.getUnitAttr() : nullptr);
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void MemRefMultiBufferOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult MemRefMultiBufferOp::verifyInvariantsImpl() {
  auto tblgen_factor = getProperties().factor; (void)tblgen_factor;
  if (!tblgen_factor) return emitOpError("requires attribute 'factor'");
  auto tblgen_skip_analysis = getProperties().skip_analysis; (void)tblgen_skip_analysis;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_MemRefTransformOps1(*this, tblgen_factor, "factor")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_MemRefTransformOps2(*this, tblgen_skip_analysis, "skip_analysis")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_MemRefTransformOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_MemRefTransformOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult MemRefMultiBufferOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult MemRefMultiBufferOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand targetRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> targetOperands(targetRawOperands);  ::llvm::SMLoc targetOperandsLoc;
  (void)targetOperandsLoc;
  ::llvm::ArrayRef<::mlir::Type> allOperandTypes;
  ::llvm::ArrayRef<::mlir::Type> allResultTypes;

  targetOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(targetRawOperands[0]))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
    if (failed(verifyInherentAttrs(result.name, result.attributes, [&]() {
        return parser.emitError(loc) << "'" << result.name.getStringRef() << "' op ";
      })))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  ::mlir::FunctionType allOperand__allResult_functionType;
  if (parser.parseType(allOperand__allResult_functionType))
    return ::mlir::failure();
  allOperandTypes = allOperand__allResult_functionType.getInputs();
  allResultTypes = allOperand__allResult_functionType.getResults();
  result.addTypes(allResultTypes);
  if (parser.resolveOperands(targetOperands, allOperandTypes, parser.getNameLoc(), result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void MemRefMultiBufferOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getTarget();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getSkipAnalysisAttr();
     if(attr && (attr == ((false) ? odsBuilder.getUnitAttr() : nullptr)))
       elidedAttrs.push_back("skip_analysis");
  }
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(getOperation()->getOperandTypes(), getOperation()->getResultTypes());
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::MemRefMultiBufferOp)


#endif  // GET_OP_CLASSES

