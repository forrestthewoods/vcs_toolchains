/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Op Declarations                                                            *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#if defined(GET_OP_CLASSES) || defined(GET_OP_FWD_DEFINES)
#undef GET_OP_FWD_DEFINES
namespace mlir {
namespace transform {
class EliminateBarriersOp;
} // namespace transform
} // namespace mlir
namespace mlir {
namespace transform {
class MapForallToBlocks;
} // namespace transform
} // namespace mlir
namespace mlir {
namespace transform {
class MapNestedForallToThreads;
} // namespace transform
} // namespace mlir
#endif

#ifdef GET_OP_CLASSES
#undef GET_OP_CLASSES


//===----------------------------------------------------------------------===//
// Local Utility Method Definitions
//===----------------------------------------------------------------------===//

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::EliminateBarriersOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class EliminateBarriersOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  EliminateBarriersOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class EliminateBarriersOpGenericAdaptor : public detail::EliminateBarriersOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::EliminateBarriersOpGenericAdaptorBase;
public:
  EliminateBarriersOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  EliminateBarriersOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : EliminateBarriersOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class EliminateBarriersOpAdaptor : public EliminateBarriersOpGenericAdaptor<::mlir::ValueRange> {
public:
  using EliminateBarriersOpGenericAdaptor::EliminateBarriersOpGenericAdaptor;
  EliminateBarriersOpAdaptor(EliminateBarriersOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class EliminateBarriersOp : public ::mlir::Op<EliminateBarriersOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::ZeroResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::ZeroOperands, ::mlir::OpTrait::OpInvariants, ::mlir::transform::PatternDescriptorOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = EliminateBarriersOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = EliminateBarriersOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("transform.apply_patterns.gpu.eliminate_barriers");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  void populatePatterns(RewritePatternSet &patterns);
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
public:
};
} // namespace transform
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::transform::EliminateBarriersOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::MapForallToBlocks declarations
//===----------------------------------------------------------------------===//

namespace detail {
class MapForallToBlocksGenericAdaptorBase {
public:
  struct Properties {
    using generate_gpu_launchTy = ::mlir::UnitAttr;
    generate_gpu_launchTy generate_gpu_launch;

    auto getGenerateGpuLaunch() {
      auto &propStorage = this->generate_gpu_launch;
      return ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(propStorage);
    }
    void setGenerateGpuLaunch(const ::mlir::UnitAttr &propValue) {
      this->generate_gpu_launch = propValue;
    }
    using grid_dimsTy = ::mlir::DenseI64ArrayAttr;
    grid_dimsTy grid_dims;

    auto getGridDims() {
      auto &propStorage = this->grid_dims;
      return ::llvm::dyn_cast_or_null<::mlir::DenseI64ArrayAttr>(propStorage);
    }
    void setGridDims(const ::mlir::DenseI64ArrayAttr &propValue) {
      this->grid_dims = propValue;
    }
    bool operator==(const Properties &rhs) const {
      return 
        rhs.generate_gpu_launch == this->generate_gpu_launch &&
        rhs.grid_dims == this->grid_dims &&
        true;
    }
    bool operator!=(const Properties &rhs) const {
      return !(*this == rhs);
    }
  };
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  Properties properties;
  ::mlir::RegionRange odsRegions;
public:
  MapForallToBlocksGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {});

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes();
  ::mlir::DenseI64ArrayAttr getGridDimsAttr();
  ::llvm::ArrayRef<int64_t> getGridDims();
  ::mlir::UnitAttr getGenerateGpuLaunchAttr();
  bool getGenerateGpuLaunch();
};
} // namespace detail
template <typename RangeT>
class MapForallToBlocksGenericAdaptor : public detail::MapForallToBlocksGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::MapForallToBlocksGenericAdaptorBase;
public:
  MapForallToBlocksGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  MapForallToBlocksGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : MapForallToBlocksGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getTarget() {
    return (*getODSOperands(0).begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class MapForallToBlocksAdaptor : public MapForallToBlocksGenericAdaptor<::mlir::ValueRange> {
public:
  using MapForallToBlocksGenericAdaptor::MapForallToBlocksGenericAdaptor;
  MapForallToBlocksAdaptor(MapForallToBlocks op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class MapForallToBlocks : public ::mlir::Op<MapForallToBlocks, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::transform::TransformHandleTypeInterface>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::OneOperand, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait, ::mlir::transform::FunctionalStyleTransformOpTrait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::transform::TransformOpInterface::Trait, ::mlir::transform::TransformEachOpTrait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = MapForallToBlocksAdaptor;
  template <typename RangeT>
  using GenericAdaptor = MapForallToBlocksGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  using Properties = FoldAdaptor::Properties;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("generate_gpu_launch"), ::llvm::StringRef("grid_dims")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getGenerateGpuLaunchAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getGenerateGpuLaunchAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  ::mlir::StringAttr getGridDimsAttrName() {
    return getAttributeNameForIndex(1);
  }

  static ::mlir::StringAttr getGridDimsAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 1);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("transform.gpu.map_forall_to_blocks");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> getTarget();
  ::mlir::MutableOperandRange getTargetMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> getResult();
  static ::mlir::LogicalResult setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::mlir::InFlightDiagnostic *diag);
  static ::mlir::Attribute getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop);
  static llvm::hash_code computePropertiesHash(const Properties &prop);
  static std::optional<mlir::Attribute> getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name);
  static void setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value);
  static void populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs);
  static ::mlir::LogicalResult verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> getDiag);
  static ::mlir::LogicalResult readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state);
  void writeProperties(::mlir::DialectBytecodeWriter &writer);
  ::mlir::DenseI64ArrayAttr getGridDimsAttr();
  ::llvm::ArrayRef<int64_t> getGridDims();
  ::mlir::UnitAttr getGenerateGpuLaunchAttr();
  bool getGenerateGpuLaunch();
  void setGridDimsAttr(::mlir::DenseI64ArrayAttr attr);
  void setGridDims(::std::optional<::llvm::ArrayRef<int64_t>> attrValue);
  void setGenerateGpuLaunchAttr(::mlir::UnitAttr attr);
  void setGenerateGpuLaunch(bool attrValue);
  ::mlir::Attribute removeGridDimsAttr();
  ::mlir::Attribute removeGenerateGpuLaunchAttr();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value target, /*optional*/::mlir::DenseI64ArrayAttr grid_dims, /*optional*/::mlir::UnitAttr generate_gpu_launch);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, /*optional*/::mlir::DenseI64ArrayAttr grid_dims, /*optional*/::mlir::UnitAttr generate_gpu_launch);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value target, /*optional*/::llvm::ArrayRef<int64_t> grid_dims = {}, /*optional*/bool generate_gpu_launch = false);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, /*optional*/::llvm::ArrayRef<int64_t> grid_dims = {}, /*optional*/bool generate_gpu_launch = false);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
private:
  ::mlir::StringAttr getAttributeNameForIndex(unsigned index) {
    return getAttributeNameForIndex((*this)->getName(), index);
  }

  static ::mlir::StringAttr getAttributeNameForIndex(::mlir::OperationName name, unsigned index) {
    assert(index < 2 && "invalid attribute index");
    assert(name.getStringRef() == getOperationName() && "invalid operation name");
    return name.getAttributeNames()[index];
  }

public:
  ::mlir::DiagnosedSilenceableFailure applyToOne(
      ::mlir::transform::TransformRewriter &rewriter,
      ::mlir::Operation *target,
      ::mlir::transform::ApplyToEachResultList &results,
      ::mlir::transform::TransformState &state);
};
} // namespace transform
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::transform::MapForallToBlocks)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::MapNestedForallToThreads declarations
//===----------------------------------------------------------------------===//

namespace detail {
class MapNestedForallToThreadsGenericAdaptorBase {
public:
  struct Properties {
    using block_dimsTy = ::mlir::DenseI64ArrayAttr;
    block_dimsTy block_dims;

    auto getBlockDims() {
      auto &propStorage = this->block_dims;
      return ::llvm::dyn_cast_or_null<::mlir::DenseI64ArrayAttr>(propStorage);
    }
    void setBlockDims(const ::mlir::DenseI64ArrayAttr &propValue) {
      this->block_dims = propValue;
    }
    using sync_after_distributeTy = ::mlir::BoolAttr;
    sync_after_distributeTy sync_after_distribute;

    auto getSyncAfterDistribute() {
      auto &propStorage = this->sync_after_distribute;
      return ::llvm::dyn_cast_or_null<::mlir::BoolAttr>(propStorage);
    }
    void setSyncAfterDistribute(const ::mlir::BoolAttr &propValue) {
      this->sync_after_distribute = propValue;
    }
    using warp_dimsTy = ::mlir::DenseI64ArrayAttr;
    warp_dimsTy warp_dims;

    auto getWarpDims() {
      auto &propStorage = this->warp_dims;
      return ::llvm::dyn_cast_or_null<::mlir::DenseI64ArrayAttr>(propStorage);
    }
    void setWarpDims(const ::mlir::DenseI64ArrayAttr &propValue) {
      this->warp_dims = propValue;
    }
    bool operator==(const Properties &rhs) const {
      return 
        rhs.block_dims == this->block_dims &&
        rhs.sync_after_distribute == this->sync_after_distribute &&
        rhs.warp_dims == this->warp_dims &&
        true;
    }
    bool operator!=(const Properties &rhs) const {
      return !(*this == rhs);
    }
  };
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  Properties properties;
  ::mlir::RegionRange odsRegions;
public:
  MapNestedForallToThreadsGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {});

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes();
  ::mlir::DenseI64ArrayAttr getBlockDimsAttr();
  ::llvm::ArrayRef<int64_t> getBlockDims();
  ::mlir::DenseI64ArrayAttr getWarpDimsAttr();
  ::llvm::ArrayRef<int64_t> getWarpDims();
  ::mlir::BoolAttr getSyncAfterDistributeAttr();
  bool getSyncAfterDistribute();
};
} // namespace detail
template <typename RangeT>
class MapNestedForallToThreadsGenericAdaptor : public detail::MapNestedForallToThreadsGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::MapNestedForallToThreadsGenericAdaptorBase;
public:
  MapNestedForallToThreadsGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  MapNestedForallToThreadsGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : MapNestedForallToThreadsGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getTarget() {
    return (*getODSOperands(0).begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class MapNestedForallToThreadsAdaptor : public MapNestedForallToThreadsGenericAdaptor<::mlir::ValueRange> {
public:
  using MapNestedForallToThreadsGenericAdaptor::MapNestedForallToThreadsGenericAdaptor;
  MapNestedForallToThreadsAdaptor(MapNestedForallToThreads op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class MapNestedForallToThreads : public ::mlir::Op<MapNestedForallToThreads, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::transform::TransformHandleTypeInterface>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::OneOperand, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait, ::mlir::transform::FunctionalStyleTransformOpTrait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::transform::TransformEachOpTrait, ::mlir::transform::TransformOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = MapNestedForallToThreadsAdaptor;
  template <typename RangeT>
  using GenericAdaptor = MapNestedForallToThreadsGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  using Properties = FoldAdaptor::Properties;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("block_dims"), ::llvm::StringRef("sync_after_distribute"), ::llvm::StringRef("warp_dims")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getBlockDimsAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getBlockDimsAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  ::mlir::StringAttr getSyncAfterDistributeAttrName() {
    return getAttributeNameForIndex(1);
  }

  static ::mlir::StringAttr getSyncAfterDistributeAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 1);
  }

  ::mlir::StringAttr getWarpDimsAttrName() {
    return getAttributeNameForIndex(2);
  }

  static ::mlir::StringAttr getWarpDimsAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 2);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("transform.gpu.map_nested_forall_to_threads");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> getTarget();
  ::mlir::MutableOperandRange getTargetMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> getResult();
  static ::mlir::LogicalResult setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::mlir::InFlightDiagnostic *diag);
  static ::mlir::Attribute getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop);
  static llvm::hash_code computePropertiesHash(const Properties &prop);
  static std::optional<mlir::Attribute> getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name);
  static void setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value);
  static void populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs);
  static ::mlir::LogicalResult verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> getDiag);
  static ::mlir::LogicalResult readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state);
  void writeProperties(::mlir::DialectBytecodeWriter &writer);
  ::mlir::DenseI64ArrayAttr getBlockDimsAttr();
  ::llvm::ArrayRef<int64_t> getBlockDims();
  ::mlir::DenseI64ArrayAttr getWarpDimsAttr();
  ::llvm::ArrayRef<int64_t> getWarpDims();
  ::mlir::BoolAttr getSyncAfterDistributeAttr();
  bool getSyncAfterDistribute();
  void setBlockDimsAttr(::mlir::DenseI64ArrayAttr attr);
  void setBlockDims(::llvm::ArrayRef<int64_t> attrValue);
  void setWarpDimsAttr(::mlir::DenseI64ArrayAttr attr);
  void setWarpDims(::std::optional<::llvm::ArrayRef<int64_t>> attrValue);
  void setSyncAfterDistributeAttr(::mlir::BoolAttr attr);
  void setSyncAfterDistribute(bool attrValue);
  ::mlir::Attribute removeWarpDimsAttr();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value target, ::mlir::DenseI64ArrayAttr block_dims, /*optional*/::mlir::DenseI64ArrayAttr warp_dims, ::mlir::BoolAttr sync_after_distribute);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, ::mlir::DenseI64ArrayAttr block_dims, /*optional*/::mlir::DenseI64ArrayAttr warp_dims, ::mlir::BoolAttr sync_after_distribute);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value target, ::llvm::ArrayRef<int64_t> block_dims = {}, /*optional*/::llvm::ArrayRef<int64_t> warp_dims = {}, bool sync_after_distribute = true);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, ::llvm::ArrayRef<int64_t> block_dims = {}, /*optional*/::llvm::ArrayRef<int64_t> warp_dims = {}, bool sync_after_distribute = true);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static void populateDefaultProperties(::mlir::OperationName opName, Properties &properties);
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
private:
  ::mlir::StringAttr getAttributeNameForIndex(unsigned index) {
    return getAttributeNameForIndex((*this)->getName(), index);
  }

  static ::mlir::StringAttr getAttributeNameForIndex(::mlir::OperationName name, unsigned index) {
    assert(index < 3 && "invalid attribute index");
    assert(name.getStringRef() == getOperationName() && "invalid operation name");
    return name.getAttributeNames()[index];
  }

public:
  ::mlir::DiagnosedSilenceableFailure applyToOne(
      ::mlir::transform::TransformRewriter &rewriter,
      ::mlir::Operation *target,
      ::mlir::transform::ApplyToEachResultList &results,
      ::mlir::transform::TransformState &state);
};
} // namespace transform
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::transform::MapNestedForallToThreads)


#endif  // GET_OP_CLASSES

