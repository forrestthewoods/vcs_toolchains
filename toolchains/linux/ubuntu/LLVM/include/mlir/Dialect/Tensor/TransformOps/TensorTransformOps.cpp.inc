/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Op Definitions                                                             *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#ifdef GET_OP_LIST
#undef GET_OP_LIST

::mlir::transform::ApplyDropRedundantInsertSliceRankExpansionPatternsOp,
::mlir::transform::ApplyFoldIntoPackAndUnpackPatternsOp,
::mlir::transform::ApplyFoldTensorEmptyPatternsOp,
::mlir::transform::ApplyFoldTensorSubsetOpsIntoVectorTransfersPatternsOp,
::mlir::transform::ApplyFoldTensorSubsetOpsPatternsOp,
::mlir::transform::ApplyMergeConsecutiveInsertExtractSlicePatternsOp,
::mlir::transform::ApplyReassociativeReshapeFoldingPatternsOp,
::mlir::transform::ApplyRewriteTensorOpsAsConstantPatternsOp,
::mlir::transform::MakeLoopIndependentOp
#endif  // GET_OP_LIST

#ifdef GET_OP_CLASSES
#undef GET_OP_CLASSES


//===----------------------------------------------------------------------===//
// Local Utility Method Definitions
//===----------------------------------------------------------------------===//

namespace mlir {
namespace transform {

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_TensorTransformOps0(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((::llvm::isa<::mlir::transform::TransformHandleTypeInterface>(type)))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be TransformHandleTypeInterface instance, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_TensorTransformOps0(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> getDiag) {
  if (attr && !((::llvm::isa<::mlir::BoolAttr>(attr))))
    return getDiag() << "attribute '" << attrName
        << "' failed to satisfy constraint: bool attribute";
  return ::mlir::success();
}
static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_TensorTransformOps0(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_TensorTransformOps0(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_TensorTransformOps1(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> getDiag) {
  if (attr && !(((::llvm::isa<::mlir::IntegerAttr>(attr))) && ((::llvm::cast<::mlir::IntegerAttr>(attr).getType().isSignlessInteger(64)))))
    return getDiag() << "attribute '" << attrName
        << "' failed to satisfy constraint: 64-bit signless integer attribute";
  return ::mlir::success();
}
static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_TensorTransformOps1(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_TensorTransformOps1(attr, attrName, [op]() {
    return op->emitOpError();
  });
}
} // namespace transform
} // namespace mlir
namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::ApplyDropRedundantInsertSliceRankExpansionPatternsOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
ApplyDropRedundantInsertSliceRankExpansionPatternsOpGenericAdaptorBase::ApplyDropRedundantInsertSliceRankExpansionPatternsOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("transform.apply_patterns.tensor.drop_redundant_insert_slice_rank_expansion", odsAttrs.getContext());
}

std::pair<unsigned, unsigned> ApplyDropRedundantInsertSliceRankExpansionPatternsOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr ApplyDropRedundantInsertSliceRankExpansionPatternsOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
ApplyDropRedundantInsertSliceRankExpansionPatternsOpAdaptor::ApplyDropRedundantInsertSliceRankExpansionPatternsOpAdaptor(ApplyDropRedundantInsertSliceRankExpansionPatternsOp op) : ApplyDropRedundantInsertSliceRankExpansionPatternsOpAdaptor(op->getOperands(), op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

::mlir::LogicalResult ApplyDropRedundantInsertSliceRankExpansionPatternsOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> ApplyDropRedundantInsertSliceRankExpansionPatternsOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range ApplyDropRedundantInsertSliceRankExpansionPatternsOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> ApplyDropRedundantInsertSliceRankExpansionPatternsOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ApplyDropRedundantInsertSliceRankExpansionPatternsOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void ApplyDropRedundantInsertSliceRankExpansionPatternsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState) {
}

void ApplyDropRedundantInsertSliceRankExpansionPatternsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes) {
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ApplyDropRedundantInsertSliceRankExpansionPatternsOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult ApplyDropRedundantInsertSliceRankExpansionPatternsOp::verifyInvariantsImpl() {
  return ::mlir::success();
}

::mlir::LogicalResult ApplyDropRedundantInsertSliceRankExpansionPatternsOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult ApplyDropRedundantInsertSliceRankExpansionPatternsOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  return ::mlir::success();
}

void ApplyDropRedundantInsertSliceRankExpansionPatternsOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::ApplyDropRedundantInsertSliceRankExpansionPatternsOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::ApplyFoldIntoPackAndUnpackPatternsOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
ApplyFoldIntoPackAndUnpackPatternsOpGenericAdaptorBase::ApplyFoldIntoPackAndUnpackPatternsOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("transform.apply_patterns.tensor.fold_into_pack_and_unpack", odsAttrs.getContext());
}

std::pair<unsigned, unsigned> ApplyFoldIntoPackAndUnpackPatternsOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr ApplyFoldIntoPackAndUnpackPatternsOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
ApplyFoldIntoPackAndUnpackPatternsOpAdaptor::ApplyFoldIntoPackAndUnpackPatternsOpAdaptor(ApplyFoldIntoPackAndUnpackPatternsOp op) : ApplyFoldIntoPackAndUnpackPatternsOpAdaptor(op->getOperands(), op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

::mlir::LogicalResult ApplyFoldIntoPackAndUnpackPatternsOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> ApplyFoldIntoPackAndUnpackPatternsOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range ApplyFoldIntoPackAndUnpackPatternsOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> ApplyFoldIntoPackAndUnpackPatternsOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ApplyFoldIntoPackAndUnpackPatternsOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void ApplyFoldIntoPackAndUnpackPatternsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState) {
}

void ApplyFoldIntoPackAndUnpackPatternsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes) {
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ApplyFoldIntoPackAndUnpackPatternsOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult ApplyFoldIntoPackAndUnpackPatternsOp::verifyInvariantsImpl() {
  return ::mlir::success();
}

::mlir::LogicalResult ApplyFoldIntoPackAndUnpackPatternsOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult ApplyFoldIntoPackAndUnpackPatternsOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  return ::mlir::success();
}

void ApplyFoldIntoPackAndUnpackPatternsOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::ApplyFoldIntoPackAndUnpackPatternsOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::ApplyFoldTensorEmptyPatternsOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
ApplyFoldTensorEmptyPatternsOpGenericAdaptorBase::ApplyFoldTensorEmptyPatternsOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("transform.apply_patterns.tensor.fold_tensor_empty", odsAttrs.getContext());
}

std::pair<unsigned, unsigned> ApplyFoldTensorEmptyPatternsOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr ApplyFoldTensorEmptyPatternsOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::BoolAttr ApplyFoldTensorEmptyPatternsOpGenericAdaptorBase::getFoldSingleUseOnlyAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::BoolAttr>(getProperties().fold_single_use_only);
  return attr;
}

bool ApplyFoldTensorEmptyPatternsOpGenericAdaptorBase::getFoldSingleUseOnly() {
  auto attr = getFoldSingleUseOnlyAttr();
  return attr.getValue();
}

} // namespace detail
ApplyFoldTensorEmptyPatternsOpAdaptor::ApplyFoldTensorEmptyPatternsOpAdaptor(ApplyFoldTensorEmptyPatternsOp op) : ApplyFoldTensorEmptyPatternsOpAdaptor(op->getOperands(), op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

::mlir::LogicalResult ApplyFoldTensorEmptyPatternsOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_fold_single_use_only = getProperties().fold_single_use_only; (void)tblgen_fold_single_use_only;

  if (tblgen_fold_single_use_only && !((::llvm::isa<::mlir::BoolAttr>(tblgen_fold_single_use_only))))
    return emitError(loc, "'transform.apply_patterns.tensor.fold_tensor_empty' op ""attribute 'fold_single_use_only' failed to satisfy constraint: bool attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> ApplyFoldTensorEmptyPatternsOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range ApplyFoldTensorEmptyPatternsOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> ApplyFoldTensorEmptyPatternsOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ApplyFoldTensorEmptyPatternsOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::LogicalResult ApplyFoldTensorEmptyPatternsOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::mlir::InFlightDiagnostic *diag) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    if (diag)
      *diag << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.fold_single_use_only;
       auto attr = dict.get("fold_single_use_only");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        if (diag)
          *diag << "expected key entry for fold_single_use_only in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        if (diag)
          *diag << "Invalid attribute `fold_single_use_only` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute ApplyFoldTensorEmptyPatternsOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.fold_single_use_only;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("fold_single_use_only",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code ApplyFoldTensorEmptyPatternsOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.fold_single_use_only.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> ApplyFoldTensorEmptyPatternsOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "fold_single_use_only")
      return prop.fold_single_use_only;
  return std::nullopt;
}

void ApplyFoldTensorEmptyPatternsOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "fold_single_use_only") {
       prop.fold_single_use_only = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.fold_single_use_only)>>(value);
       return;
    }
}

void ApplyFoldTensorEmptyPatternsOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.fold_single_use_only) attrs.append("fold_single_use_only", prop.fold_single_use_only);
}

::mlir::LogicalResult ApplyFoldTensorEmptyPatternsOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> getDiag) {
    {
      ::mlir::Attribute attr = attrs.get(getFoldSingleUseOnlyAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_TensorTransformOps0(attr, "fold_single_use_only", getDiag)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult ApplyFoldTensorEmptyPatternsOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.fold_single_use_only)))
    return ::mlir::failure();
  return ::mlir::success();
}

void ApplyFoldTensorEmptyPatternsOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.fold_single_use_only);
}

::mlir::BoolAttr ApplyFoldTensorEmptyPatternsOp::getFoldSingleUseOnlyAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::BoolAttr>(getProperties().fold_single_use_only);
}

bool ApplyFoldTensorEmptyPatternsOp::getFoldSingleUseOnly() {
  auto attr = getFoldSingleUseOnlyAttr();
  return attr.getValue();
}

void ApplyFoldTensorEmptyPatternsOp::setFoldSingleUseOnlyAttr(::mlir::BoolAttr attr) {
  (*this)->setAttr(getFoldSingleUseOnlyAttrName(), attr);
}

void ApplyFoldTensorEmptyPatternsOp::setFoldSingleUseOnly(bool attrValue) {
  (*this)->setAttr(getFoldSingleUseOnlyAttrName(), ::mlir::Builder((*this)->getContext()).getBoolAttr(attrValue));
}

void ApplyFoldTensorEmptyPatternsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::BoolAttr fold_single_use_only) {
  if (fold_single_use_only) {
    odsState.getOrAddProperties<Properties>().fold_single_use_only = fold_single_use_only;
  }
}

void ApplyFoldTensorEmptyPatternsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::BoolAttr fold_single_use_only) {
  if (fold_single_use_only) {
    odsState.getOrAddProperties<Properties>().fold_single_use_only = fold_single_use_only;
  }
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ApplyFoldTensorEmptyPatternsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, bool fold_single_use_only) {
  odsState.getOrAddProperties<Properties>().fold_single_use_only = odsBuilder.getBoolAttr(fold_single_use_only);
}

void ApplyFoldTensorEmptyPatternsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, bool fold_single_use_only) {
  odsState.getOrAddProperties<Properties>().fold_single_use_only = odsBuilder.getBoolAttr(fold_single_use_only);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ApplyFoldTensorEmptyPatternsOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void ApplyFoldTensorEmptyPatternsOp::populateDefaultProperties(::mlir::OperationName opName, Properties &properties) {
  ::mlir::Builder odsBuilder(opName.getContext());
  if (!properties.fold_single_use_only)
    properties.fold_single_use_only = odsBuilder.getBoolAttr(false);
}

::mlir::LogicalResult ApplyFoldTensorEmptyPatternsOp::verifyInvariantsImpl() {
  auto tblgen_fold_single_use_only = getProperties().fold_single_use_only; (void)tblgen_fold_single_use_only;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_TensorTransformOps0(*this, tblgen_fold_single_use_only, "fold_single_use_only")))
    return ::mlir::failure();
  return ::mlir::success();
}

::mlir::LogicalResult ApplyFoldTensorEmptyPatternsOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult ApplyFoldTensorEmptyPatternsOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
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

void ApplyFoldTensorEmptyPatternsOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getFoldSingleUseOnlyAttr();
     if(attr && (attr == odsBuilder.getBoolAttr(false)))
       elidedAttrs.push_back("fold_single_use_only");
  }
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::ApplyFoldTensorEmptyPatternsOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::ApplyFoldTensorSubsetOpsIntoVectorTransfersPatternsOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
ApplyFoldTensorSubsetOpsIntoVectorTransfersPatternsOpGenericAdaptorBase::ApplyFoldTensorSubsetOpsIntoVectorTransfersPatternsOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("transform.apply_patterns.tensor.fold_tensor_subset_ops_into_vector_transfers", odsAttrs.getContext());
}

std::pair<unsigned, unsigned> ApplyFoldTensorSubsetOpsIntoVectorTransfersPatternsOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr ApplyFoldTensorSubsetOpsIntoVectorTransfersPatternsOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
ApplyFoldTensorSubsetOpsIntoVectorTransfersPatternsOpAdaptor::ApplyFoldTensorSubsetOpsIntoVectorTransfersPatternsOpAdaptor(ApplyFoldTensorSubsetOpsIntoVectorTransfersPatternsOp op) : ApplyFoldTensorSubsetOpsIntoVectorTransfersPatternsOpAdaptor(op->getOperands(), op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

::mlir::LogicalResult ApplyFoldTensorSubsetOpsIntoVectorTransfersPatternsOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> ApplyFoldTensorSubsetOpsIntoVectorTransfersPatternsOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range ApplyFoldTensorSubsetOpsIntoVectorTransfersPatternsOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> ApplyFoldTensorSubsetOpsIntoVectorTransfersPatternsOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ApplyFoldTensorSubsetOpsIntoVectorTransfersPatternsOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void ApplyFoldTensorSubsetOpsIntoVectorTransfersPatternsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState) {
}

void ApplyFoldTensorSubsetOpsIntoVectorTransfersPatternsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes) {
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ApplyFoldTensorSubsetOpsIntoVectorTransfersPatternsOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult ApplyFoldTensorSubsetOpsIntoVectorTransfersPatternsOp::verifyInvariantsImpl() {
  return ::mlir::success();
}

::mlir::LogicalResult ApplyFoldTensorSubsetOpsIntoVectorTransfersPatternsOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult ApplyFoldTensorSubsetOpsIntoVectorTransfersPatternsOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  return ::mlir::success();
}

void ApplyFoldTensorSubsetOpsIntoVectorTransfersPatternsOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::ApplyFoldTensorSubsetOpsIntoVectorTransfersPatternsOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::ApplyFoldTensorSubsetOpsPatternsOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
ApplyFoldTensorSubsetOpsPatternsOpGenericAdaptorBase::ApplyFoldTensorSubsetOpsPatternsOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("transform.apply_patterns.tensor.fold_tensor_subset_ops", odsAttrs.getContext());
}

std::pair<unsigned, unsigned> ApplyFoldTensorSubsetOpsPatternsOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr ApplyFoldTensorSubsetOpsPatternsOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
ApplyFoldTensorSubsetOpsPatternsOpAdaptor::ApplyFoldTensorSubsetOpsPatternsOpAdaptor(ApplyFoldTensorSubsetOpsPatternsOp op) : ApplyFoldTensorSubsetOpsPatternsOpAdaptor(op->getOperands(), op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

::mlir::LogicalResult ApplyFoldTensorSubsetOpsPatternsOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> ApplyFoldTensorSubsetOpsPatternsOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range ApplyFoldTensorSubsetOpsPatternsOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> ApplyFoldTensorSubsetOpsPatternsOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ApplyFoldTensorSubsetOpsPatternsOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void ApplyFoldTensorSubsetOpsPatternsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState) {
}

void ApplyFoldTensorSubsetOpsPatternsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes) {
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ApplyFoldTensorSubsetOpsPatternsOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult ApplyFoldTensorSubsetOpsPatternsOp::verifyInvariantsImpl() {
  return ::mlir::success();
}

::mlir::LogicalResult ApplyFoldTensorSubsetOpsPatternsOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult ApplyFoldTensorSubsetOpsPatternsOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  return ::mlir::success();
}

void ApplyFoldTensorSubsetOpsPatternsOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::ApplyFoldTensorSubsetOpsPatternsOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::ApplyMergeConsecutiveInsertExtractSlicePatternsOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
ApplyMergeConsecutiveInsertExtractSlicePatternsOpGenericAdaptorBase::ApplyMergeConsecutiveInsertExtractSlicePatternsOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("transform.apply_patterns.tensor.merge_consecutive_insert_extract_slice", odsAttrs.getContext());
}

std::pair<unsigned, unsigned> ApplyMergeConsecutiveInsertExtractSlicePatternsOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr ApplyMergeConsecutiveInsertExtractSlicePatternsOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
ApplyMergeConsecutiveInsertExtractSlicePatternsOpAdaptor::ApplyMergeConsecutiveInsertExtractSlicePatternsOpAdaptor(ApplyMergeConsecutiveInsertExtractSlicePatternsOp op) : ApplyMergeConsecutiveInsertExtractSlicePatternsOpAdaptor(op->getOperands(), op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

::mlir::LogicalResult ApplyMergeConsecutiveInsertExtractSlicePatternsOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> ApplyMergeConsecutiveInsertExtractSlicePatternsOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range ApplyMergeConsecutiveInsertExtractSlicePatternsOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> ApplyMergeConsecutiveInsertExtractSlicePatternsOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ApplyMergeConsecutiveInsertExtractSlicePatternsOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void ApplyMergeConsecutiveInsertExtractSlicePatternsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState) {
}

void ApplyMergeConsecutiveInsertExtractSlicePatternsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes) {
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ApplyMergeConsecutiveInsertExtractSlicePatternsOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult ApplyMergeConsecutiveInsertExtractSlicePatternsOp::verifyInvariantsImpl() {
  return ::mlir::success();
}

::mlir::LogicalResult ApplyMergeConsecutiveInsertExtractSlicePatternsOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult ApplyMergeConsecutiveInsertExtractSlicePatternsOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  return ::mlir::success();
}

void ApplyMergeConsecutiveInsertExtractSlicePatternsOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::ApplyMergeConsecutiveInsertExtractSlicePatternsOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::ApplyReassociativeReshapeFoldingPatternsOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
ApplyReassociativeReshapeFoldingPatternsOpGenericAdaptorBase::ApplyReassociativeReshapeFoldingPatternsOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("transform.apply_patterns.tensor.reassociative_reshape_folding", odsAttrs.getContext());
}

std::pair<unsigned, unsigned> ApplyReassociativeReshapeFoldingPatternsOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr ApplyReassociativeReshapeFoldingPatternsOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
ApplyReassociativeReshapeFoldingPatternsOpAdaptor::ApplyReassociativeReshapeFoldingPatternsOpAdaptor(ApplyReassociativeReshapeFoldingPatternsOp op) : ApplyReassociativeReshapeFoldingPatternsOpAdaptor(op->getOperands(), op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

::mlir::LogicalResult ApplyReassociativeReshapeFoldingPatternsOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> ApplyReassociativeReshapeFoldingPatternsOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range ApplyReassociativeReshapeFoldingPatternsOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> ApplyReassociativeReshapeFoldingPatternsOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ApplyReassociativeReshapeFoldingPatternsOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void ApplyReassociativeReshapeFoldingPatternsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState) {
}

void ApplyReassociativeReshapeFoldingPatternsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes) {
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ApplyReassociativeReshapeFoldingPatternsOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult ApplyReassociativeReshapeFoldingPatternsOp::verifyInvariantsImpl() {
  return ::mlir::success();
}

::mlir::LogicalResult ApplyReassociativeReshapeFoldingPatternsOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult ApplyReassociativeReshapeFoldingPatternsOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  return ::mlir::success();
}

void ApplyReassociativeReshapeFoldingPatternsOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::ApplyReassociativeReshapeFoldingPatternsOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::ApplyRewriteTensorOpsAsConstantPatternsOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
ApplyRewriteTensorOpsAsConstantPatternsOpGenericAdaptorBase::ApplyRewriteTensorOpsAsConstantPatternsOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("transform.apply_patterns.tensor.rewrite_as_constant", odsAttrs.getContext());
}

std::pair<unsigned, unsigned> ApplyRewriteTensorOpsAsConstantPatternsOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr ApplyRewriteTensorOpsAsConstantPatternsOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
ApplyRewriteTensorOpsAsConstantPatternsOpAdaptor::ApplyRewriteTensorOpsAsConstantPatternsOpAdaptor(ApplyRewriteTensorOpsAsConstantPatternsOp op) : ApplyRewriteTensorOpsAsConstantPatternsOpAdaptor(op->getOperands(), op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

::mlir::LogicalResult ApplyRewriteTensorOpsAsConstantPatternsOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> ApplyRewriteTensorOpsAsConstantPatternsOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range ApplyRewriteTensorOpsAsConstantPatternsOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> ApplyRewriteTensorOpsAsConstantPatternsOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ApplyRewriteTensorOpsAsConstantPatternsOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void ApplyRewriteTensorOpsAsConstantPatternsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState) {
}

void ApplyRewriteTensorOpsAsConstantPatternsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes) {
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ApplyRewriteTensorOpsAsConstantPatternsOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult ApplyRewriteTensorOpsAsConstantPatternsOp::verifyInvariantsImpl() {
  return ::mlir::success();
}

::mlir::LogicalResult ApplyRewriteTensorOpsAsConstantPatternsOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult ApplyRewriteTensorOpsAsConstantPatternsOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  return ::mlir::success();
}

void ApplyRewriteTensorOpsAsConstantPatternsOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::ApplyRewriteTensorOpsAsConstantPatternsOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::MakeLoopIndependentOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
MakeLoopIndependentOpGenericAdaptorBase::MakeLoopIndependentOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("transform.tensor.make_loop_independent", odsAttrs.getContext());
}

std::pair<unsigned, unsigned> MakeLoopIndependentOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr MakeLoopIndependentOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::IntegerAttr MakeLoopIndependentOpGenericAdaptorBase::getNumLoopsAttr() {
  auto attr = ::llvm::cast<::mlir::IntegerAttr>(getProperties().num_loops);
  return attr;
}

uint64_t MakeLoopIndependentOpGenericAdaptorBase::getNumLoops() {
  auto attr = getNumLoopsAttr();
  return attr.getValue().getZExtValue();
}

} // namespace detail
MakeLoopIndependentOpAdaptor::MakeLoopIndependentOpAdaptor(MakeLoopIndependentOp op) : MakeLoopIndependentOpAdaptor(op->getOperands(), op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

::mlir::LogicalResult MakeLoopIndependentOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_num_loops = getProperties().num_loops; (void)tblgen_num_loops;
  if (!tblgen_num_loops) return emitError(loc, "'transform.tensor.make_loop_independent' op ""requires attribute 'num_loops'");

  if (tblgen_num_loops && !(((::llvm::isa<::mlir::IntegerAttr>(tblgen_num_loops))) && ((::llvm::cast<::mlir::IntegerAttr>(tblgen_num_loops).getType().isSignlessInteger(64)))))
    return emitError(loc, "'transform.tensor.make_loop_independent' op ""attribute 'num_loops' failed to satisfy constraint: 64-bit signless integer attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> MakeLoopIndependentOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range MakeLoopIndependentOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> MakeLoopIndependentOp::getTarget() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface>>(*getODSOperands(0).begin());
}

::mlir::MutableOperandRange MakeLoopIndependentOp::getTargetMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> MakeLoopIndependentOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range MakeLoopIndependentOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> MakeLoopIndependentOp::getTransformed() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface>>(*getODSResults(0).begin());
}

::mlir::LogicalResult MakeLoopIndependentOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::mlir::InFlightDiagnostic *diag) {
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

::mlir::Attribute MakeLoopIndependentOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
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

llvm::hash_code MakeLoopIndependentOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.num_loops.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> MakeLoopIndependentOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "num_loops")
      return prop.num_loops;
  return std::nullopt;
}

void MakeLoopIndependentOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "num_loops") {
       prop.num_loops = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.num_loops)>>(value);
       return;
    }
}

void MakeLoopIndependentOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.num_loops) attrs.append("num_loops", prop.num_loops);
}

::mlir::LogicalResult MakeLoopIndependentOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> getDiag) {
    {
      ::mlir::Attribute attr = attrs.get(getNumLoopsAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_TensorTransformOps1(attr, "num_loops", getDiag)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult MakeLoopIndependentOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readAttribute(prop.num_loops)))
    return ::mlir::failure();
  return ::mlir::success();
}

void MakeLoopIndependentOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;
  writer.writeAttribute(prop.num_loops);
}

::mlir::IntegerAttr MakeLoopIndependentOp::getNumLoopsAttr() {
  return ::llvm::cast<::mlir::IntegerAttr>(getProperties().num_loops);
}

uint64_t MakeLoopIndependentOp::getNumLoops() {
  auto attr = getNumLoopsAttr();
  return attr.getValue().getZExtValue();
}

void MakeLoopIndependentOp::setNumLoopsAttr(::mlir::IntegerAttr attr) {
  (*this)->setAttr(getNumLoopsAttrName(), attr);
}

void MakeLoopIndependentOp::setNumLoops(uint64_t attrValue) {
  (*this)->setAttr(getNumLoopsAttrName(), ::mlir::Builder((*this)->getContext()).getIntegerAttr(::mlir::Builder((*this)->getContext()).getIntegerType(64), attrValue));
}

void MakeLoopIndependentOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type transformed, ::mlir::Value target, ::mlir::IntegerAttr num_loops) {
  odsState.addOperands(target);
  odsState.getOrAddProperties<Properties>().num_loops = num_loops;
  odsState.addTypes(transformed);
}

void MakeLoopIndependentOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, ::mlir::IntegerAttr num_loops) {
  odsState.addOperands(target);
  odsState.getOrAddProperties<Properties>().num_loops = num_loops;
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void MakeLoopIndependentOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type transformed, ::mlir::Value target, uint64_t num_loops) {
  odsState.addOperands(target);
  odsState.getOrAddProperties<Properties>().num_loops = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), num_loops);
  odsState.addTypes(transformed);
}

void MakeLoopIndependentOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, uint64_t num_loops) {
  odsState.addOperands(target);
  odsState.getOrAddProperties<Properties>().num_loops = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), num_loops);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void MakeLoopIndependentOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult MakeLoopIndependentOp::verifyInvariantsImpl() {
  auto tblgen_num_loops = getProperties().num_loops; (void)tblgen_num_loops;
  if (!tblgen_num_loops) return emitOpError("requires attribute 'num_loops'");

  if (::mlir::failed(__mlir_ods_local_attr_constraint_TensorTransformOps1(*this, tblgen_num_loops, "num_loops")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TensorTransformOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TensorTransformOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult MakeLoopIndependentOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult MakeLoopIndependentOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
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

void MakeLoopIndependentOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
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
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::MakeLoopIndependentOp)


#endif  // GET_OP_CLASSES

