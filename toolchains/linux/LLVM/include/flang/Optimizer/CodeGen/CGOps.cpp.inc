/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Op Definitions                                                             *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#ifdef GET_OP_LIST
#undef GET_OP_LIST

::fir::cg::XArrayCoorOp,
::fir::cg::XEmboxOp,
::fir::cg::XReboxOp
#endif  // GET_OP_LIST

#ifdef GET_OP_CLASSES
#undef GET_OP_CLASSES


//===----------------------------------------------------------------------===//
// Local Utility Method Definitions
//===----------------------------------------------------------------------===//

namespace fir {
namespace cg {

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_CGOps0(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!(((::llvm::isa<::fir::ReferenceType>(type))) || ((::llvm::isa<::fir::HeapType>(type))) || ((::llvm::isa<::fir::PointerType>(type))) || ((type.isa<::fir::BaseBoxType>())))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be any reference or box, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_CGOps1(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((((type.isSignlessIntOrIndex())) || ((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && ([](::mlir::Type elementType) { return (elementType.isSignlessIntOrIndex()); }(::llvm::cast<::mlir::ShapedType>(type).getElementType()))) || (((::llvm::isa<::mlir::TensorType>(type))) && ([](::mlir::Type elementType) { return (elementType.isSignlessIntOrIndex()); }(::llvm::cast<::mlir::ShapedType>(type).getElementType())))) || ((type.isSignedInteger())) || ((::llvm::isa<::fir::IntegerType>(type))))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be any integer, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_CGOps2(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!(((type.isSignlessInteger())) || ((::llvm::isa<::mlir::IndexType>(type))) || ((::llvm::isa<::fir::IntegerType>(type))) || ((::llvm::isa<::fir::FieldType>(type))) || ((::llvm::isa<::fir::LenType>(type))))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be coordinate type, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_CGOps3(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((::llvm::isa<::fir::ReferenceType>(type)))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be Reference to an entity type, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_CGOps4(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!(((::llvm::isa<::fir::ReferenceType>(type))) || ((::llvm::isa<::fir::HeapType>(type))) || ((::llvm::isa<::fir::PointerType>(type))) || ((::llvm::isa<::fir::LLVMPointerType>(type))))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be any reference, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_CGOps5(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((::llvm::isa<::fir::ClassType>(type)))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be Class type, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_CGOps6(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!(((::llvm::isa<::fir::BoxType>(type))) || ((::llvm::isa<::fir::ClassType>(type))))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be box or class, but got " << type;
  }
  return ::mlir::success();
}
} // namespace cg
} // namespace fir
namespace fir {
namespace cg {

//===----------------------------------------------------------------------===//
// ::fir::cg::XArrayCoorOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
XArrayCoorOpGenericAdaptorBase::XArrayCoorOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("fircg.ext_array_coor", odsAttrs.getContext());
}

std::pair<unsigned, unsigned> XArrayCoorOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  assert(::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 0, odsAttrs.end() - 0, XArrayCoorOp::getOperandSegmentSizesAttrName(*odsOpName)) && "missing segment size attribute for op");
  auto sizeAttr = ::llvm::cast<::mlir::DenseI32ArrayAttr>(::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 0, odsAttrs.end() - 0, XArrayCoorOp::getOperandSegmentSizesAttrName(*odsOpName)));

  unsigned start = 0;
  for (unsigned i = 0; i < index; ++i)
    start += sizeAttr[i];
  return {start, sizeAttr[index]};
}

::mlir::DictionaryAttr XArrayCoorOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
XArrayCoorOpAdaptor::XArrayCoorOpAdaptor(XArrayCoorOp op) : XArrayCoorOpAdaptor(op->getOperands(), op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

::mlir::LogicalResult XArrayCoorOpAdaptor::verify(::mlir::Location loc) {
  auto namedAttrRange = odsAttrs;
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_operandSegmentSizes;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitError(loc, "'fircg.ext_array_coor' op ""requires attribute 'operandSegmentSizes'");
    if (namedAttrIt->getName() == XArrayCoorOp::getOperandSegmentSizesAttrName(*odsOpName)) {
      tblgen_operandSegmentSizes = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }

  {
    auto sizeAttr = ::llvm::cast<::mlir::DenseI32ArrayAttr>(tblgen_operandSegmentSizes);
    auto numElements = sizeAttr.asArrayRef().size();
    if (numElements != 7)
      return emitError(loc, "'fircg.ext_array_coor' op ""'operandSegmentSizes' attribute for specifying operand segments must have 7 "
                "elements, but got ") << numElements;
  }
    return ::mlir::success();
}

std::pair<unsigned, unsigned> XArrayCoorOp::getODSOperandIndexAndLength(unsigned index) {
  auto sizeAttr = ::llvm::cast<::mlir::DenseI32ArrayAttr>(::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 0, (*this)->getAttrs().end() - 0, getOperandSegmentSizesAttrName()));

  unsigned start = 0;
  for (unsigned i = 0; i < index; ++i)
    start += sizeAttr[i];
  return {start, sizeAttr[index]};
}

::mlir::Operation::operand_range XArrayCoorOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value XArrayCoorOp::getMemref() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::Operation::operand_range XArrayCoorOp::getShape() {
  return getODSOperands(1);
}

::mlir::Operation::operand_range XArrayCoorOp::getShift() {
  return getODSOperands(2);
}

::mlir::Operation::operand_range XArrayCoorOp::getSlice() {
  return getODSOperands(3);
}

::mlir::Operation::operand_range XArrayCoorOp::getSubcomponent() {
  return getODSOperands(4);
}

::mlir::Operation::operand_range XArrayCoorOp::getIndices() {
  return getODSOperands(5);
}

::mlir::Operation::operand_range XArrayCoorOp::getLenParams() {
  return getODSOperands(6);
}

::mlir::MutableOperandRange XArrayCoorOp::getMemrefMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(0u, *::mlir::impl::getNamedAttrFromSortedRange((*this)->getAttrs().begin() + 0, (*this)->getAttrs().end() - 0, getOperandSegmentSizesAttrName())));
  return mutableRange;
}

::mlir::MutableOperandRange XArrayCoorOp::getShapeMutable() {
  auto range = getODSOperandIndexAndLength(1);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(1u, *::mlir::impl::getNamedAttrFromSortedRange((*this)->getAttrs().begin() + 0, (*this)->getAttrs().end() - 0, getOperandSegmentSizesAttrName())));
  return mutableRange;
}

::mlir::MutableOperandRange XArrayCoorOp::getShiftMutable() {
  auto range = getODSOperandIndexAndLength(2);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(2u, *::mlir::impl::getNamedAttrFromSortedRange((*this)->getAttrs().begin() + 0, (*this)->getAttrs().end() - 0, getOperandSegmentSizesAttrName())));
  return mutableRange;
}

::mlir::MutableOperandRange XArrayCoorOp::getSliceMutable() {
  auto range = getODSOperandIndexAndLength(3);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(3u, *::mlir::impl::getNamedAttrFromSortedRange((*this)->getAttrs().begin() + 0, (*this)->getAttrs().end() - 0, getOperandSegmentSizesAttrName())));
  return mutableRange;
}

::mlir::MutableOperandRange XArrayCoorOp::getSubcomponentMutable() {
  auto range = getODSOperandIndexAndLength(4);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(4u, *::mlir::impl::getNamedAttrFromSortedRange((*this)->getAttrs().begin() + 0, (*this)->getAttrs().end() - 0, getOperandSegmentSizesAttrName())));
  return mutableRange;
}

::mlir::MutableOperandRange XArrayCoorOp::getIndicesMutable() {
  auto range = getODSOperandIndexAndLength(5);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(5u, *::mlir::impl::getNamedAttrFromSortedRange((*this)->getAttrs().begin() + 0, (*this)->getAttrs().end() - 0, getOperandSegmentSizesAttrName())));
  return mutableRange;
}

::mlir::MutableOperandRange XArrayCoorOp::getLenParamsMutable() {
  auto range = getODSOperandIndexAndLength(6);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(6u, *::mlir::impl::getNamedAttrFromSortedRange((*this)->getAttrs().begin() + 0, (*this)->getAttrs().end() - 0, getOperandSegmentSizesAttrName())));
  return mutableRange;
}

std::pair<unsigned, unsigned> XArrayCoorOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range XArrayCoorOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void XArrayCoorOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type resultType0, ::mlir::Value memref, ::mlir::ValueRange shape, ::mlir::ValueRange shift, ::mlir::ValueRange slice, ::mlir::ValueRange subcomponent, ::mlir::ValueRange indices, ::mlir::ValueRange lenParams) {
  odsState.addOperands(memref);
  odsState.addOperands(shape);
  odsState.addOperands(shift);
  odsState.addOperands(slice);
  odsState.addOperands(subcomponent);
  odsState.addOperands(indices);
  odsState.addOperands(lenParams);
  odsState.addAttribute(getOperandSegmentSizesAttrName(odsState.name), odsBuilder.getDenseI32ArrayAttr({1, static_cast<int32_t>(shape.size()), static_cast<int32_t>(shift.size()), static_cast<int32_t>(slice.size()), static_cast<int32_t>(subcomponent.size()), static_cast<int32_t>(indices.size()), static_cast<int32_t>(lenParams.size())}));
  odsState.addTypes(resultType0);
}

void XArrayCoorOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value memref, ::mlir::ValueRange shape, ::mlir::ValueRange shift, ::mlir::ValueRange slice, ::mlir::ValueRange subcomponent, ::mlir::ValueRange indices, ::mlir::ValueRange lenParams) {
  odsState.addOperands(memref);
  odsState.addOperands(shape);
  odsState.addOperands(shift);
  odsState.addOperands(slice);
  odsState.addOperands(subcomponent);
  odsState.addOperands(indices);
  odsState.addOperands(lenParams);
  odsState.addAttribute(getOperandSegmentSizesAttrName(odsState.name), odsBuilder.getDenseI32ArrayAttr({1, static_cast<int32_t>(shape.size()), static_cast<int32_t>(shift.size()), static_cast<int32_t>(slice.size()), static_cast<int32_t>(subcomponent.size()), static_cast<int32_t>(indices.size()), static_cast<int32_t>(lenParams.size())}));
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void XArrayCoorOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() >= 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult XArrayCoorOp::verifyInvariantsImpl() {
  auto namedAttrRange = (*this)->getAttrs();
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_operandSegmentSizes;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitOpError("requires attribute 'operandSegmentSizes'");
    if (namedAttrIt->getName() == getOperandSegmentSizesAttrName()) {
      tblgen_operandSegmentSizes = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }

  {
    auto sizeAttr = ::llvm::cast<::mlir::DenseI32ArrayAttr>(tblgen_operandSegmentSizes);
    auto numElements = sizeAttr.asArrayRef().size();
    if (numElements != 7)
      return emitOpError("'operandSegmentSizes' attribute for specifying operand segments must have 7 "
                "elements, but got ") << numElements;
  }
    {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_CGOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_CGOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_CGOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup3 = getODSOperands(3);

    for (auto v : valueGroup3) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_CGOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup4 = getODSOperands(4);

    for (auto v : valueGroup4) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_CGOps2(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup5 = getODSOperands(5);

    for (auto v : valueGroup5) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_CGOps2(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup6 = getODSOperands(6);

    for (auto v : valueGroup6) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_CGOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_CGOps3(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult XArrayCoorOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult XArrayCoorOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand memrefRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> memrefOperands(memrefRawOperands);  ::llvm::SMLoc memrefOperandsLoc;
  (void)memrefOperandsLoc;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> shapeOperands;
  ::llvm::SMLoc shapeOperandsLoc;
  (void)shapeOperandsLoc;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> shiftOperands;
  ::llvm::SMLoc shiftOperandsLoc;
  (void)shiftOperandsLoc;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> sliceOperands;
  ::llvm::SMLoc sliceOperandsLoc;
  (void)sliceOperandsLoc;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> subcomponentOperands;
  ::llvm::SMLoc subcomponentOperandsLoc;
  (void)subcomponentOperandsLoc;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> indicesOperands;
  ::llvm::SMLoc indicesOperandsLoc;
  (void)indicesOperandsLoc;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> lenParamsOperands;
  ::llvm::SMLoc lenParamsOperandsLoc;
  (void)lenParamsOperandsLoc;
  ::llvm::ArrayRef<::mlir::Type> allOperandTypes;
  ::llvm::ArrayRef<::mlir::Type> allResultTypes;

  memrefOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(memrefRawOperands[0]))
    return ::mlir::failure();
  if (::mlir::succeeded(parser.parseOptionalLParen())) {

  shapeOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperandList(shapeOperands))
    return ::mlir::failure();
  if (parser.parseRParen())
    return ::mlir::failure();
  }
  if (::mlir::succeeded(parser.parseOptionalKeyword("origin"))) {

  shiftOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperandList(shiftOperands))
    return ::mlir::failure();
  }
  if (::mlir::succeeded(parser.parseOptionalLSquare())) {

  sliceOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperandList(sliceOperands))
    return ::mlir::failure();
  if (parser.parseRSquare())
    return ::mlir::failure();
  }
  if (::mlir::succeeded(parser.parseOptionalKeyword("path"))) {

  subcomponentOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperandList(subcomponentOperands))
    return ::mlir::failure();
  }
  if (parser.parseLess())
    return ::mlir::failure();

  indicesOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperandList(indicesOperands))
    return ::mlir::failure();
  if (parser.parseGreater())
    return ::mlir::failure();
  if (::mlir::succeeded(parser.parseOptionalKeyword("typeparams"))) {

  lenParamsOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperandList(lenParamsOperands))
    return ::mlir::failure();
  }
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
  result.addAttribute("operandSegmentSizes", parser.getBuilder().getDenseI32ArrayAttr({1, static_cast<int32_t>(shapeOperands.size()), static_cast<int32_t>(shiftOperands.size()), static_cast<int32_t>(sliceOperands.size()), static_cast<int32_t>(subcomponentOperands.size()), static_cast<int32_t>(indicesOperands.size()), static_cast<int32_t>(lenParamsOperands.size())}));
  result.addTypes(allResultTypes);
  if (parser.resolveOperands(::llvm::concat<const ::mlir::OpAsmParser::UnresolvedOperand>(memrefOperands, shapeOperands, shiftOperands, sliceOperands, subcomponentOperands, indicesOperands, lenParamsOperands), allOperandTypes, parser.getNameLoc(), result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void XArrayCoorOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getMemref();
  if (!getShape().empty()) {
    _odsPrinter << "(";
    _odsPrinter << getShape();
    _odsPrinter << ")";
  }
  if (!getShift().empty()) {
    _odsPrinter << ' ' << "origin";
    _odsPrinter << ' ';
    _odsPrinter << getShift();
  }
  if (!getSlice().empty()) {
    _odsPrinter << "[";
    _odsPrinter << getSlice();
    _odsPrinter << "]";
  }
  if (!getSubcomponent().empty()) {
    _odsPrinter << ' ' << "path";
    _odsPrinter << ' ';
    _odsPrinter << getSubcomponent();
  }
  _odsPrinter << "<";
  _odsPrinter << getIndices();
  _odsPrinter << ">";
  if (!getLenParams().empty()) {
    _odsPrinter << ' ' << "typeparams";
    _odsPrinter << ' ';
    _odsPrinter << getLenParams();
  }
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("operandSegmentSizes");
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(getOperation()->getOperandTypes(), getOperation()->getResultTypes());
}

} // namespace cg
} // namespace fir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::fir::cg::XArrayCoorOp)

namespace fir {
namespace cg {

//===----------------------------------------------------------------------===//
// ::fir::cg::XEmboxOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
XEmboxOpGenericAdaptorBase::XEmboxOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("fircg.ext_embox", odsAttrs.getContext());
}

std::pair<unsigned, unsigned> XEmboxOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  assert(::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 0, odsAttrs.end() - 0, XEmboxOp::getOperandSegmentSizesAttrName(*odsOpName)) && "missing segment size attribute for op");
  auto sizeAttr = ::llvm::cast<::mlir::DenseI32ArrayAttr>(::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 0, odsAttrs.end() - 0, XEmboxOp::getOperandSegmentSizesAttrName(*odsOpName)));

  unsigned start = 0;
  for (unsigned i = 0; i < index; ++i)
    start += sizeAttr[i];
  return {start, sizeAttr[index]};
}

::mlir::DictionaryAttr XEmboxOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
XEmboxOpAdaptor::XEmboxOpAdaptor(XEmboxOp op) : XEmboxOpAdaptor(op->getOperands(), op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

::mlir::LogicalResult XEmboxOpAdaptor::verify(::mlir::Location loc) {
  auto namedAttrRange = odsAttrs;
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_operandSegmentSizes;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitError(loc, "'fircg.ext_embox' op ""requires attribute 'operandSegmentSizes'");
    if (namedAttrIt->getName() == XEmboxOp::getOperandSegmentSizesAttrName(*odsOpName)) {
      tblgen_operandSegmentSizes = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }

  {
    auto sizeAttr = ::llvm::cast<::mlir::DenseI32ArrayAttr>(tblgen_operandSegmentSizes);
    auto numElements = sizeAttr.asArrayRef().size();
    if (numElements != 8)
      return emitError(loc, "'fircg.ext_embox' op ""'operandSegmentSizes' attribute for specifying operand segments must have 8 "
                "elements, but got ") << numElements;
  }
    return ::mlir::success();
}

std::pair<unsigned, unsigned> XEmboxOp::getODSOperandIndexAndLength(unsigned index) {
  auto sizeAttr = ::llvm::cast<::mlir::DenseI32ArrayAttr>(::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 0, (*this)->getAttrs().end() - 0, getOperandSegmentSizesAttrName()));

  unsigned start = 0;
  for (unsigned i = 0; i < index; ++i)
    start += sizeAttr[i];
  return {start, sizeAttr[index]};
}

::mlir::Operation::operand_range XEmboxOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value XEmboxOp::getMemref() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::Operation::operand_range XEmboxOp::getShape() {
  return getODSOperands(1);
}

::mlir::Operation::operand_range XEmboxOp::getShift() {
  return getODSOperands(2);
}

::mlir::Operation::operand_range XEmboxOp::getSlice() {
  return getODSOperands(3);
}

::mlir::Operation::operand_range XEmboxOp::getSubcomponent() {
  return getODSOperands(4);
}

::mlir::Operation::operand_range XEmboxOp::getSubstr() {
  return getODSOperands(5);
}

::mlir::Operation::operand_range XEmboxOp::getLenParams() {
  return getODSOperands(6);
}

::mlir::Value XEmboxOp::getSourceBox() {
  auto operands = getODSOperands(7);
  return operands.empty() ? ::mlir::Value{} : ::llvm::cast<::mlir::Value>(*operands.begin());
}

::mlir::MutableOperandRange XEmboxOp::getMemrefMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(0u, *::mlir::impl::getNamedAttrFromSortedRange((*this)->getAttrs().begin() + 0, (*this)->getAttrs().end() - 0, getOperandSegmentSizesAttrName())));
  return mutableRange;
}

::mlir::MutableOperandRange XEmboxOp::getShapeMutable() {
  auto range = getODSOperandIndexAndLength(1);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(1u, *::mlir::impl::getNamedAttrFromSortedRange((*this)->getAttrs().begin() + 0, (*this)->getAttrs().end() - 0, getOperandSegmentSizesAttrName())));
  return mutableRange;
}

::mlir::MutableOperandRange XEmboxOp::getShiftMutable() {
  auto range = getODSOperandIndexAndLength(2);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(2u, *::mlir::impl::getNamedAttrFromSortedRange((*this)->getAttrs().begin() + 0, (*this)->getAttrs().end() - 0, getOperandSegmentSizesAttrName())));
  return mutableRange;
}

::mlir::MutableOperandRange XEmboxOp::getSliceMutable() {
  auto range = getODSOperandIndexAndLength(3);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(3u, *::mlir::impl::getNamedAttrFromSortedRange((*this)->getAttrs().begin() + 0, (*this)->getAttrs().end() - 0, getOperandSegmentSizesAttrName())));
  return mutableRange;
}

::mlir::MutableOperandRange XEmboxOp::getSubcomponentMutable() {
  auto range = getODSOperandIndexAndLength(4);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(4u, *::mlir::impl::getNamedAttrFromSortedRange((*this)->getAttrs().begin() + 0, (*this)->getAttrs().end() - 0, getOperandSegmentSizesAttrName())));
  return mutableRange;
}

::mlir::MutableOperandRange XEmboxOp::getSubstrMutable() {
  auto range = getODSOperandIndexAndLength(5);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(5u, *::mlir::impl::getNamedAttrFromSortedRange((*this)->getAttrs().begin() + 0, (*this)->getAttrs().end() - 0, getOperandSegmentSizesAttrName())));
  return mutableRange;
}

::mlir::MutableOperandRange XEmboxOp::getLenParamsMutable() {
  auto range = getODSOperandIndexAndLength(6);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(6u, *::mlir::impl::getNamedAttrFromSortedRange((*this)->getAttrs().begin() + 0, (*this)->getAttrs().end() - 0, getOperandSegmentSizesAttrName())));
  return mutableRange;
}

::mlir::MutableOperandRange XEmboxOp::getSourceBoxMutable() {
  auto range = getODSOperandIndexAndLength(7);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(7u, *::mlir::impl::getNamedAttrFromSortedRange((*this)->getAttrs().begin() + 0, (*this)->getAttrs().end() - 0, getOperandSegmentSizesAttrName())));
  return mutableRange;
}

std::pair<unsigned, unsigned> XEmboxOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range XEmboxOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void XEmboxOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type resultType0, ::mlir::Value memref, ::mlir::ValueRange shape, ::mlir::ValueRange shift, ::mlir::ValueRange slice, ::mlir::ValueRange subcomponent, ::mlir::ValueRange substr, ::mlir::ValueRange lenParams, /*optional*/::mlir::Value sourceBox) {
  odsState.addOperands(memref);
  odsState.addOperands(shape);
  odsState.addOperands(shift);
  odsState.addOperands(slice);
  odsState.addOperands(subcomponent);
  odsState.addOperands(substr);
  odsState.addOperands(lenParams);
  if (sourceBox)
    odsState.addOperands(sourceBox);
  odsState.addAttribute(getOperandSegmentSizesAttrName(odsState.name), odsBuilder.getDenseI32ArrayAttr({1, static_cast<int32_t>(shape.size()), static_cast<int32_t>(shift.size()), static_cast<int32_t>(slice.size()), static_cast<int32_t>(subcomponent.size()), static_cast<int32_t>(substr.size()), static_cast<int32_t>(lenParams.size()), (sourceBox ? 1 : 0)}));
  odsState.addTypes(resultType0);
}

void XEmboxOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value memref, ::mlir::ValueRange shape, ::mlir::ValueRange shift, ::mlir::ValueRange slice, ::mlir::ValueRange subcomponent, ::mlir::ValueRange substr, ::mlir::ValueRange lenParams, /*optional*/::mlir::Value sourceBox) {
  odsState.addOperands(memref);
  odsState.addOperands(shape);
  odsState.addOperands(shift);
  odsState.addOperands(slice);
  odsState.addOperands(subcomponent);
  odsState.addOperands(substr);
  odsState.addOperands(lenParams);
  if (sourceBox)
    odsState.addOperands(sourceBox);
  odsState.addAttribute(getOperandSegmentSizesAttrName(odsState.name), odsBuilder.getDenseI32ArrayAttr({1, static_cast<int32_t>(shape.size()), static_cast<int32_t>(shift.size()), static_cast<int32_t>(slice.size()), static_cast<int32_t>(subcomponent.size()), static_cast<int32_t>(substr.size()), static_cast<int32_t>(lenParams.size()), (sourceBox ? 1 : 0)}));
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void XEmboxOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() >= 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult XEmboxOp::verifyInvariantsImpl() {
  auto namedAttrRange = (*this)->getAttrs();
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_operandSegmentSizes;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitOpError("requires attribute 'operandSegmentSizes'");
    if (namedAttrIt->getName() == getOperandSegmentSizesAttrName()) {
      tblgen_operandSegmentSizes = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }

  {
    auto sizeAttr = ::llvm::cast<::mlir::DenseI32ArrayAttr>(tblgen_operandSegmentSizes);
    auto numElements = sizeAttr.asArrayRef().size();
    if (numElements != 8)
      return emitOpError("'operandSegmentSizes' attribute for specifying operand segments must have 8 "
                "elements, but got ") << numElements;
  }
    {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_CGOps4(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_CGOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_CGOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup3 = getODSOperands(3);

    for (auto v : valueGroup3) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_CGOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup4 = getODSOperands(4);

    for (auto v : valueGroup4) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_CGOps2(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup5 = getODSOperands(5);

    for (auto v : valueGroup5) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_CGOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup6 = getODSOperands(6);

    for (auto v : valueGroup6) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_CGOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup7 = getODSOperands(7);

    if (valueGroup7.size() > 1) {
      return emitOpError("operand group starting at #") << index
          << " requires 0 or 1 element, but found " << valueGroup7.size();
    }

    for (auto v : valueGroup7) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_CGOps5(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_CGOps6(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult XEmboxOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult XEmboxOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand memrefRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> memrefOperands(memrefRawOperands);  ::llvm::SMLoc memrefOperandsLoc;
  (void)memrefOperandsLoc;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> shapeOperands;
  ::llvm::SMLoc shapeOperandsLoc;
  (void)shapeOperandsLoc;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> shiftOperands;
  ::llvm::SMLoc shiftOperandsLoc;
  (void)shiftOperandsLoc;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> sliceOperands;
  ::llvm::SMLoc sliceOperandsLoc;
  (void)sliceOperandsLoc;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> subcomponentOperands;
  ::llvm::SMLoc subcomponentOperandsLoc;
  (void)subcomponentOperandsLoc;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> substrOperands;
  ::llvm::SMLoc substrOperandsLoc;
  (void)substrOperandsLoc;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> lenParamsOperands;
  ::llvm::SMLoc lenParamsOperandsLoc;
  (void)lenParamsOperandsLoc;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> sourceBoxOperands;
  ::llvm::SMLoc sourceBoxOperandsLoc;
  (void)sourceBoxOperandsLoc;
  ::llvm::ArrayRef<::mlir::Type> allOperandTypes;
  ::llvm::ArrayRef<::mlir::Type> allResultTypes;

  memrefOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(memrefRawOperands[0]))
    return ::mlir::failure();
  if (::mlir::succeeded(parser.parseOptionalLParen())) {

  shapeOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperandList(shapeOperands))
    return ::mlir::failure();
  if (parser.parseRParen())
    return ::mlir::failure();
  }
  if (::mlir::succeeded(parser.parseOptionalKeyword("origin"))) {

  shiftOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperandList(shiftOperands))
    return ::mlir::failure();
  }
  if (::mlir::succeeded(parser.parseOptionalLSquare())) {

  sliceOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperandList(sliceOperands))
    return ::mlir::failure();
  if (parser.parseRSquare())
    return ::mlir::failure();
  }
  if (::mlir::succeeded(parser.parseOptionalKeyword("path"))) {

  subcomponentOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperandList(subcomponentOperands))
    return ::mlir::failure();
  }
  if (::mlir::succeeded(parser.parseOptionalKeyword("substr"))) {

  substrOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperandList(substrOperands))
    return ::mlir::failure();
  }
  if (::mlir::succeeded(parser.parseOptionalKeyword("typeparams"))) {

  lenParamsOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperandList(lenParamsOperands))
    return ::mlir::failure();
  }
  if (::mlir::succeeded(parser.parseOptionalKeyword("source_box"))) {

  {
    sourceBoxOperandsLoc = parser.getCurrentLocation();
    ::mlir::OpAsmParser::UnresolvedOperand operand;
    ::mlir::OptionalParseResult parseResult =
                                    parser.parseOptionalOperand(operand);
    if (parseResult.has_value()) {
      if (failed(*parseResult))
        return ::mlir::failure();
      sourceBoxOperands.push_back(operand);
    }
  }
  }
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
  result.addAttribute("operandSegmentSizes", parser.getBuilder().getDenseI32ArrayAttr({1, static_cast<int32_t>(shapeOperands.size()), static_cast<int32_t>(shiftOperands.size()), static_cast<int32_t>(sliceOperands.size()), static_cast<int32_t>(subcomponentOperands.size()), static_cast<int32_t>(substrOperands.size()), static_cast<int32_t>(lenParamsOperands.size()), static_cast<int32_t>(sourceBoxOperands.size())}));
  result.addTypes(allResultTypes);
  if (parser.resolveOperands(::llvm::concat<const ::mlir::OpAsmParser::UnresolvedOperand>(memrefOperands, shapeOperands, shiftOperands, sliceOperands, subcomponentOperands, substrOperands, lenParamsOperands, sourceBoxOperands), allOperandTypes, parser.getNameLoc(), result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void XEmboxOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getMemref();
  if (!getShape().empty()) {
    _odsPrinter << "(";
    _odsPrinter << getShape();
    _odsPrinter << ")";
  }
  if (!getShift().empty()) {
    _odsPrinter << ' ' << "origin";
    _odsPrinter << ' ';
    _odsPrinter << getShift();
  }
  if (!getSlice().empty()) {
    _odsPrinter << "[";
    _odsPrinter << getSlice();
    _odsPrinter << "]";
  }
  if (!getSubcomponent().empty()) {
    _odsPrinter << ' ' << "path";
    _odsPrinter << ' ';
    _odsPrinter << getSubcomponent();
  }
  if (!getSubstr().empty()) {
    _odsPrinter << ' ' << "substr";
    _odsPrinter << ' ';
    _odsPrinter << getSubstr();
  }
  if (!getLenParams().empty()) {
    _odsPrinter << ' ' << "typeparams";
    _odsPrinter << ' ';
    _odsPrinter << getLenParams();
  }
  if (getSourceBox()) {
    _odsPrinter << ' ' << "source_box";
    _odsPrinter << ' ';
    if (::mlir::Value value = getSourceBox())
      _odsPrinter << value;
  }
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("operandSegmentSizes");
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(getOperation()->getOperandTypes(), getOperation()->getResultTypes());
}

} // namespace cg
} // namespace fir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::fir::cg::XEmboxOp)

namespace fir {
namespace cg {

//===----------------------------------------------------------------------===//
// ::fir::cg::XReboxOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
XReboxOpGenericAdaptorBase::XReboxOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("fircg.ext_rebox", odsAttrs.getContext());
}

std::pair<unsigned, unsigned> XReboxOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  assert(::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 0, odsAttrs.end() - 0, XReboxOp::getOperandSegmentSizesAttrName(*odsOpName)) && "missing segment size attribute for op");
  auto sizeAttr = ::llvm::cast<::mlir::DenseI32ArrayAttr>(::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 0, odsAttrs.end() - 0, XReboxOp::getOperandSegmentSizesAttrName(*odsOpName)));

  unsigned start = 0;
  for (unsigned i = 0; i < index; ++i)
    start += sizeAttr[i];
  return {start, sizeAttr[index]};
}

::mlir::DictionaryAttr XReboxOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
XReboxOpAdaptor::XReboxOpAdaptor(XReboxOp op) : XReboxOpAdaptor(op->getOperands(), op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

::mlir::LogicalResult XReboxOpAdaptor::verify(::mlir::Location loc) {
  auto namedAttrRange = odsAttrs;
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_operandSegmentSizes;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitError(loc, "'fircg.ext_rebox' op ""requires attribute 'operandSegmentSizes'");
    if (namedAttrIt->getName() == XReboxOp::getOperandSegmentSizesAttrName(*odsOpName)) {
      tblgen_operandSegmentSizes = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }

  {
    auto sizeAttr = ::llvm::cast<::mlir::DenseI32ArrayAttr>(tblgen_operandSegmentSizes);
    auto numElements = sizeAttr.asArrayRef().size();
    if (numElements != 6)
      return emitError(loc, "'fircg.ext_rebox' op ""'operandSegmentSizes' attribute for specifying operand segments must have 6 "
                "elements, but got ") << numElements;
  }
    return ::mlir::success();
}

std::pair<unsigned, unsigned> XReboxOp::getODSOperandIndexAndLength(unsigned index) {
  auto sizeAttr = ::llvm::cast<::mlir::DenseI32ArrayAttr>(::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 0, (*this)->getAttrs().end() - 0, getOperandSegmentSizesAttrName()));

  unsigned start = 0;
  for (unsigned i = 0; i < index; ++i)
    start += sizeAttr[i];
  return {start, sizeAttr[index]};
}

::mlir::Operation::operand_range XReboxOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value XReboxOp::getBox() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::Operation::operand_range XReboxOp::getShape() {
  return getODSOperands(1);
}

::mlir::Operation::operand_range XReboxOp::getShift() {
  return getODSOperands(2);
}

::mlir::Operation::operand_range XReboxOp::getSlice() {
  return getODSOperands(3);
}

::mlir::Operation::operand_range XReboxOp::getSubcomponent() {
  return getODSOperands(4);
}

::mlir::Operation::operand_range XReboxOp::getSubstr() {
  return getODSOperands(5);
}

::mlir::MutableOperandRange XReboxOp::getBoxMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(0u, *::mlir::impl::getNamedAttrFromSortedRange((*this)->getAttrs().begin() + 0, (*this)->getAttrs().end() - 0, getOperandSegmentSizesAttrName())));
  return mutableRange;
}

::mlir::MutableOperandRange XReboxOp::getShapeMutable() {
  auto range = getODSOperandIndexAndLength(1);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(1u, *::mlir::impl::getNamedAttrFromSortedRange((*this)->getAttrs().begin() + 0, (*this)->getAttrs().end() - 0, getOperandSegmentSizesAttrName())));
  return mutableRange;
}

::mlir::MutableOperandRange XReboxOp::getShiftMutable() {
  auto range = getODSOperandIndexAndLength(2);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(2u, *::mlir::impl::getNamedAttrFromSortedRange((*this)->getAttrs().begin() + 0, (*this)->getAttrs().end() - 0, getOperandSegmentSizesAttrName())));
  return mutableRange;
}

::mlir::MutableOperandRange XReboxOp::getSliceMutable() {
  auto range = getODSOperandIndexAndLength(3);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(3u, *::mlir::impl::getNamedAttrFromSortedRange((*this)->getAttrs().begin() + 0, (*this)->getAttrs().end() - 0, getOperandSegmentSizesAttrName())));
  return mutableRange;
}

::mlir::MutableOperandRange XReboxOp::getSubcomponentMutable() {
  auto range = getODSOperandIndexAndLength(4);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(4u, *::mlir::impl::getNamedAttrFromSortedRange((*this)->getAttrs().begin() + 0, (*this)->getAttrs().end() - 0, getOperandSegmentSizesAttrName())));
  return mutableRange;
}

::mlir::MutableOperandRange XReboxOp::getSubstrMutable() {
  auto range = getODSOperandIndexAndLength(5);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(5u, *::mlir::impl::getNamedAttrFromSortedRange((*this)->getAttrs().begin() + 0, (*this)->getAttrs().end() - 0, getOperandSegmentSizesAttrName())));
  return mutableRange;
}

std::pair<unsigned, unsigned> XReboxOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range XReboxOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void XReboxOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type resultType0, ::mlir::Value box, ::mlir::ValueRange shape, ::mlir::ValueRange shift, ::mlir::ValueRange slice, ::mlir::ValueRange subcomponent, ::mlir::ValueRange substr) {
  odsState.addOperands(box);
  odsState.addOperands(shape);
  odsState.addOperands(shift);
  odsState.addOperands(slice);
  odsState.addOperands(subcomponent);
  odsState.addOperands(substr);
  odsState.addAttribute(getOperandSegmentSizesAttrName(odsState.name), odsBuilder.getDenseI32ArrayAttr({1, static_cast<int32_t>(shape.size()), static_cast<int32_t>(shift.size()), static_cast<int32_t>(slice.size()), static_cast<int32_t>(subcomponent.size()), static_cast<int32_t>(substr.size())}));
  odsState.addTypes(resultType0);
}

void XReboxOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value box, ::mlir::ValueRange shape, ::mlir::ValueRange shift, ::mlir::ValueRange slice, ::mlir::ValueRange subcomponent, ::mlir::ValueRange substr) {
  odsState.addOperands(box);
  odsState.addOperands(shape);
  odsState.addOperands(shift);
  odsState.addOperands(slice);
  odsState.addOperands(subcomponent);
  odsState.addOperands(substr);
  odsState.addAttribute(getOperandSegmentSizesAttrName(odsState.name), odsBuilder.getDenseI32ArrayAttr({1, static_cast<int32_t>(shape.size()), static_cast<int32_t>(shift.size()), static_cast<int32_t>(slice.size()), static_cast<int32_t>(subcomponent.size()), static_cast<int32_t>(substr.size())}));
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void XReboxOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() >= 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult XReboxOp::verifyInvariantsImpl() {
  auto namedAttrRange = (*this)->getAttrs();
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_operandSegmentSizes;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitOpError("requires attribute 'operandSegmentSizes'");
    if (namedAttrIt->getName() == getOperandSegmentSizesAttrName()) {
      tblgen_operandSegmentSizes = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }

  {
    auto sizeAttr = ::llvm::cast<::mlir::DenseI32ArrayAttr>(tblgen_operandSegmentSizes);
    auto numElements = sizeAttr.asArrayRef().size();
    if (numElements != 6)
      return emitOpError("'operandSegmentSizes' attribute for specifying operand segments must have 6 "
                "elements, but got ") << numElements;
  }
    {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_CGOps6(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_CGOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_CGOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup3 = getODSOperands(3);

    for (auto v : valueGroup3) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_CGOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup4 = getODSOperands(4);

    for (auto v : valueGroup4) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_CGOps2(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup5 = getODSOperands(5);

    for (auto v : valueGroup5) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_CGOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_CGOps6(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult XReboxOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult XReboxOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand boxRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> boxOperands(boxRawOperands);  ::llvm::SMLoc boxOperandsLoc;
  (void)boxOperandsLoc;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> shapeOperands;
  ::llvm::SMLoc shapeOperandsLoc;
  (void)shapeOperandsLoc;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> shiftOperands;
  ::llvm::SMLoc shiftOperandsLoc;
  (void)shiftOperandsLoc;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> sliceOperands;
  ::llvm::SMLoc sliceOperandsLoc;
  (void)sliceOperandsLoc;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> subcomponentOperands;
  ::llvm::SMLoc subcomponentOperandsLoc;
  (void)subcomponentOperandsLoc;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> substrOperands;
  ::llvm::SMLoc substrOperandsLoc;
  (void)substrOperandsLoc;
  ::llvm::ArrayRef<::mlir::Type> allOperandTypes;
  ::llvm::ArrayRef<::mlir::Type> allResultTypes;

  boxOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(boxRawOperands[0]))
    return ::mlir::failure();
  if (::mlir::succeeded(parser.parseOptionalLParen())) {

  shapeOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperandList(shapeOperands))
    return ::mlir::failure();
  if (parser.parseRParen())
    return ::mlir::failure();
  }
  if (::mlir::succeeded(parser.parseOptionalKeyword("origin"))) {

  shiftOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperandList(shiftOperands))
    return ::mlir::failure();
  }
  if (::mlir::succeeded(parser.parseOptionalLSquare())) {

  sliceOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperandList(sliceOperands))
    return ::mlir::failure();
  if (parser.parseRSquare())
    return ::mlir::failure();
  }
  if (::mlir::succeeded(parser.parseOptionalKeyword("path"))) {

  subcomponentOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperandList(subcomponentOperands))
    return ::mlir::failure();
  }
  if (::mlir::succeeded(parser.parseOptionalKeyword("substr"))) {

  substrOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperandList(substrOperands))
    return ::mlir::failure();
  }
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
  result.addAttribute("operandSegmentSizes", parser.getBuilder().getDenseI32ArrayAttr({1, static_cast<int32_t>(shapeOperands.size()), static_cast<int32_t>(shiftOperands.size()), static_cast<int32_t>(sliceOperands.size()), static_cast<int32_t>(subcomponentOperands.size()), static_cast<int32_t>(substrOperands.size())}));
  result.addTypes(allResultTypes);
  if (parser.resolveOperands(::llvm::concat<const ::mlir::OpAsmParser::UnresolvedOperand>(boxOperands, shapeOperands, shiftOperands, sliceOperands, subcomponentOperands, substrOperands), allOperandTypes, parser.getNameLoc(), result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void XReboxOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getBox();
  if (!getShape().empty()) {
    _odsPrinter << "(";
    _odsPrinter << getShape();
    _odsPrinter << ")";
  }
  if (!getShift().empty()) {
    _odsPrinter << ' ' << "origin";
    _odsPrinter << ' ';
    _odsPrinter << getShift();
  }
  if (!getSlice().empty()) {
    _odsPrinter << "[";
    _odsPrinter << getSlice();
    _odsPrinter << "]";
  }
  if (!getSubcomponent().empty()) {
    _odsPrinter << ' ' << "path";
    _odsPrinter << ' ';
    _odsPrinter << getSubcomponent();
  }
  if (!getSubstr().empty()) {
    _odsPrinter << ' ' << "substr";
    _odsPrinter << ' ';
    _odsPrinter << getSubstr();
  }
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("operandSegmentSizes");
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(getOperation()->getOperandTypes(), getOperation()->getResultTypes());
}

} // namespace cg
} // namespace fir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::fir::cg::XReboxOp)


#endif  // GET_OP_CLASSES

