/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Op Definitions                                                             *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#ifdef GET_OP_LIST
#undef GET_OP_LIST

::mlir::transform::ApplyForLoopCanonicalizationPatternsOp,
::mlir::transform::GetParentForOp,
::mlir::transform::LoopCoalesceOp,
::mlir::transform::LoopOutlineOp,
::mlir::transform::LoopPeelOp,
::mlir::transform::LoopPipelineOp,
::mlir::transform::LoopPromoteIfOneIterationOp,
::mlir::transform::LoopUnrollOp,
::mlir::transform::TakeAssumedBranchOp
#endif  // GET_OP_LIST

#ifdef GET_OP_CLASSES
#undef GET_OP_CLASSES


//===----------------------------------------------------------------------===//
// Local Utility Method Definitions
//===----------------------------------------------------------------------===//

namespace mlir {
namespace transform {

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_SCFTransformOps0(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((::llvm::isa<::mlir::transform::TransformHandleTypeInterface>(type)))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be TransformHandleTypeInterface instance, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_SCFTransformOps1(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!(((::llvm::isa<::mlir::transform::OperationType>(type))) && ((::llvm::cast<::mlir::transform::OperationType>(type).getOperationName() == "scf.for")))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be Transform IR handle to scf.for operations, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_SCFTransformOps0(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> getDiag) {
  if (attr && !((((::llvm::isa<::mlir::IntegerAttr>(attr))) && ((::llvm::cast<::mlir::IntegerAttr>(attr).getType().isSignlessInteger(64)))) && ((::llvm::cast<::mlir::IntegerAttr>(attr).getValue().isStrictlyPositive()))))
    return getDiag() << "attribute '" << attrName
        << "' failed to satisfy constraint: 64-bit signless integer attribute whose value is positive";
  return ::mlir::success();
}
static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_SCFTransformOps0(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_SCFTransformOps0(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_SCFTransformOps1(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> getDiag) {
  if (attr && !((::llvm::isa<::mlir::BoolAttr>(attr))))
    return getDiag() << "attribute '" << attrName
        << "' failed to satisfy constraint: bool attribute";
  return ::mlir::success();
}
static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_SCFTransformOps1(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_SCFTransformOps1(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_SCFTransformOps2(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> getDiag) {
  if (attr && !((::llvm::isa<::mlir::StringAttr>(attr))))
    return getDiag() << "attribute '" << attrName
        << "' failed to satisfy constraint: string attribute";
  return ::mlir::success();
}
static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_SCFTransformOps2(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_SCFTransformOps2(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_SCFTransformOps3(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> getDiag) {
  if (attr && !(((::llvm::isa<::mlir::IntegerAttr>(attr))) && ((::llvm::cast<::mlir::IntegerAttr>(attr).getType().isSignlessInteger(64)))))
    return getDiag() << "attribute '" << attrName
        << "' failed to satisfy constraint: 64-bit signless integer attribute";
  return ::mlir::success();
}
static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_SCFTransformOps3(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_SCFTransformOps3(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_SCFTransformOps4(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> getDiag) {
  if (attr && !((::llvm::isa<::mlir::UnitAttr>(attr))))
    return getDiag() << "attribute '" << attrName
        << "' failed to satisfy constraint: unit attribute";
  return ::mlir::success();
}
static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_SCFTransformOps4(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_SCFTransformOps4(attr, attrName, [op]() {
    return op->emitOpError();
  });
}
} // namespace transform
} // namespace mlir
namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::ApplyForLoopCanonicalizationPatternsOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
ApplyForLoopCanonicalizationPatternsOpGenericAdaptorBase::ApplyForLoopCanonicalizationPatternsOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("transform.apply_patterns.scf.for_loop_canonicalization", odsAttrs.getContext());
}

std::pair<unsigned, unsigned> ApplyForLoopCanonicalizationPatternsOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr ApplyForLoopCanonicalizationPatternsOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
ApplyForLoopCanonicalizationPatternsOpAdaptor::ApplyForLoopCanonicalizationPatternsOpAdaptor(ApplyForLoopCanonicalizationPatternsOp op) : ApplyForLoopCanonicalizationPatternsOpAdaptor(op->getOperands(), op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

::mlir::LogicalResult ApplyForLoopCanonicalizationPatternsOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> ApplyForLoopCanonicalizationPatternsOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range ApplyForLoopCanonicalizationPatternsOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> ApplyForLoopCanonicalizationPatternsOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ApplyForLoopCanonicalizationPatternsOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void ApplyForLoopCanonicalizationPatternsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState) {
}

void ApplyForLoopCanonicalizationPatternsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes) {
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ApplyForLoopCanonicalizationPatternsOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult ApplyForLoopCanonicalizationPatternsOp::verifyInvariantsImpl() {
  return ::mlir::success();
}

::mlir::LogicalResult ApplyForLoopCanonicalizationPatternsOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult ApplyForLoopCanonicalizationPatternsOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  return ::mlir::success();
}

void ApplyForLoopCanonicalizationPatternsOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::ApplyForLoopCanonicalizationPatternsOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::GetParentForOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
GetParentForOpGenericAdaptorBase::GetParentForOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("transform.loop.get_parent_for", odsAttrs.getContext());
}

std::pair<unsigned, unsigned> GetParentForOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr GetParentForOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::IntegerAttr GetParentForOpGenericAdaptorBase::getNumLoopsAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::IntegerAttr>(getProperties().num_loops);
  return attr;
}

uint64_t GetParentForOpGenericAdaptorBase::getNumLoops() {
  auto attr = getNumLoopsAttr();
  return attr.getValue().getZExtValue();
}

::mlir::BoolAttr GetParentForOpGenericAdaptorBase::getAffineAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::BoolAttr>(getProperties().affine);
  return attr;
}

bool GetParentForOpGenericAdaptorBase::getAffine() {
  auto attr = getAffineAttr();
  return attr.getValue();
}

} // namespace detail
GetParentForOpAdaptor::GetParentForOpAdaptor(GetParentForOp op) : GetParentForOpAdaptor(op->getOperands(), op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

::mlir::LogicalResult GetParentForOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_affine = getProperties().affine; (void)tblgen_affine;
  auto tblgen_num_loops = getProperties().num_loops; (void)tblgen_num_loops;

  if (tblgen_num_loops && !((((::llvm::isa<::mlir::IntegerAttr>(tblgen_num_loops))) && ((::llvm::cast<::mlir::IntegerAttr>(tblgen_num_loops).getType().isSignlessInteger(64)))) && ((::llvm::cast<::mlir::IntegerAttr>(tblgen_num_loops).getValue().isStrictlyPositive()))))
    return emitError(loc, "'transform.loop.get_parent_for' op ""attribute 'num_loops' failed to satisfy constraint: 64-bit signless integer attribute whose value is positive");

  if (tblgen_affine && !((::llvm::isa<::mlir::BoolAttr>(tblgen_affine))))
    return emitError(loc, "'transform.loop.get_parent_for' op ""attribute 'affine' failed to satisfy constraint: bool attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> GetParentForOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range GetParentForOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> GetParentForOp::getTarget() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface>>(*getODSOperands(0).begin());
}

::mlir::MutableOperandRange GetParentForOp::getTargetMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> GetParentForOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range GetParentForOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> GetParentForOp::getParent() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface>>(*getODSResults(0).begin());
}

::mlir::LogicalResult GetParentForOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::mlir::InFlightDiagnostic *diag) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    if (diag)
      *diag << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.affine;
       auto attr = dict.get("affine");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        if (diag)
          *diag << "expected key entry for affine in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        if (diag)
          *diag << "Invalid attribute `affine` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.num_loops;
       auto attr = dict.get("num_loops");
    if (attr || /*isRequired=*/false) {
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

::mlir::Attribute GetParentForOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.affine;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("affine",
                                       propStorage));
    }

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

llvm::hash_code GetParentForOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.affine.getAsOpaquePointer()), 
    llvm::hash_value(prop.num_loops.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> GetParentForOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "affine")
      return prop.affine;

    if (name == "num_loops")
      return prop.num_loops;
  return std::nullopt;
}

void GetParentForOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "affine") {
       prop.affine = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.affine)>>(value);
       return;
    }

    if (name == "num_loops") {
       prop.num_loops = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.num_loops)>>(value);
       return;
    }
}

void GetParentForOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.affine) attrs.append("affine", prop.affine);

    if (prop.num_loops) attrs.append("num_loops", prop.num_loops);
}

::mlir::LogicalResult GetParentForOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> getDiag) {
    {
      ::mlir::Attribute attr = attrs.get(getAffineAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_SCFTransformOps1(attr, "affine", getDiag)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getNumLoopsAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_SCFTransformOps0(attr, "num_loops", getDiag)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult GetParentForOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.affine)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.num_loops)))
    return ::mlir::failure();
  return ::mlir::success();
}

void GetParentForOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.affine);

  writer.writeOptionalAttribute(prop.num_loops);
}

::mlir::IntegerAttr GetParentForOp::getNumLoopsAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::IntegerAttr>(getProperties().num_loops);
}

uint64_t GetParentForOp::getNumLoops() {
  auto attr = getNumLoopsAttr();
  return attr.getValue().getZExtValue();
}

::mlir::BoolAttr GetParentForOp::getAffineAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::BoolAttr>(getProperties().affine);
}

bool GetParentForOp::getAffine() {
  auto attr = getAffineAttr();
  return attr.getValue();
}

void GetParentForOp::setNumLoopsAttr(::mlir::IntegerAttr attr) {
  (*this)->setAttr(getNumLoopsAttrName(), attr);
}

void GetParentForOp::setNumLoops(uint64_t attrValue) {
  (*this)->setAttr(getNumLoopsAttrName(), ::mlir::Builder((*this)->getContext()).getIntegerAttr(::mlir::Builder((*this)->getContext()).getIntegerType(64), attrValue));
}

void GetParentForOp::setAffineAttr(::mlir::BoolAttr attr) {
  (*this)->setAttr(getAffineAttrName(), attr);
}

void GetParentForOp::setAffine(bool attrValue) {
  (*this)->setAttr(getAffineAttrName(), ::mlir::Builder((*this)->getContext()).getBoolAttr(attrValue));
}

void GetParentForOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type parent, ::mlir::Value target, ::mlir::IntegerAttr num_loops, ::mlir::BoolAttr affine) {
  odsState.addOperands(target);
  if (num_loops) {
    odsState.getOrAddProperties<Properties>().num_loops = num_loops;
  }
  if (affine) {
    odsState.getOrAddProperties<Properties>().affine = affine;
  }
  odsState.addTypes(parent);
}

void GetParentForOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, ::mlir::IntegerAttr num_loops, ::mlir::BoolAttr affine) {
  odsState.addOperands(target);
  if (num_loops) {
    odsState.getOrAddProperties<Properties>().num_loops = num_loops;
  }
  if (affine) {
    odsState.getOrAddProperties<Properties>().affine = affine;
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void GetParentForOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type parent, ::mlir::Value target, uint64_t num_loops, bool affine) {
  odsState.addOperands(target);
  odsState.getOrAddProperties<Properties>().num_loops = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), num_loops);
  odsState.getOrAddProperties<Properties>().affine = odsBuilder.getBoolAttr(affine);
  odsState.addTypes(parent);
}

void GetParentForOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, uint64_t num_loops, bool affine) {
  odsState.addOperands(target);
  odsState.getOrAddProperties<Properties>().num_loops = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), num_loops);
  odsState.getOrAddProperties<Properties>().affine = odsBuilder.getBoolAttr(affine);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void GetParentForOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void GetParentForOp::populateDefaultProperties(::mlir::OperationName opName, Properties &properties) {
  ::mlir::Builder odsBuilder(opName.getContext());
  if (!properties.num_loops)
    properties.num_loops = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), 1);
  if (!properties.affine)
    properties.affine = odsBuilder.getBoolAttr(false);
}

::mlir::LogicalResult GetParentForOp::verifyInvariantsImpl() {
  auto tblgen_affine = getProperties().affine; (void)tblgen_affine;
  auto tblgen_num_loops = getProperties().num_loops; (void)tblgen_num_loops;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_SCFTransformOps0(*this, tblgen_num_loops, "num_loops")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_SCFTransformOps1(*this, tblgen_affine, "affine")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_SCFTransformOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_SCFTransformOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult GetParentForOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult GetParentForOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
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

void GetParentForOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getTarget();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getNumLoopsAttr();
     if(attr && (attr == odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), 1)))
       elidedAttrs.push_back("num_loops");
  }
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getAffineAttr();
     if(attr && (attr == odsBuilder.getBoolAttr(false)))
       elidedAttrs.push_back("affine");
  }
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(getOperation()->getOperandTypes(), getOperation()->getResultTypes());
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::GetParentForOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::LoopCoalesceOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
LoopCoalesceOpGenericAdaptorBase::LoopCoalesceOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("transform.loop.coalesce", odsAttrs.getContext());
}

std::pair<unsigned, unsigned> LoopCoalesceOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr LoopCoalesceOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
LoopCoalesceOpAdaptor::LoopCoalesceOpAdaptor(LoopCoalesceOp op) : LoopCoalesceOpAdaptor(op->getOperands(), op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

::mlir::LogicalResult LoopCoalesceOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> LoopCoalesceOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range LoopCoalesceOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> LoopCoalesceOp::getTarget() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface>>(*getODSOperands(0).begin());
}

::mlir::MutableOperandRange LoopCoalesceOp::getTargetMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> LoopCoalesceOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range LoopCoalesceOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> LoopCoalesceOp::getTransformed() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface>>(*getODSResults(0).begin());
}

void LoopCoalesceOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type transformed, ::mlir::Value target) {
  odsState.addOperands(target);
  odsState.addTypes(transformed);
}

void LoopCoalesceOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target) {
  odsState.addOperands(target);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void LoopCoalesceOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult LoopCoalesceOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_SCFTransformOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_SCFTransformOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult LoopCoalesceOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult LoopCoalesceOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
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

void LoopCoalesceOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
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
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::LoopCoalesceOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::LoopOutlineOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
LoopOutlineOpGenericAdaptorBase::LoopOutlineOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("transform.loop.outline", odsAttrs.getContext());
}

std::pair<unsigned, unsigned> LoopOutlineOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr LoopOutlineOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::StringAttr LoopOutlineOpGenericAdaptorBase::getFuncNameAttr() {
  auto attr = ::llvm::cast<::mlir::StringAttr>(getProperties().func_name);
  return attr;
}

::llvm::StringRef LoopOutlineOpGenericAdaptorBase::getFuncName() {
  auto attr = getFuncNameAttr();
  return attr.getValue();
}

} // namespace detail
LoopOutlineOpAdaptor::LoopOutlineOpAdaptor(LoopOutlineOp op) : LoopOutlineOpAdaptor(op->getOperands(), op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

::mlir::LogicalResult LoopOutlineOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_func_name = getProperties().func_name; (void)tblgen_func_name;
  if (!tblgen_func_name) return emitError(loc, "'transform.loop.outline' op ""requires attribute 'func_name'");

  if (tblgen_func_name && !((::llvm::isa<::mlir::StringAttr>(tblgen_func_name))))
    return emitError(loc, "'transform.loop.outline' op ""attribute 'func_name' failed to satisfy constraint: string attribute");
  return ::mlir::success();
}

void LoopOutlineOp::getAsmResultNames(::mlir::OpAsmSetValueNameFn setNameFn) {
  auto resultGroup0 = getODSResults(0);
  if (!resultGroup0.empty())
    setNameFn(*resultGroup0.begin(), "function");
  auto resultGroup1 = getODSResults(1);
  if (!resultGroup1.empty())
    setNameFn(*resultGroup1.begin(), "call");
}

std::pair<unsigned, unsigned> LoopOutlineOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range LoopOutlineOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> LoopOutlineOp::getTarget() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface>>(*getODSOperands(0).begin());
}

::mlir::MutableOperandRange LoopOutlineOp::getTargetMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> LoopOutlineOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range LoopOutlineOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> LoopOutlineOp::getFunction() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface>>(*getODSResults(0).begin());
}

::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> LoopOutlineOp::getCall() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface>>(*getODSResults(1).begin());
}

::mlir::LogicalResult LoopOutlineOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::mlir::InFlightDiagnostic *diag) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    if (diag)
      *diag << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.func_name;
       auto attr = dict.get("func_name");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        if (diag)
          *diag << "expected key entry for func_name in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        if (diag)
          *diag << "Invalid attribute `func_name` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute LoopOutlineOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.func_name;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("func_name",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code LoopOutlineOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.func_name.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> LoopOutlineOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "func_name")
      return prop.func_name;
  return std::nullopt;
}

void LoopOutlineOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "func_name") {
       prop.func_name = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.func_name)>>(value);
       return;
    }
}

void LoopOutlineOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.func_name) attrs.append("func_name", prop.func_name);
}

::mlir::LogicalResult LoopOutlineOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> getDiag) {
    {
      ::mlir::Attribute attr = attrs.get(getFuncNameAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_SCFTransformOps2(attr, "func_name", getDiag)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult LoopOutlineOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readAttribute(prop.func_name)))
    return ::mlir::failure();
  return ::mlir::success();
}

void LoopOutlineOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;
  writer.writeAttribute(prop.func_name);
}

::mlir::StringAttr LoopOutlineOp::getFuncNameAttr() {
  return ::llvm::cast<::mlir::StringAttr>(getProperties().func_name);
}

::llvm::StringRef LoopOutlineOp::getFuncName() {
  auto attr = getFuncNameAttr();
  return attr.getValue();
}

void LoopOutlineOp::setFuncNameAttr(::mlir::StringAttr attr) {
  (*this)->setAttr(getFuncNameAttrName(), attr);
}

void LoopOutlineOp::setFuncName(::llvm::StringRef attrValue) {
  (*this)->setAttr(getFuncNameAttrName(), ::mlir::Builder((*this)->getContext()).getStringAttr(attrValue));
}

void LoopOutlineOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type function, ::mlir::Type call, ::mlir::Value target, ::mlir::StringAttr func_name) {
  odsState.addOperands(target);
  odsState.getOrAddProperties<Properties>().func_name = func_name;
  odsState.addTypes(function);
  odsState.addTypes(call);
}

void LoopOutlineOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, ::mlir::StringAttr func_name) {
  odsState.addOperands(target);
  odsState.getOrAddProperties<Properties>().func_name = func_name;
  assert(resultTypes.size() == 2u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void LoopOutlineOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type function, ::mlir::Type call, ::mlir::Value target, ::llvm::StringRef func_name) {
  odsState.addOperands(target);
  odsState.getOrAddProperties<Properties>().func_name = odsBuilder.getStringAttr(func_name);
  odsState.addTypes(function);
  odsState.addTypes(call);
}

void LoopOutlineOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, ::llvm::StringRef func_name) {
  odsState.addOperands(target);
  odsState.getOrAddProperties<Properties>().func_name = odsBuilder.getStringAttr(func_name);
  assert(resultTypes.size() == 2u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void LoopOutlineOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 2u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult LoopOutlineOp::verifyInvariantsImpl() {
  auto tblgen_func_name = getProperties().func_name; (void)tblgen_func_name;
  if (!tblgen_func_name) return emitOpError("requires attribute 'func_name'");

  if (::mlir::failed(__mlir_ods_local_attr_constraint_SCFTransformOps2(*this, tblgen_func_name, "func_name")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_SCFTransformOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_SCFTransformOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSResults(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_SCFTransformOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult LoopOutlineOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult LoopOutlineOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
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

void LoopOutlineOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
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
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::LoopOutlineOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::LoopPeelOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
LoopPeelOpGenericAdaptorBase::LoopPeelOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("transform.loop.peel", odsAttrs.getContext());
}

std::pair<unsigned, unsigned> LoopPeelOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr LoopPeelOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::BoolAttr LoopPeelOpGenericAdaptorBase::getFailIfAlreadyDivisibleAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::BoolAttr>(getProperties().fail_if_already_divisible);
  return attr;
}

bool LoopPeelOpGenericAdaptorBase::getFailIfAlreadyDivisible() {
  auto attr = getFailIfAlreadyDivisibleAttr();
  return attr.getValue();
}

} // namespace detail
LoopPeelOpAdaptor::LoopPeelOpAdaptor(LoopPeelOp op) : LoopPeelOpAdaptor(op->getOperands(), op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

::mlir::LogicalResult LoopPeelOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_fail_if_already_divisible = getProperties().fail_if_already_divisible; (void)tblgen_fail_if_already_divisible;

  if (tblgen_fail_if_already_divisible && !((::llvm::isa<::mlir::BoolAttr>(tblgen_fail_if_already_divisible))))
    return emitError(loc, "'transform.loop.peel' op ""attribute 'fail_if_already_divisible' failed to satisfy constraint: bool attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> LoopPeelOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range LoopPeelOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::transform::OperationType> LoopPeelOp::getTarget() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::transform::OperationType>>(*getODSOperands(0).begin());
}

::mlir::MutableOperandRange LoopPeelOp::getTargetMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> LoopPeelOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range LoopPeelOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> LoopPeelOp::getTransformed() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface>>(*getODSResults(0).begin());
}

::mlir::LogicalResult LoopPeelOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::mlir::InFlightDiagnostic *diag) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    if (diag)
      *diag << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.fail_if_already_divisible;
       auto attr = dict.get("fail_if_already_divisible");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        if (diag)
          *diag << "expected key entry for fail_if_already_divisible in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        if (diag)
          *diag << "Invalid attribute `fail_if_already_divisible` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute LoopPeelOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.fail_if_already_divisible;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("fail_if_already_divisible",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code LoopPeelOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.fail_if_already_divisible.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> LoopPeelOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "fail_if_already_divisible")
      return prop.fail_if_already_divisible;
  return std::nullopt;
}

void LoopPeelOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "fail_if_already_divisible") {
       prop.fail_if_already_divisible = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.fail_if_already_divisible)>>(value);
       return;
    }
}

void LoopPeelOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.fail_if_already_divisible) attrs.append("fail_if_already_divisible", prop.fail_if_already_divisible);
}

::mlir::LogicalResult LoopPeelOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> getDiag) {
    {
      ::mlir::Attribute attr = attrs.get(getFailIfAlreadyDivisibleAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_SCFTransformOps1(attr, "fail_if_already_divisible", getDiag)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult LoopPeelOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.fail_if_already_divisible)))
    return ::mlir::failure();
  return ::mlir::success();
}

void LoopPeelOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.fail_if_already_divisible);
}

::mlir::BoolAttr LoopPeelOp::getFailIfAlreadyDivisibleAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::BoolAttr>(getProperties().fail_if_already_divisible);
}

bool LoopPeelOp::getFailIfAlreadyDivisible() {
  auto attr = getFailIfAlreadyDivisibleAttr();
  return attr.getValue();
}

void LoopPeelOp::setFailIfAlreadyDivisibleAttr(::mlir::BoolAttr attr) {
  (*this)->setAttr(getFailIfAlreadyDivisibleAttrName(), attr);
}

void LoopPeelOp::setFailIfAlreadyDivisible(bool attrValue) {
  (*this)->setAttr(getFailIfAlreadyDivisibleAttrName(), ::mlir::Builder((*this)->getContext()).getBoolAttr(attrValue));
}

void LoopPeelOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type transformed, ::mlir::Value target, ::mlir::BoolAttr fail_if_already_divisible) {
  odsState.addOperands(target);
  if (fail_if_already_divisible) {
    odsState.getOrAddProperties<Properties>().fail_if_already_divisible = fail_if_already_divisible;
  }
  odsState.addTypes(transformed);
}

void LoopPeelOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, ::mlir::BoolAttr fail_if_already_divisible) {
  odsState.addOperands(target);
  if (fail_if_already_divisible) {
    odsState.getOrAddProperties<Properties>().fail_if_already_divisible = fail_if_already_divisible;
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void LoopPeelOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type transformed, ::mlir::Value target, bool fail_if_already_divisible) {
  odsState.addOperands(target);
  odsState.getOrAddProperties<Properties>().fail_if_already_divisible = odsBuilder.getBoolAttr(fail_if_already_divisible);
  odsState.addTypes(transformed);
}

void LoopPeelOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, bool fail_if_already_divisible) {
  odsState.addOperands(target);
  odsState.getOrAddProperties<Properties>().fail_if_already_divisible = odsBuilder.getBoolAttr(fail_if_already_divisible);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void LoopPeelOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void LoopPeelOp::populateDefaultProperties(::mlir::OperationName opName, Properties &properties) {
  ::mlir::Builder odsBuilder(opName.getContext());
  if (!properties.fail_if_already_divisible)
    properties.fail_if_already_divisible = odsBuilder.getBoolAttr(false);
}

::mlir::LogicalResult LoopPeelOp::verifyInvariantsImpl() {
  auto tblgen_fail_if_already_divisible = getProperties().fail_if_already_divisible; (void)tblgen_fail_if_already_divisible;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_SCFTransformOps1(*this, tblgen_fail_if_already_divisible, "fail_if_already_divisible")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_SCFTransformOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_SCFTransformOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult LoopPeelOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult LoopPeelOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
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

void LoopPeelOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getTarget();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getFailIfAlreadyDivisibleAttr();
     if(attr && (attr == odsBuilder.getBoolAttr(false)))
       elidedAttrs.push_back("fail_if_already_divisible");
  }
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(getOperation()->getOperandTypes(), getOperation()->getResultTypes());
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::LoopPeelOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::LoopPipelineOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
LoopPipelineOpGenericAdaptorBase::LoopPipelineOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("transform.loop.pipeline", odsAttrs.getContext());
}

std::pair<unsigned, unsigned> LoopPipelineOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr LoopPipelineOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::IntegerAttr LoopPipelineOpGenericAdaptorBase::getIterationIntervalAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::IntegerAttr>(getProperties().iteration_interval);
  return attr;
}

uint64_t LoopPipelineOpGenericAdaptorBase::getIterationInterval() {
  auto attr = getIterationIntervalAttr();
  return attr.getValue().getZExtValue();
}

::mlir::IntegerAttr LoopPipelineOpGenericAdaptorBase::getReadLatencyAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::IntegerAttr>(getProperties().read_latency);
  return attr;
}

uint64_t LoopPipelineOpGenericAdaptorBase::getReadLatency() {
  auto attr = getReadLatencyAttr();
  return attr.getValue().getZExtValue();
}

} // namespace detail
LoopPipelineOpAdaptor::LoopPipelineOpAdaptor(LoopPipelineOp op) : LoopPipelineOpAdaptor(op->getOperands(), op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

::mlir::LogicalResult LoopPipelineOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_iteration_interval = getProperties().iteration_interval; (void)tblgen_iteration_interval;
  auto tblgen_read_latency = getProperties().read_latency; (void)tblgen_read_latency;

  if (tblgen_iteration_interval && !(((::llvm::isa<::mlir::IntegerAttr>(tblgen_iteration_interval))) && ((::llvm::cast<::mlir::IntegerAttr>(tblgen_iteration_interval).getType().isSignlessInteger(64)))))
    return emitError(loc, "'transform.loop.pipeline' op ""attribute 'iteration_interval' failed to satisfy constraint: 64-bit signless integer attribute");

  if (tblgen_read_latency && !(((::llvm::isa<::mlir::IntegerAttr>(tblgen_read_latency))) && ((::llvm::cast<::mlir::IntegerAttr>(tblgen_read_latency).getType().isSignlessInteger(64)))))
    return emitError(loc, "'transform.loop.pipeline' op ""attribute 'read_latency' failed to satisfy constraint: 64-bit signless integer attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> LoopPipelineOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range LoopPipelineOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::transform::OperationType> LoopPipelineOp::getTarget() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::transform::OperationType>>(*getODSOperands(0).begin());
}

::mlir::MutableOperandRange LoopPipelineOp::getTargetMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> LoopPipelineOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range LoopPipelineOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> LoopPipelineOp::getTransformed() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface>>(*getODSResults(0).begin());
}

::mlir::LogicalResult LoopPipelineOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::mlir::InFlightDiagnostic *diag) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    if (diag)
      *diag << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.iteration_interval;
       auto attr = dict.get("iteration_interval");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        if (diag)
          *diag << "expected key entry for iteration_interval in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        if (diag)
          *diag << "Invalid attribute `iteration_interval` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.read_latency;
       auto attr = dict.get("read_latency");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        if (diag)
          *diag << "expected key entry for read_latency in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        if (diag)
          *diag << "Invalid attribute `read_latency` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute LoopPipelineOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.iteration_interval;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("iteration_interval",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.read_latency;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("read_latency",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code LoopPipelineOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.iteration_interval.getAsOpaquePointer()), 
    llvm::hash_value(prop.read_latency.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> LoopPipelineOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "iteration_interval")
      return prop.iteration_interval;

    if (name == "read_latency")
      return prop.read_latency;
  return std::nullopt;
}

void LoopPipelineOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "iteration_interval") {
       prop.iteration_interval = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.iteration_interval)>>(value);
       return;
    }

    if (name == "read_latency") {
       prop.read_latency = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.read_latency)>>(value);
       return;
    }
}

void LoopPipelineOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.iteration_interval) attrs.append("iteration_interval", prop.iteration_interval);

    if (prop.read_latency) attrs.append("read_latency", prop.read_latency);
}

::mlir::LogicalResult LoopPipelineOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> getDiag) {
    {
      ::mlir::Attribute attr = attrs.get(getIterationIntervalAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_SCFTransformOps3(attr, "iteration_interval", getDiag)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getReadLatencyAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_SCFTransformOps3(attr, "read_latency", getDiag)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult LoopPipelineOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.iteration_interval)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.read_latency)))
    return ::mlir::failure();
  return ::mlir::success();
}

void LoopPipelineOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.iteration_interval);

  writer.writeOptionalAttribute(prop.read_latency);
}

::mlir::IntegerAttr LoopPipelineOp::getIterationIntervalAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::IntegerAttr>(getProperties().iteration_interval);
}

uint64_t LoopPipelineOp::getIterationInterval() {
  auto attr = getIterationIntervalAttr();
  return attr.getValue().getZExtValue();
}

::mlir::IntegerAttr LoopPipelineOp::getReadLatencyAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::IntegerAttr>(getProperties().read_latency);
}

uint64_t LoopPipelineOp::getReadLatency() {
  auto attr = getReadLatencyAttr();
  return attr.getValue().getZExtValue();
}

void LoopPipelineOp::setIterationIntervalAttr(::mlir::IntegerAttr attr) {
  (*this)->setAttr(getIterationIntervalAttrName(), attr);
}

void LoopPipelineOp::setIterationInterval(uint64_t attrValue) {
  (*this)->setAttr(getIterationIntervalAttrName(), ::mlir::Builder((*this)->getContext()).getIntegerAttr(::mlir::Builder((*this)->getContext()).getIntegerType(64), attrValue));
}

void LoopPipelineOp::setReadLatencyAttr(::mlir::IntegerAttr attr) {
  (*this)->setAttr(getReadLatencyAttrName(), attr);
}

void LoopPipelineOp::setReadLatency(uint64_t attrValue) {
  (*this)->setAttr(getReadLatencyAttrName(), ::mlir::Builder((*this)->getContext()).getIntegerAttr(::mlir::Builder((*this)->getContext()).getIntegerType(64), attrValue));
}

void LoopPipelineOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type transformed, ::mlir::Value target, ::mlir::IntegerAttr iteration_interval, ::mlir::IntegerAttr read_latency) {
  odsState.addOperands(target);
  if (iteration_interval) {
    odsState.getOrAddProperties<Properties>().iteration_interval = iteration_interval;
  }
  if (read_latency) {
    odsState.getOrAddProperties<Properties>().read_latency = read_latency;
  }
  odsState.addTypes(transformed);
}

void LoopPipelineOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, ::mlir::IntegerAttr iteration_interval, ::mlir::IntegerAttr read_latency) {
  odsState.addOperands(target);
  if (iteration_interval) {
    odsState.getOrAddProperties<Properties>().iteration_interval = iteration_interval;
  }
  if (read_latency) {
    odsState.getOrAddProperties<Properties>().read_latency = read_latency;
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void LoopPipelineOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type transformed, ::mlir::Value target, uint64_t iteration_interval, uint64_t read_latency) {
  odsState.addOperands(target);
  odsState.getOrAddProperties<Properties>().iteration_interval = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), iteration_interval);
  odsState.getOrAddProperties<Properties>().read_latency = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), read_latency);
  odsState.addTypes(transformed);
}

void LoopPipelineOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, uint64_t iteration_interval, uint64_t read_latency) {
  odsState.addOperands(target);
  odsState.getOrAddProperties<Properties>().iteration_interval = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), iteration_interval);
  odsState.getOrAddProperties<Properties>().read_latency = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), read_latency);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void LoopPipelineOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void LoopPipelineOp::populateDefaultProperties(::mlir::OperationName opName, Properties &properties) {
  ::mlir::Builder odsBuilder(opName.getContext());
  if (!properties.iteration_interval)
    properties.iteration_interval = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), 1);
  if (!properties.read_latency)
    properties.read_latency = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), 10);
}

::mlir::LogicalResult LoopPipelineOp::verifyInvariantsImpl() {
  auto tblgen_iteration_interval = getProperties().iteration_interval; (void)tblgen_iteration_interval;
  auto tblgen_read_latency = getProperties().read_latency; (void)tblgen_read_latency;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_SCFTransformOps3(*this, tblgen_iteration_interval, "iteration_interval")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_SCFTransformOps3(*this, tblgen_read_latency, "read_latency")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_SCFTransformOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_SCFTransformOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult LoopPipelineOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult LoopPipelineOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
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

void LoopPipelineOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getTarget();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getIterationIntervalAttr();
     if(attr && (attr == odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), 1)))
       elidedAttrs.push_back("iteration_interval");
  }
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getReadLatencyAttr();
     if(attr && (attr == odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), 10)))
       elidedAttrs.push_back("read_latency");
  }
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(getOperation()->getOperandTypes(), getOperation()->getResultTypes());
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::LoopPipelineOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::LoopPromoteIfOneIterationOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
LoopPromoteIfOneIterationOpGenericAdaptorBase::LoopPromoteIfOneIterationOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("transform.loop.promote_if_one_iteration", odsAttrs.getContext());
}

std::pair<unsigned, unsigned> LoopPromoteIfOneIterationOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr LoopPromoteIfOneIterationOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
LoopPromoteIfOneIterationOpAdaptor::LoopPromoteIfOneIterationOpAdaptor(LoopPromoteIfOneIterationOp op) : LoopPromoteIfOneIterationOpAdaptor(op->getOperands(), op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

::mlir::LogicalResult LoopPromoteIfOneIterationOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> LoopPromoteIfOneIterationOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range LoopPromoteIfOneIterationOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> LoopPromoteIfOneIterationOp::getTarget() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface>>(*getODSOperands(0).begin());
}

::mlir::MutableOperandRange LoopPromoteIfOneIterationOp::getTargetMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> LoopPromoteIfOneIterationOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range LoopPromoteIfOneIterationOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void LoopPromoteIfOneIterationOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value target) {
  odsState.addOperands(target);
}

void LoopPromoteIfOneIterationOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target) {
  odsState.addOperands(target);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void LoopPromoteIfOneIterationOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult LoopPromoteIfOneIterationOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_SCFTransformOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult LoopPromoteIfOneIterationOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult LoopPromoteIfOneIterationOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
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

void LoopPromoteIfOneIterationOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
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
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::LoopPromoteIfOneIterationOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::LoopUnrollOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
LoopUnrollOpGenericAdaptorBase::LoopUnrollOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("transform.loop.unroll", odsAttrs.getContext());
}

std::pair<unsigned, unsigned> LoopUnrollOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr LoopUnrollOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::IntegerAttr LoopUnrollOpGenericAdaptorBase::getFactorAttr() {
  auto attr = ::llvm::cast<::mlir::IntegerAttr>(getProperties().factor);
  return attr;
}

uint64_t LoopUnrollOpGenericAdaptorBase::getFactor() {
  auto attr = getFactorAttr();
  return attr.getValue().getZExtValue();
}

} // namespace detail
LoopUnrollOpAdaptor::LoopUnrollOpAdaptor(LoopUnrollOp op) : LoopUnrollOpAdaptor(op->getOperands(), op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

::mlir::LogicalResult LoopUnrollOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_factor = getProperties().factor; (void)tblgen_factor;
  if (!tblgen_factor) return emitError(loc, "'transform.loop.unroll' op ""requires attribute 'factor'");

  if (tblgen_factor && !((((::llvm::isa<::mlir::IntegerAttr>(tblgen_factor))) && ((::llvm::cast<::mlir::IntegerAttr>(tblgen_factor).getType().isSignlessInteger(64)))) && ((::llvm::cast<::mlir::IntegerAttr>(tblgen_factor).getValue().isStrictlyPositive()))))
    return emitError(loc, "'transform.loop.unroll' op ""attribute 'factor' failed to satisfy constraint: 64-bit signless integer attribute whose value is positive");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> LoopUnrollOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range LoopUnrollOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> LoopUnrollOp::getTarget() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface>>(*getODSOperands(0).begin());
}

::mlir::MutableOperandRange LoopUnrollOp::getTargetMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> LoopUnrollOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range LoopUnrollOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::LogicalResult LoopUnrollOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::mlir::InFlightDiagnostic *diag) {
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
  return ::mlir::success();
}

::mlir::Attribute LoopUnrollOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.factor;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("factor",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code LoopUnrollOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.factor.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> LoopUnrollOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "factor")
      return prop.factor;
  return std::nullopt;
}

void LoopUnrollOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "factor") {
       prop.factor = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.factor)>>(value);
       return;
    }
}

void LoopUnrollOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.factor) attrs.append("factor", prop.factor);
}

::mlir::LogicalResult LoopUnrollOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> getDiag) {
    {
      ::mlir::Attribute attr = attrs.get(getFactorAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_SCFTransformOps0(attr, "factor", getDiag)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult LoopUnrollOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readAttribute(prop.factor)))
    return ::mlir::failure();
  return ::mlir::success();
}

void LoopUnrollOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;
  writer.writeAttribute(prop.factor);
}

::mlir::IntegerAttr LoopUnrollOp::getFactorAttr() {
  return ::llvm::cast<::mlir::IntegerAttr>(getProperties().factor);
}

uint64_t LoopUnrollOp::getFactor() {
  auto attr = getFactorAttr();
  return attr.getValue().getZExtValue();
}

void LoopUnrollOp::setFactorAttr(::mlir::IntegerAttr attr) {
  (*this)->setAttr(getFactorAttrName(), attr);
}

void LoopUnrollOp::setFactor(uint64_t attrValue) {
  (*this)->setAttr(getFactorAttrName(), ::mlir::Builder((*this)->getContext()).getIntegerAttr(::mlir::Builder((*this)->getContext()).getIntegerType(64), attrValue));
}

void LoopUnrollOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value target, ::mlir::IntegerAttr factor) {
  odsState.addOperands(target);
  odsState.getOrAddProperties<Properties>().factor = factor;
}

void LoopUnrollOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, ::mlir::IntegerAttr factor) {
  odsState.addOperands(target);
  odsState.getOrAddProperties<Properties>().factor = factor;
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void LoopUnrollOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value target, uint64_t factor) {
  odsState.addOperands(target);
  odsState.getOrAddProperties<Properties>().factor = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), factor);
}

void LoopUnrollOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, uint64_t factor) {
  odsState.addOperands(target);
  odsState.getOrAddProperties<Properties>().factor = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), factor);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void LoopUnrollOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult LoopUnrollOp::verifyInvariantsImpl() {
  auto tblgen_factor = getProperties().factor; (void)tblgen_factor;
  if (!tblgen_factor) return emitOpError("requires attribute 'factor'");

  if (::mlir::failed(__mlir_ods_local_attr_constraint_SCFTransformOps0(*this, tblgen_factor, "factor")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_SCFTransformOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult LoopUnrollOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult LoopUnrollOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
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
    if (failed(verifyInherentAttrs(result.name, result.attributes, [&]() {
        return parser.emitError(loc) << "'" << result.name.getStringRef() << "' op ";
      })))
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

void LoopUnrollOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
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
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::LoopUnrollOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::TakeAssumedBranchOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
TakeAssumedBranchOpGenericAdaptorBase::TakeAssumedBranchOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("transform.scf.take_assumed_branch", odsAttrs.getContext());
}

std::pair<unsigned, unsigned> TakeAssumedBranchOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr TakeAssumedBranchOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::UnitAttr TakeAssumedBranchOpGenericAdaptorBase::getTakeElseBranchAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(getProperties().take_else_branch);
  return attr;
}

::std::optional<bool> TakeAssumedBranchOpGenericAdaptorBase::getTakeElseBranch() {
  auto attr = getTakeElseBranchAttr();
  return attr ? ::std::optional<bool>(attr != nullptr) : (::std::nullopt);
}

} // namespace detail
TakeAssumedBranchOpAdaptor::TakeAssumedBranchOpAdaptor(TakeAssumedBranchOp op) : TakeAssumedBranchOpAdaptor(op->getOperands(), op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

::mlir::LogicalResult TakeAssumedBranchOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_take_else_branch = getProperties().take_else_branch; (void)tblgen_take_else_branch;

  if (tblgen_take_else_branch && !((::llvm::isa<::mlir::UnitAttr>(tblgen_take_else_branch))))
    return emitError(loc, "'transform.scf.take_assumed_branch' op ""attribute 'take_else_branch' failed to satisfy constraint: unit attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> TakeAssumedBranchOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range TakeAssumedBranchOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> TakeAssumedBranchOp::getTarget() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface>>(*getODSOperands(0).begin());
}

::mlir::MutableOperandRange TakeAssumedBranchOp::getTargetMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> TakeAssumedBranchOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range TakeAssumedBranchOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::LogicalResult TakeAssumedBranchOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::mlir::InFlightDiagnostic *diag) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    if (diag)
      *diag << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.take_else_branch;
       auto attr = dict.get("take_else_branch");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        if (diag)
          *diag << "expected key entry for take_else_branch in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        if (diag)
          *diag << "Invalid attribute `take_else_branch` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute TakeAssumedBranchOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.take_else_branch;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("take_else_branch",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code TakeAssumedBranchOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.take_else_branch.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> TakeAssumedBranchOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "take_else_branch")
      return prop.take_else_branch;
  return std::nullopt;
}

void TakeAssumedBranchOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "take_else_branch") {
       prop.take_else_branch = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.take_else_branch)>>(value);
       return;
    }
}

void TakeAssumedBranchOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.take_else_branch) attrs.append("take_else_branch", prop.take_else_branch);
}

::mlir::LogicalResult TakeAssumedBranchOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> getDiag) {
    {
      ::mlir::Attribute attr = attrs.get(getTakeElseBranchAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_SCFTransformOps4(attr, "take_else_branch", getDiag)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult TakeAssumedBranchOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.take_else_branch)))
    return ::mlir::failure();
  return ::mlir::success();
}

void TakeAssumedBranchOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.take_else_branch);
}

::mlir::UnitAttr TakeAssumedBranchOp::getTakeElseBranchAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(getProperties().take_else_branch);
}

::std::optional<bool> TakeAssumedBranchOp::getTakeElseBranch() {
  auto attr = getTakeElseBranchAttr();
  return attr ? ::std::optional<bool>(attr != nullptr) : (::std::nullopt);
}

void TakeAssumedBranchOp::setTakeElseBranchAttr(::mlir::UnitAttr attr) {
  (*this)->setAttr(getTakeElseBranchAttrName(), attr);
}

void TakeAssumedBranchOp::setTakeElseBranch(bool attrValue) {
    if (attrValue)
      return (*this)->setAttr(getTakeElseBranchAttrName(), ((attrValue) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr));
    (*this)->removeAttr(getTakeElseBranchAttrName());
}

::mlir::Attribute TakeAssumedBranchOp::removeTakeElseBranchAttr() {
    auto &attr = getProperties().take_else_branch;
    attr = {};
    return attr;
}

void TakeAssumedBranchOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value target, /*optional*/::mlir::UnitAttr take_else_branch) {
  odsState.addOperands(target);
  if (take_else_branch) {
    odsState.getOrAddProperties<Properties>().take_else_branch = take_else_branch;
  }
}

void TakeAssumedBranchOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, /*optional*/::mlir::UnitAttr take_else_branch) {
  odsState.addOperands(target);
  if (take_else_branch) {
    odsState.getOrAddProperties<Properties>().take_else_branch = take_else_branch;
  }
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void TakeAssumedBranchOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult TakeAssumedBranchOp::verifyInvariantsImpl() {
  auto tblgen_take_else_branch = getProperties().take_else_branch; (void)tblgen_take_else_branch;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_SCFTransformOps4(*this, tblgen_take_else_branch, "take_else_branch")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_SCFTransformOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult TakeAssumedBranchOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult TakeAssumedBranchOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand targetRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> targetOperands(targetRawOperands);  ::llvm::SMLoc targetOperandsLoc;
  (void)targetOperandsLoc;
  ::llvm::ArrayRef<::mlir::Type> allOperandTypes;
  ::llvm::ArrayRef<::mlir::Type> allResultTypes;

  targetOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(targetRawOperands[0]))
    return ::mlir::failure();
  if (::mlir::succeeded(parser.parseOptionalKeyword("take_else_branch"))) {
    result.getOrAddProperties<TakeAssumedBranchOp::Properties>().take_else_branch = parser.getBuilder().getUnitAttr();  }
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

void TakeAssumedBranchOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getTarget();
  if (getTakeElseBranchAttr()) {
    _odsPrinter << ' ' << "take_else_branch";
  }
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("take_else_branch");
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(getOperation()->getOperandTypes(), getOperation()->getResultTypes());
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::TakeAssumedBranchOp)


#endif  // GET_OP_CLASSES

