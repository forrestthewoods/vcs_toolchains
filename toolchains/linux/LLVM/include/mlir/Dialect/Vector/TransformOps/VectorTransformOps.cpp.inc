/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Op Definitions                                                             *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#ifdef GET_OP_LIST
#undef GET_OP_LIST

::mlir::transform::ApplyCastAwayVectorLeadingOneDimPatternsOp,
::mlir::transform::ApplyLowerBroadcastPatternsOp,
::mlir::transform::ApplyLowerContractionPatternsOp,
::mlir::transform::ApplyLowerGatherPatternsOp,
::mlir::transform::ApplyLowerMaskedTransfersPatternsOp,
::mlir::transform::ApplyLowerMasksPatternsOp,
::mlir::transform::ApplyLowerMultiReductionPatternsOp,
::mlir::transform::ApplyLowerOuterProductPatternsOp,
::mlir::transform::ApplyLowerScanPatternsOp,
::mlir::transform::ApplyLowerShapeCastPatternsOp,
::mlir::transform::ApplyLowerTransferPatternsOp,
::mlir::transform::ApplyLowerTransposePatternsOp,
::mlir::transform::ApplyMaterializeMasksPatternsOp,
::mlir::transform::ApplyRankReducingSubviewPatternsOp,
::mlir::transform::ApplySplitTransferFullPartialPatternsOp,
::mlir::transform::ApplyTransferPermutationPatternsOp,
::mlir::transform::ApplyTransferToScfPatternsOp
#endif  // GET_OP_LIST

#ifdef GET_OP_CLASSES
#undef GET_OP_CLASSES


//===----------------------------------------------------------------------===//
// Local Utility Method Definitions
//===----------------------------------------------------------------------===//

namespace mlir {
namespace transform {

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_VectorTransformOps0(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> getDiag) {
  if (attr && !((::llvm::isa<::mlir::vector::VectorContractLoweringAttr>(attr))))
    return getDiag() << "attribute '" << attrName
        << "' failed to satisfy constraint: control the lowering of `vector.contract` operations.";
  return ::mlir::success();
}
static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_VectorTransformOps0(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_VectorTransformOps0(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_VectorTransformOps1(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> getDiag) {
  if (attr && !((::llvm::isa<::mlir::vector::VectorMultiReductionLoweringAttr>(attr))))
    return getDiag() << "attribute '" << attrName
        << "' failed to satisfy constraint: control the lowering of `vector.multi_reduction`.";
  return ::mlir::success();
}
static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_VectorTransformOps1(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_VectorTransformOps1(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_VectorTransformOps2(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> getDiag) {
  if (attr && !(((::llvm::isa<::mlir::IntegerAttr>(attr))) && ((::llvm::cast<::mlir::IntegerAttr>(attr).getType().isSignlessInteger(64)))))
    return getDiag() << "attribute '" << attrName
        << "' failed to satisfy constraint: 64-bit signless integer attribute";
  return ::mlir::success();
}
static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_VectorTransformOps2(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_VectorTransformOps2(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_VectorTransformOps3(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> getDiag) {
  if (attr && !((::llvm::isa<::mlir::vector::VectorTransposeLoweringAttr>(attr))))
    return getDiag() << "attribute '" << attrName
        << "' failed to satisfy constraint: control the lowering of `vector.transpose` operations.";
  return ::mlir::success();
}
static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_VectorTransformOps3(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_VectorTransformOps3(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_VectorTransformOps4(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> getDiag) {
  if (attr && !((::llvm::isa<::mlir::BoolAttr>(attr))))
    return getDiag() << "attribute '" << attrName
        << "' failed to satisfy constraint: bool attribute";
  return ::mlir::success();
}
static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_VectorTransformOps4(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_VectorTransformOps4(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_VectorTransformOps5(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> getDiag) {
  if (attr && !((::llvm::isa<::mlir::vector::VectorTransferSplitAttr>(attr))))
    return getDiag() << "attribute '" << attrName
        << "' failed to satisfy constraint: control the splitting of `vector.transfer` operations into in-bounds and out-of-bounds variants.";
  return ::mlir::success();
}
static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_VectorTransformOps5(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_VectorTransformOps5(attr, attrName, [op]() {
    return op->emitOpError();
  });
}
} // namespace transform
} // namespace mlir
namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::ApplyCastAwayVectorLeadingOneDimPatternsOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
ApplyCastAwayVectorLeadingOneDimPatternsOpGenericAdaptorBase::ApplyCastAwayVectorLeadingOneDimPatternsOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("transform.apply_patterns.vector.cast_away_vector_leading_one_dim", odsAttrs.getContext());
}

std::pair<unsigned, unsigned> ApplyCastAwayVectorLeadingOneDimPatternsOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr ApplyCastAwayVectorLeadingOneDimPatternsOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
ApplyCastAwayVectorLeadingOneDimPatternsOpAdaptor::ApplyCastAwayVectorLeadingOneDimPatternsOpAdaptor(ApplyCastAwayVectorLeadingOneDimPatternsOp op) : ApplyCastAwayVectorLeadingOneDimPatternsOpAdaptor(op->getOperands(), op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

::mlir::LogicalResult ApplyCastAwayVectorLeadingOneDimPatternsOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> ApplyCastAwayVectorLeadingOneDimPatternsOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range ApplyCastAwayVectorLeadingOneDimPatternsOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> ApplyCastAwayVectorLeadingOneDimPatternsOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ApplyCastAwayVectorLeadingOneDimPatternsOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void ApplyCastAwayVectorLeadingOneDimPatternsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState) {
}

void ApplyCastAwayVectorLeadingOneDimPatternsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes) {
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ApplyCastAwayVectorLeadingOneDimPatternsOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult ApplyCastAwayVectorLeadingOneDimPatternsOp::verifyInvariantsImpl() {
  return ::mlir::success();
}

::mlir::LogicalResult ApplyCastAwayVectorLeadingOneDimPatternsOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult ApplyCastAwayVectorLeadingOneDimPatternsOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  return ::mlir::success();
}

void ApplyCastAwayVectorLeadingOneDimPatternsOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::ApplyCastAwayVectorLeadingOneDimPatternsOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::ApplyLowerBroadcastPatternsOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
ApplyLowerBroadcastPatternsOpGenericAdaptorBase::ApplyLowerBroadcastPatternsOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("transform.apply_patterns.vector.lower_broadcast", odsAttrs.getContext());
}

std::pair<unsigned, unsigned> ApplyLowerBroadcastPatternsOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr ApplyLowerBroadcastPatternsOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
ApplyLowerBroadcastPatternsOpAdaptor::ApplyLowerBroadcastPatternsOpAdaptor(ApplyLowerBroadcastPatternsOp op) : ApplyLowerBroadcastPatternsOpAdaptor(op->getOperands(), op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

::mlir::LogicalResult ApplyLowerBroadcastPatternsOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> ApplyLowerBroadcastPatternsOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range ApplyLowerBroadcastPatternsOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> ApplyLowerBroadcastPatternsOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ApplyLowerBroadcastPatternsOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void ApplyLowerBroadcastPatternsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState) {
}

void ApplyLowerBroadcastPatternsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes) {
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ApplyLowerBroadcastPatternsOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult ApplyLowerBroadcastPatternsOp::verifyInvariantsImpl() {
  return ::mlir::success();
}

::mlir::LogicalResult ApplyLowerBroadcastPatternsOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult ApplyLowerBroadcastPatternsOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  return ::mlir::success();
}

void ApplyLowerBroadcastPatternsOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::ApplyLowerBroadcastPatternsOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::ApplyLowerContractionPatternsOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
ApplyLowerContractionPatternsOpGenericAdaptorBase::ApplyLowerContractionPatternsOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("transform.apply_patterns.vector.lower_contraction", odsAttrs.getContext());
}

std::pair<unsigned, unsigned> ApplyLowerContractionPatternsOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr ApplyLowerContractionPatternsOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::vector::VectorContractLoweringAttr ApplyLowerContractionPatternsOpGenericAdaptorBase::getLoweringStrategyAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::vector::VectorContractLoweringAttr>(getProperties().lowering_strategy);
  return attr;
}

::mlir::vector::VectorContractLowering ApplyLowerContractionPatternsOpGenericAdaptorBase::getLoweringStrategy() {
  auto attr = getLoweringStrategyAttr();
  return attr.getValue();
}

} // namespace detail
ApplyLowerContractionPatternsOpAdaptor::ApplyLowerContractionPatternsOpAdaptor(ApplyLowerContractionPatternsOp op) : ApplyLowerContractionPatternsOpAdaptor(op->getOperands(), op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

::mlir::LogicalResult ApplyLowerContractionPatternsOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_lowering_strategy = getProperties().lowering_strategy; (void)tblgen_lowering_strategy;

  if (tblgen_lowering_strategy && !((::llvm::isa<::mlir::vector::VectorContractLoweringAttr>(tblgen_lowering_strategy))))
    return emitError(loc, "'transform.apply_patterns.vector.lower_contraction' op ""attribute 'lowering_strategy' failed to satisfy constraint: control the lowering of `vector.contract` operations.");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> ApplyLowerContractionPatternsOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range ApplyLowerContractionPatternsOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> ApplyLowerContractionPatternsOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ApplyLowerContractionPatternsOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::LogicalResult ApplyLowerContractionPatternsOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::mlir::InFlightDiagnostic *diag) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    if (diag)
      *diag << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.lowering_strategy;
       auto attr = dict.get("lowering_strategy");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        if (diag)
          *diag << "expected key entry for lowering_strategy in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        if (diag)
          *diag << "Invalid attribute `lowering_strategy` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute ApplyLowerContractionPatternsOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.lowering_strategy;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("lowering_strategy",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code ApplyLowerContractionPatternsOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.lowering_strategy.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> ApplyLowerContractionPatternsOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "lowering_strategy")
      return prop.lowering_strategy;
  return std::nullopt;
}

void ApplyLowerContractionPatternsOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "lowering_strategy") {
       prop.lowering_strategy = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.lowering_strategy)>>(value);
       return;
    }
}

void ApplyLowerContractionPatternsOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.lowering_strategy) attrs.append("lowering_strategy", prop.lowering_strategy);
}

::mlir::LogicalResult ApplyLowerContractionPatternsOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> getDiag) {
    {
      ::mlir::Attribute attr = attrs.get(getLoweringStrategyAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_VectorTransformOps0(attr, "lowering_strategy", getDiag)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult ApplyLowerContractionPatternsOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.lowering_strategy)))
    return ::mlir::failure();
  return ::mlir::success();
}

void ApplyLowerContractionPatternsOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.lowering_strategy);
}

::mlir::vector::VectorContractLoweringAttr ApplyLowerContractionPatternsOp::getLoweringStrategyAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::vector::VectorContractLoweringAttr>(getProperties().lowering_strategy);
}

::mlir::vector::VectorContractLowering ApplyLowerContractionPatternsOp::getLoweringStrategy() {
  auto attr = getLoweringStrategyAttr();
  return attr.getValue();
}

void ApplyLowerContractionPatternsOp::setLoweringStrategyAttr(::mlir::vector::VectorContractLoweringAttr attr) {
  (*this)->setAttr(getLoweringStrategyAttrName(), attr);
}

void ApplyLowerContractionPatternsOp::setLoweringStrategy(::mlir::vector::VectorContractLowering attrValue) {
  (*this)->setAttr(getLoweringStrategyAttrName(), ::mlir::vector::VectorContractLoweringAttr::get(::mlir::Builder((*this)->getContext()).getContext(), attrValue));
}

void ApplyLowerContractionPatternsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::vector::VectorContractLoweringAttr lowering_strategy) {
  if (lowering_strategy) {
    odsState.getOrAddProperties<Properties>().lowering_strategy = lowering_strategy;
  }
}

void ApplyLowerContractionPatternsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::vector::VectorContractLoweringAttr lowering_strategy) {
  if (lowering_strategy) {
    odsState.getOrAddProperties<Properties>().lowering_strategy = lowering_strategy;
  }
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ApplyLowerContractionPatternsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::vector::VectorContractLowering lowering_strategy) {
  odsState.getOrAddProperties<Properties>().lowering_strategy = ::mlir::vector::VectorContractLoweringAttr::get(odsBuilder.getContext(), lowering_strategy);
}

void ApplyLowerContractionPatternsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::vector::VectorContractLowering lowering_strategy) {
  odsState.getOrAddProperties<Properties>().lowering_strategy = ::mlir::vector::VectorContractLoweringAttr::get(odsBuilder.getContext(), lowering_strategy);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ApplyLowerContractionPatternsOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void ApplyLowerContractionPatternsOp::populateDefaultProperties(::mlir::OperationName opName, Properties &properties) {
  ::mlir::Builder odsBuilder(opName.getContext());
  if (!properties.lowering_strategy)
    properties.lowering_strategy = ::mlir::vector::VectorContractLoweringAttr::get(odsBuilder.getContext(), vector::VectorContractLowering::OuterProduct);
}

::mlir::LogicalResult ApplyLowerContractionPatternsOp::verifyInvariantsImpl() {
  auto tblgen_lowering_strategy = getProperties().lowering_strategy; (void)tblgen_lowering_strategy;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_VectorTransformOps0(*this, tblgen_lowering_strategy, "lowering_strategy")))
    return ::mlir::failure();
  return ::mlir::success();
}

::mlir::LogicalResult ApplyLowerContractionPatternsOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult ApplyLowerContractionPatternsOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::vector::VectorContractLoweringAttr lowering_strategyAttr;
  if (::mlir::succeeded(parser.parseOptionalKeyword("lowering_strategy"))) {
  if (parser.parseEqual())
    return ::mlir::failure();

  {
    ::llvm::StringRef attrStr;
    ::mlir::NamedAttrList attrStorage;
    auto loc = parser.getCurrentLocation();
    if (parser.parseOptionalKeyword(&attrStr, {"dot","matmulintrinsics","outerproduct","parallelarith"})) {
      ::mlir::StringAttr attrVal;
      ::mlir::OptionalParseResult parseResult =
        parser.parseOptionalAttribute(attrVal,
                                      parser.getBuilder().getNoneType(),
                                      "lowering_strategy", attrStorage);
      if (parseResult.has_value()) {
        if (failed(*parseResult))
          return ::mlir::failure();
        attrStr = attrVal.getValue();
      } else {
        return parser.emitError(loc, "expected string or keyword containing one of the following enum values for attribute 'lowering_strategy' [dot, matmulintrinsics, outerproduct, parallelarith]");
      }
    }
    if (!attrStr.empty()) {
      auto attrOptional = ::mlir::vector::symbolizeVectorContractLowering(attrStr);
      if (!attrOptional)
        return parser.emitError(loc, "invalid ")
               << "lowering_strategy attribute specification: \"" << attrStr << '"';;

      lowering_strategyAttr = ::mlir::vector::VectorContractLoweringAttr::get(parser.getBuilder().getContext(), *attrOptional);
        result.getOrAddProperties<ApplyLowerContractionPatternsOp::Properties>().lowering_strategy = lowering_strategyAttr;
    }
  }
  }
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
    if (failed(verifyInherentAttrs(result.name, result.attributes, [&]() {
        return parser.emitError(loc) << "'" << result.name.getStringRef() << "' op ";
      })))
      return ::mlir::failure();
  }
  return ::mlir::success();
}

void ApplyLowerContractionPatternsOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  if (getLoweringStrategyAttr() && getLoweringStrategyAttr() != ::mlir::vector::VectorContractLoweringAttr::get(::mlir::OpBuilder((*this)->getContext()).getContext(), vector::VectorContractLowering::OuterProduct)) {
    _odsPrinter << ' ' << "lowering_strategy";
    _odsPrinter << ' ' << "=";
    _odsPrinter << ' ';

    {
      auto caseValue = getLoweringStrategy();
      auto caseValueStr = stringifyVectorContractLowering(caseValue);
      _odsPrinter << caseValueStr;
    }
  }
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("lowering_strategy");
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getLoweringStrategyAttr();
     if(attr && (attr == ::mlir::vector::VectorContractLoweringAttr::get(odsBuilder.getContext(), vector::VectorContractLowering::OuterProduct)))
       elidedAttrs.push_back("lowering_strategy");
  }
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::ApplyLowerContractionPatternsOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::ApplyLowerGatherPatternsOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
ApplyLowerGatherPatternsOpGenericAdaptorBase::ApplyLowerGatherPatternsOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("transform.apply_patterns.vector.lower_gather", odsAttrs.getContext());
}

std::pair<unsigned, unsigned> ApplyLowerGatherPatternsOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr ApplyLowerGatherPatternsOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
ApplyLowerGatherPatternsOpAdaptor::ApplyLowerGatherPatternsOpAdaptor(ApplyLowerGatherPatternsOp op) : ApplyLowerGatherPatternsOpAdaptor(op->getOperands(), op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

::mlir::LogicalResult ApplyLowerGatherPatternsOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> ApplyLowerGatherPatternsOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range ApplyLowerGatherPatternsOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> ApplyLowerGatherPatternsOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ApplyLowerGatherPatternsOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void ApplyLowerGatherPatternsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState) {
}

void ApplyLowerGatherPatternsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes) {
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ApplyLowerGatherPatternsOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult ApplyLowerGatherPatternsOp::verifyInvariantsImpl() {
  return ::mlir::success();
}

::mlir::LogicalResult ApplyLowerGatherPatternsOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult ApplyLowerGatherPatternsOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  return ::mlir::success();
}

void ApplyLowerGatherPatternsOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::ApplyLowerGatherPatternsOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::ApplyLowerMaskedTransfersPatternsOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
ApplyLowerMaskedTransfersPatternsOpGenericAdaptorBase::ApplyLowerMaskedTransfersPatternsOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("transform.apply_patterns.vector.lower_masked_transfers", odsAttrs.getContext());
}

std::pair<unsigned, unsigned> ApplyLowerMaskedTransfersPatternsOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr ApplyLowerMaskedTransfersPatternsOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
ApplyLowerMaskedTransfersPatternsOpAdaptor::ApplyLowerMaskedTransfersPatternsOpAdaptor(ApplyLowerMaskedTransfersPatternsOp op) : ApplyLowerMaskedTransfersPatternsOpAdaptor(op->getOperands(), op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

::mlir::LogicalResult ApplyLowerMaskedTransfersPatternsOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> ApplyLowerMaskedTransfersPatternsOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range ApplyLowerMaskedTransfersPatternsOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> ApplyLowerMaskedTransfersPatternsOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ApplyLowerMaskedTransfersPatternsOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void ApplyLowerMaskedTransfersPatternsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState) {
}

void ApplyLowerMaskedTransfersPatternsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes) {
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ApplyLowerMaskedTransfersPatternsOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult ApplyLowerMaskedTransfersPatternsOp::verifyInvariantsImpl() {
  return ::mlir::success();
}

::mlir::LogicalResult ApplyLowerMaskedTransfersPatternsOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult ApplyLowerMaskedTransfersPatternsOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  return ::mlir::success();
}

void ApplyLowerMaskedTransfersPatternsOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::ApplyLowerMaskedTransfersPatternsOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::ApplyLowerMasksPatternsOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
ApplyLowerMasksPatternsOpGenericAdaptorBase::ApplyLowerMasksPatternsOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("transform.apply_patterns.vector.lower_masks", odsAttrs.getContext());
}

std::pair<unsigned, unsigned> ApplyLowerMasksPatternsOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr ApplyLowerMasksPatternsOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
ApplyLowerMasksPatternsOpAdaptor::ApplyLowerMasksPatternsOpAdaptor(ApplyLowerMasksPatternsOp op) : ApplyLowerMasksPatternsOpAdaptor(op->getOperands(), op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

::mlir::LogicalResult ApplyLowerMasksPatternsOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> ApplyLowerMasksPatternsOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range ApplyLowerMasksPatternsOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> ApplyLowerMasksPatternsOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ApplyLowerMasksPatternsOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void ApplyLowerMasksPatternsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState) {
}

void ApplyLowerMasksPatternsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes) {
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ApplyLowerMasksPatternsOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult ApplyLowerMasksPatternsOp::verifyInvariantsImpl() {
  return ::mlir::success();
}

::mlir::LogicalResult ApplyLowerMasksPatternsOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult ApplyLowerMasksPatternsOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  return ::mlir::success();
}

void ApplyLowerMasksPatternsOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::ApplyLowerMasksPatternsOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::ApplyLowerMultiReductionPatternsOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
ApplyLowerMultiReductionPatternsOpGenericAdaptorBase::ApplyLowerMultiReductionPatternsOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("transform.apply_patterns.vector.lower_multi_reduction", odsAttrs.getContext());
}

std::pair<unsigned, unsigned> ApplyLowerMultiReductionPatternsOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr ApplyLowerMultiReductionPatternsOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::vector::VectorMultiReductionLoweringAttr ApplyLowerMultiReductionPatternsOpGenericAdaptorBase::getLoweringStrategyAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::vector::VectorMultiReductionLoweringAttr>(getProperties().lowering_strategy);
  return attr;
}

::mlir::vector::VectorMultiReductionLowering ApplyLowerMultiReductionPatternsOpGenericAdaptorBase::getLoweringStrategy() {
  auto attr = getLoweringStrategyAttr();
  return attr.getValue();
}

} // namespace detail
ApplyLowerMultiReductionPatternsOpAdaptor::ApplyLowerMultiReductionPatternsOpAdaptor(ApplyLowerMultiReductionPatternsOp op) : ApplyLowerMultiReductionPatternsOpAdaptor(op->getOperands(), op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

::mlir::LogicalResult ApplyLowerMultiReductionPatternsOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_lowering_strategy = getProperties().lowering_strategy; (void)tblgen_lowering_strategy;

  if (tblgen_lowering_strategy && !((::llvm::isa<::mlir::vector::VectorMultiReductionLoweringAttr>(tblgen_lowering_strategy))))
    return emitError(loc, "'transform.apply_patterns.vector.lower_multi_reduction' op ""attribute 'lowering_strategy' failed to satisfy constraint: control the lowering of `vector.multi_reduction`.");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> ApplyLowerMultiReductionPatternsOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range ApplyLowerMultiReductionPatternsOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> ApplyLowerMultiReductionPatternsOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ApplyLowerMultiReductionPatternsOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::LogicalResult ApplyLowerMultiReductionPatternsOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::mlir::InFlightDiagnostic *diag) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    if (diag)
      *diag << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.lowering_strategy;
       auto attr = dict.get("lowering_strategy");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        if (diag)
          *diag << "expected key entry for lowering_strategy in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        if (diag)
          *diag << "Invalid attribute `lowering_strategy` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute ApplyLowerMultiReductionPatternsOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.lowering_strategy;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("lowering_strategy",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code ApplyLowerMultiReductionPatternsOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.lowering_strategy.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> ApplyLowerMultiReductionPatternsOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "lowering_strategy")
      return prop.lowering_strategy;
  return std::nullopt;
}

void ApplyLowerMultiReductionPatternsOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "lowering_strategy") {
       prop.lowering_strategy = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.lowering_strategy)>>(value);
       return;
    }
}

void ApplyLowerMultiReductionPatternsOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.lowering_strategy) attrs.append("lowering_strategy", prop.lowering_strategy);
}

::mlir::LogicalResult ApplyLowerMultiReductionPatternsOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> getDiag) {
    {
      ::mlir::Attribute attr = attrs.get(getLoweringStrategyAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_VectorTransformOps1(attr, "lowering_strategy", getDiag)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult ApplyLowerMultiReductionPatternsOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.lowering_strategy)))
    return ::mlir::failure();
  return ::mlir::success();
}

void ApplyLowerMultiReductionPatternsOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.lowering_strategy);
}

::mlir::vector::VectorMultiReductionLoweringAttr ApplyLowerMultiReductionPatternsOp::getLoweringStrategyAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::vector::VectorMultiReductionLoweringAttr>(getProperties().lowering_strategy);
}

::mlir::vector::VectorMultiReductionLowering ApplyLowerMultiReductionPatternsOp::getLoweringStrategy() {
  auto attr = getLoweringStrategyAttr();
  return attr.getValue();
}

void ApplyLowerMultiReductionPatternsOp::setLoweringStrategyAttr(::mlir::vector::VectorMultiReductionLoweringAttr attr) {
  (*this)->setAttr(getLoweringStrategyAttrName(), attr);
}

void ApplyLowerMultiReductionPatternsOp::setLoweringStrategy(::mlir::vector::VectorMultiReductionLowering attrValue) {
  (*this)->setAttr(getLoweringStrategyAttrName(), ::mlir::vector::VectorMultiReductionLoweringAttr::get(::mlir::Builder((*this)->getContext()).getContext(), attrValue));
}

void ApplyLowerMultiReductionPatternsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::vector::VectorMultiReductionLoweringAttr lowering_strategy) {
  if (lowering_strategy) {
    odsState.getOrAddProperties<Properties>().lowering_strategy = lowering_strategy;
  }
}

void ApplyLowerMultiReductionPatternsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::vector::VectorMultiReductionLoweringAttr lowering_strategy) {
  if (lowering_strategy) {
    odsState.getOrAddProperties<Properties>().lowering_strategy = lowering_strategy;
  }
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ApplyLowerMultiReductionPatternsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::vector::VectorMultiReductionLowering lowering_strategy) {
  odsState.getOrAddProperties<Properties>().lowering_strategy = ::mlir::vector::VectorMultiReductionLoweringAttr::get(odsBuilder.getContext(), lowering_strategy);
}

void ApplyLowerMultiReductionPatternsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::vector::VectorMultiReductionLowering lowering_strategy) {
  odsState.getOrAddProperties<Properties>().lowering_strategy = ::mlir::vector::VectorMultiReductionLoweringAttr::get(odsBuilder.getContext(), lowering_strategy);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ApplyLowerMultiReductionPatternsOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void ApplyLowerMultiReductionPatternsOp::populateDefaultProperties(::mlir::OperationName opName, Properties &properties) {
  ::mlir::Builder odsBuilder(opName.getContext());
  if (!properties.lowering_strategy)
    properties.lowering_strategy = ::mlir::vector::VectorMultiReductionLoweringAttr::get(odsBuilder.getContext(), vector::VectorMultiReductionLowering::InnerParallel);
}

::mlir::LogicalResult ApplyLowerMultiReductionPatternsOp::verifyInvariantsImpl() {
  auto tblgen_lowering_strategy = getProperties().lowering_strategy; (void)tblgen_lowering_strategy;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_VectorTransformOps1(*this, tblgen_lowering_strategy, "lowering_strategy")))
    return ::mlir::failure();
  return ::mlir::success();
}

::mlir::LogicalResult ApplyLowerMultiReductionPatternsOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult ApplyLowerMultiReductionPatternsOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::vector::VectorMultiReductionLoweringAttr lowering_strategyAttr;
  if (::mlir::succeeded(parser.parseOptionalKeyword("lowering_strategy"))) {
  if (parser.parseEqual())
    return ::mlir::failure();

  {
    ::llvm::StringRef attrStr;
    ::mlir::NamedAttrList attrStorage;
    auto loc = parser.getCurrentLocation();
    if (parser.parseOptionalKeyword(&attrStr, {"innerparallel","innerreduction"})) {
      ::mlir::StringAttr attrVal;
      ::mlir::OptionalParseResult parseResult =
        parser.parseOptionalAttribute(attrVal,
                                      parser.getBuilder().getNoneType(),
                                      "lowering_strategy", attrStorage);
      if (parseResult.has_value()) {
        if (failed(*parseResult))
          return ::mlir::failure();
        attrStr = attrVal.getValue();
      } else {
        return parser.emitError(loc, "expected string or keyword containing one of the following enum values for attribute 'lowering_strategy' [innerparallel, innerreduction]");
      }
    }
    if (!attrStr.empty()) {
      auto attrOptional = ::mlir::vector::symbolizeVectorMultiReductionLowering(attrStr);
      if (!attrOptional)
        return parser.emitError(loc, "invalid ")
               << "lowering_strategy attribute specification: \"" << attrStr << '"';;

      lowering_strategyAttr = ::mlir::vector::VectorMultiReductionLoweringAttr::get(parser.getBuilder().getContext(), *attrOptional);
        result.getOrAddProperties<ApplyLowerMultiReductionPatternsOp::Properties>().lowering_strategy = lowering_strategyAttr;
    }
  }
  }
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
    if (failed(verifyInherentAttrs(result.name, result.attributes, [&]() {
        return parser.emitError(loc) << "'" << result.name.getStringRef() << "' op ";
      })))
      return ::mlir::failure();
  }
  return ::mlir::success();
}

void ApplyLowerMultiReductionPatternsOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  if (getLoweringStrategyAttr() && getLoweringStrategyAttr() != ::mlir::vector::VectorMultiReductionLoweringAttr::get(::mlir::OpBuilder((*this)->getContext()).getContext(), vector::VectorMultiReductionLowering::InnerParallel)) {
    _odsPrinter << ' ' << "lowering_strategy";
    _odsPrinter << ' ' << "=";
    _odsPrinter << ' ';

    {
      auto caseValue = getLoweringStrategy();
      auto caseValueStr = stringifyVectorMultiReductionLowering(caseValue);
      _odsPrinter << caseValueStr;
    }
  }
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("lowering_strategy");
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getLoweringStrategyAttr();
     if(attr && (attr == ::mlir::vector::VectorMultiReductionLoweringAttr::get(odsBuilder.getContext(), vector::VectorMultiReductionLowering::InnerParallel)))
       elidedAttrs.push_back("lowering_strategy");
  }
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::ApplyLowerMultiReductionPatternsOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::ApplyLowerOuterProductPatternsOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
ApplyLowerOuterProductPatternsOpGenericAdaptorBase::ApplyLowerOuterProductPatternsOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("transform.apply_patterns.vector.lower_outerproduct", odsAttrs.getContext());
}

std::pair<unsigned, unsigned> ApplyLowerOuterProductPatternsOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr ApplyLowerOuterProductPatternsOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
ApplyLowerOuterProductPatternsOpAdaptor::ApplyLowerOuterProductPatternsOpAdaptor(ApplyLowerOuterProductPatternsOp op) : ApplyLowerOuterProductPatternsOpAdaptor(op->getOperands(), op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

::mlir::LogicalResult ApplyLowerOuterProductPatternsOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> ApplyLowerOuterProductPatternsOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range ApplyLowerOuterProductPatternsOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> ApplyLowerOuterProductPatternsOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ApplyLowerOuterProductPatternsOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void ApplyLowerOuterProductPatternsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState) {
}

void ApplyLowerOuterProductPatternsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes) {
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ApplyLowerOuterProductPatternsOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult ApplyLowerOuterProductPatternsOp::verifyInvariantsImpl() {
  return ::mlir::success();
}

::mlir::LogicalResult ApplyLowerOuterProductPatternsOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult ApplyLowerOuterProductPatternsOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  return ::mlir::success();
}

void ApplyLowerOuterProductPatternsOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::ApplyLowerOuterProductPatternsOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::ApplyLowerScanPatternsOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
ApplyLowerScanPatternsOpGenericAdaptorBase::ApplyLowerScanPatternsOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("transform.apply_patterns.vector.lower_scan", odsAttrs.getContext());
}

std::pair<unsigned, unsigned> ApplyLowerScanPatternsOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr ApplyLowerScanPatternsOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
ApplyLowerScanPatternsOpAdaptor::ApplyLowerScanPatternsOpAdaptor(ApplyLowerScanPatternsOp op) : ApplyLowerScanPatternsOpAdaptor(op->getOperands(), op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

::mlir::LogicalResult ApplyLowerScanPatternsOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> ApplyLowerScanPatternsOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range ApplyLowerScanPatternsOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> ApplyLowerScanPatternsOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ApplyLowerScanPatternsOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void ApplyLowerScanPatternsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState) {
}

void ApplyLowerScanPatternsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes) {
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ApplyLowerScanPatternsOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult ApplyLowerScanPatternsOp::verifyInvariantsImpl() {
  return ::mlir::success();
}

::mlir::LogicalResult ApplyLowerScanPatternsOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult ApplyLowerScanPatternsOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  return ::mlir::success();
}

void ApplyLowerScanPatternsOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::ApplyLowerScanPatternsOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::ApplyLowerShapeCastPatternsOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
ApplyLowerShapeCastPatternsOpGenericAdaptorBase::ApplyLowerShapeCastPatternsOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("transform.apply_patterns.vector.lower_shape_cast", odsAttrs.getContext());
}

std::pair<unsigned, unsigned> ApplyLowerShapeCastPatternsOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr ApplyLowerShapeCastPatternsOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
ApplyLowerShapeCastPatternsOpAdaptor::ApplyLowerShapeCastPatternsOpAdaptor(ApplyLowerShapeCastPatternsOp op) : ApplyLowerShapeCastPatternsOpAdaptor(op->getOperands(), op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

::mlir::LogicalResult ApplyLowerShapeCastPatternsOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> ApplyLowerShapeCastPatternsOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range ApplyLowerShapeCastPatternsOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> ApplyLowerShapeCastPatternsOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ApplyLowerShapeCastPatternsOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void ApplyLowerShapeCastPatternsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState) {
}

void ApplyLowerShapeCastPatternsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes) {
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ApplyLowerShapeCastPatternsOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult ApplyLowerShapeCastPatternsOp::verifyInvariantsImpl() {
  return ::mlir::success();
}

::mlir::LogicalResult ApplyLowerShapeCastPatternsOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult ApplyLowerShapeCastPatternsOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  return ::mlir::success();
}

void ApplyLowerShapeCastPatternsOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::ApplyLowerShapeCastPatternsOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::ApplyLowerTransferPatternsOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
ApplyLowerTransferPatternsOpGenericAdaptorBase::ApplyLowerTransferPatternsOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("transform.apply_patterns.vector.lower_transfer", odsAttrs.getContext());
}

std::pair<unsigned, unsigned> ApplyLowerTransferPatternsOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr ApplyLowerTransferPatternsOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::IntegerAttr ApplyLowerTransferPatternsOpGenericAdaptorBase::getMaxTransferRankAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::IntegerAttr>(getProperties().max_transfer_rank);
  return attr;
}

uint64_t ApplyLowerTransferPatternsOpGenericAdaptorBase::getMaxTransferRank() {
  auto attr = getMaxTransferRankAttr();
  return attr.getValue().getZExtValue();
}

} // namespace detail
ApplyLowerTransferPatternsOpAdaptor::ApplyLowerTransferPatternsOpAdaptor(ApplyLowerTransferPatternsOp op) : ApplyLowerTransferPatternsOpAdaptor(op->getOperands(), op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

::mlir::LogicalResult ApplyLowerTransferPatternsOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_max_transfer_rank = getProperties().max_transfer_rank; (void)tblgen_max_transfer_rank;

  if (tblgen_max_transfer_rank && !(((::llvm::isa<::mlir::IntegerAttr>(tblgen_max_transfer_rank))) && ((::llvm::cast<::mlir::IntegerAttr>(tblgen_max_transfer_rank).getType().isSignlessInteger(64)))))
    return emitError(loc, "'transform.apply_patterns.vector.lower_transfer' op ""attribute 'max_transfer_rank' failed to satisfy constraint: 64-bit signless integer attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> ApplyLowerTransferPatternsOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range ApplyLowerTransferPatternsOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> ApplyLowerTransferPatternsOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ApplyLowerTransferPatternsOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::LogicalResult ApplyLowerTransferPatternsOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::mlir::InFlightDiagnostic *diag) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    if (diag)
      *diag << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.max_transfer_rank;
       auto attr = dict.get("max_transfer_rank");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        if (diag)
          *diag << "expected key entry for max_transfer_rank in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        if (diag)
          *diag << "Invalid attribute `max_transfer_rank` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute ApplyLowerTransferPatternsOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.max_transfer_rank;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("max_transfer_rank",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code ApplyLowerTransferPatternsOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.max_transfer_rank.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> ApplyLowerTransferPatternsOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "max_transfer_rank")
      return prop.max_transfer_rank;
  return std::nullopt;
}

void ApplyLowerTransferPatternsOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "max_transfer_rank") {
       prop.max_transfer_rank = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.max_transfer_rank)>>(value);
       return;
    }
}

void ApplyLowerTransferPatternsOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.max_transfer_rank) attrs.append("max_transfer_rank", prop.max_transfer_rank);
}

::mlir::LogicalResult ApplyLowerTransferPatternsOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> getDiag) {
    {
      ::mlir::Attribute attr = attrs.get(getMaxTransferRankAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_VectorTransformOps2(attr, "max_transfer_rank", getDiag)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult ApplyLowerTransferPatternsOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.max_transfer_rank)))
    return ::mlir::failure();
  return ::mlir::success();
}

void ApplyLowerTransferPatternsOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.max_transfer_rank);
}

::mlir::IntegerAttr ApplyLowerTransferPatternsOp::getMaxTransferRankAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::IntegerAttr>(getProperties().max_transfer_rank);
}

uint64_t ApplyLowerTransferPatternsOp::getMaxTransferRank() {
  auto attr = getMaxTransferRankAttr();
  return attr.getValue().getZExtValue();
}

void ApplyLowerTransferPatternsOp::setMaxTransferRankAttr(::mlir::IntegerAttr attr) {
  (*this)->setAttr(getMaxTransferRankAttrName(), attr);
}

void ApplyLowerTransferPatternsOp::setMaxTransferRank(uint64_t attrValue) {
  (*this)->setAttr(getMaxTransferRankAttrName(), ::mlir::Builder((*this)->getContext()).getIntegerAttr(::mlir::Builder((*this)->getContext()).getIntegerType(64), attrValue));
}

void ApplyLowerTransferPatternsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::IntegerAttr max_transfer_rank) {
  if (max_transfer_rank) {
    odsState.getOrAddProperties<Properties>().max_transfer_rank = max_transfer_rank;
  }
}

void ApplyLowerTransferPatternsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::IntegerAttr max_transfer_rank) {
  if (max_transfer_rank) {
    odsState.getOrAddProperties<Properties>().max_transfer_rank = max_transfer_rank;
  }
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ApplyLowerTransferPatternsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, uint64_t max_transfer_rank) {
  odsState.getOrAddProperties<Properties>().max_transfer_rank = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), max_transfer_rank);
}

void ApplyLowerTransferPatternsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, uint64_t max_transfer_rank) {
  odsState.getOrAddProperties<Properties>().max_transfer_rank = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), max_transfer_rank);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ApplyLowerTransferPatternsOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void ApplyLowerTransferPatternsOp::populateDefaultProperties(::mlir::OperationName opName, Properties &properties) {
  ::mlir::Builder odsBuilder(opName.getContext());
  if (!properties.max_transfer_rank)
    properties.max_transfer_rank = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), 1);
}

::mlir::LogicalResult ApplyLowerTransferPatternsOp::verifyInvariantsImpl() {
  auto tblgen_max_transfer_rank = getProperties().max_transfer_rank; (void)tblgen_max_transfer_rank;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_VectorTransformOps2(*this, tblgen_max_transfer_rank, "max_transfer_rank")))
    return ::mlir::failure();
  return ::mlir::success();
}

::mlir::LogicalResult ApplyLowerTransferPatternsOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult ApplyLowerTransferPatternsOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::IntegerAttr max_transfer_rankAttr;
  if (::mlir::succeeded(parser.parseOptionalKeyword("max_transfer_rank"))) {
  if (parser.parseEqual())
    return ::mlir::failure();

  if (parser.parseCustomAttributeWithFallback(max_transfer_rankAttr, parser.getBuilder().getIntegerType(64))) {
    return ::mlir::failure();
  }
  if (max_transfer_rankAttr) result.getOrAddProperties<ApplyLowerTransferPatternsOp::Properties>().max_transfer_rank = max_transfer_rankAttr;
  }
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
    if (failed(verifyInherentAttrs(result.name, result.attributes, [&]() {
        return parser.emitError(loc) << "'" << result.name.getStringRef() << "' op ";
      })))
      return ::mlir::failure();
  }
  return ::mlir::success();
}

void ApplyLowerTransferPatternsOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  if (getMaxTransferRankAttr() && getMaxTransferRankAttr() != ::mlir::OpBuilder((*this)->getContext()).getIntegerAttr(::mlir::OpBuilder((*this)->getContext()).getIntegerType(64), 1)) {
    _odsPrinter << ' ' << "max_transfer_rank";
    _odsPrinter << ' ' << "=";
    _odsPrinter << ' ';
    _odsPrinter.printAttributeWithoutType(getMaxTransferRankAttr());
  }
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("max_transfer_rank");
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getMaxTransferRankAttr();
     if(attr && (attr == odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), 1)))
       elidedAttrs.push_back("max_transfer_rank");
  }
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::ApplyLowerTransferPatternsOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::ApplyLowerTransposePatternsOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
ApplyLowerTransposePatternsOpGenericAdaptorBase::ApplyLowerTransposePatternsOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("transform.apply_patterns.vector.lower_transpose", odsAttrs.getContext());
}

std::pair<unsigned, unsigned> ApplyLowerTransposePatternsOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr ApplyLowerTransposePatternsOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::vector::VectorTransposeLoweringAttr ApplyLowerTransposePatternsOpGenericAdaptorBase::getLoweringStrategyAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::vector::VectorTransposeLoweringAttr>(getProperties().lowering_strategy);
  return attr;
}

::mlir::vector::VectorTransposeLowering ApplyLowerTransposePatternsOpGenericAdaptorBase::getLoweringStrategy() {
  auto attr = getLoweringStrategyAttr();
  return attr.getValue();
}

::mlir::BoolAttr ApplyLowerTransposePatternsOpGenericAdaptorBase::getAvx2LoweringStrategyAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::BoolAttr>(getProperties().avx2_lowering_strategy);
  return attr;
}

bool ApplyLowerTransposePatternsOpGenericAdaptorBase::getAvx2LoweringStrategy() {
  auto attr = getAvx2LoweringStrategyAttr();
  return attr.getValue();
}

} // namespace detail
ApplyLowerTransposePatternsOpAdaptor::ApplyLowerTransposePatternsOpAdaptor(ApplyLowerTransposePatternsOp op) : ApplyLowerTransposePatternsOpAdaptor(op->getOperands(), op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

::mlir::LogicalResult ApplyLowerTransposePatternsOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_avx2_lowering_strategy = getProperties().avx2_lowering_strategy; (void)tblgen_avx2_lowering_strategy;
  auto tblgen_lowering_strategy = getProperties().lowering_strategy; (void)tblgen_lowering_strategy;

  if (tblgen_lowering_strategy && !((::llvm::isa<::mlir::vector::VectorTransposeLoweringAttr>(tblgen_lowering_strategy))))
    return emitError(loc, "'transform.apply_patterns.vector.lower_transpose' op ""attribute 'lowering_strategy' failed to satisfy constraint: control the lowering of `vector.transpose` operations.");

  if (tblgen_avx2_lowering_strategy && !((::llvm::isa<::mlir::BoolAttr>(tblgen_avx2_lowering_strategy))))
    return emitError(loc, "'transform.apply_patterns.vector.lower_transpose' op ""attribute 'avx2_lowering_strategy' failed to satisfy constraint: bool attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> ApplyLowerTransposePatternsOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range ApplyLowerTransposePatternsOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> ApplyLowerTransposePatternsOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ApplyLowerTransposePatternsOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::LogicalResult ApplyLowerTransposePatternsOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::mlir::InFlightDiagnostic *diag) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    if (diag)
      *diag << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.avx2_lowering_strategy;
       auto attr = dict.get("avx2_lowering_strategy");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        if (diag)
          *diag << "expected key entry for avx2_lowering_strategy in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        if (diag)
          *diag << "Invalid attribute `avx2_lowering_strategy` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.lowering_strategy;
       auto attr = dict.get("lowering_strategy");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        if (diag)
          *diag << "expected key entry for lowering_strategy in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        if (diag)
          *diag << "Invalid attribute `lowering_strategy` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute ApplyLowerTransposePatternsOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.avx2_lowering_strategy;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("avx2_lowering_strategy",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.lowering_strategy;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("lowering_strategy",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code ApplyLowerTransposePatternsOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.avx2_lowering_strategy.getAsOpaquePointer()), 
    llvm::hash_value(prop.lowering_strategy.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> ApplyLowerTransposePatternsOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "avx2_lowering_strategy")
      return prop.avx2_lowering_strategy;

    if (name == "lowering_strategy")
      return prop.lowering_strategy;
  return std::nullopt;
}

void ApplyLowerTransposePatternsOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "avx2_lowering_strategy") {
       prop.avx2_lowering_strategy = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.avx2_lowering_strategy)>>(value);
       return;
    }

    if (name == "lowering_strategy") {
       prop.lowering_strategy = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.lowering_strategy)>>(value);
       return;
    }
}

void ApplyLowerTransposePatternsOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.avx2_lowering_strategy) attrs.append("avx2_lowering_strategy", prop.avx2_lowering_strategy);

    if (prop.lowering_strategy) attrs.append("lowering_strategy", prop.lowering_strategy);
}

::mlir::LogicalResult ApplyLowerTransposePatternsOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> getDiag) {
    {
      ::mlir::Attribute attr = attrs.get(getAvx2LoweringStrategyAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_VectorTransformOps4(attr, "avx2_lowering_strategy", getDiag)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getLoweringStrategyAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_VectorTransformOps3(attr, "lowering_strategy", getDiag)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult ApplyLowerTransposePatternsOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.avx2_lowering_strategy)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.lowering_strategy)))
    return ::mlir::failure();
  return ::mlir::success();
}

void ApplyLowerTransposePatternsOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.avx2_lowering_strategy);

  writer.writeOptionalAttribute(prop.lowering_strategy);
}

::mlir::vector::VectorTransposeLoweringAttr ApplyLowerTransposePatternsOp::getLoweringStrategyAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::vector::VectorTransposeLoweringAttr>(getProperties().lowering_strategy);
}

::mlir::vector::VectorTransposeLowering ApplyLowerTransposePatternsOp::getLoweringStrategy() {
  auto attr = getLoweringStrategyAttr();
  return attr.getValue();
}

::mlir::BoolAttr ApplyLowerTransposePatternsOp::getAvx2LoweringStrategyAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::BoolAttr>(getProperties().avx2_lowering_strategy);
}

bool ApplyLowerTransposePatternsOp::getAvx2LoweringStrategy() {
  auto attr = getAvx2LoweringStrategyAttr();
  return attr.getValue();
}

void ApplyLowerTransposePatternsOp::setLoweringStrategyAttr(::mlir::vector::VectorTransposeLoweringAttr attr) {
  (*this)->setAttr(getLoweringStrategyAttrName(), attr);
}

void ApplyLowerTransposePatternsOp::setLoweringStrategy(::mlir::vector::VectorTransposeLowering attrValue) {
  (*this)->setAttr(getLoweringStrategyAttrName(), ::mlir::vector::VectorTransposeLoweringAttr::get(::mlir::Builder((*this)->getContext()).getContext(), attrValue));
}

void ApplyLowerTransposePatternsOp::setAvx2LoweringStrategyAttr(::mlir::BoolAttr attr) {
  (*this)->setAttr(getAvx2LoweringStrategyAttrName(), attr);
}

void ApplyLowerTransposePatternsOp::setAvx2LoweringStrategy(bool attrValue) {
  (*this)->setAttr(getAvx2LoweringStrategyAttrName(), ::mlir::Builder((*this)->getContext()).getBoolAttr(attrValue));
}

void ApplyLowerTransposePatternsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::vector::VectorTransposeLoweringAttr lowering_strategy, ::mlir::BoolAttr avx2_lowering_strategy) {
  if (lowering_strategy) {
    odsState.getOrAddProperties<Properties>().lowering_strategy = lowering_strategy;
  }
  if (avx2_lowering_strategy) {
    odsState.getOrAddProperties<Properties>().avx2_lowering_strategy = avx2_lowering_strategy;
  }
}

void ApplyLowerTransposePatternsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::vector::VectorTransposeLoweringAttr lowering_strategy, ::mlir::BoolAttr avx2_lowering_strategy) {
  if (lowering_strategy) {
    odsState.getOrAddProperties<Properties>().lowering_strategy = lowering_strategy;
  }
  if (avx2_lowering_strategy) {
    odsState.getOrAddProperties<Properties>().avx2_lowering_strategy = avx2_lowering_strategy;
  }
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ApplyLowerTransposePatternsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::vector::VectorTransposeLowering lowering_strategy, bool avx2_lowering_strategy) {
  odsState.getOrAddProperties<Properties>().lowering_strategy = ::mlir::vector::VectorTransposeLoweringAttr::get(odsBuilder.getContext(), lowering_strategy);
  odsState.getOrAddProperties<Properties>().avx2_lowering_strategy = odsBuilder.getBoolAttr(avx2_lowering_strategy);
}

void ApplyLowerTransposePatternsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::vector::VectorTransposeLowering lowering_strategy, bool avx2_lowering_strategy) {
  odsState.getOrAddProperties<Properties>().lowering_strategy = ::mlir::vector::VectorTransposeLoweringAttr::get(odsBuilder.getContext(), lowering_strategy);
  odsState.getOrAddProperties<Properties>().avx2_lowering_strategy = odsBuilder.getBoolAttr(avx2_lowering_strategy);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ApplyLowerTransposePatternsOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void ApplyLowerTransposePatternsOp::populateDefaultProperties(::mlir::OperationName opName, Properties &properties) {
  ::mlir::Builder odsBuilder(opName.getContext());
  if (!properties.lowering_strategy)
    properties.lowering_strategy = ::mlir::vector::VectorTransposeLoweringAttr::get(odsBuilder.getContext(), vector::VectorTransposeLowering::EltWise);
  if (!properties.avx2_lowering_strategy)
    properties.avx2_lowering_strategy = odsBuilder.getBoolAttr(false);
}

::mlir::LogicalResult ApplyLowerTransposePatternsOp::verifyInvariantsImpl() {
  auto tblgen_avx2_lowering_strategy = getProperties().avx2_lowering_strategy; (void)tblgen_avx2_lowering_strategy;
  auto tblgen_lowering_strategy = getProperties().lowering_strategy; (void)tblgen_lowering_strategy;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_VectorTransformOps3(*this, tblgen_lowering_strategy, "lowering_strategy")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_VectorTransformOps4(*this, tblgen_avx2_lowering_strategy, "avx2_lowering_strategy")))
    return ::mlir::failure();
  return ::mlir::success();
}

::mlir::LogicalResult ApplyLowerTransposePatternsOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult ApplyLowerTransposePatternsOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::vector::VectorTransposeLoweringAttr lowering_strategyAttr;
  ::mlir::BoolAttr avx2_lowering_strategyAttr;
  bool lowering_strategyClause = false;
  bool avx2_lowering_strategyClause = false;
  while(true) {
if (succeeded(parser.parseOptionalKeyword("lowering_strategy"))) {

  if (lowering_strategyClause) {
    return parser.emitError(parser.getNameLoc())
          << "`lowering_strategy` clause can appear at most once in the expansion of the "
             "oilist directive";
  }
  lowering_strategyClause = true;
  if (parser.parseEqual())
    return ::mlir::failure();

  {
    ::llvm::StringRef attrStr;
    ::mlir::NamedAttrList attrStorage;
    auto loc = parser.getCurrentLocation();
    if (parser.parseOptionalKeyword(&attrStr, {"eltwise","flat_transpose","shuffle_1d","shuffle_16x16"})) {
      ::mlir::StringAttr attrVal;
      ::mlir::OptionalParseResult parseResult =
        parser.parseOptionalAttribute(attrVal,
                                      parser.getBuilder().getNoneType(),
                                      "lowering_strategy", attrStorage);
      if (parseResult.has_value()) {
        if (failed(*parseResult))
          return ::mlir::failure();
        attrStr = attrVal.getValue();
      } else {
        return parser.emitError(loc, "expected string or keyword containing one of the following enum values for attribute 'lowering_strategy' [eltwise, flat_transpose, shuffle_1d, shuffle_16x16]");
      }
    }
    if (!attrStr.empty()) {
      auto attrOptional = ::mlir::vector::symbolizeVectorTransposeLowering(attrStr);
      if (!attrOptional)
        return parser.emitError(loc, "invalid ")
               << "lowering_strategy attribute specification: \"" << attrStr << '"';;

      lowering_strategyAttr = ::mlir::vector::VectorTransposeLoweringAttr::get(parser.getBuilder().getContext(), *attrOptional);
        result.getOrAddProperties<ApplyLowerTransposePatternsOp::Properties>().lowering_strategy = lowering_strategyAttr;
    }
  }
    } else if (succeeded(parser.parseOptionalKeyword("avx2_lowering_strategy"))) {

  if (avx2_lowering_strategyClause) {
    return parser.emitError(parser.getNameLoc())
          << "`avx2_lowering_strategy` clause can appear at most once in the expansion of the "
             "oilist directive";
  }
  avx2_lowering_strategyClause = true;
  if (parser.parseEqual())
    return ::mlir::failure();

  if (parser.parseCustomAttributeWithFallback(avx2_lowering_strategyAttr, parser.getBuilder().getIntegerType(1))) {
    return ::mlir::failure();
  }
  if (avx2_lowering_strategyAttr) result.getOrAddProperties<ApplyLowerTransposePatternsOp::Properties>().avx2_lowering_strategy = avx2_lowering_strategyAttr;
    } else  {
    break;
  }
}
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
    if (failed(verifyInherentAttrs(result.name, result.attributes, [&]() {
        return parser.emitError(loc) << "'" << result.name.getStringRef() << "' op ";
      })))
      return ::mlir::failure();
  }
  return ::mlir::success();
}

void ApplyLowerTransposePatternsOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ' << " ";
  if (false || getLoweringStrategyAttr()) {
  _odsPrinter << ' ' << "lowering_strategy";
  _odsPrinter << ' ' << "=";
  _odsPrinter << ' ';

  {
    auto caseValue = getLoweringStrategy();
    auto caseValueStr = stringifyVectorTransposeLowering(caseValue);
    _odsPrinter << caseValueStr;
  }
  }
  if (false || getAvx2LoweringStrategyAttr()) {
  _odsPrinter << ' ' << "avx2_lowering_strategy";
  _odsPrinter << ' ' << "=";
  _odsPrinter << ' ';
  _odsPrinter.printAttributeWithoutType(getAvx2LoweringStrategyAttr());
  }
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("lowering_strategy");
  elidedAttrs.push_back("avx2_lowering_strategy");
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getLoweringStrategyAttr();
     if(attr && (attr == ::mlir::vector::VectorTransposeLoweringAttr::get(odsBuilder.getContext(), vector::VectorTransposeLowering::EltWise)))
       elidedAttrs.push_back("lowering_strategy");
  }
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getAvx2LoweringStrategyAttr();
     if(attr && (attr == odsBuilder.getBoolAttr(false)))
       elidedAttrs.push_back("avx2_lowering_strategy");
  }
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::ApplyLowerTransposePatternsOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::ApplyMaterializeMasksPatternsOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
ApplyMaterializeMasksPatternsOpGenericAdaptorBase::ApplyMaterializeMasksPatternsOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("transform.apply_patterns.vector.materialize_masks", odsAttrs.getContext());
}

std::pair<unsigned, unsigned> ApplyMaterializeMasksPatternsOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr ApplyMaterializeMasksPatternsOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
ApplyMaterializeMasksPatternsOpAdaptor::ApplyMaterializeMasksPatternsOpAdaptor(ApplyMaterializeMasksPatternsOp op) : ApplyMaterializeMasksPatternsOpAdaptor(op->getOperands(), op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

::mlir::LogicalResult ApplyMaterializeMasksPatternsOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> ApplyMaterializeMasksPatternsOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range ApplyMaterializeMasksPatternsOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> ApplyMaterializeMasksPatternsOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ApplyMaterializeMasksPatternsOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void ApplyMaterializeMasksPatternsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState) {
}

void ApplyMaterializeMasksPatternsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes) {
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ApplyMaterializeMasksPatternsOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult ApplyMaterializeMasksPatternsOp::verifyInvariantsImpl() {
  return ::mlir::success();
}

::mlir::LogicalResult ApplyMaterializeMasksPatternsOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult ApplyMaterializeMasksPatternsOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  return ::mlir::success();
}

void ApplyMaterializeMasksPatternsOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::ApplyMaterializeMasksPatternsOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::ApplyRankReducingSubviewPatternsOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
ApplyRankReducingSubviewPatternsOpGenericAdaptorBase::ApplyRankReducingSubviewPatternsOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("transform.apply_patterns.vector.rank_reducing_subview_patterns", odsAttrs.getContext());
}

std::pair<unsigned, unsigned> ApplyRankReducingSubviewPatternsOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr ApplyRankReducingSubviewPatternsOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
ApplyRankReducingSubviewPatternsOpAdaptor::ApplyRankReducingSubviewPatternsOpAdaptor(ApplyRankReducingSubviewPatternsOp op) : ApplyRankReducingSubviewPatternsOpAdaptor(op->getOperands(), op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

::mlir::LogicalResult ApplyRankReducingSubviewPatternsOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> ApplyRankReducingSubviewPatternsOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range ApplyRankReducingSubviewPatternsOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> ApplyRankReducingSubviewPatternsOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ApplyRankReducingSubviewPatternsOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void ApplyRankReducingSubviewPatternsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState) {
}

void ApplyRankReducingSubviewPatternsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes) {
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ApplyRankReducingSubviewPatternsOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult ApplyRankReducingSubviewPatternsOp::verifyInvariantsImpl() {
  return ::mlir::success();
}

::mlir::LogicalResult ApplyRankReducingSubviewPatternsOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult ApplyRankReducingSubviewPatternsOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  return ::mlir::success();
}

void ApplyRankReducingSubviewPatternsOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::ApplyRankReducingSubviewPatternsOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::ApplySplitTransferFullPartialPatternsOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
ApplySplitTransferFullPartialPatternsOpGenericAdaptorBase::ApplySplitTransferFullPartialPatternsOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("transform.apply_patterns.vector.split_transfer_full_partial", odsAttrs.getContext());
}

std::pair<unsigned, unsigned> ApplySplitTransferFullPartialPatternsOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr ApplySplitTransferFullPartialPatternsOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::vector::VectorTransferSplitAttr ApplySplitTransferFullPartialPatternsOpGenericAdaptorBase::getSplitTransferStrategyAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::vector::VectorTransferSplitAttr>(getProperties().split_transfer_strategy);
  return attr;
}

::mlir::vector::VectorTransferSplit ApplySplitTransferFullPartialPatternsOpGenericAdaptorBase::getSplitTransferStrategy() {
  auto attr = getSplitTransferStrategyAttr();
  return attr.getValue();
}

} // namespace detail
ApplySplitTransferFullPartialPatternsOpAdaptor::ApplySplitTransferFullPartialPatternsOpAdaptor(ApplySplitTransferFullPartialPatternsOp op) : ApplySplitTransferFullPartialPatternsOpAdaptor(op->getOperands(), op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

::mlir::LogicalResult ApplySplitTransferFullPartialPatternsOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_split_transfer_strategy = getProperties().split_transfer_strategy; (void)tblgen_split_transfer_strategy;

  if (tblgen_split_transfer_strategy && !((::llvm::isa<::mlir::vector::VectorTransferSplitAttr>(tblgen_split_transfer_strategy))))
    return emitError(loc, "'transform.apply_patterns.vector.split_transfer_full_partial' op ""attribute 'split_transfer_strategy' failed to satisfy constraint: control the splitting of `vector.transfer` operations into in-bounds and out-of-bounds variants.");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> ApplySplitTransferFullPartialPatternsOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range ApplySplitTransferFullPartialPatternsOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> ApplySplitTransferFullPartialPatternsOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ApplySplitTransferFullPartialPatternsOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::LogicalResult ApplySplitTransferFullPartialPatternsOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::mlir::InFlightDiagnostic *diag) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    if (diag)
      *diag << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.split_transfer_strategy;
       auto attr = dict.get("split_transfer_strategy");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        if (diag)
          *diag << "expected key entry for split_transfer_strategy in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        if (diag)
          *diag << "Invalid attribute `split_transfer_strategy` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute ApplySplitTransferFullPartialPatternsOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.split_transfer_strategy;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("split_transfer_strategy",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code ApplySplitTransferFullPartialPatternsOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.split_transfer_strategy.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> ApplySplitTransferFullPartialPatternsOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "split_transfer_strategy")
      return prop.split_transfer_strategy;
  return std::nullopt;
}

void ApplySplitTransferFullPartialPatternsOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "split_transfer_strategy") {
       prop.split_transfer_strategy = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.split_transfer_strategy)>>(value);
       return;
    }
}

void ApplySplitTransferFullPartialPatternsOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.split_transfer_strategy) attrs.append("split_transfer_strategy", prop.split_transfer_strategy);
}

::mlir::LogicalResult ApplySplitTransferFullPartialPatternsOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> getDiag) {
    {
      ::mlir::Attribute attr = attrs.get(getSplitTransferStrategyAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_VectorTransformOps5(attr, "split_transfer_strategy", getDiag)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult ApplySplitTransferFullPartialPatternsOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.split_transfer_strategy)))
    return ::mlir::failure();
  return ::mlir::success();
}

void ApplySplitTransferFullPartialPatternsOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.split_transfer_strategy);
}

::mlir::vector::VectorTransferSplitAttr ApplySplitTransferFullPartialPatternsOp::getSplitTransferStrategyAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::vector::VectorTransferSplitAttr>(getProperties().split_transfer_strategy);
}

::mlir::vector::VectorTransferSplit ApplySplitTransferFullPartialPatternsOp::getSplitTransferStrategy() {
  auto attr = getSplitTransferStrategyAttr();
  return attr.getValue();
}

void ApplySplitTransferFullPartialPatternsOp::setSplitTransferStrategyAttr(::mlir::vector::VectorTransferSplitAttr attr) {
  (*this)->setAttr(getSplitTransferStrategyAttrName(), attr);
}

void ApplySplitTransferFullPartialPatternsOp::setSplitTransferStrategy(::mlir::vector::VectorTransferSplit attrValue) {
  (*this)->setAttr(getSplitTransferStrategyAttrName(), ::mlir::vector::VectorTransferSplitAttr::get(::mlir::Builder((*this)->getContext()).getContext(), attrValue));
}

void ApplySplitTransferFullPartialPatternsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::vector::VectorTransferSplitAttr split_transfer_strategy) {
  if (split_transfer_strategy) {
    odsState.getOrAddProperties<Properties>().split_transfer_strategy = split_transfer_strategy;
  }
}

void ApplySplitTransferFullPartialPatternsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::vector::VectorTransferSplitAttr split_transfer_strategy) {
  if (split_transfer_strategy) {
    odsState.getOrAddProperties<Properties>().split_transfer_strategy = split_transfer_strategy;
  }
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ApplySplitTransferFullPartialPatternsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::vector::VectorTransferSplit split_transfer_strategy) {
  odsState.getOrAddProperties<Properties>().split_transfer_strategy = ::mlir::vector::VectorTransferSplitAttr::get(odsBuilder.getContext(), split_transfer_strategy);
}

void ApplySplitTransferFullPartialPatternsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::vector::VectorTransferSplit split_transfer_strategy) {
  odsState.getOrAddProperties<Properties>().split_transfer_strategy = ::mlir::vector::VectorTransferSplitAttr::get(odsBuilder.getContext(), split_transfer_strategy);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ApplySplitTransferFullPartialPatternsOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void ApplySplitTransferFullPartialPatternsOp::populateDefaultProperties(::mlir::OperationName opName, Properties &properties) {
  ::mlir::Builder odsBuilder(opName.getContext());
  if (!properties.split_transfer_strategy)
    properties.split_transfer_strategy = ::mlir::vector::VectorTransferSplitAttr::get(odsBuilder.getContext(), vector::VectorTransferSplit::LinalgCopy);
}

::mlir::LogicalResult ApplySplitTransferFullPartialPatternsOp::verifyInvariantsImpl() {
  auto tblgen_split_transfer_strategy = getProperties().split_transfer_strategy; (void)tblgen_split_transfer_strategy;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_VectorTransformOps5(*this, tblgen_split_transfer_strategy, "split_transfer_strategy")))
    return ::mlir::failure();
  return ::mlir::success();
}

::mlir::LogicalResult ApplySplitTransferFullPartialPatternsOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult ApplySplitTransferFullPartialPatternsOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::vector::VectorTransferSplitAttr split_transfer_strategyAttr;
  if (::mlir::succeeded(parser.parseOptionalKeyword("split_transfer_strategy"))) {
  if (parser.parseEqual())
    return ::mlir::failure();

  {
    ::llvm::StringRef attrStr;
    ::mlir::NamedAttrList attrStorage;
    auto loc = parser.getCurrentLocation();
    if (parser.parseOptionalKeyword(&attrStr, {"none"})) {
      ::mlir::StringAttr attrVal;
      ::mlir::OptionalParseResult parseResult =
        parser.parseOptionalAttribute(attrVal,
                                      parser.getBuilder().getNoneType(),
                                      "split_transfer_strategy", attrStorage);
      if (parseResult.has_value()) {
        if (failed(*parseResult))
          return ::mlir::failure();
        attrStr = attrVal.getValue();
      } else {
        return parser.emitError(loc, "expected string or keyword containing one of the following enum values for attribute 'split_transfer_strategy' [none, vector-transfer, linalg-copy, force-in-bounds]");
      }
    }
    if (!attrStr.empty()) {
      auto attrOptional = ::mlir::vector::symbolizeVectorTransferSplit(attrStr);
      if (!attrOptional)
        return parser.emitError(loc, "invalid ")
               << "split_transfer_strategy attribute specification: \"" << attrStr << '"';;

      split_transfer_strategyAttr = ::mlir::vector::VectorTransferSplitAttr::get(parser.getBuilder().getContext(), *attrOptional);
        result.getOrAddProperties<ApplySplitTransferFullPartialPatternsOp::Properties>().split_transfer_strategy = split_transfer_strategyAttr;
    }
  }
  }
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
    if (failed(verifyInherentAttrs(result.name, result.attributes, [&]() {
        return parser.emitError(loc) << "'" << result.name.getStringRef() << "' op ";
      })))
      return ::mlir::failure();
  }
  return ::mlir::success();
}

void ApplySplitTransferFullPartialPatternsOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  if (getSplitTransferStrategyAttr() && getSplitTransferStrategyAttr() != ::mlir::vector::VectorTransferSplitAttr::get(::mlir::OpBuilder((*this)->getContext()).getContext(), vector::VectorTransferSplit::LinalgCopy)) {
    _odsPrinter << ' ' << "split_transfer_strategy";
    _odsPrinter << ' ' << "=";
    _odsPrinter << ' ';

    {
      auto caseValue = getSplitTransferStrategy();
      auto caseValueStr = stringifyVectorTransferSplit(caseValue);
      switch (caseValue) {
      case ::mlir::vector::VectorTransferSplit::None:
        _odsPrinter << caseValueStr;
        break;
      default:
        _odsPrinter << '"' << caseValueStr << '"';
        break;
      }
    }
  }
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("split_transfer_strategy");
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getSplitTransferStrategyAttr();
     if(attr && (attr == ::mlir::vector::VectorTransferSplitAttr::get(odsBuilder.getContext(), vector::VectorTransferSplit::LinalgCopy)))
       elidedAttrs.push_back("split_transfer_strategy");
  }
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::ApplySplitTransferFullPartialPatternsOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::ApplyTransferPermutationPatternsOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
ApplyTransferPermutationPatternsOpGenericAdaptorBase::ApplyTransferPermutationPatternsOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("transform.apply_patterns.vector.transfer_permutation_patterns", odsAttrs.getContext());
}

std::pair<unsigned, unsigned> ApplyTransferPermutationPatternsOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr ApplyTransferPermutationPatternsOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
ApplyTransferPermutationPatternsOpAdaptor::ApplyTransferPermutationPatternsOpAdaptor(ApplyTransferPermutationPatternsOp op) : ApplyTransferPermutationPatternsOpAdaptor(op->getOperands(), op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

::mlir::LogicalResult ApplyTransferPermutationPatternsOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> ApplyTransferPermutationPatternsOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range ApplyTransferPermutationPatternsOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> ApplyTransferPermutationPatternsOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ApplyTransferPermutationPatternsOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void ApplyTransferPermutationPatternsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState) {
}

void ApplyTransferPermutationPatternsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes) {
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ApplyTransferPermutationPatternsOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult ApplyTransferPermutationPatternsOp::verifyInvariantsImpl() {
  return ::mlir::success();
}

::mlir::LogicalResult ApplyTransferPermutationPatternsOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult ApplyTransferPermutationPatternsOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  return ::mlir::success();
}

void ApplyTransferPermutationPatternsOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::ApplyTransferPermutationPatternsOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::ApplyTransferToScfPatternsOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
ApplyTransferToScfPatternsOpGenericAdaptorBase::ApplyTransferToScfPatternsOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("transform.apply_patterns.vector.transfer_to_scf", odsAttrs.getContext());
}

std::pair<unsigned, unsigned> ApplyTransferToScfPatternsOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr ApplyTransferToScfPatternsOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::IntegerAttr ApplyTransferToScfPatternsOpGenericAdaptorBase::getMaxTransferRankAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::IntegerAttr>(getProperties().max_transfer_rank);
  return attr;
}

uint64_t ApplyTransferToScfPatternsOpGenericAdaptorBase::getMaxTransferRank() {
  auto attr = getMaxTransferRankAttr();
  return attr.getValue().getZExtValue();
}

::mlir::BoolAttr ApplyTransferToScfPatternsOpGenericAdaptorBase::getFullUnrollAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::BoolAttr>(getProperties().full_unroll);
  return attr;
}

bool ApplyTransferToScfPatternsOpGenericAdaptorBase::getFullUnroll() {
  auto attr = getFullUnrollAttr();
  return attr.getValue();
}

} // namespace detail
ApplyTransferToScfPatternsOpAdaptor::ApplyTransferToScfPatternsOpAdaptor(ApplyTransferToScfPatternsOp op) : ApplyTransferToScfPatternsOpAdaptor(op->getOperands(), op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

::mlir::LogicalResult ApplyTransferToScfPatternsOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_full_unroll = getProperties().full_unroll; (void)tblgen_full_unroll;
  auto tblgen_max_transfer_rank = getProperties().max_transfer_rank; (void)tblgen_max_transfer_rank;

  if (tblgen_max_transfer_rank && !(((::llvm::isa<::mlir::IntegerAttr>(tblgen_max_transfer_rank))) && ((::llvm::cast<::mlir::IntegerAttr>(tblgen_max_transfer_rank).getType().isSignlessInteger(64)))))
    return emitError(loc, "'transform.apply_patterns.vector.transfer_to_scf' op ""attribute 'max_transfer_rank' failed to satisfy constraint: 64-bit signless integer attribute");

  if (tblgen_full_unroll && !((::llvm::isa<::mlir::BoolAttr>(tblgen_full_unroll))))
    return emitError(loc, "'transform.apply_patterns.vector.transfer_to_scf' op ""attribute 'full_unroll' failed to satisfy constraint: bool attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> ApplyTransferToScfPatternsOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range ApplyTransferToScfPatternsOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> ApplyTransferToScfPatternsOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ApplyTransferToScfPatternsOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::LogicalResult ApplyTransferToScfPatternsOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::mlir::InFlightDiagnostic *diag) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    if (diag)
      *diag << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.full_unroll;
       auto attr = dict.get("full_unroll");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        if (diag)
          *diag << "expected key entry for full_unroll in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        if (diag)
          *diag << "Invalid attribute `full_unroll` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.max_transfer_rank;
       auto attr = dict.get("max_transfer_rank");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        if (diag)
          *diag << "expected key entry for max_transfer_rank in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        if (diag)
          *diag << "Invalid attribute `max_transfer_rank` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute ApplyTransferToScfPatternsOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.full_unroll;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("full_unroll",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.max_transfer_rank;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("max_transfer_rank",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code ApplyTransferToScfPatternsOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.full_unroll.getAsOpaquePointer()), 
    llvm::hash_value(prop.max_transfer_rank.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> ApplyTransferToScfPatternsOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "full_unroll")
      return prop.full_unroll;

    if (name == "max_transfer_rank")
      return prop.max_transfer_rank;
  return std::nullopt;
}

void ApplyTransferToScfPatternsOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "full_unroll") {
       prop.full_unroll = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.full_unroll)>>(value);
       return;
    }

    if (name == "max_transfer_rank") {
       prop.max_transfer_rank = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.max_transfer_rank)>>(value);
       return;
    }
}

void ApplyTransferToScfPatternsOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.full_unroll) attrs.append("full_unroll", prop.full_unroll);

    if (prop.max_transfer_rank) attrs.append("max_transfer_rank", prop.max_transfer_rank);
}

::mlir::LogicalResult ApplyTransferToScfPatternsOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> getDiag) {
    {
      ::mlir::Attribute attr = attrs.get(getFullUnrollAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_VectorTransformOps4(attr, "full_unroll", getDiag)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getMaxTransferRankAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_VectorTransformOps2(attr, "max_transfer_rank", getDiag)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult ApplyTransferToScfPatternsOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.full_unroll)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.max_transfer_rank)))
    return ::mlir::failure();
  return ::mlir::success();
}

void ApplyTransferToScfPatternsOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.full_unroll);

  writer.writeOptionalAttribute(prop.max_transfer_rank);
}

::mlir::IntegerAttr ApplyTransferToScfPatternsOp::getMaxTransferRankAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::IntegerAttr>(getProperties().max_transfer_rank);
}

uint64_t ApplyTransferToScfPatternsOp::getMaxTransferRank() {
  auto attr = getMaxTransferRankAttr();
  return attr.getValue().getZExtValue();
}

::mlir::BoolAttr ApplyTransferToScfPatternsOp::getFullUnrollAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::BoolAttr>(getProperties().full_unroll);
}

bool ApplyTransferToScfPatternsOp::getFullUnroll() {
  auto attr = getFullUnrollAttr();
  return attr.getValue();
}

void ApplyTransferToScfPatternsOp::setMaxTransferRankAttr(::mlir::IntegerAttr attr) {
  (*this)->setAttr(getMaxTransferRankAttrName(), attr);
}

void ApplyTransferToScfPatternsOp::setMaxTransferRank(uint64_t attrValue) {
  (*this)->setAttr(getMaxTransferRankAttrName(), ::mlir::Builder((*this)->getContext()).getIntegerAttr(::mlir::Builder((*this)->getContext()).getIntegerType(64), attrValue));
}

void ApplyTransferToScfPatternsOp::setFullUnrollAttr(::mlir::BoolAttr attr) {
  (*this)->setAttr(getFullUnrollAttrName(), attr);
}

void ApplyTransferToScfPatternsOp::setFullUnroll(bool attrValue) {
  (*this)->setAttr(getFullUnrollAttrName(), ::mlir::Builder((*this)->getContext()).getBoolAttr(attrValue));
}

void ApplyTransferToScfPatternsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::IntegerAttr max_transfer_rank, ::mlir::BoolAttr full_unroll) {
  if (max_transfer_rank) {
    odsState.getOrAddProperties<Properties>().max_transfer_rank = max_transfer_rank;
  }
  if (full_unroll) {
    odsState.getOrAddProperties<Properties>().full_unroll = full_unroll;
  }
}

void ApplyTransferToScfPatternsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::IntegerAttr max_transfer_rank, ::mlir::BoolAttr full_unroll) {
  if (max_transfer_rank) {
    odsState.getOrAddProperties<Properties>().max_transfer_rank = max_transfer_rank;
  }
  if (full_unroll) {
    odsState.getOrAddProperties<Properties>().full_unroll = full_unroll;
  }
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ApplyTransferToScfPatternsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, uint64_t max_transfer_rank, bool full_unroll) {
  odsState.getOrAddProperties<Properties>().max_transfer_rank = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), max_transfer_rank);
  odsState.getOrAddProperties<Properties>().full_unroll = odsBuilder.getBoolAttr(full_unroll);
}

void ApplyTransferToScfPatternsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, uint64_t max_transfer_rank, bool full_unroll) {
  odsState.getOrAddProperties<Properties>().max_transfer_rank = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), max_transfer_rank);
  odsState.getOrAddProperties<Properties>().full_unroll = odsBuilder.getBoolAttr(full_unroll);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ApplyTransferToScfPatternsOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void ApplyTransferToScfPatternsOp::populateDefaultProperties(::mlir::OperationName opName, Properties &properties) {
  ::mlir::Builder odsBuilder(opName.getContext());
  if (!properties.max_transfer_rank)
    properties.max_transfer_rank = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), 1);
  if (!properties.full_unroll)
    properties.full_unroll = odsBuilder.getBoolAttr(false);
}

::mlir::LogicalResult ApplyTransferToScfPatternsOp::verifyInvariantsImpl() {
  auto tblgen_full_unroll = getProperties().full_unroll; (void)tblgen_full_unroll;
  auto tblgen_max_transfer_rank = getProperties().max_transfer_rank; (void)tblgen_max_transfer_rank;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_VectorTransformOps2(*this, tblgen_max_transfer_rank, "max_transfer_rank")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_VectorTransformOps4(*this, tblgen_full_unroll, "full_unroll")))
    return ::mlir::failure();
  return ::mlir::success();
}

::mlir::LogicalResult ApplyTransferToScfPatternsOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult ApplyTransferToScfPatternsOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::IntegerAttr max_transfer_rankAttr;
  ::mlir::BoolAttr full_unrollAttr;
  bool max_transfer_rankClause = false;
  bool full_unrollClause = false;
  while(true) {
if (succeeded(parser.parseOptionalKeyword("max_transfer_rank"))) {

  if (max_transfer_rankClause) {
    return parser.emitError(parser.getNameLoc())
          << "`max_transfer_rank` clause can appear at most once in the expansion of the "
             "oilist directive";
  }
  max_transfer_rankClause = true;
  if (parser.parseEqual())
    return ::mlir::failure();

  if (parser.parseCustomAttributeWithFallback(max_transfer_rankAttr, parser.getBuilder().getIntegerType(64))) {
    return ::mlir::failure();
  }
  if (max_transfer_rankAttr) result.getOrAddProperties<ApplyTransferToScfPatternsOp::Properties>().max_transfer_rank = max_transfer_rankAttr;
    } else if (succeeded(parser.parseOptionalKeyword("full_unroll"))) {

  if (full_unrollClause) {
    return parser.emitError(parser.getNameLoc())
          << "`full_unroll` clause can appear at most once in the expansion of the "
             "oilist directive";
  }
  full_unrollClause = true;
  if (parser.parseEqual())
    return ::mlir::failure();

  if (parser.parseCustomAttributeWithFallback(full_unrollAttr, parser.getBuilder().getIntegerType(1))) {
    return ::mlir::failure();
  }
  if (full_unrollAttr) result.getOrAddProperties<ApplyTransferToScfPatternsOp::Properties>().full_unroll = full_unrollAttr;
    } else  {
    break;
  }
}
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
    if (failed(verifyInherentAttrs(result.name, result.attributes, [&]() {
        return parser.emitError(loc) << "'" << result.name.getStringRef() << "' op ";
      })))
      return ::mlir::failure();
  }
  return ::mlir::success();
}

void ApplyTransferToScfPatternsOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ' << " ";
  if (false || getMaxTransferRankAttr()) {
  _odsPrinter << ' ' << "max_transfer_rank";
  _odsPrinter << ' ' << "=";
  _odsPrinter << ' ';
  _odsPrinter.printAttributeWithoutType(getMaxTransferRankAttr());
  }
  if (false || getFullUnrollAttr()) {
  _odsPrinter << ' ' << "full_unroll";
  _odsPrinter << ' ' << "=";
  _odsPrinter << ' ';
  _odsPrinter.printAttributeWithoutType(getFullUnrollAttr());
  }
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("max_transfer_rank");
  elidedAttrs.push_back("full_unroll");
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getMaxTransferRankAttr();
     if(attr && (attr == odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), 1)))
       elidedAttrs.push_back("max_transfer_rank");
  }
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getFullUnrollAttr();
     if(attr && (attr == odsBuilder.getBoolAttr(false)))
       elidedAttrs.push_back("full_unroll");
  }
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::ApplyTransferToScfPatternsOp)


#endif  // GET_OP_CLASSES

