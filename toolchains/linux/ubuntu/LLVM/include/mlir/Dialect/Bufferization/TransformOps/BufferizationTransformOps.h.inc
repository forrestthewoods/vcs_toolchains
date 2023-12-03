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
class BufferLoopHoistingOp;
} // namespace transform
} // namespace mlir
namespace mlir {
namespace transform {
class EliminateEmptyTensorsOp;
} // namespace transform
} // namespace mlir
namespace mlir {
namespace transform {
class EmptyTensorToAllocTensorOp;
} // namespace transform
} // namespace mlir
namespace mlir {
namespace transform {
class OneShotBufferizeOp;
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
// ::mlir::transform::BufferLoopHoistingOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class BufferLoopHoistingOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  BufferLoopHoistingOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class BufferLoopHoistingOpGenericAdaptor : public detail::BufferLoopHoistingOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::BufferLoopHoistingOpGenericAdaptorBase;
public:
  BufferLoopHoistingOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  BufferLoopHoistingOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : BufferLoopHoistingOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

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
class BufferLoopHoistingOpAdaptor : public BufferLoopHoistingOpGenericAdaptor<::mlir::ValueRange> {
public:
  using BufferLoopHoistingOpGenericAdaptor::BufferLoopHoistingOpGenericAdaptor;
  BufferLoopHoistingOpAdaptor(BufferLoopHoistingOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class BufferLoopHoistingOp : public ::mlir::Op<BufferLoopHoistingOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::ZeroResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::OneOperand, ::mlir::OpTrait::OpInvariants, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::transform::TransformEachOpTrait, ::mlir::transform::TransformOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = BufferLoopHoistingOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = BufferLoopHoistingOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("transform.bufferization.buffer_loop_hoisting");
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
  void getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects);
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
public:
  ::mlir::DiagnosedSilenceableFailure applyToOne(
      ::mlir::transform::TransformRewriter &rewriter,
      ::mlir::Operation *target,
      ::mlir::transform::ApplyToEachResultList &results,
      ::mlir::transform::TransformState &state);
};
} // namespace transform
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::transform::BufferLoopHoistingOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::EliminateEmptyTensorsOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class EliminateEmptyTensorsOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  EliminateEmptyTensorsOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class EliminateEmptyTensorsOpGenericAdaptor : public detail::EliminateEmptyTensorsOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::EliminateEmptyTensorsOpGenericAdaptorBase;
public:
  EliminateEmptyTensorsOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  EliminateEmptyTensorsOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : EliminateEmptyTensorsOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

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
class EliminateEmptyTensorsOpAdaptor : public EliminateEmptyTensorsOpGenericAdaptor<::mlir::ValueRange> {
public:
  using EliminateEmptyTensorsOpGenericAdaptor::EliminateEmptyTensorsOpGenericAdaptor;
  EliminateEmptyTensorsOpAdaptor(EliminateEmptyTensorsOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class EliminateEmptyTensorsOp : public ::mlir::Op<EliminateEmptyTensorsOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::ZeroResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::OneOperand, ::mlir::OpTrait::OpInvariants, ::mlir::transform::TransformOpInterface::Trait, ::mlir::MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = EliminateEmptyTensorsOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = EliminateEmptyTensorsOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("transform.bufferization.eliminate_empty_tensors");
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
  ::mlir::DiagnosedSilenceableFailure apply(::mlir::transform::TransformRewriter &rewriter, ::mlir::transform::TransformResults &transformResults, ::mlir::transform::TransformState &state);
  void getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects);
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
public:
};
} // namespace transform
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::transform::EliminateEmptyTensorsOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::EmptyTensorToAllocTensorOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class EmptyTensorToAllocTensorOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  EmptyTensorToAllocTensorOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class EmptyTensorToAllocTensorOpGenericAdaptor : public detail::EmptyTensorToAllocTensorOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::EmptyTensorToAllocTensorOpGenericAdaptorBase;
public:
  EmptyTensorToAllocTensorOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  EmptyTensorToAllocTensorOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : EmptyTensorToAllocTensorOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

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
class EmptyTensorToAllocTensorOpAdaptor : public EmptyTensorToAllocTensorOpGenericAdaptor<::mlir::ValueRange> {
public:
  using EmptyTensorToAllocTensorOpGenericAdaptor::EmptyTensorToAllocTensorOpGenericAdaptor;
  EmptyTensorToAllocTensorOpAdaptor(EmptyTensorToAllocTensorOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class EmptyTensorToAllocTensorOp : public ::mlir::Op<EmptyTensorToAllocTensorOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::transform::OperationType>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::OneOperand, ::mlir::OpTrait::OpInvariants, ::mlir::transform::FunctionalStyleTransformOpTrait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::transform::TransformOpInterface::Trait, ::mlir::transform::TransformEachOpTrait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = EmptyTensorToAllocTensorOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = EmptyTensorToAllocTensorOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("transform.bufferization.empty_tensor_to_alloc_tensor");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::transform::OperationType> getTarget();
  ::mlir::MutableOperandRange getTargetMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::TypedValue<::mlir::transform::OperationType> getTransformed();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type transformed, ::mlir::Value target);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
public:
  ::mlir::DiagnosedSilenceableFailure applyToOne(
      ::mlir::transform::TransformRewriter &rewriter,
      ::mlir::tensor::EmptyOp target,
      ::mlir::transform::ApplyToEachResultList &results,
      ::mlir::transform::TransformState &state);
};
} // namespace transform
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::transform::EmptyTensorToAllocTensorOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::OneShotBufferizeOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class OneShotBufferizeOpGenericAdaptorBase {
public:
  struct Properties {
    using allow_return_allocsTy = ::mlir::BoolAttr;
    allow_return_allocsTy allow_return_allocs;

    auto getAllowReturnAllocs() {
      auto &propStorage = this->allow_return_allocs;
      return ::llvm::dyn_cast_or_null<::mlir::BoolAttr>(propStorage);
    }
    void setAllowReturnAllocs(const ::mlir::BoolAttr &propValue) {
      this->allow_return_allocs = propValue;
    }
    using allow_unknown_opsTy = ::mlir::BoolAttr;
    allow_unknown_opsTy allow_unknown_ops;

    auto getAllowUnknownOps() {
      auto &propStorage = this->allow_unknown_ops;
      return ::llvm::dyn_cast_or_null<::mlir::BoolAttr>(propStorage);
    }
    void setAllowUnknownOps(const ::mlir::BoolAttr &propValue) {
      this->allow_unknown_ops = propValue;
    }
    using bufferize_function_boundariesTy = ::mlir::BoolAttr;
    bufferize_function_boundariesTy bufferize_function_boundaries;

    auto getBufferizeFunctionBoundaries() {
      auto &propStorage = this->bufferize_function_boundaries;
      return ::llvm::dyn_cast_or_null<::mlir::BoolAttr>(propStorage);
    }
    void setBufferizeFunctionBoundaries(const ::mlir::BoolAttr &propValue) {
      this->bufferize_function_boundaries = propValue;
    }
    using create_deallocsTy = ::mlir::BoolAttr;
    create_deallocsTy create_deallocs;

    auto getCreateDeallocs() {
      auto &propStorage = this->create_deallocs;
      return ::llvm::dyn_cast_or_null<::mlir::BoolAttr>(propStorage);
    }
    void setCreateDeallocs(const ::mlir::BoolAttr &propValue) {
      this->create_deallocs = propValue;
    }
    using function_boundary_type_conversionTy = ::mlir::bufferization::LayoutMapOptionAttr;
    function_boundary_type_conversionTy function_boundary_type_conversion;

    auto getFunctionBoundaryTypeConversion() {
      auto &propStorage = this->function_boundary_type_conversion;
      return ::llvm::dyn_cast_or_null<::mlir::bufferization::LayoutMapOptionAttr>(propStorage);
    }
    void setFunctionBoundaryTypeConversion(const ::mlir::bufferization::LayoutMapOptionAttr &propValue) {
      this->function_boundary_type_conversion = propValue;
    }
    using memcpy_opTy = ::mlir::StringAttr;
    memcpy_opTy memcpy_op;

    auto getMemcpyOp() {
      auto &propStorage = this->memcpy_op;
      return ::llvm::dyn_cast_or_null<::mlir::StringAttr>(propStorage);
    }
    void setMemcpyOp(const ::mlir::StringAttr &propValue) {
      this->memcpy_op = propValue;
    }
    using print_conflictsTy = ::mlir::BoolAttr;
    print_conflictsTy print_conflicts;

    auto getPrintConflicts() {
      auto &propStorage = this->print_conflicts;
      return ::llvm::dyn_cast_or_null<::mlir::BoolAttr>(propStorage);
    }
    void setPrintConflicts(const ::mlir::BoolAttr &propValue) {
      this->print_conflicts = propValue;
    }
    using test_analysis_onlyTy = ::mlir::BoolAttr;
    test_analysis_onlyTy test_analysis_only;

    auto getTestAnalysisOnly() {
      auto &propStorage = this->test_analysis_only;
      return ::llvm::dyn_cast_or_null<::mlir::BoolAttr>(propStorage);
    }
    void setTestAnalysisOnly(const ::mlir::BoolAttr &propValue) {
      this->test_analysis_only = propValue;
    }
    bool operator==(const Properties &rhs) const {
      return 
        rhs.allow_return_allocs == this->allow_return_allocs &&
        rhs.allow_unknown_ops == this->allow_unknown_ops &&
        rhs.bufferize_function_boundaries == this->bufferize_function_boundaries &&
        rhs.create_deallocs == this->create_deallocs &&
        rhs.function_boundary_type_conversion == this->function_boundary_type_conversion &&
        rhs.memcpy_op == this->memcpy_op &&
        rhs.print_conflicts == this->print_conflicts &&
        rhs.test_analysis_only == this->test_analysis_only &&
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
  OneShotBufferizeOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {});

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes();
  ::mlir::bufferization::LayoutMapOptionAttr getFunctionBoundaryTypeConversionAttr();
  ::std::optional<::mlir::bufferization::LayoutMapOption> getFunctionBoundaryTypeConversion();
  ::mlir::BoolAttr getAllowReturnAllocsAttr();
  bool getAllowReturnAllocs();
  ::mlir::BoolAttr getAllowUnknownOpsAttr();
  bool getAllowUnknownOps();
  ::mlir::BoolAttr getBufferizeFunctionBoundariesAttr();
  bool getBufferizeFunctionBoundaries();
  ::mlir::BoolAttr getCreateDeallocsAttr();
  bool getCreateDeallocs();
  ::mlir::BoolAttr getTestAnalysisOnlyAttr();
  bool getTestAnalysisOnly();
  ::mlir::BoolAttr getPrintConflictsAttr();
  bool getPrintConflicts();
  ::mlir::StringAttr getMemcpyOpAttr();
  ::llvm::StringRef getMemcpyOp();
};
} // namespace detail
template <typename RangeT>
class OneShotBufferizeOpGenericAdaptor : public detail::OneShotBufferizeOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::OneShotBufferizeOpGenericAdaptorBase;
public:
  OneShotBufferizeOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  OneShotBufferizeOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : OneShotBufferizeOpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

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
class OneShotBufferizeOpAdaptor : public OneShotBufferizeOpGenericAdaptor<::mlir::ValueRange> {
public:
  using OneShotBufferizeOpGenericAdaptor::OneShotBufferizeOpGenericAdaptor;
  OneShotBufferizeOpAdaptor(OneShotBufferizeOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class OneShotBufferizeOp : public ::mlir::Op<OneShotBufferizeOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::transform::TransformHandleTypeInterface>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::OneOperand, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait, ::mlir::transform::FunctionalStyleTransformOpTrait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::transform::TransformOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = OneShotBufferizeOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = OneShotBufferizeOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  using Properties = FoldAdaptor::Properties;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("allow_return_allocs"), ::llvm::StringRef("allow_unknown_ops"), ::llvm::StringRef("bufferize_function_boundaries"), ::llvm::StringRef("create_deallocs"), ::llvm::StringRef("function_boundary_type_conversion"), ::llvm::StringRef("memcpy_op"), ::llvm::StringRef("print_conflicts"), ::llvm::StringRef("test_analysis_only")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getAllowReturnAllocsAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getAllowReturnAllocsAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  ::mlir::StringAttr getAllowUnknownOpsAttrName() {
    return getAttributeNameForIndex(1);
  }

  static ::mlir::StringAttr getAllowUnknownOpsAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 1);
  }

  ::mlir::StringAttr getBufferizeFunctionBoundariesAttrName() {
    return getAttributeNameForIndex(2);
  }

  static ::mlir::StringAttr getBufferizeFunctionBoundariesAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 2);
  }

  ::mlir::StringAttr getCreateDeallocsAttrName() {
    return getAttributeNameForIndex(3);
  }

  static ::mlir::StringAttr getCreateDeallocsAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 3);
  }

  ::mlir::StringAttr getFunctionBoundaryTypeConversionAttrName() {
    return getAttributeNameForIndex(4);
  }

  static ::mlir::StringAttr getFunctionBoundaryTypeConversionAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 4);
  }

  ::mlir::StringAttr getMemcpyOpAttrName() {
    return getAttributeNameForIndex(5);
  }

  static ::mlir::StringAttr getMemcpyOpAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 5);
  }

  ::mlir::StringAttr getPrintConflictsAttrName() {
    return getAttributeNameForIndex(6);
  }

  static ::mlir::StringAttr getPrintConflictsAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 6);
  }

  ::mlir::StringAttr getTestAnalysisOnlyAttrName() {
    return getAttributeNameForIndex(7);
  }

  static ::mlir::StringAttr getTestAnalysisOnlyAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 7);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("transform.bufferization.one_shot_bufferize");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> getTarget();
  ::mlir::MutableOperandRange getTargetMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> getTransformed();
  static ::mlir::LogicalResult setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::mlir::InFlightDiagnostic *diag);
  static ::mlir::Attribute getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop);
  static llvm::hash_code computePropertiesHash(const Properties &prop);
  static std::optional<mlir::Attribute> getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name);
  static void setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value);
  static void populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs);
  static ::mlir::LogicalResult verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> getDiag);
  static ::mlir::LogicalResult readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state);
  void writeProperties(::mlir::DialectBytecodeWriter &writer);
  ::mlir::bufferization::LayoutMapOptionAttr getFunctionBoundaryTypeConversionAttr();
  ::std::optional<::mlir::bufferization::LayoutMapOption> getFunctionBoundaryTypeConversion();
  ::mlir::BoolAttr getAllowReturnAllocsAttr();
  bool getAllowReturnAllocs();
  ::mlir::BoolAttr getAllowUnknownOpsAttr();
  bool getAllowUnknownOps();
  ::mlir::BoolAttr getBufferizeFunctionBoundariesAttr();
  bool getBufferizeFunctionBoundaries();
  ::mlir::BoolAttr getCreateDeallocsAttr();
  bool getCreateDeallocs();
  ::mlir::BoolAttr getTestAnalysisOnlyAttr();
  bool getTestAnalysisOnly();
  ::mlir::BoolAttr getPrintConflictsAttr();
  bool getPrintConflicts();
  ::mlir::StringAttr getMemcpyOpAttr();
  ::llvm::StringRef getMemcpyOp();
  void setFunctionBoundaryTypeConversionAttr(::mlir::bufferization::LayoutMapOptionAttr attr);
  void setFunctionBoundaryTypeConversion(::std::optional<::mlir::bufferization::LayoutMapOption> attrValue);
  void setAllowReturnAllocsAttr(::mlir::BoolAttr attr);
  void setAllowReturnAllocs(bool attrValue);
  void setAllowUnknownOpsAttr(::mlir::BoolAttr attr);
  void setAllowUnknownOps(bool attrValue);
  void setBufferizeFunctionBoundariesAttr(::mlir::BoolAttr attr);
  void setBufferizeFunctionBoundaries(bool attrValue);
  void setCreateDeallocsAttr(::mlir::BoolAttr attr);
  void setCreateDeallocs(bool attrValue);
  void setTestAnalysisOnlyAttr(::mlir::BoolAttr attr);
  void setTestAnalysisOnly(bool attrValue);
  void setPrintConflictsAttr(::mlir::BoolAttr attr);
  void setPrintConflicts(bool attrValue);
  void setMemcpyOpAttr(::mlir::StringAttr attr);
  void setMemcpyOp(::llvm::StringRef attrValue);
  ::mlir::Attribute removeFunctionBoundaryTypeConversionAttr();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type transformed, ::mlir::Value target, /*optional*/::mlir::bufferization::LayoutMapOptionAttr function_boundary_type_conversion, ::mlir::BoolAttr allow_return_allocs, ::mlir::BoolAttr allow_unknown_ops, ::mlir::BoolAttr bufferize_function_boundaries, ::mlir::BoolAttr create_deallocs, ::mlir::BoolAttr test_analysis_only, ::mlir::BoolAttr print_conflicts, ::mlir::StringAttr memcpy_op);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, /*optional*/::mlir::bufferization::LayoutMapOptionAttr function_boundary_type_conversion, ::mlir::BoolAttr allow_return_allocs, ::mlir::BoolAttr allow_unknown_ops, ::mlir::BoolAttr bufferize_function_boundaries, ::mlir::BoolAttr create_deallocs, ::mlir::BoolAttr test_analysis_only, ::mlir::BoolAttr print_conflicts, ::mlir::StringAttr memcpy_op);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type transformed, ::mlir::Value target, /*optional*/::mlir::bufferization::LayoutMapOptionAttr function_boundary_type_conversion, bool allow_return_allocs = false, bool allow_unknown_ops = false, bool bufferize_function_boundaries = false, bool create_deallocs = true, bool test_analysis_only = false, bool print_conflicts = false, ::llvm::StringRef memcpy_op = "memref.copy");
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, /*optional*/::mlir::bufferization::LayoutMapOptionAttr function_boundary_type_conversion, bool allow_return_allocs = false, bool allow_unknown_ops = false, bool bufferize_function_boundaries = false, bool create_deallocs = true, bool test_analysis_only = false, bool print_conflicts = false, ::llvm::StringRef memcpy_op = "memref.copy");
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static void populateDefaultProperties(::mlir::OperationName opName, Properties &properties);
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  ::mlir::LogicalResult verify();
  ::mlir::DiagnosedSilenceableFailure apply(::mlir::transform::TransformRewriter &rewriter, ::mlir::transform::TransformResults &transformResults, ::mlir::transform::TransformState &state);
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
private:
  ::mlir::StringAttr getAttributeNameForIndex(unsigned index) {
    return getAttributeNameForIndex((*this)->getName(), index);
  }

  static ::mlir::StringAttr getAttributeNameForIndex(::mlir::OperationName name, unsigned index) {
    assert(index < 8 && "invalid attribute index");
    assert(name.getStringRef() == getOperationName() && "invalid operation name");
    return name.getAttributeNames()[index];
  }

public:
};
} // namespace transform
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::transform::OneShotBufferizeOp)


#endif  // GET_OP_CLASSES

