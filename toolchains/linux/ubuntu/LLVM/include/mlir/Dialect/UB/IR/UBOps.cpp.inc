/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Op Definitions                                                             *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#ifdef GET_OP_LIST
#undef GET_OP_LIST

::mlir::ub::PoisonOp
#endif  // GET_OP_LIST

#ifdef GET_OP_CLASSES
#undef GET_OP_CLASSES


//===----------------------------------------------------------------------===//
// Local Utility Method Definitions
//===----------------------------------------------------------------------===//

namespace mlir {
namespace ub {

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_UBOps0(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((true))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be any type, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_UBOps0(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> getDiag) {
  if (attr && !((::llvm::isa<::mlir::ub::PoisonAttrInterface>(attr))))
    return getDiag() << "attribute '" << attrName
        << "' failed to satisfy constraint: PoisonAttrInterface instance";
  return ::mlir::success();
}
static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_UBOps0(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_UBOps0(attr, attrName, [op]() {
    return op->emitOpError();
  });
}
} // namespace ub
} // namespace mlir
namespace mlir {
namespace ub {

//===----------------------------------------------------------------------===//
// ::mlir::ub::PoisonOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
PoisonOpGenericAdaptorBase::PoisonOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("ub.poison", odsAttrs.getContext());
}

std::pair<unsigned, unsigned> PoisonOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr PoisonOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::ub::PoisonAttrInterface PoisonOpGenericAdaptorBase::getValueAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::llvm::dyn_cast_or_null<::mlir::ub::PoisonAttrInterface>(::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 0, odsAttrs.end() - 0, PoisonOp::getValueAttrName(*odsOpName)));
  return attr;
}

::mlir::ub::PoisonAttrInterface PoisonOpGenericAdaptorBase::getValue() {
  auto attr = getValueAttr();
  return attr;
}

} // namespace detail
PoisonOpAdaptor::PoisonOpAdaptor(PoisonOp op) : PoisonOpAdaptor(op->getOperands(), op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

::mlir::LogicalResult PoisonOpAdaptor::verify(::mlir::Location loc) {
  auto namedAttrRange = odsAttrs;
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_value;
  while (true) {
    if (namedAttrIt == namedAttrRange.end()) {
      break;
    }
    else if (namedAttrIt->getName() == PoisonOp::getValueAttrName(*odsOpName)) {
      tblgen_value = namedAttrIt->getValue();
    }
    ++namedAttrIt;
  }

  if (tblgen_value && !((::llvm::isa<::mlir::ub::PoisonAttrInterface>(tblgen_value))))
    return emitError(loc, "'ub.poison' op ""attribute 'value' failed to satisfy constraint: PoisonAttrInterface instance");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> PoisonOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range PoisonOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> PoisonOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range PoisonOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value PoisonOp::getResult() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

::mlir::ub::PoisonAttrInterface PoisonOp::getValueAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::ub::PoisonAttrInterface>(::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 0, (*this)->getAttrs().end() - 0, getValueAttrName()));
}

::mlir::ub::PoisonAttrInterface PoisonOp::getValue() {
  auto attr = getValueAttr();
  return attr;
}

void PoisonOp::setValueAttr(::mlir::ub::PoisonAttrInterface attr) {
  (*this)->setAttr(getValueAttrName(), attr);
}

void PoisonOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::ub::PoisonAttrInterface value) {
  if (value) {
    odsState.addAttribute(getValueAttrName(odsState.name), value);
  }
  odsState.addTypes(result);
}

void PoisonOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ub::PoisonAttrInterface value) {
  if (value) {
    odsState.addAttribute(getValueAttrName(odsState.name), value);
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void PoisonOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void PoisonOp::populateDefaultAttrs(const ::mlir::OperationName &opName, ::mlir::NamedAttrList &attributes) {
  auto attrNames = opName.getAttributeNames();
  ::mlir::Builder odsBuilder(attrNames.front().getContext());
  if (!attributes.get(attrNames[0])) {
    attributes.append(attrNames[0], ::mlir::ub::PoisonAttr::get(odsBuilder.getContext()));
  }
}

::mlir::LogicalResult PoisonOp::verifyInvariantsImpl() {
  auto namedAttrRange = (*this)->getAttrs();
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_value;
  while (true) {
    if (namedAttrIt == namedAttrRange.end()) {
      break;
    }
    else if (namedAttrIt->getName() == getValueAttrName()) {
      tblgen_value = namedAttrIt->getValue();
    }
    ++namedAttrIt;
  }

  if (::mlir::failed(__mlir_ods_local_attr_constraint_UBOps0(*this, tblgen_value, "value")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_UBOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult PoisonOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult PoisonOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::ub::PoisonAttrInterface valueAttr;
  ::mlir::Type resultRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> resultTypes(resultRawTypes);
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (::mlir::succeeded(parser.parseOptionalLess())) {

  if (parser.parseCustomAttributeWithFallback(valueAttr, ::mlir::Type{})) {
    return ::mlir::failure();
  }
  if (valueAttr) result.attributes.append("value", valueAttr);
  if (parser.parseGreater())
    return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  {
    ::mlir::Type type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    resultRawTypes[0] = type;
  }
  result.addTypes(resultTypes);
  return ::mlir::success();
}

void PoisonOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("value");
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getValueAttr();
     if(attr && (attr == ::mlir::ub::PoisonAttr::get(odsBuilder.getContext())))
       elidedAttrs.push_back("value");
  }
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  if (getValueAttr() && getValueAttr() != ::mlir::ub::PoisonAttr::get(::mlir::OpBuilder((*this)->getContext()).getContext())) {
    _odsPrinter << "<";
  _odsPrinter.printStrippedAttrOrType(getValueAttr());
    _odsPrinter << ">";
  }
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getResult().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void PoisonOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace ub
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::ub::PoisonOp)


#endif  // GET_OP_CLASSES

