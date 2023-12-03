/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Op Definitions                                                             *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#ifdef GET_OP_LIST
#undef GET_OP_LIST

::mlir::transform::BufferLoopHoistingOp,
::mlir::transform::EliminateEmptyTensorsOp,
::mlir::transform::EmptyTensorToAllocTensorOp,
::mlir::transform::OneShotBufferizeOp
#endif  // GET_OP_LIST

#ifdef GET_OP_CLASSES
#undef GET_OP_CLASSES


//===----------------------------------------------------------------------===//
// Local Utility Method Definitions
//===----------------------------------------------------------------------===//

namespace mlir {
namespace transform {

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_BufferizationTransformOps0(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((::llvm::isa<::mlir::transform::TransformHandleTypeInterface>(type)))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be TransformHandleTypeInterface instance, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_BufferizationTransformOps1(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!(((::llvm::isa<::mlir::transform::OperationType>(type))) && ((::llvm::cast<::mlir::transform::OperationType>(type).getOperationName() == "tensor.empty")))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be Transform IR handle to tensor.empty operations, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_BufferizationTransformOps2(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!(((::llvm::isa<::mlir::transform::OperationType>(type))) && ((::llvm::cast<::mlir::transform::OperationType>(type).getOperationName() == "bufferization.alloc_tensor")))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be Transform IR handle to bufferization.alloc_tensor operations, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_BufferizationTransformOps0(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> getDiag) {
  if (attr && !((::llvm::isa<::mlir::bufferization::LayoutMapOptionAttr>(attr))))
    return getDiag() << "attribute '" << attrName
        << "' failed to satisfy constraint: option for map layout";
  return ::mlir::success();
}
static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_BufferizationTransformOps0(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_BufferizationTransformOps0(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_BufferizationTransformOps1(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> getDiag) {
  if (attr && !((::llvm::isa<::mlir::BoolAttr>(attr))))
    return getDiag() << "attribute '" << attrName
        << "' failed to satisfy constraint: bool attribute";
  return ::mlir::success();
}
static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_BufferizationTransformOps1(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_BufferizationTransformOps1(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_BufferizationTransformOps2(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> getDiag) {
  if (attr && !((::llvm::isa<::mlir::StringAttr>(attr))))
    return getDiag() << "attribute '" << attrName
        << "' failed to satisfy constraint: string attribute";
  return ::mlir::success();
}
static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_BufferizationTransformOps2(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_BufferizationTransformOps2(attr, attrName, [op]() {
    return op->emitOpError();
  });
}
} // namespace transform
} // namespace mlir
namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::BufferLoopHoistingOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
BufferLoopHoistingOpGenericAdaptorBase::BufferLoopHoistingOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("transform.bufferization.buffer_loop_hoisting", odsAttrs.getContext());
}

std::pair<unsigned, unsigned> BufferLoopHoistingOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr BufferLoopHoistingOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
BufferLoopHoistingOpAdaptor::BufferLoopHoistingOpAdaptor(BufferLoopHoistingOp op) : BufferLoopHoistingOpAdaptor(op->getOperands(), op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

::mlir::LogicalResult BufferLoopHoistingOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> BufferLoopHoistingOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range BufferLoopHoistingOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> BufferLoopHoistingOp::getTarget() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface>>(*getODSOperands(0).begin());
}

::mlir::MutableOperandRange BufferLoopHoistingOp::getTargetMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> BufferLoopHoistingOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range BufferLoopHoistingOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void BufferLoopHoistingOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value target) {
  odsState.addOperands(target);
}

void BufferLoopHoistingOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target) {
  odsState.addOperands(target);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void BufferLoopHoistingOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult BufferLoopHoistingOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_BufferizationTransformOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult BufferLoopHoistingOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult BufferLoopHoistingOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand targetRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> targetOperands(targetRawOperands);  ::llvm::SMLoc targetOperandsLoc;
  (void)targetOperandsLoc;
  ::mlir::Type targetRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> targetTypes(targetRawTypes);

  targetOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(targetRawOperands[0]))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  {
    ::mlir::transform::TransformHandleTypeInterface type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    targetRawTypes[0] = type;
  }
  if (parser.resolveOperands(targetOperands, targetTypes, targetOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void BufferLoopHoistingOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getTarget();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getTarget().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::transform::TransformHandleTypeInterface>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::BufferLoopHoistingOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::EliminateEmptyTensorsOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
EliminateEmptyTensorsOpGenericAdaptorBase::EliminateEmptyTensorsOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("transform.bufferization.eliminate_empty_tensors", odsAttrs.getContext());
}

std::pair<unsigned, unsigned> EliminateEmptyTensorsOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr EliminateEmptyTensorsOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
EliminateEmptyTensorsOpAdaptor::EliminateEmptyTensorsOpAdaptor(EliminateEmptyTensorsOp op) : EliminateEmptyTensorsOpAdaptor(op->getOperands(), op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

::mlir::LogicalResult EliminateEmptyTensorsOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> EliminateEmptyTensorsOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range EliminateEmptyTensorsOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> EliminateEmptyTensorsOp::getTarget() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface>>(*getODSOperands(0).begin());
}

::mlir::MutableOperandRange EliminateEmptyTensorsOp::getTargetMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> EliminateEmptyTensorsOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range EliminateEmptyTensorsOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void EliminateEmptyTensorsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value target) {
  odsState.addOperands(target);
}

void EliminateEmptyTensorsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target) {
  odsState.addOperands(target);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void EliminateEmptyTensorsOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult EliminateEmptyTensorsOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_BufferizationTransformOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult EliminateEmptyTensorsOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult EliminateEmptyTensorsOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand targetRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> targetOperands(targetRawOperands);  ::llvm::SMLoc targetOperandsLoc;
  (void)targetOperandsLoc;
  ::mlir::Type targetRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> targetTypes(targetRawTypes);

  targetOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(targetRawOperands[0]))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  {
    ::mlir::transform::TransformHandleTypeInterface type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    targetRawTypes[0] = type;
  }
  if (parser.resolveOperands(targetOperands, targetTypes, targetOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void EliminateEmptyTensorsOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getTarget();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getTarget().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::transform::TransformHandleTypeInterface>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::EliminateEmptyTensorsOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::EmptyTensorToAllocTensorOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
EmptyTensorToAllocTensorOpGenericAdaptorBase::EmptyTensorToAllocTensorOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("transform.bufferization.empty_tensor_to_alloc_tensor", odsAttrs.getContext());
}

std::pair<unsigned, unsigned> EmptyTensorToAllocTensorOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr EmptyTensorToAllocTensorOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
EmptyTensorToAllocTensorOpAdaptor::EmptyTensorToAllocTensorOpAdaptor(EmptyTensorToAllocTensorOp op) : EmptyTensorToAllocTensorOpAdaptor(op->getOperands(), op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

::mlir::LogicalResult EmptyTensorToAllocTensorOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> EmptyTensorToAllocTensorOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range EmptyTensorToAllocTensorOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::transform::OperationType> EmptyTensorToAllocTensorOp::getTarget() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::transform::OperationType>>(*getODSOperands(0).begin());
}

::mlir::MutableOperandRange EmptyTensorToAllocTensorOp::getTargetMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> EmptyTensorToAllocTensorOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range EmptyTensorToAllocTensorOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::transform::OperationType> EmptyTensorToAllocTensorOp::getTransformed() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::transform::OperationType>>(*getODSResults(0).begin());
}

void EmptyTensorToAllocTensorOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type transformed, ::mlir::Value target) {
  odsState.addOperands(target);
  odsState.addTypes(transformed);
}

void EmptyTensorToAllocTensorOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target) {
  odsState.addOperands(target);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void EmptyTensorToAllocTensorOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult EmptyTensorToAllocTensorOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_BufferizationTransformOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_BufferizationTransformOps2(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult EmptyTensorToAllocTensorOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult EmptyTensorToAllocTensorOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
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

void EmptyTensorToAllocTensorOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getTarget();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(getOperation()->getOperandTypes(), getOperation()->getResultTypes());
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::EmptyTensorToAllocTensorOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::OneShotBufferizeOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
OneShotBufferizeOpGenericAdaptorBase::OneShotBufferizeOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("transform.bufferization.one_shot_bufferize", odsAttrs.getContext());
}

std::pair<unsigned, unsigned> OneShotBufferizeOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr OneShotBufferizeOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::bufferization::LayoutMapOptionAttr OneShotBufferizeOpGenericAdaptorBase::getFunctionBoundaryTypeConversionAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::bufferization::LayoutMapOptionAttr>(getProperties().function_boundary_type_conversion);
  return attr;
}

::std::optional<::mlir::bufferization::LayoutMapOption> OneShotBufferizeOpGenericAdaptorBase::getFunctionBoundaryTypeConversion() {
  auto attr = getFunctionBoundaryTypeConversionAttr();
  return attr ? ::std::optional<::mlir::bufferization::LayoutMapOption>(attr.getValue()) : (::std::nullopt);
}

::mlir::BoolAttr OneShotBufferizeOpGenericAdaptorBase::getAllowReturnAllocsAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::BoolAttr>(getProperties().allow_return_allocs);
  return attr;
}

bool OneShotBufferizeOpGenericAdaptorBase::getAllowReturnAllocs() {
  auto attr = getAllowReturnAllocsAttr();
  return attr.getValue();
}

::mlir::BoolAttr OneShotBufferizeOpGenericAdaptorBase::getAllowUnknownOpsAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::BoolAttr>(getProperties().allow_unknown_ops);
  return attr;
}

bool OneShotBufferizeOpGenericAdaptorBase::getAllowUnknownOps() {
  auto attr = getAllowUnknownOpsAttr();
  return attr.getValue();
}

::mlir::BoolAttr OneShotBufferizeOpGenericAdaptorBase::getBufferizeFunctionBoundariesAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::BoolAttr>(getProperties().bufferize_function_boundaries);
  return attr;
}

bool OneShotBufferizeOpGenericAdaptorBase::getBufferizeFunctionBoundaries() {
  auto attr = getBufferizeFunctionBoundariesAttr();
  return attr.getValue();
}

::mlir::BoolAttr OneShotBufferizeOpGenericAdaptorBase::getCreateDeallocsAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::BoolAttr>(getProperties().create_deallocs);
  return attr;
}

bool OneShotBufferizeOpGenericAdaptorBase::getCreateDeallocs() {
  auto attr = getCreateDeallocsAttr();
  return attr.getValue();
}

::mlir::BoolAttr OneShotBufferizeOpGenericAdaptorBase::getTestAnalysisOnlyAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::BoolAttr>(getProperties().test_analysis_only);
  return attr;
}

bool OneShotBufferizeOpGenericAdaptorBase::getTestAnalysisOnly() {
  auto attr = getTestAnalysisOnlyAttr();
  return attr.getValue();
}

::mlir::BoolAttr OneShotBufferizeOpGenericAdaptorBase::getPrintConflictsAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::BoolAttr>(getProperties().print_conflicts);
  return attr;
}

bool OneShotBufferizeOpGenericAdaptorBase::getPrintConflicts() {
  auto attr = getPrintConflictsAttr();
  return attr.getValue();
}

::mlir::StringAttr OneShotBufferizeOpGenericAdaptorBase::getMemcpyOpAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::StringAttr>(getProperties().memcpy_op);
  return attr;
}

::llvm::StringRef OneShotBufferizeOpGenericAdaptorBase::getMemcpyOp() {
  auto attr = getMemcpyOpAttr();
  return attr.getValue();
}

} // namespace detail
OneShotBufferizeOpAdaptor::OneShotBufferizeOpAdaptor(OneShotBufferizeOp op) : OneShotBufferizeOpAdaptor(op->getOperands(), op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

::mlir::LogicalResult OneShotBufferizeOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_allow_return_allocs = getProperties().allow_return_allocs; (void)tblgen_allow_return_allocs;
  auto tblgen_allow_unknown_ops = getProperties().allow_unknown_ops; (void)tblgen_allow_unknown_ops;
  auto tblgen_bufferize_function_boundaries = getProperties().bufferize_function_boundaries; (void)tblgen_bufferize_function_boundaries;
  auto tblgen_create_deallocs = getProperties().create_deallocs; (void)tblgen_create_deallocs;
  auto tblgen_function_boundary_type_conversion = getProperties().function_boundary_type_conversion; (void)tblgen_function_boundary_type_conversion;
  auto tblgen_memcpy_op = getProperties().memcpy_op; (void)tblgen_memcpy_op;
  auto tblgen_print_conflicts = getProperties().print_conflicts; (void)tblgen_print_conflicts;
  auto tblgen_test_analysis_only = getProperties().test_analysis_only; (void)tblgen_test_analysis_only;

  if (tblgen_function_boundary_type_conversion && !((::llvm::isa<::mlir::bufferization::LayoutMapOptionAttr>(tblgen_function_boundary_type_conversion))))
    return emitError(loc, "'transform.bufferization.one_shot_bufferize' op ""attribute 'function_boundary_type_conversion' failed to satisfy constraint: option for map layout");

  if (tblgen_allow_return_allocs && !((::llvm::isa<::mlir::BoolAttr>(tblgen_allow_return_allocs))))
    return emitError(loc, "'transform.bufferization.one_shot_bufferize' op ""attribute 'allow_return_allocs' failed to satisfy constraint: bool attribute");

  if (tblgen_allow_unknown_ops && !((::llvm::isa<::mlir::BoolAttr>(tblgen_allow_unknown_ops))))
    return emitError(loc, "'transform.bufferization.one_shot_bufferize' op ""attribute 'allow_unknown_ops' failed to satisfy constraint: bool attribute");

  if (tblgen_bufferize_function_boundaries && !((::llvm::isa<::mlir::BoolAttr>(tblgen_bufferize_function_boundaries))))
    return emitError(loc, "'transform.bufferization.one_shot_bufferize' op ""attribute 'bufferize_function_boundaries' failed to satisfy constraint: bool attribute");

  if (tblgen_create_deallocs && !((::llvm::isa<::mlir::BoolAttr>(tblgen_create_deallocs))))
    return emitError(loc, "'transform.bufferization.one_shot_bufferize' op ""attribute 'create_deallocs' failed to satisfy constraint: bool attribute");

  if (tblgen_test_analysis_only && !((::llvm::isa<::mlir::BoolAttr>(tblgen_test_analysis_only))))
    return emitError(loc, "'transform.bufferization.one_shot_bufferize' op ""attribute 'test_analysis_only' failed to satisfy constraint: bool attribute");

  if (tblgen_print_conflicts && !((::llvm::isa<::mlir::BoolAttr>(tblgen_print_conflicts))))
    return emitError(loc, "'transform.bufferization.one_shot_bufferize' op ""attribute 'print_conflicts' failed to satisfy constraint: bool attribute");

  if (tblgen_memcpy_op && !((::llvm::isa<::mlir::StringAttr>(tblgen_memcpy_op))))
    return emitError(loc, "'transform.bufferization.one_shot_bufferize' op ""attribute 'memcpy_op' failed to satisfy constraint: string attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> OneShotBufferizeOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range OneShotBufferizeOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> OneShotBufferizeOp::getTarget() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface>>(*getODSOperands(0).begin());
}

::mlir::MutableOperandRange OneShotBufferizeOp::getTargetMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> OneShotBufferizeOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range OneShotBufferizeOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> OneShotBufferizeOp::getTransformed() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface>>(*getODSResults(0).begin());
}

::mlir::LogicalResult OneShotBufferizeOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::mlir::InFlightDiagnostic *diag) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    if (diag)
      *diag << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.allow_return_allocs;
       auto attr = dict.get("allow_return_allocs");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        if (diag)
          *diag << "expected key entry for allow_return_allocs in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        if (diag)
          *diag << "Invalid attribute `allow_return_allocs` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.allow_unknown_ops;
       auto attr = dict.get("allow_unknown_ops");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        if (diag)
          *diag << "expected key entry for allow_unknown_ops in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        if (diag)
          *diag << "Invalid attribute `allow_unknown_ops` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.bufferize_function_boundaries;
       auto attr = dict.get("bufferize_function_boundaries");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        if (diag)
          *diag << "expected key entry for bufferize_function_boundaries in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        if (diag)
          *diag << "Invalid attribute `bufferize_function_boundaries` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.create_deallocs;
       auto attr = dict.get("create_deallocs");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        if (diag)
          *diag << "expected key entry for create_deallocs in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        if (diag)
          *diag << "Invalid attribute `create_deallocs` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.function_boundary_type_conversion;
       auto attr = dict.get("function_boundary_type_conversion");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        if (diag)
          *diag << "expected key entry for function_boundary_type_conversion in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        if (diag)
          *diag << "Invalid attribute `function_boundary_type_conversion` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.memcpy_op;
       auto attr = dict.get("memcpy_op");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        if (diag)
          *diag << "expected key entry for memcpy_op in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        if (diag)
          *diag << "Invalid attribute `memcpy_op` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.print_conflicts;
       auto attr = dict.get("print_conflicts");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        if (diag)
          *diag << "expected key entry for print_conflicts in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        if (diag)
          *diag << "Invalid attribute `print_conflicts` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.test_analysis_only;
       auto attr = dict.get("test_analysis_only");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        if (diag)
          *diag << "expected key entry for test_analysis_only in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        if (diag)
          *diag << "Invalid attribute `test_analysis_only` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute OneShotBufferizeOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.allow_return_allocs;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("allow_return_allocs",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.allow_unknown_ops;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("allow_unknown_ops",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.bufferize_function_boundaries;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("bufferize_function_boundaries",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.create_deallocs;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("create_deallocs",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.function_boundary_type_conversion;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("function_boundary_type_conversion",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.memcpy_op;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("memcpy_op",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.print_conflicts;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("print_conflicts",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.test_analysis_only;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("test_analysis_only",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code OneShotBufferizeOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.allow_return_allocs.getAsOpaquePointer()), 
    llvm::hash_value(prop.allow_unknown_ops.getAsOpaquePointer()), 
    llvm::hash_value(prop.bufferize_function_boundaries.getAsOpaquePointer()), 
    llvm::hash_value(prop.create_deallocs.getAsOpaquePointer()), 
    llvm::hash_value(prop.function_boundary_type_conversion.getAsOpaquePointer()), 
    llvm::hash_value(prop.memcpy_op.getAsOpaquePointer()), 
    llvm::hash_value(prop.print_conflicts.getAsOpaquePointer()), 
    llvm::hash_value(prop.test_analysis_only.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> OneShotBufferizeOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "allow_return_allocs")
      return prop.allow_return_allocs;

    if (name == "allow_unknown_ops")
      return prop.allow_unknown_ops;

    if (name == "bufferize_function_boundaries")
      return prop.bufferize_function_boundaries;

    if (name == "create_deallocs")
      return prop.create_deallocs;

    if (name == "function_boundary_type_conversion")
      return prop.function_boundary_type_conversion;

    if (name == "memcpy_op")
      return prop.memcpy_op;

    if (name == "print_conflicts")
      return prop.print_conflicts;

    if (name == "test_analysis_only")
      return prop.test_analysis_only;
  return std::nullopt;
}

void OneShotBufferizeOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "allow_return_allocs") {
       prop.allow_return_allocs = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.allow_return_allocs)>>(value);
       return;
    }

    if (name == "allow_unknown_ops") {
       prop.allow_unknown_ops = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.allow_unknown_ops)>>(value);
       return;
    }

    if (name == "bufferize_function_boundaries") {
       prop.bufferize_function_boundaries = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.bufferize_function_boundaries)>>(value);
       return;
    }

    if (name == "create_deallocs") {
       prop.create_deallocs = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.create_deallocs)>>(value);
       return;
    }

    if (name == "function_boundary_type_conversion") {
       prop.function_boundary_type_conversion = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.function_boundary_type_conversion)>>(value);
       return;
    }

    if (name == "memcpy_op") {
       prop.memcpy_op = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.memcpy_op)>>(value);
       return;
    }

    if (name == "print_conflicts") {
       prop.print_conflicts = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.print_conflicts)>>(value);
       return;
    }

    if (name == "test_analysis_only") {
       prop.test_analysis_only = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.test_analysis_only)>>(value);
       return;
    }
}

void OneShotBufferizeOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.allow_return_allocs) attrs.append("allow_return_allocs", prop.allow_return_allocs);

    if (prop.allow_unknown_ops) attrs.append("allow_unknown_ops", prop.allow_unknown_ops);

    if (prop.bufferize_function_boundaries) attrs.append("bufferize_function_boundaries", prop.bufferize_function_boundaries);

    if (prop.create_deallocs) attrs.append("create_deallocs", prop.create_deallocs);

    if (prop.function_boundary_type_conversion) attrs.append("function_boundary_type_conversion", prop.function_boundary_type_conversion);

    if (prop.memcpy_op) attrs.append("memcpy_op", prop.memcpy_op);

    if (prop.print_conflicts) attrs.append("print_conflicts", prop.print_conflicts);

    if (prop.test_analysis_only) attrs.append("test_analysis_only", prop.test_analysis_only);
}

::mlir::LogicalResult OneShotBufferizeOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> getDiag) {
    {
      ::mlir::Attribute attr = attrs.get(getAllowReturnAllocsAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_BufferizationTransformOps1(attr, "allow_return_allocs", getDiag)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getAllowUnknownOpsAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_BufferizationTransformOps1(attr, "allow_unknown_ops", getDiag)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getBufferizeFunctionBoundariesAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_BufferizationTransformOps1(attr, "bufferize_function_boundaries", getDiag)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getCreateDeallocsAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_BufferizationTransformOps1(attr, "create_deallocs", getDiag)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getFunctionBoundaryTypeConversionAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_BufferizationTransformOps0(attr, "function_boundary_type_conversion", getDiag)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getMemcpyOpAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_BufferizationTransformOps2(attr, "memcpy_op", getDiag)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getPrintConflictsAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_BufferizationTransformOps1(attr, "print_conflicts", getDiag)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getTestAnalysisOnlyAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_BufferizationTransformOps1(attr, "test_analysis_only", getDiag)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult OneShotBufferizeOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.allow_return_allocs)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.allow_unknown_ops)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.bufferize_function_boundaries)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.create_deallocs)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.function_boundary_type_conversion)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.memcpy_op)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.print_conflicts)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.test_analysis_only)))
    return ::mlir::failure();
  return ::mlir::success();
}

void OneShotBufferizeOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.allow_return_allocs);

  writer.writeOptionalAttribute(prop.allow_unknown_ops);

  writer.writeOptionalAttribute(prop.bufferize_function_boundaries);

  writer.writeOptionalAttribute(prop.create_deallocs);

  writer.writeOptionalAttribute(prop.function_boundary_type_conversion);

  writer.writeOptionalAttribute(prop.memcpy_op);

  writer.writeOptionalAttribute(prop.print_conflicts);

  writer.writeOptionalAttribute(prop.test_analysis_only);
}

::mlir::bufferization::LayoutMapOptionAttr OneShotBufferizeOp::getFunctionBoundaryTypeConversionAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::bufferization::LayoutMapOptionAttr>(getProperties().function_boundary_type_conversion);
}

::std::optional<::mlir::bufferization::LayoutMapOption> OneShotBufferizeOp::getFunctionBoundaryTypeConversion() {
  auto attr = getFunctionBoundaryTypeConversionAttr();
  return attr ? ::std::optional<::mlir::bufferization::LayoutMapOption>(attr.getValue()) : (::std::nullopt);
}

::mlir::BoolAttr OneShotBufferizeOp::getAllowReturnAllocsAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::BoolAttr>(getProperties().allow_return_allocs);
}

bool OneShotBufferizeOp::getAllowReturnAllocs() {
  auto attr = getAllowReturnAllocsAttr();
  return attr.getValue();
}

::mlir::BoolAttr OneShotBufferizeOp::getAllowUnknownOpsAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::BoolAttr>(getProperties().allow_unknown_ops);
}

bool OneShotBufferizeOp::getAllowUnknownOps() {
  auto attr = getAllowUnknownOpsAttr();
  return attr.getValue();
}

::mlir::BoolAttr OneShotBufferizeOp::getBufferizeFunctionBoundariesAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::BoolAttr>(getProperties().bufferize_function_boundaries);
}

bool OneShotBufferizeOp::getBufferizeFunctionBoundaries() {
  auto attr = getBufferizeFunctionBoundariesAttr();
  return attr.getValue();
}

::mlir::BoolAttr OneShotBufferizeOp::getCreateDeallocsAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::BoolAttr>(getProperties().create_deallocs);
}

bool OneShotBufferizeOp::getCreateDeallocs() {
  auto attr = getCreateDeallocsAttr();
  return attr.getValue();
}

::mlir::BoolAttr OneShotBufferizeOp::getTestAnalysisOnlyAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::BoolAttr>(getProperties().test_analysis_only);
}

bool OneShotBufferizeOp::getTestAnalysisOnly() {
  auto attr = getTestAnalysisOnlyAttr();
  return attr.getValue();
}

::mlir::BoolAttr OneShotBufferizeOp::getPrintConflictsAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::BoolAttr>(getProperties().print_conflicts);
}

bool OneShotBufferizeOp::getPrintConflicts() {
  auto attr = getPrintConflictsAttr();
  return attr.getValue();
}

::mlir::StringAttr OneShotBufferizeOp::getMemcpyOpAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::StringAttr>(getProperties().memcpy_op);
}

::llvm::StringRef OneShotBufferizeOp::getMemcpyOp() {
  auto attr = getMemcpyOpAttr();
  return attr.getValue();
}

void OneShotBufferizeOp::setFunctionBoundaryTypeConversionAttr(::mlir::bufferization::LayoutMapOptionAttr attr) {
  (*this)->setAttr(getFunctionBoundaryTypeConversionAttrName(), attr);
}

void OneShotBufferizeOp::setFunctionBoundaryTypeConversion(::std::optional<::mlir::bufferization::LayoutMapOption> attrValue) {
    if (attrValue)
      return (*this)->setAttr(getFunctionBoundaryTypeConversionAttrName(), ::mlir::bufferization::LayoutMapOptionAttr::get(::mlir::Builder((*this)->getContext()).getContext(), *attrValue));
    (*this)->removeAttr(getFunctionBoundaryTypeConversionAttrName());
}

void OneShotBufferizeOp::setAllowReturnAllocsAttr(::mlir::BoolAttr attr) {
  (*this)->setAttr(getAllowReturnAllocsAttrName(), attr);
}

void OneShotBufferizeOp::setAllowReturnAllocs(bool attrValue) {
  (*this)->setAttr(getAllowReturnAllocsAttrName(), ::mlir::Builder((*this)->getContext()).getBoolAttr(attrValue));
}

void OneShotBufferizeOp::setAllowUnknownOpsAttr(::mlir::BoolAttr attr) {
  (*this)->setAttr(getAllowUnknownOpsAttrName(), attr);
}

void OneShotBufferizeOp::setAllowUnknownOps(bool attrValue) {
  (*this)->setAttr(getAllowUnknownOpsAttrName(), ::mlir::Builder((*this)->getContext()).getBoolAttr(attrValue));
}

void OneShotBufferizeOp::setBufferizeFunctionBoundariesAttr(::mlir::BoolAttr attr) {
  (*this)->setAttr(getBufferizeFunctionBoundariesAttrName(), attr);
}

void OneShotBufferizeOp::setBufferizeFunctionBoundaries(bool attrValue) {
  (*this)->setAttr(getBufferizeFunctionBoundariesAttrName(), ::mlir::Builder((*this)->getContext()).getBoolAttr(attrValue));
}

void OneShotBufferizeOp::setCreateDeallocsAttr(::mlir::BoolAttr attr) {
  (*this)->setAttr(getCreateDeallocsAttrName(), attr);
}

void OneShotBufferizeOp::setCreateDeallocs(bool attrValue) {
  (*this)->setAttr(getCreateDeallocsAttrName(), ::mlir::Builder((*this)->getContext()).getBoolAttr(attrValue));
}

void OneShotBufferizeOp::setTestAnalysisOnlyAttr(::mlir::BoolAttr attr) {
  (*this)->setAttr(getTestAnalysisOnlyAttrName(), attr);
}

void OneShotBufferizeOp::setTestAnalysisOnly(bool attrValue) {
  (*this)->setAttr(getTestAnalysisOnlyAttrName(), ::mlir::Builder((*this)->getContext()).getBoolAttr(attrValue));
}

void OneShotBufferizeOp::setPrintConflictsAttr(::mlir::BoolAttr attr) {
  (*this)->setAttr(getPrintConflictsAttrName(), attr);
}

void OneShotBufferizeOp::setPrintConflicts(bool attrValue) {
  (*this)->setAttr(getPrintConflictsAttrName(), ::mlir::Builder((*this)->getContext()).getBoolAttr(attrValue));
}

void OneShotBufferizeOp::setMemcpyOpAttr(::mlir::StringAttr attr) {
  (*this)->setAttr(getMemcpyOpAttrName(), attr);
}

void OneShotBufferizeOp::setMemcpyOp(::llvm::StringRef attrValue) {
  (*this)->setAttr(getMemcpyOpAttrName(), ::mlir::Builder((*this)->getContext()).getStringAttr(attrValue));
}

::mlir::Attribute OneShotBufferizeOp::removeFunctionBoundaryTypeConversionAttr() {
    auto &attr = getProperties().function_boundary_type_conversion;
    attr = {};
    return attr;
}

void OneShotBufferizeOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type transformed, ::mlir::Value target, /*optional*/::mlir::bufferization::LayoutMapOptionAttr function_boundary_type_conversion, ::mlir::BoolAttr allow_return_allocs, ::mlir::BoolAttr allow_unknown_ops, ::mlir::BoolAttr bufferize_function_boundaries, ::mlir::BoolAttr create_deallocs, ::mlir::BoolAttr test_analysis_only, ::mlir::BoolAttr print_conflicts, ::mlir::StringAttr memcpy_op) {
  odsState.addOperands(target);
  if (function_boundary_type_conversion) {
    odsState.getOrAddProperties<Properties>().function_boundary_type_conversion = function_boundary_type_conversion;
  }
  if (allow_return_allocs) {
    odsState.getOrAddProperties<Properties>().allow_return_allocs = allow_return_allocs;
  }
  if (allow_unknown_ops) {
    odsState.getOrAddProperties<Properties>().allow_unknown_ops = allow_unknown_ops;
  }
  if (bufferize_function_boundaries) {
    odsState.getOrAddProperties<Properties>().bufferize_function_boundaries = bufferize_function_boundaries;
  }
  if (create_deallocs) {
    odsState.getOrAddProperties<Properties>().create_deallocs = create_deallocs;
  }
  if (test_analysis_only) {
    odsState.getOrAddProperties<Properties>().test_analysis_only = test_analysis_only;
  }
  if (print_conflicts) {
    odsState.getOrAddProperties<Properties>().print_conflicts = print_conflicts;
  }
  if (memcpy_op) {
    odsState.getOrAddProperties<Properties>().memcpy_op = memcpy_op;
  }
  odsState.addTypes(transformed);
}

void OneShotBufferizeOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, /*optional*/::mlir::bufferization::LayoutMapOptionAttr function_boundary_type_conversion, ::mlir::BoolAttr allow_return_allocs, ::mlir::BoolAttr allow_unknown_ops, ::mlir::BoolAttr bufferize_function_boundaries, ::mlir::BoolAttr create_deallocs, ::mlir::BoolAttr test_analysis_only, ::mlir::BoolAttr print_conflicts, ::mlir::StringAttr memcpy_op) {
  odsState.addOperands(target);
  if (function_boundary_type_conversion) {
    odsState.getOrAddProperties<Properties>().function_boundary_type_conversion = function_boundary_type_conversion;
  }
  if (allow_return_allocs) {
    odsState.getOrAddProperties<Properties>().allow_return_allocs = allow_return_allocs;
  }
  if (allow_unknown_ops) {
    odsState.getOrAddProperties<Properties>().allow_unknown_ops = allow_unknown_ops;
  }
  if (bufferize_function_boundaries) {
    odsState.getOrAddProperties<Properties>().bufferize_function_boundaries = bufferize_function_boundaries;
  }
  if (create_deallocs) {
    odsState.getOrAddProperties<Properties>().create_deallocs = create_deallocs;
  }
  if (test_analysis_only) {
    odsState.getOrAddProperties<Properties>().test_analysis_only = test_analysis_only;
  }
  if (print_conflicts) {
    odsState.getOrAddProperties<Properties>().print_conflicts = print_conflicts;
  }
  if (memcpy_op) {
    odsState.getOrAddProperties<Properties>().memcpy_op = memcpy_op;
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void OneShotBufferizeOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type transformed, ::mlir::Value target, /*optional*/::mlir::bufferization::LayoutMapOptionAttr function_boundary_type_conversion, bool allow_return_allocs, bool allow_unknown_ops, bool bufferize_function_boundaries, bool create_deallocs, bool test_analysis_only, bool print_conflicts, ::llvm::StringRef memcpy_op) {
  odsState.addOperands(target);
  if (function_boundary_type_conversion) {
    odsState.getOrAddProperties<Properties>().function_boundary_type_conversion = function_boundary_type_conversion;
  }
  odsState.getOrAddProperties<Properties>().allow_return_allocs = odsBuilder.getBoolAttr(allow_return_allocs);
  odsState.getOrAddProperties<Properties>().allow_unknown_ops = odsBuilder.getBoolAttr(allow_unknown_ops);
  odsState.getOrAddProperties<Properties>().bufferize_function_boundaries = odsBuilder.getBoolAttr(bufferize_function_boundaries);
  odsState.getOrAddProperties<Properties>().create_deallocs = odsBuilder.getBoolAttr(create_deallocs);
  odsState.getOrAddProperties<Properties>().test_analysis_only = odsBuilder.getBoolAttr(test_analysis_only);
  odsState.getOrAddProperties<Properties>().print_conflicts = odsBuilder.getBoolAttr(print_conflicts);
  odsState.getOrAddProperties<Properties>().memcpy_op = odsBuilder.getStringAttr(memcpy_op);
  odsState.addTypes(transformed);
}

void OneShotBufferizeOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, /*optional*/::mlir::bufferization::LayoutMapOptionAttr function_boundary_type_conversion, bool allow_return_allocs, bool allow_unknown_ops, bool bufferize_function_boundaries, bool create_deallocs, bool test_analysis_only, bool print_conflicts, ::llvm::StringRef memcpy_op) {
  odsState.addOperands(target);
  if (function_boundary_type_conversion) {
    odsState.getOrAddProperties<Properties>().function_boundary_type_conversion = function_boundary_type_conversion;
  }
  odsState.getOrAddProperties<Properties>().allow_return_allocs = odsBuilder.getBoolAttr(allow_return_allocs);
  odsState.getOrAddProperties<Properties>().allow_unknown_ops = odsBuilder.getBoolAttr(allow_unknown_ops);
  odsState.getOrAddProperties<Properties>().bufferize_function_boundaries = odsBuilder.getBoolAttr(bufferize_function_boundaries);
  odsState.getOrAddProperties<Properties>().create_deallocs = odsBuilder.getBoolAttr(create_deallocs);
  odsState.getOrAddProperties<Properties>().test_analysis_only = odsBuilder.getBoolAttr(test_analysis_only);
  odsState.getOrAddProperties<Properties>().print_conflicts = odsBuilder.getBoolAttr(print_conflicts);
  odsState.getOrAddProperties<Properties>().memcpy_op = odsBuilder.getStringAttr(memcpy_op);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void OneShotBufferizeOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void OneShotBufferizeOp::populateDefaultProperties(::mlir::OperationName opName, Properties &properties) {
  ::mlir::Builder odsBuilder(opName.getContext());
  if (!properties.allow_return_allocs)
    properties.allow_return_allocs = odsBuilder.getBoolAttr(false);
  if (!properties.allow_unknown_ops)
    properties.allow_unknown_ops = odsBuilder.getBoolAttr(false);
  if (!properties.bufferize_function_boundaries)
    properties.bufferize_function_boundaries = odsBuilder.getBoolAttr(false);
  if (!properties.create_deallocs)
    properties.create_deallocs = odsBuilder.getBoolAttr(true);
  if (!properties.test_analysis_only)
    properties.test_analysis_only = odsBuilder.getBoolAttr(false);
  if (!properties.print_conflicts)
    properties.print_conflicts = odsBuilder.getBoolAttr(false);
  if (!properties.memcpy_op)
    properties.memcpy_op = odsBuilder.getStringAttr("memref.copy");
}

::mlir::LogicalResult OneShotBufferizeOp::verifyInvariantsImpl() {
  auto tblgen_allow_return_allocs = getProperties().allow_return_allocs; (void)tblgen_allow_return_allocs;
  auto tblgen_allow_unknown_ops = getProperties().allow_unknown_ops; (void)tblgen_allow_unknown_ops;
  auto tblgen_bufferize_function_boundaries = getProperties().bufferize_function_boundaries; (void)tblgen_bufferize_function_boundaries;
  auto tblgen_create_deallocs = getProperties().create_deallocs; (void)tblgen_create_deallocs;
  auto tblgen_function_boundary_type_conversion = getProperties().function_boundary_type_conversion; (void)tblgen_function_boundary_type_conversion;
  auto tblgen_memcpy_op = getProperties().memcpy_op; (void)tblgen_memcpy_op;
  auto tblgen_print_conflicts = getProperties().print_conflicts; (void)tblgen_print_conflicts;
  auto tblgen_test_analysis_only = getProperties().test_analysis_only; (void)tblgen_test_analysis_only;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_BufferizationTransformOps0(*this, tblgen_function_boundary_type_conversion, "function_boundary_type_conversion")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_BufferizationTransformOps1(*this, tblgen_allow_return_allocs, "allow_return_allocs")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_BufferizationTransformOps1(*this, tblgen_allow_unknown_ops, "allow_unknown_ops")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_BufferizationTransformOps1(*this, tblgen_bufferize_function_boundaries, "bufferize_function_boundaries")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_BufferizationTransformOps1(*this, tblgen_create_deallocs, "create_deallocs")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_BufferizationTransformOps1(*this, tblgen_test_analysis_only, "test_analysis_only")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_BufferizationTransformOps1(*this, tblgen_print_conflicts, "print_conflicts")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_BufferizationTransformOps2(*this, tblgen_memcpy_op, "memcpy_op")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_BufferizationTransformOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_BufferizationTransformOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult OneShotBufferizeOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

::mlir::ParseResult OneShotBufferizeOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::bufferization::LayoutMapOptionAttr function_boundary_type_conversionAttr;
  ::mlir::OpAsmParser::UnresolvedOperand targetRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> targetOperands(targetRawOperands);  ::llvm::SMLoc targetOperandsLoc;
  (void)targetOperandsLoc;
  ::llvm::ArrayRef<::mlir::Type> targetTypes;
  ::llvm::ArrayRef<::mlir::Type> allResultTypes;
  if (::mlir::succeeded(parser.parseOptionalKeyword("layout"))) {
  if (parser.parseLBrace())
    return ::mlir::failure();

  {
    ::llvm::StringRef attrStr;
    ::mlir::NamedAttrList attrStorage;
    auto loc = parser.getCurrentLocation();
    if (parser.parseOptionalKeyword(&attrStr, {"InferLayoutMap","IdentityLayoutMap","FullyDynamicLayoutMap"})) {
      ::mlir::StringAttr attrVal;
      ::mlir::OptionalParseResult parseResult =
        parser.parseOptionalAttribute(attrVal,
                                      parser.getBuilder().getNoneType(),
                                      "function_boundary_type_conversion", attrStorage);
      if (parseResult.has_value()) {
        if (failed(*parseResult))
          return ::mlir::failure();
        attrStr = attrVal.getValue();
      } else {
        return parser.emitError(loc, "expected string or keyword containing one of the following enum values for attribute 'function_boundary_type_conversion' [InferLayoutMap, IdentityLayoutMap, FullyDynamicLayoutMap]");
      }
    }
    if (!attrStr.empty()) {
      auto attrOptional = ::mlir::bufferization::symbolizeLayoutMapOption(attrStr);
      if (!attrOptional)
        return parser.emitError(loc, "invalid ")
               << "function_boundary_type_conversion attribute specification: \"" << attrStr << '"';;

      function_boundary_type_conversionAttr = ::mlir::bufferization::LayoutMapOptionAttr::get(parser.getBuilder().getContext(), *attrOptional);
        result.getOrAddProperties<OneShotBufferizeOp::Properties>().function_boundary_type_conversion = function_boundary_type_conversionAttr;
    }
  }
  if (parser.parseRBrace())
    return ::mlir::failure();
  }

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

  ::mlir::FunctionType target__allResult_functionType;
  if (parser.parseType(target__allResult_functionType))
    return ::mlir::failure();
  targetTypes = target__allResult_functionType.getInputs();
  allResultTypes = target__allResult_functionType.getResults();
  result.addTypes(allResultTypes);
  if (parser.resolveOperands(targetOperands, targetTypes, targetOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void OneShotBufferizeOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  if (getFunctionBoundaryTypeConversionAttr()) {
    _odsPrinter << ' ' << "layout";
    _odsPrinter << "{";

    {
      auto caseValue = *getFunctionBoundaryTypeConversion();
      auto caseValueStr = stringifyLayoutMapOption(caseValue);
      _odsPrinter << caseValueStr;
    }
    _odsPrinter << "}";
  }
  _odsPrinter << ' ';
  _odsPrinter << getTarget();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("function_boundary_type_conversion");
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getAllowReturnAllocsAttr();
     if(attr && (attr == odsBuilder.getBoolAttr(false)))
       elidedAttrs.push_back("allow_return_allocs");
  }
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getAllowUnknownOpsAttr();
     if(attr && (attr == odsBuilder.getBoolAttr(false)))
       elidedAttrs.push_back("allow_unknown_ops");
  }
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getBufferizeFunctionBoundariesAttr();
     if(attr && (attr == odsBuilder.getBoolAttr(false)))
       elidedAttrs.push_back("bufferize_function_boundaries");
  }
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getCreateDeallocsAttr();
     if(attr && (attr == odsBuilder.getBoolAttr(true)))
       elidedAttrs.push_back("create_deallocs");
  }
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getTestAnalysisOnlyAttr();
     if(attr && (attr == odsBuilder.getBoolAttr(false)))
       elidedAttrs.push_back("test_analysis_only");
  }
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getPrintConflictsAttr();
     if(attr && (attr == odsBuilder.getBoolAttr(false)))
       elidedAttrs.push_back("print_conflicts");
  }
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getMemcpyOpAttr();
     if(attr && (attr == odsBuilder.getStringAttr("memref.copy")))
       elidedAttrs.push_back("memcpy_op");
  }
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(::llvm::ArrayRef<::mlir::Type>(getTarget().getType()), getOperation()->getResultTypes());
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::OneShotBufferizeOp)


#endif  // GET_OP_CLASSES

