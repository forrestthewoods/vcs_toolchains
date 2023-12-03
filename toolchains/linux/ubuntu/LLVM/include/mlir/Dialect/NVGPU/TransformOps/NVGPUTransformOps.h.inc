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
class CreateAsyncGroupsOp;
} // namespace transform
} // namespace mlir
namespace mlir {
namespace transform {
class PipelineSharedMemoryCopiesOp;
} // namespace transform
} // namespace mlir
namespace mlir {
namespace transform {
class RewriteMatmulAsMmaSyncOp;
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
// ::mlir::transform::CreateAsyncGroupsOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class CreateAsyncGroupsOpGenericAdaptorBase {
public:
  struct Properties {
    using bypass_l1Ty = ::mlir::UnitAttr;
    bypass_l1Ty bypass_l1;

    auto getBypassL1() {
      auto &propStorage = this->bypass_l1;
      return ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(propStorage);
    }
    void setBypassL1(const ::mlir::UnitAttr &propValue) {
      this->bypass_l1 = propValue;
    }
    bool operator==(const Properties &rhs) const {
      return 
        rhs.bypass_l1 == this->bypass_l1 &&
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
  CreateAsyncGroupsOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {});

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes();
  ::mlir::UnitAttr getBypassL1Attr();
  bool getBypassL1();
};
} // namespace detail
template <typename RangeT>
class CreateAsyncGroupsOpGenericAdaptor : public detail::CreateAsyncGroupsOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::CreateAsyncGroupsOpGenericAdaptorBase;
public:
  CreateAsyncGroupsOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  CreateAsyncGroupsOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : CreateAsyncGroupsOpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

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
class CreateAsyncGroupsOpAdaptor : public CreateAsyncGroupsOpGenericAdaptor<::mlir::ValueRange> {
public:
  using CreateAsyncGroupsOpGenericAdaptor::CreateAsyncGroupsOpGenericAdaptor;
  CreateAsyncGroupsOpAdaptor(CreateAsyncGroupsOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class CreateAsyncGroupsOp : public ::mlir::Op<CreateAsyncGroupsOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::transform::TransformHandleTypeInterface>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::OneOperand, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::transform::TransformEachOpTrait, ::mlir::transform::TransformOpInterface::Trait, ::mlir::transform::ReportTrackingListenerFailuresOpTrait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = CreateAsyncGroupsOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = CreateAsyncGroupsOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  using Properties = FoldAdaptor::Properties;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("bypass_l1")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getBypassL1AttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getBypassL1AttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("transform.nvgpu.create_async_groups");
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
  ::mlir::UnitAttr getBypassL1Attr();
  bool getBypassL1();
  void setBypassL1Attr(::mlir::UnitAttr attr);
  void setBypassL1(bool attrValue);
  ::mlir::Attribute removeBypassL1Attr();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value target, /*optional*/::mlir::UnitAttr bypass_l1);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, /*optional*/::mlir::UnitAttr bypass_l1);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value target, /*optional*/bool bypass_l1 = false);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, /*optional*/bool bypass_l1 = false);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  void getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects);
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
private:
  ::mlir::StringAttr getAttributeNameForIndex(unsigned index) {
    return getAttributeNameForIndex((*this)->getName(), index);
  }

  static ::mlir::StringAttr getAttributeNameForIndex(::mlir::OperationName name, unsigned index) {
    assert(index < 1 && "invalid attribute index");
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
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::transform::CreateAsyncGroupsOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::PipelineSharedMemoryCopiesOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class PipelineSharedMemoryCopiesOpGenericAdaptorBase {
public:
  struct Properties {
    using depthTy = ::mlir::IntegerAttr;
    depthTy depth;

    auto getDepth() {
      auto &propStorage = this->depth;
      return ::llvm::cast<::mlir::IntegerAttr>(propStorage);
    }
    void setDepth(const ::mlir::IntegerAttr &propValue) {
      this->depth = propValue;
    }
    using failure_propagation_modeTy = ::mlir::transform::FailurePropagationModeAttr;
    failure_propagation_modeTy failure_propagation_mode;

    auto getFailurePropagationMode() {
      auto &propStorage = this->failure_propagation_mode;
      return ::llvm::dyn_cast_or_null<::mlir::transform::FailurePropagationModeAttr>(propStorage);
    }
    void setFailurePropagationMode(const ::mlir::transform::FailurePropagationModeAttr &propValue) {
      this->failure_propagation_mode = propValue;
    }
    using peel_epilogueTy = ::mlir::UnitAttr;
    peel_epilogueTy peel_epilogue;

    auto getPeelEpilogue() {
      auto &propStorage = this->peel_epilogue;
      return ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(propStorage);
    }
    void setPeelEpilogue(const ::mlir::UnitAttr &propValue) {
      this->peel_epilogue = propValue;
    }
    bool operator==(const Properties &rhs) const {
      return 
        rhs.depth == this->depth &&
        rhs.failure_propagation_mode == this->failure_propagation_mode &&
        rhs.peel_epilogue == this->peel_epilogue &&
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
  PipelineSharedMemoryCopiesOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {});

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes();
  ::mlir::IntegerAttr getDepthAttr();
  uint64_t getDepth();
  ::mlir::UnitAttr getPeelEpilogueAttr();
  bool getPeelEpilogue();
  ::mlir::transform::FailurePropagationModeAttr getFailurePropagationModeAttr();
  ::mlir::transform::FailurePropagationMode getFailurePropagationMode();
};
} // namespace detail
template <typename RangeT>
class PipelineSharedMemoryCopiesOpGenericAdaptor : public detail::PipelineSharedMemoryCopiesOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::PipelineSharedMemoryCopiesOpGenericAdaptorBase;
public:
  PipelineSharedMemoryCopiesOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  PipelineSharedMemoryCopiesOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : PipelineSharedMemoryCopiesOpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getForOp() {
    return (*getODSOperands(0).begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class PipelineSharedMemoryCopiesOpAdaptor : public PipelineSharedMemoryCopiesOpGenericAdaptor<::mlir::ValueRange> {
public:
  using PipelineSharedMemoryCopiesOpGenericAdaptor::PipelineSharedMemoryCopiesOpGenericAdaptor;
  PipelineSharedMemoryCopiesOpAdaptor(PipelineSharedMemoryCopiesOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class PipelineSharedMemoryCopiesOp : public ::mlir::Op<PipelineSharedMemoryCopiesOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::transform::TransformHandleTypeInterface>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::OneOperand, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait, ::mlir::transform::FunctionalStyleTransformOpTrait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::transform::TransformEachOpTrait, ::mlir::transform::TransformOpInterface::Trait, ::mlir::transform::ReportTrackingListenerFailuresOpTrait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = PipelineSharedMemoryCopiesOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = PipelineSharedMemoryCopiesOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  using Properties = FoldAdaptor::Properties;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("depth"), ::llvm::StringRef("failure_propagation_mode"), ::llvm::StringRef("peel_epilogue")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getDepthAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getDepthAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  ::mlir::StringAttr getFailurePropagationModeAttrName() {
    return getAttributeNameForIndex(1);
  }

  static ::mlir::StringAttr getFailurePropagationModeAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 1);
  }

  ::mlir::StringAttr getPeelEpilogueAttrName() {
    return getAttributeNameForIndex(2);
  }

  static ::mlir::StringAttr getPeelEpilogueAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 2);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("transform.nvgpu.pipeline_shared_memory_copies");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> getForOp();
  ::mlir::MutableOperandRange getForOpMutable();
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
  ::mlir::IntegerAttr getDepthAttr();
  uint64_t getDepth();
  ::mlir::UnitAttr getPeelEpilogueAttr();
  bool getPeelEpilogue();
  ::mlir::transform::FailurePropagationModeAttr getFailurePropagationModeAttr();
  ::mlir::transform::FailurePropagationMode getFailurePropagationMode();
  void setDepthAttr(::mlir::IntegerAttr attr);
  void setDepth(uint64_t attrValue);
  void setPeelEpilogueAttr(::mlir::UnitAttr attr);
  void setPeelEpilogue(bool attrValue);
  void setFailurePropagationModeAttr(::mlir::transform::FailurePropagationModeAttr attr);
  void setFailurePropagationMode(::mlir::transform::FailurePropagationMode attrValue);
  ::mlir::Attribute removePeelEpilogueAttr();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value for_op, ::mlir::IntegerAttr depth, /*optional*/::mlir::UnitAttr peel_epilogue, ::mlir::transform::FailurePropagationModeAttr failure_propagation_mode);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value for_op, ::mlir::IntegerAttr depth, /*optional*/::mlir::UnitAttr peel_epilogue, ::mlir::transform::FailurePropagationModeAttr failure_propagation_mode);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value for_op, uint64_t depth, /*optional*/bool peel_epilogue = false, ::mlir::transform::FailurePropagationMode failure_propagation_mode = ::mlir::transform::FailurePropagationMode::Suppress);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value for_op, uint64_t depth, /*optional*/bool peel_epilogue = false, ::mlir::transform::FailurePropagationMode failure_propagation_mode = ::mlir::transform::FailurePropagationMode::Suppress);
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
      ::mlir::scf::ForOp forOp,
      ::mlir::transform::ApplyToEachResultList &results,
      ::mlir::transform::TransformState &state);
};
} // namespace transform
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::transform::PipelineSharedMemoryCopiesOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::RewriteMatmulAsMmaSyncOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class RewriteMatmulAsMmaSyncOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  RewriteMatmulAsMmaSyncOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class RewriteMatmulAsMmaSyncOpGenericAdaptor : public detail::RewriteMatmulAsMmaSyncOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::RewriteMatmulAsMmaSyncOpGenericAdaptorBase;
public:
  RewriteMatmulAsMmaSyncOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  RewriteMatmulAsMmaSyncOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : RewriteMatmulAsMmaSyncOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

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
class RewriteMatmulAsMmaSyncOpAdaptor : public RewriteMatmulAsMmaSyncOpGenericAdaptor<::mlir::ValueRange> {
public:
  using RewriteMatmulAsMmaSyncOpGenericAdaptor::RewriteMatmulAsMmaSyncOpGenericAdaptor;
  RewriteMatmulAsMmaSyncOpAdaptor(RewriteMatmulAsMmaSyncOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class RewriteMatmulAsMmaSyncOp : public ::mlir::Op<RewriteMatmulAsMmaSyncOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::ZeroResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::OneOperand, ::mlir::OpTrait::OpInvariants, ::mlir::transform::FunctionalStyleTransformOpTrait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::transform::TransformEachOpTrait, ::mlir::transform::TransformOpInterface::Trait, ::mlir::transform::ReportTrackingListenerFailuresOpTrait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = RewriteMatmulAsMmaSyncOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = RewriteMatmulAsMmaSyncOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("transform.nvgpu.rewrite_matmul_as_mma_sync");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> getTarget();
  ::mlir::MutableOperandRange getTargetMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value target);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
public:
  ::mlir::DiagnosedSilenceableFailure applyToOne(
      ::mlir::transform::TransformRewriter &rewriter,
      ::mlir::linalg::LinalgOp linalgOp,
      ::mlir::transform::ApplyToEachResultList &results,
      ::mlir::transform::TransformState &state);
};
} // namespace transform
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::transform::RewriteMatmulAsMmaSyncOp)


#endif  // GET_OP_CLASSES

