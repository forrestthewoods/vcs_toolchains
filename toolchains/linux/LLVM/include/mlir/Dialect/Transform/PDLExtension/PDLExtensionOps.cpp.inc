/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Op Definitions                                                             *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#ifdef GET_OP_LIST
#undef GET_OP_LIST

::mlir::transform::PDLMatchOp,
::mlir::transform::WithPDLPatternsOp
#endif  // GET_OP_LIST

#ifdef GET_OP_CLASSES
#undef GET_OP_CLASSES


//===----------------------------------------------------------------------===//
// Local Utility Method Definitions
//===----------------------------------------------------------------------===//

namespace mlir {
namespace transform {

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_PDLExtensionOps0(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((::llvm::isa<::mlir::transform::TransformHandleTypeInterface>(type)))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be TransformHandleTypeInterface instance, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_PDLExtensionOps0(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> getDiag) {
  if (attr && !((::llvm::isa<::mlir::SymbolRefAttr>(attr))))
    return getDiag() << "attribute '" << attrName
        << "' failed to satisfy constraint: symbol reference attribute";
  return ::mlir::success();
}
static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_PDLExtensionOps0(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_PDLExtensionOps0(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::mlir::LogicalResult __mlir_ods_local_region_constraint_PDLExtensionOps0(
    ::mlir::Operation *op, ::mlir::Region &region, ::llvm::StringRef regionName,
    unsigned regionIndex) {
  if (!((::llvm::hasNItems(region, 1)))) {
    return op->emitOpError("region #") << regionIndex
        << (regionName.empty() ? " " : " ('" + regionName + "') ")
        << "failed to verify constraint: region with 1 blocks";
  }
  return ::mlir::success();
}
} // namespace transform
} // namespace mlir
namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::PDLMatchOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
PDLMatchOpGenericAdaptorBase::PDLMatchOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("transform.pdl_match", odsAttrs.getContext());
}

std::pair<unsigned, unsigned> PDLMatchOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr PDLMatchOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::SymbolRefAttr PDLMatchOpGenericAdaptorBase::getPatternNameAttr() {
  auto attr = ::llvm::cast<::mlir::SymbolRefAttr>(getProperties().pattern_name);
  return attr;
}

::mlir::SymbolRefAttr PDLMatchOpGenericAdaptorBase::getPatternName() {
  auto attr = getPatternNameAttr();
  return attr;
}

} // namespace detail
PDLMatchOpAdaptor::PDLMatchOpAdaptor(PDLMatchOp op) : PDLMatchOpAdaptor(op->getOperands(), op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

::mlir::LogicalResult PDLMatchOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_pattern_name = getProperties().pattern_name; (void)tblgen_pattern_name;
  if (!tblgen_pattern_name) return emitError(loc, "'transform.pdl_match' op ""requires attribute 'pattern_name'");

  if (tblgen_pattern_name && !((::llvm::isa<::mlir::SymbolRefAttr>(tblgen_pattern_name))))
    return emitError(loc, "'transform.pdl_match' op ""attribute 'pattern_name' failed to satisfy constraint: symbol reference attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> PDLMatchOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range PDLMatchOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> PDLMatchOp::getRoot() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface>>(*getODSOperands(0).begin());
}

::mlir::MutableOperandRange PDLMatchOp::getRootMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> PDLMatchOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range PDLMatchOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> PDLMatchOp::getMatched() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface>>(*getODSResults(0).begin());
}

::mlir::LogicalResult PDLMatchOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::mlir::InFlightDiagnostic *diag) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    if (diag)
      *diag << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.pattern_name;
       auto attr = dict.get("pattern_name");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        if (diag)
          *diag << "expected key entry for pattern_name in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        if (diag)
          *diag << "Invalid attribute `pattern_name` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute PDLMatchOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.pattern_name;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("pattern_name",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code PDLMatchOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.pattern_name.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> PDLMatchOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "pattern_name")
      return prop.pattern_name;
  return std::nullopt;
}

void PDLMatchOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "pattern_name") {
       prop.pattern_name = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.pattern_name)>>(value);
       return;
    }
}

void PDLMatchOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.pattern_name) attrs.append("pattern_name", prop.pattern_name);
}

::mlir::LogicalResult PDLMatchOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> getDiag) {
    {
      ::mlir::Attribute attr = attrs.get(getPatternNameAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_PDLExtensionOps0(attr, "pattern_name", getDiag)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult PDLMatchOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readAttribute(prop.pattern_name)))
    return ::mlir::failure();
  return ::mlir::success();
}

void PDLMatchOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;
  writer.writeAttribute(prop.pattern_name);
}

::mlir::SymbolRefAttr PDLMatchOp::getPatternNameAttr() {
  return ::llvm::cast<::mlir::SymbolRefAttr>(getProperties().pattern_name);
}

::mlir::SymbolRefAttr PDLMatchOp::getPatternName() {
  auto attr = getPatternNameAttr();
  return attr;
}

void PDLMatchOp::setPatternNameAttr(::mlir::SymbolRefAttr attr) {
  (*this)->setAttr(getPatternNameAttrName(), attr);
}

void PDLMatchOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type matched, ::mlir::Value root, ::mlir::SymbolRefAttr pattern_name) {
  odsState.addOperands(root);
  odsState.getOrAddProperties<Properties>().pattern_name = pattern_name;
  odsState.addTypes(matched);
}

void PDLMatchOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value root, ::mlir::SymbolRefAttr pattern_name) {
  odsState.addOperands(root);
  odsState.getOrAddProperties<Properties>().pattern_name = pattern_name;
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void PDLMatchOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult PDLMatchOp::verifyInvariantsImpl() {
  auto tblgen_pattern_name = getProperties().pattern_name; (void)tblgen_pattern_name;
  if (!tblgen_pattern_name) return emitOpError("requires attribute 'pattern_name'");

  if (::mlir::failed(__mlir_ods_local_attr_constraint_PDLExtensionOps0(*this, tblgen_pattern_name, "pattern_name")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_PDLExtensionOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_PDLExtensionOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult PDLMatchOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult PDLMatchOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::SymbolRefAttr pattern_nameAttr;
  ::mlir::OpAsmParser::UnresolvedOperand rootRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> rootOperands(rootRawOperands);  ::llvm::SMLoc rootOperandsLoc;
  (void)rootOperandsLoc;
  ::llvm::ArrayRef<::mlir::Type> allOperandTypes;
  ::llvm::ArrayRef<::mlir::Type> allResultTypes;

  if (parser.parseCustomAttributeWithFallback(pattern_nameAttr, parser.getBuilder().getType<::mlir::NoneType>())) {
    return ::mlir::failure();
  }
  if (pattern_nameAttr) result.getOrAddProperties<PDLMatchOp::Properties>().pattern_name = pattern_nameAttr;
  if (parser.parseKeyword("in"))
    return ::mlir::failure();

  rootOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(rootRawOperands[0]))
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
  if (parser.resolveOperands(rootOperands, allOperandTypes, parser.getNameLoc(), result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void PDLMatchOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter.printAttributeWithoutType(getPatternNameAttr());
  _odsPrinter << ' ' << "in";
  _odsPrinter << ' ';
  _odsPrinter << getRoot();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("pattern_name");
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(getOperation()->getOperandTypes(), getOperation()->getResultTypes());
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::PDLMatchOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::WithPDLPatternsOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
WithPDLPatternsOpGenericAdaptorBase::WithPDLPatternsOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("transform.with_pdl_patterns", odsAttrs.getContext());
}

std::pair<unsigned, unsigned> WithPDLPatternsOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  bool isVariadic[] = {true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (odsOperandsSize - 0) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

::mlir::DictionaryAttr WithPDLPatternsOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::Region &WithPDLPatternsOpGenericAdaptorBase::getBody() {
  return *odsRegions[0];
}

::mlir::RegionRange WithPDLPatternsOpGenericAdaptorBase::getRegions() {
  return odsRegions;
}

} // namespace detail
WithPDLPatternsOpAdaptor::WithPDLPatternsOpAdaptor(WithPDLPatternsOp op) : WithPDLPatternsOpAdaptor(op->getOperands(), op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

::mlir::LogicalResult WithPDLPatternsOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> WithPDLPatternsOp::getODSOperandIndexAndLength(unsigned index) {
  bool isVariadic[] = {true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (getOperation()->getNumOperands() - 0) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

::mlir::Operation::operand_range WithPDLPatternsOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> WithPDLPatternsOp::getRoot() {
  auto operands = getODSOperands(0);
  return operands.empty() ? ::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface>{} : ::llvm::cast<::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface>>(*operands.begin());
}

::mlir::MutableOperandRange WithPDLPatternsOp::getRootMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> WithPDLPatternsOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range WithPDLPatternsOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Region &WithPDLPatternsOp::getBody() {
  return (*this)->getRegion(0);
}

void WithPDLPatternsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, /*optional*/::mlir::Value root) {
  if (root)
    odsState.addOperands(root);
  (void)odsState.addRegion();
}

void WithPDLPatternsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, /*optional*/::mlir::Value root) {
  if (root)
    odsState.addOperands(root);
  (void)odsState.addRegion();
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void WithPDLPatternsOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  for (unsigned i = 0; i != 1; ++i)
    (void)odsState.addRegion();
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult WithPDLPatternsOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    if (valueGroup0.size() > 1) {
      return emitOpError("operand group starting at #") << index
          << " requires 0 or 1 element, but found " << valueGroup0.size();
    }

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_PDLExtensionOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;

    for (auto &region : ::llvm::MutableArrayRef((*this)->getRegion(0)))
      if (::mlir::failed(__mlir_ods_local_region_constraint_PDLExtensionOps0(*this, region, "body", index++)))
        return ::mlir::failure();
  }
  return ::mlir::success();
}

::mlir::LogicalResult WithPDLPatternsOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

::mlir::ParseResult WithPDLPatternsOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> rootOperands;
  ::llvm::SMLoc rootOperandsLoc;
  (void)rootOperandsLoc;
  ::llvm::SmallVector<::mlir::Type, 1> rootTypes;
  ::llvm::SmallVector<std::unique_ptr<::mlir::Region>, 2> fullRegions;

  {
    rootOperandsLoc = parser.getCurrentLocation();
    ::mlir::OpAsmParser::UnresolvedOperand operand;
    ::mlir::OptionalParseResult parseResult =
                                    parser.parseOptionalOperand(operand);
    if (parseResult.has_value()) {
      if (failed(*parseResult))
        return ::mlir::failure();
      rootOperands.push_back(operand);
    }
  }
  if (!rootOperands.empty()) {
  if (parser.parseColon())
    return ::mlir::failure();

  {
    ::mlir::Type optionalType;
    ::mlir::OptionalParseResult parseResult =
                                    parser.parseOptionalType(optionalType);
    if (parseResult.has_value()) {
      if (failed(*parseResult))
        return ::mlir::failure();
      rootTypes.push_back(optionalType);
    }
  }
  }
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDictWithKeyword(result.attributes))
      return ::mlir::failure();
  }

  {
    std::unique_ptr<::mlir::Region> region;
    auto firstRegionResult = parser.parseOptionalRegion(region);
    if (firstRegionResult.has_value()) {
      if (failed(*firstRegionResult))
        return ::mlir::failure();
      fullRegions.emplace_back(std::move(region));

      // Parse any trailing regions.
      while (succeeded(parser.parseOptionalComma())) {
        region = std::make_unique<::mlir::Region>();
        if (parser.parseRegion(*region))
          return ::mlir::failure();
        fullRegions.emplace_back(std::move(region));
      }
    }
  }
  result.addRegions(fullRegions);
  if (parser.resolveOperands(rootOperands, rootTypes, rootOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void WithPDLPatternsOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  if (getRoot()) {
    _odsPrinter << ' ';
    if (::mlir::Value value = getRoot())
      _odsPrinter << value;
    _odsPrinter << ' ' << ":";
    _odsPrinter << ' ';
    _odsPrinter << (getRoot() ? ::llvm::ArrayRef<::mlir::Type>(getRoot().getType()) : ::llvm::ArrayRef<::mlir::Type>());
  }
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDictWithKeyword((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ';
    llvm::interleaveComma(getOperation()->getRegions(), _odsPrinter, [&](::mlir::Region &region) {
        _odsPrinter.printRegion(region);
    });
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::WithPDLPatternsOp)


#endif  // GET_OP_CLASSES

