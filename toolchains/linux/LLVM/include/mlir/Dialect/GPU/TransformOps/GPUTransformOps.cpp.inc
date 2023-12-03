/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Op Definitions                                                             *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#ifdef GET_OP_LIST
#undef GET_OP_LIST

::mlir::transform::EliminateBarriersOp,
::mlir::transform::MapForallToBlocks,
::mlir::transform::MapNestedForallToThreads
#endif  // GET_OP_LIST

#ifdef GET_OP_CLASSES
#undef GET_OP_CLASSES


//===----------------------------------------------------------------------===//
// Local Utility Method Definitions
//===----------------------------------------------------------------------===//

namespace mlir {
namespace transform {

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_GPUTransformOps0(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((::llvm::isa<::mlir::transform::TransformHandleTypeInterface>(type)))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be TransformHandleTypeInterface instance, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_GPUTransformOps0(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> getDiag) {
  if (attr && !((::llvm::isa<::mlir::DenseI64ArrayAttr>(attr))))
    return getDiag() << "attribute '" << attrName
        << "' failed to satisfy constraint: i64 dense array attribute";
  return ::mlir::success();
}
static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_GPUTransformOps0(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_GPUTransformOps0(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_GPUTransformOps1(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> getDiag) {
  if (attr && !((::llvm::isa<::mlir::UnitAttr>(attr))))
    return getDiag() << "attribute '" << attrName
        << "' failed to satisfy constraint: unit attribute";
  return ::mlir::success();
}
static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_GPUTransformOps1(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_GPUTransformOps1(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_GPUTransformOps2(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> getDiag) {
  if (attr && !((::llvm::isa<::mlir::BoolAttr>(attr))))
    return getDiag() << "attribute '" << attrName
        << "' failed to satisfy constraint: bool attribute";
  return ::mlir::success();
}
static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_GPUTransformOps2(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_GPUTransformOps2(attr, attrName, [op]() {
    return op->emitOpError();
  });
}
} // namespace transform
} // namespace mlir
namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::EliminateBarriersOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
EliminateBarriersOpGenericAdaptorBase::EliminateBarriersOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("transform.apply_patterns.gpu.eliminate_barriers", odsAttrs.getContext());
}

std::pair<unsigned, unsigned> EliminateBarriersOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr EliminateBarriersOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
EliminateBarriersOpAdaptor::EliminateBarriersOpAdaptor(EliminateBarriersOp op) : EliminateBarriersOpAdaptor(op->getOperands(), op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

::mlir::LogicalResult EliminateBarriersOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> EliminateBarriersOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range EliminateBarriersOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> EliminateBarriersOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range EliminateBarriersOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void EliminateBarriersOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState) {
}

void EliminateBarriersOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes) {
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void EliminateBarriersOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult EliminateBarriersOp::verifyInvariantsImpl() {
  return ::mlir::success();
}

::mlir::LogicalResult EliminateBarriersOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult EliminateBarriersOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  return ::mlir::success();
}

void EliminateBarriersOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::EliminateBarriersOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::MapForallToBlocks definitions
//===----------------------------------------------------------------------===//

namespace detail {
MapForallToBlocksGenericAdaptorBase::MapForallToBlocksGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("transform.gpu.map_forall_to_blocks", odsAttrs.getContext());
}

std::pair<unsigned, unsigned> MapForallToBlocksGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr MapForallToBlocksGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::DenseI64ArrayAttr MapForallToBlocksGenericAdaptorBase::getGridDimsAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::DenseI64ArrayAttr>(getProperties().grid_dims);
  if (!attr)
    attr = ::mlir::Builder(odsAttrs.getContext()).getDenseI64ArrayAttr({});
  return attr;
}

::llvm::ArrayRef<int64_t> MapForallToBlocksGenericAdaptorBase::getGridDims() {
  auto attr = getGridDimsAttr();
    if (!attr)
      return ::mlir::Builder(odsAttrs.getContext()).getDenseI64ArrayAttr({});
  return attr;
}

::mlir::UnitAttr MapForallToBlocksGenericAdaptorBase::getGenerateGpuLaunchAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(getProperties().generate_gpu_launch);
  if (!attr)
    attr = ((false) ? ::mlir::Builder(odsAttrs.getContext()).getUnitAttr() : nullptr);
  return attr;
}

bool MapForallToBlocksGenericAdaptorBase::getGenerateGpuLaunch() {
  auto attr = getGenerateGpuLaunchAttr();
    if (!attr)
      return ((false) ? ::mlir::Builder(odsAttrs.getContext()).getUnitAttr() : nullptr) != nullptr;
  return attr != nullptr;
}

} // namespace detail
MapForallToBlocksAdaptor::MapForallToBlocksAdaptor(MapForallToBlocks op) : MapForallToBlocksAdaptor(op->getOperands(), op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

::mlir::LogicalResult MapForallToBlocksAdaptor::verify(::mlir::Location loc) {
  auto tblgen_generate_gpu_launch = getProperties().generate_gpu_launch; (void)tblgen_generate_gpu_launch;
  auto tblgen_grid_dims = getProperties().grid_dims; (void)tblgen_grid_dims;

  if (tblgen_grid_dims && !((::llvm::isa<::mlir::DenseI64ArrayAttr>(tblgen_grid_dims))))
    return emitError(loc, "'transform.gpu.map_forall_to_blocks' op ""attribute 'grid_dims' failed to satisfy constraint: i64 dense array attribute");

  if (tblgen_generate_gpu_launch && !((::llvm::isa<::mlir::UnitAttr>(tblgen_generate_gpu_launch))))
    return emitError(loc, "'transform.gpu.map_forall_to_blocks' op ""attribute 'generate_gpu_launch' failed to satisfy constraint: unit attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> MapForallToBlocks::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range MapForallToBlocks::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> MapForallToBlocks::getTarget() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface>>(*getODSOperands(0).begin());
}

::mlir::MutableOperandRange MapForallToBlocks::getTargetMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> MapForallToBlocks::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range MapForallToBlocks::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> MapForallToBlocks::getResult() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface>>(*getODSResults(0).begin());
}

::mlir::LogicalResult MapForallToBlocks::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::mlir::InFlightDiagnostic *diag) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    if (diag)
      *diag << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.generate_gpu_launch;
       auto attr = dict.get("generate_gpu_launch");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        if (diag)
          *diag << "expected key entry for generate_gpu_launch in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        if (diag)
          *diag << "Invalid attribute `generate_gpu_launch` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.grid_dims;
       auto attr = dict.get("grid_dims");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        if (diag)
          *diag << "expected key entry for grid_dims in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        if (diag)
          *diag << "Invalid attribute `grid_dims` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute MapForallToBlocks::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.generate_gpu_launch;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("generate_gpu_launch",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.grid_dims;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("grid_dims",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code MapForallToBlocks::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.generate_gpu_launch.getAsOpaquePointer()), 
    llvm::hash_value(prop.grid_dims.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> MapForallToBlocks::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "generate_gpu_launch")
      return prop.generate_gpu_launch;

    if (name == "grid_dims")
      return prop.grid_dims;
  return std::nullopt;
}

void MapForallToBlocks::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "generate_gpu_launch") {
       prop.generate_gpu_launch = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.generate_gpu_launch)>>(value);
       return;
    }

    if (name == "grid_dims") {
       prop.grid_dims = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.grid_dims)>>(value);
       return;
    }
}

void MapForallToBlocks::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.generate_gpu_launch) attrs.append("generate_gpu_launch", prop.generate_gpu_launch);

    if (prop.grid_dims) attrs.append("grid_dims", prop.grid_dims);
}

::mlir::LogicalResult MapForallToBlocks::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> getDiag) {
    {
      ::mlir::Attribute attr = attrs.get(getGenerateGpuLaunchAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_GPUTransformOps1(attr, "generate_gpu_launch", getDiag)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getGridDimsAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_GPUTransformOps0(attr, "grid_dims", getDiag)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult MapForallToBlocks::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.generate_gpu_launch)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.grid_dims)))
    return ::mlir::failure();
  return ::mlir::success();
}

void MapForallToBlocks::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.generate_gpu_launch);

  writer.writeOptionalAttribute(prop.grid_dims);
}

::mlir::DenseI64ArrayAttr MapForallToBlocks::getGridDimsAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::DenseI64ArrayAttr>(getProperties().grid_dims);
}

::llvm::ArrayRef<int64_t> MapForallToBlocks::getGridDims() {
  auto attr = getGridDimsAttr();
    if (!attr)
      return ::mlir::Builder((*this)->getContext()).getDenseI64ArrayAttr({});
  return attr;
}

::mlir::UnitAttr MapForallToBlocks::getGenerateGpuLaunchAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(getProperties().generate_gpu_launch);
}

bool MapForallToBlocks::getGenerateGpuLaunch() {
  auto attr = getGenerateGpuLaunchAttr();
    if (!attr)
      return ((false) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr) != nullptr;
  return attr != nullptr;
}

void MapForallToBlocks::setGridDimsAttr(::mlir::DenseI64ArrayAttr attr) {
  (*this)->setAttr(getGridDimsAttrName(), attr);
}

void MapForallToBlocks::setGridDims(::std::optional<::llvm::ArrayRef<int64_t>> attrValue) {
    if (attrValue)
      return (*this)->setAttr(getGridDimsAttrName(), ::mlir::Builder((*this)->getContext()).getDenseI64ArrayAttr(*attrValue));
    (*this)->removeAttr(getGridDimsAttrName());
}

void MapForallToBlocks::setGenerateGpuLaunchAttr(::mlir::UnitAttr attr) {
  (*this)->setAttr(getGenerateGpuLaunchAttrName(), attr);
}

void MapForallToBlocks::setGenerateGpuLaunch(bool attrValue) {
    if (attrValue)
      return (*this)->setAttr(getGenerateGpuLaunchAttrName(), ((attrValue) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr));
    (*this)->removeAttr(getGenerateGpuLaunchAttrName());
}

::mlir::Attribute MapForallToBlocks::removeGridDimsAttr() {
    auto &attr = getProperties().grid_dims;
    attr = {};
    return attr;
}

::mlir::Attribute MapForallToBlocks::removeGenerateGpuLaunchAttr() {
    auto &attr = getProperties().generate_gpu_launch;
    attr = {};
    return attr;
}

void MapForallToBlocks::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value target, /*optional*/::mlir::DenseI64ArrayAttr grid_dims, /*optional*/::mlir::UnitAttr generate_gpu_launch) {
  odsState.addOperands(target);
  if (grid_dims) {
    odsState.getOrAddProperties<Properties>().grid_dims = grid_dims;
  }
  if (generate_gpu_launch) {
    odsState.getOrAddProperties<Properties>().generate_gpu_launch = generate_gpu_launch;
  }
  odsState.addTypes(result);
}

void MapForallToBlocks::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, /*optional*/::mlir::DenseI64ArrayAttr grid_dims, /*optional*/::mlir::UnitAttr generate_gpu_launch) {
  odsState.addOperands(target);
  if (grid_dims) {
    odsState.getOrAddProperties<Properties>().grid_dims = grid_dims;
  }
  if (generate_gpu_launch) {
    odsState.getOrAddProperties<Properties>().generate_gpu_launch = generate_gpu_launch;
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void MapForallToBlocks::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value target, /*optional*/::llvm::ArrayRef<int64_t> grid_dims, /*optional*/bool generate_gpu_launch) {
  odsState.addOperands(target);
  odsState.getOrAddProperties<Properties>().grid_dims = odsBuilder.getDenseI64ArrayAttr(grid_dims);
  if (generate_gpu_launch) {
    odsState.getOrAddProperties<Properties>().generate_gpu_launch = ((generate_gpu_launch) ? odsBuilder.getUnitAttr() : nullptr);
  }
  odsState.addTypes(result);
}

void MapForallToBlocks::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, /*optional*/::llvm::ArrayRef<int64_t> grid_dims, /*optional*/bool generate_gpu_launch) {
  odsState.addOperands(target);
  odsState.getOrAddProperties<Properties>().grid_dims = odsBuilder.getDenseI64ArrayAttr(grid_dims);
  if (generate_gpu_launch) {
    odsState.getOrAddProperties<Properties>().generate_gpu_launch = ((generate_gpu_launch) ? odsBuilder.getUnitAttr() : nullptr);
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void MapForallToBlocks::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult MapForallToBlocks::verifyInvariantsImpl() {
  auto tblgen_generate_gpu_launch = getProperties().generate_gpu_launch; (void)tblgen_generate_gpu_launch;
  auto tblgen_grid_dims = getProperties().grid_dims; (void)tblgen_grid_dims;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_GPUTransformOps0(*this, tblgen_grid_dims, "grid_dims")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_GPUTransformOps1(*this, tblgen_generate_gpu_launch, "generate_gpu_launch")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_GPUTransformOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_GPUTransformOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult MapForallToBlocks::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult MapForallToBlocks::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand targetRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> targetOperands(targetRawOperands);  ::llvm::SMLoc targetOperandsLoc;
  (void)targetOperandsLoc;
  ::mlir::DenseI64ArrayAttr grid_dimsAttr;
  ::llvm::ArrayRef<::mlir::Type> targetTypes;
  ::llvm::ArrayRef<::mlir::Type> resultTypes;

  targetOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(targetRawOperands[0]))
    return ::mlir::failure();
  if (::mlir::succeeded(parser.parseOptionalKeyword("generate_gpu_launch"))) {
    result.getOrAddProperties<MapForallToBlocks::Properties>().generate_gpu_launch = parser.getBuilder().getUnitAttr();  }
  if (::mlir::succeeded(parser.parseOptionalKeyword("grid_dims"))) {
  if (parser.parseEqual())
    return ::mlir::failure();

  if (parser.parseCustomAttributeWithFallback(grid_dimsAttr, ::mlir::Type{})) {
    return ::mlir::failure();
  }
  if (grid_dimsAttr) result.getOrAddProperties<MapForallToBlocks::Properties>().grid_dims = grid_dimsAttr;
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
  if (parser.parseColon())
    return ::mlir::failure();

  ::mlir::FunctionType target__result_functionType;
  if (parser.parseType(target__result_functionType))
    return ::mlir::failure();
  targetTypes = target__result_functionType.getInputs();
  resultTypes = target__result_functionType.getResults();
  result.addTypes(resultTypes);
  if (parser.resolveOperands(targetOperands, targetTypes, targetOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void MapForallToBlocks::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getTarget();
  if (getGenerateGpuLaunchAttr()) {
    _odsPrinter << ' ' << "generate_gpu_launch";
  }
  if (getGridDimsAttr()) {
    _odsPrinter << ' ' << "grid_dims";
    _odsPrinter << ' ' << "=";
    _odsPrinter << ' ';
  _odsPrinter.printStrippedAttrOrType(getGridDimsAttr());
  }
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("generate_gpu_launch");
  elidedAttrs.push_back("grid_dims");
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getGridDimsAttr();
     if(attr && (attr == odsBuilder.getDenseI64ArrayAttr({})))
       elidedAttrs.push_back("grid_dims");
  }
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getGenerateGpuLaunchAttr();
     if(attr && (attr == ((false) ? odsBuilder.getUnitAttr() : nullptr)))
       elidedAttrs.push_back("generate_gpu_launch");
  }
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(::llvm::ArrayRef<::mlir::Type>(getTarget().getType()), ::llvm::ArrayRef<::mlir::Type>(getResult().getType()));
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::MapForallToBlocks)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::MapNestedForallToThreads definitions
//===----------------------------------------------------------------------===//

namespace detail {
MapNestedForallToThreadsGenericAdaptorBase::MapNestedForallToThreadsGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("transform.gpu.map_nested_forall_to_threads", odsAttrs.getContext());
}

std::pair<unsigned, unsigned> MapNestedForallToThreadsGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr MapNestedForallToThreadsGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::DenseI64ArrayAttr MapNestedForallToThreadsGenericAdaptorBase::getBlockDimsAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::DenseI64ArrayAttr>(getProperties().block_dims);
  return attr;
}

::llvm::ArrayRef<int64_t> MapNestedForallToThreadsGenericAdaptorBase::getBlockDims() {
  auto attr = getBlockDimsAttr();
  return attr;
}

::mlir::DenseI64ArrayAttr MapNestedForallToThreadsGenericAdaptorBase::getWarpDimsAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::DenseI64ArrayAttr>(getProperties().warp_dims);
  if (!attr)
    attr = ::mlir::Builder(odsAttrs.getContext()).getDenseI64ArrayAttr({});
  return attr;
}

::llvm::ArrayRef<int64_t> MapNestedForallToThreadsGenericAdaptorBase::getWarpDims() {
  auto attr = getWarpDimsAttr();
    if (!attr)
      return ::mlir::Builder(odsAttrs.getContext()).getDenseI64ArrayAttr({});
  return attr;
}

::mlir::BoolAttr MapNestedForallToThreadsGenericAdaptorBase::getSyncAfterDistributeAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::BoolAttr>(getProperties().sync_after_distribute);
  return attr;
}

bool MapNestedForallToThreadsGenericAdaptorBase::getSyncAfterDistribute() {
  auto attr = getSyncAfterDistributeAttr();
  return attr.getValue();
}

} // namespace detail
MapNestedForallToThreadsAdaptor::MapNestedForallToThreadsAdaptor(MapNestedForallToThreads op) : MapNestedForallToThreadsAdaptor(op->getOperands(), op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

::mlir::LogicalResult MapNestedForallToThreadsAdaptor::verify(::mlir::Location loc) {
  auto tblgen_block_dims = getProperties().block_dims; (void)tblgen_block_dims;
  auto tblgen_sync_after_distribute = getProperties().sync_after_distribute; (void)tblgen_sync_after_distribute;
  auto tblgen_warp_dims = getProperties().warp_dims; (void)tblgen_warp_dims;

  if (tblgen_block_dims && !((::llvm::isa<::mlir::DenseI64ArrayAttr>(tblgen_block_dims))))
    return emitError(loc, "'transform.gpu.map_nested_forall_to_threads' op ""attribute 'block_dims' failed to satisfy constraint: i64 dense array attribute");

  if (tblgen_warp_dims && !((::llvm::isa<::mlir::DenseI64ArrayAttr>(tblgen_warp_dims))))
    return emitError(loc, "'transform.gpu.map_nested_forall_to_threads' op ""attribute 'warp_dims' failed to satisfy constraint: i64 dense array attribute");

  if (tblgen_sync_after_distribute && !((::llvm::isa<::mlir::BoolAttr>(tblgen_sync_after_distribute))))
    return emitError(loc, "'transform.gpu.map_nested_forall_to_threads' op ""attribute 'sync_after_distribute' failed to satisfy constraint: bool attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> MapNestedForallToThreads::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range MapNestedForallToThreads::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> MapNestedForallToThreads::getTarget() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface>>(*getODSOperands(0).begin());
}

::mlir::MutableOperandRange MapNestedForallToThreads::getTargetMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> MapNestedForallToThreads::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range MapNestedForallToThreads::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> MapNestedForallToThreads::getResult() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface>>(*getODSResults(0).begin());
}

::mlir::LogicalResult MapNestedForallToThreads::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::mlir::InFlightDiagnostic *diag) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    if (diag)
      *diag << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.block_dims;
       auto attr = dict.get("block_dims");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        if (diag)
          *diag << "expected key entry for block_dims in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        if (diag)
          *diag << "Invalid attribute `block_dims` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.sync_after_distribute;
       auto attr = dict.get("sync_after_distribute");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        if (diag)
          *diag << "expected key entry for sync_after_distribute in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        if (diag)
          *diag << "Invalid attribute `sync_after_distribute` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.warp_dims;
       auto attr = dict.get("warp_dims");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        if (diag)
          *diag << "expected key entry for warp_dims in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        if (diag)
          *diag << "Invalid attribute `warp_dims` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute MapNestedForallToThreads::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.block_dims;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("block_dims",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.sync_after_distribute;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("sync_after_distribute",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.warp_dims;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("warp_dims",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code MapNestedForallToThreads::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.block_dims.getAsOpaquePointer()), 
    llvm::hash_value(prop.sync_after_distribute.getAsOpaquePointer()), 
    llvm::hash_value(prop.warp_dims.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> MapNestedForallToThreads::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "block_dims")
      return prop.block_dims;

    if (name == "sync_after_distribute")
      return prop.sync_after_distribute;

    if (name == "warp_dims")
      return prop.warp_dims;
  return std::nullopt;
}

void MapNestedForallToThreads::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "block_dims") {
       prop.block_dims = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.block_dims)>>(value);
       return;
    }

    if (name == "sync_after_distribute") {
       prop.sync_after_distribute = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.sync_after_distribute)>>(value);
       return;
    }

    if (name == "warp_dims") {
       prop.warp_dims = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.warp_dims)>>(value);
       return;
    }
}

void MapNestedForallToThreads::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.block_dims) attrs.append("block_dims", prop.block_dims);

    if (prop.sync_after_distribute) attrs.append("sync_after_distribute", prop.sync_after_distribute);

    if (prop.warp_dims) attrs.append("warp_dims", prop.warp_dims);
}

::mlir::LogicalResult MapNestedForallToThreads::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> getDiag) {
    {
      ::mlir::Attribute attr = attrs.get(getBlockDimsAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_GPUTransformOps0(attr, "block_dims", getDiag)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getSyncAfterDistributeAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_GPUTransformOps2(attr, "sync_after_distribute", getDiag)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getWarpDimsAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_GPUTransformOps0(attr, "warp_dims", getDiag)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult MapNestedForallToThreads::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.block_dims)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.sync_after_distribute)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.warp_dims)))
    return ::mlir::failure();
  return ::mlir::success();
}

void MapNestedForallToThreads::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.block_dims);

  writer.writeOptionalAttribute(prop.sync_after_distribute);

  writer.writeOptionalAttribute(prop.warp_dims);
}

::mlir::DenseI64ArrayAttr MapNestedForallToThreads::getBlockDimsAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::DenseI64ArrayAttr>(getProperties().block_dims);
}

::llvm::ArrayRef<int64_t> MapNestedForallToThreads::getBlockDims() {
  auto attr = getBlockDimsAttr();
  return attr;
}

::mlir::DenseI64ArrayAttr MapNestedForallToThreads::getWarpDimsAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::DenseI64ArrayAttr>(getProperties().warp_dims);
}

::llvm::ArrayRef<int64_t> MapNestedForallToThreads::getWarpDims() {
  auto attr = getWarpDimsAttr();
    if (!attr)
      return ::mlir::Builder((*this)->getContext()).getDenseI64ArrayAttr({});
  return attr;
}

::mlir::BoolAttr MapNestedForallToThreads::getSyncAfterDistributeAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::BoolAttr>(getProperties().sync_after_distribute);
}

bool MapNestedForallToThreads::getSyncAfterDistribute() {
  auto attr = getSyncAfterDistributeAttr();
  return attr.getValue();
}

void MapNestedForallToThreads::setBlockDimsAttr(::mlir::DenseI64ArrayAttr attr) {
  (*this)->setAttr(getBlockDimsAttrName(), attr);
}

void MapNestedForallToThreads::setBlockDims(::llvm::ArrayRef<int64_t> attrValue) {
  (*this)->setAttr(getBlockDimsAttrName(), ::mlir::Builder((*this)->getContext()).getDenseI64ArrayAttr(attrValue));
}

void MapNestedForallToThreads::setWarpDimsAttr(::mlir::DenseI64ArrayAttr attr) {
  (*this)->setAttr(getWarpDimsAttrName(), attr);
}

void MapNestedForallToThreads::setWarpDims(::std::optional<::llvm::ArrayRef<int64_t>> attrValue) {
    if (attrValue)
      return (*this)->setAttr(getWarpDimsAttrName(), ::mlir::Builder((*this)->getContext()).getDenseI64ArrayAttr(*attrValue));
    (*this)->removeAttr(getWarpDimsAttrName());
}

void MapNestedForallToThreads::setSyncAfterDistributeAttr(::mlir::BoolAttr attr) {
  (*this)->setAttr(getSyncAfterDistributeAttrName(), attr);
}

void MapNestedForallToThreads::setSyncAfterDistribute(bool attrValue) {
  (*this)->setAttr(getSyncAfterDistributeAttrName(), ::mlir::Builder((*this)->getContext()).getBoolAttr(attrValue));
}

::mlir::Attribute MapNestedForallToThreads::removeWarpDimsAttr() {
    auto &attr = getProperties().warp_dims;
    attr = {};
    return attr;
}

void MapNestedForallToThreads::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value target, ::mlir::DenseI64ArrayAttr block_dims, /*optional*/::mlir::DenseI64ArrayAttr warp_dims, ::mlir::BoolAttr sync_after_distribute) {
  odsState.addOperands(target);
  if (block_dims) {
    odsState.getOrAddProperties<Properties>().block_dims = block_dims;
  }
  if (warp_dims) {
    odsState.getOrAddProperties<Properties>().warp_dims = warp_dims;
  }
  if (sync_after_distribute) {
    odsState.getOrAddProperties<Properties>().sync_after_distribute = sync_after_distribute;
  }
  odsState.addTypes(result);
}

void MapNestedForallToThreads::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, ::mlir::DenseI64ArrayAttr block_dims, /*optional*/::mlir::DenseI64ArrayAttr warp_dims, ::mlir::BoolAttr sync_after_distribute) {
  odsState.addOperands(target);
  if (block_dims) {
    odsState.getOrAddProperties<Properties>().block_dims = block_dims;
  }
  if (warp_dims) {
    odsState.getOrAddProperties<Properties>().warp_dims = warp_dims;
  }
  if (sync_after_distribute) {
    odsState.getOrAddProperties<Properties>().sync_after_distribute = sync_after_distribute;
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void MapNestedForallToThreads::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value target, ::llvm::ArrayRef<int64_t> block_dims, /*optional*/::llvm::ArrayRef<int64_t> warp_dims, bool sync_after_distribute) {
  odsState.addOperands(target);
  odsState.getOrAddProperties<Properties>().block_dims = odsBuilder.getDenseI64ArrayAttr(block_dims);
  odsState.getOrAddProperties<Properties>().warp_dims = odsBuilder.getDenseI64ArrayAttr(warp_dims);
  odsState.getOrAddProperties<Properties>().sync_after_distribute = odsBuilder.getBoolAttr(sync_after_distribute);
  odsState.addTypes(result);
}

void MapNestedForallToThreads::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, ::llvm::ArrayRef<int64_t> block_dims, /*optional*/::llvm::ArrayRef<int64_t> warp_dims, bool sync_after_distribute) {
  odsState.addOperands(target);
  odsState.getOrAddProperties<Properties>().block_dims = odsBuilder.getDenseI64ArrayAttr(block_dims);
  odsState.getOrAddProperties<Properties>().warp_dims = odsBuilder.getDenseI64ArrayAttr(warp_dims);
  odsState.getOrAddProperties<Properties>().sync_after_distribute = odsBuilder.getBoolAttr(sync_after_distribute);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void MapNestedForallToThreads::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void MapNestedForallToThreads::populateDefaultProperties(::mlir::OperationName opName, Properties &properties) {
  ::mlir::Builder odsBuilder(opName.getContext());
  if (!properties.block_dims)
    properties.block_dims = odsBuilder.getDenseI64ArrayAttr({});
  if (!properties.sync_after_distribute)
    properties.sync_after_distribute = odsBuilder.getBoolAttr(true);
}

::mlir::LogicalResult MapNestedForallToThreads::verifyInvariantsImpl() {
  auto tblgen_block_dims = getProperties().block_dims; (void)tblgen_block_dims;
  auto tblgen_sync_after_distribute = getProperties().sync_after_distribute; (void)tblgen_sync_after_distribute;
  auto tblgen_warp_dims = getProperties().warp_dims; (void)tblgen_warp_dims;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_GPUTransformOps0(*this, tblgen_block_dims, "block_dims")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_GPUTransformOps0(*this, tblgen_warp_dims, "warp_dims")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_GPUTransformOps2(*this, tblgen_sync_after_distribute, "sync_after_distribute")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_GPUTransformOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_GPUTransformOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult MapNestedForallToThreads::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult MapNestedForallToThreads::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand targetRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> targetOperands(targetRawOperands);  ::llvm::SMLoc targetOperandsLoc;
  (void)targetOperandsLoc;
  ::mlir::DenseI64ArrayAttr block_dimsAttr;
  ::mlir::DenseI64ArrayAttr warp_dimsAttr;
  ::mlir::BoolAttr sync_after_distributeAttr;
  ::llvm::ArrayRef<::mlir::Type> targetTypes;
  ::llvm::ArrayRef<::mlir::Type> resultTypes;

  targetOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(targetRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseKeyword("block_dims"))
    return ::mlir::failure();
  if (parser.parseEqual())
    return ::mlir::failure();

  if (parser.parseCustomAttributeWithFallback(block_dimsAttr, ::mlir::Type{})) {
    return ::mlir::failure();
  }
  if (block_dimsAttr) result.getOrAddProperties<MapNestedForallToThreads::Properties>().block_dims = block_dimsAttr;
  if (::mlir::succeeded(parser.parseOptionalKeyword("warp_dims"))) {
  if (parser.parseEqual())
    return ::mlir::failure();

  if (parser.parseCustomAttributeWithFallback(warp_dimsAttr, ::mlir::Type{})) {
    return ::mlir::failure();
  }
  if (warp_dimsAttr) result.getOrAddProperties<MapNestedForallToThreads::Properties>().warp_dims = warp_dimsAttr;
  }
  if (::mlir::succeeded(parser.parseOptionalKeyword("sync_after_distribute"))) {
  if (parser.parseEqual())
    return ::mlir::failure();

  if (parser.parseCustomAttributeWithFallback(sync_after_distributeAttr, parser.getBuilder().getIntegerType(1))) {
    return ::mlir::failure();
  }
  if (sync_after_distributeAttr) result.getOrAddProperties<MapNestedForallToThreads::Properties>().sync_after_distribute = sync_after_distributeAttr;
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
  if (parser.parseColon())
    return ::mlir::failure();

  ::mlir::FunctionType target__result_functionType;
  if (parser.parseType(target__result_functionType))
    return ::mlir::failure();
  targetTypes = target__result_functionType.getInputs();
  resultTypes = target__result_functionType.getResults();
  result.addTypes(resultTypes);
  if (parser.resolveOperands(targetOperands, targetTypes, targetOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void MapNestedForallToThreads::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getTarget();
  _odsPrinter << ' ' << "block_dims";
  _odsPrinter << ' ' << "=";
  _odsPrinter << ' ';
_odsPrinter.printStrippedAttrOrType(getBlockDimsAttr());
  if (getWarpDimsAttr()) {
    _odsPrinter << ' ' << "warp_dims";
    _odsPrinter << ' ' << "=";
    _odsPrinter << ' ';
  _odsPrinter.printStrippedAttrOrType(getWarpDimsAttr());
  }
  if (getSyncAfterDistributeAttr() && getSyncAfterDistributeAttr() != ::mlir::OpBuilder((*this)->getContext()).getBoolAttr(true)) {
    _odsPrinter << ' ' << "sync_after_distribute";
    _odsPrinter << ' ' << "=";
    _odsPrinter << ' ';
    _odsPrinter.printAttributeWithoutType(getSyncAfterDistributeAttr());
  }
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("block_dims");
  elidedAttrs.push_back("warp_dims");
  elidedAttrs.push_back("sync_after_distribute");
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getBlockDimsAttr();
     if(attr && (attr == odsBuilder.getDenseI64ArrayAttr({})))
       elidedAttrs.push_back("block_dims");
  }
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getWarpDimsAttr();
     if(attr && (attr == odsBuilder.getDenseI64ArrayAttr({})))
       elidedAttrs.push_back("warp_dims");
  }
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getSyncAfterDistributeAttr();
     if(attr && (attr == odsBuilder.getBoolAttr(true)))
       elidedAttrs.push_back("sync_after_distribute");
  }
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(::llvm::ArrayRef<::mlir::Type>(getTarget().getType()), ::llvm::ArrayRef<::mlir::Type>(getResult().getType()));
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::MapNestedForallToThreads)


#endif  // GET_OP_CLASSES

