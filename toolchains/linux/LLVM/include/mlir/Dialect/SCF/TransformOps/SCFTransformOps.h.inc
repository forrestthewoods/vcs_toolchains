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
class ApplyForLoopCanonicalizationPatternsOp;
} // namespace transform
} // namespace mlir
namespace mlir {
namespace transform {
class GetParentForOp;
} // namespace transform
} // namespace mlir
namespace mlir {
namespace transform {
class LoopCoalesceOp;
} // namespace transform
} // namespace mlir
namespace mlir {
namespace transform {
class LoopOutlineOp;
} // namespace transform
} // namespace mlir
namespace mlir {
namespace transform {
class LoopPeelOp;
} // namespace transform
} // namespace mlir
namespace mlir {
namespace transform {
class LoopPipelineOp;
} // namespace transform
} // namespace mlir
namespace mlir {
namespace transform {
class LoopPromoteIfOneIterationOp;
} // namespace transform
} // namespace mlir
namespace mlir {
namespace transform {
class LoopUnrollOp;
} // namespace transform
} // namespace mlir
namespace mlir {
namespace transform {
class TakeAssumedBranchOp;
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
// ::mlir::transform::ApplyForLoopCanonicalizationPatternsOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class ApplyForLoopCanonicalizationPatternsOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  ApplyForLoopCanonicalizationPatternsOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class ApplyForLoopCanonicalizationPatternsOpGenericAdaptor : public detail::ApplyForLoopCanonicalizationPatternsOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::ApplyForLoopCanonicalizationPatternsOpGenericAdaptorBase;
public:
  ApplyForLoopCanonicalizationPatternsOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  ApplyForLoopCanonicalizationPatternsOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : ApplyForLoopCanonicalizationPatternsOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

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
class ApplyForLoopCanonicalizationPatternsOpAdaptor : public ApplyForLoopCanonicalizationPatternsOpGenericAdaptor<::mlir::ValueRange> {
public:
  using ApplyForLoopCanonicalizationPatternsOpGenericAdaptor::ApplyForLoopCanonicalizationPatternsOpGenericAdaptor;
  ApplyForLoopCanonicalizationPatternsOpAdaptor(ApplyForLoopCanonicalizationPatternsOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class ApplyForLoopCanonicalizationPatternsOp : public ::mlir::Op<ApplyForLoopCanonicalizationPatternsOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::ZeroResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::ZeroOperands, ::mlir::OpTrait::OpInvariants, ::mlir::transform::PatternDescriptorOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = ApplyForLoopCanonicalizationPatternsOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = ApplyForLoopCanonicalizationPatternsOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("transform.apply_patterns.scf.for_loop_canonicalization");
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
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::transform::ApplyForLoopCanonicalizationPatternsOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::GetParentForOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class GetParentForOpGenericAdaptorBase {
public:
  struct Properties {
    using affineTy = ::mlir::BoolAttr;
    affineTy affine;

    auto getAffine() {
      auto &propStorage = this->affine;
      return ::llvm::dyn_cast_or_null<::mlir::BoolAttr>(propStorage);
    }
    void setAffine(const ::mlir::BoolAttr &propValue) {
      this->affine = propValue;
    }
    using num_loopsTy = ::mlir::IntegerAttr;
    num_loopsTy num_loops;

    auto getNumLoops() {
      auto &propStorage = this->num_loops;
      return ::llvm::dyn_cast_or_null<::mlir::IntegerAttr>(propStorage);
    }
    void setNumLoops(const ::mlir::IntegerAttr &propValue) {
      this->num_loops = propValue;
    }
    bool operator==(const Properties &rhs) const {
      return 
        rhs.affine == this->affine &&
        rhs.num_loops == this->num_loops &&
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
  GetParentForOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {});

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes();
  ::mlir::IntegerAttr getNumLoopsAttr();
  uint64_t getNumLoops();
  ::mlir::BoolAttr getAffineAttr();
  bool getAffine();
};
} // namespace detail
template <typename RangeT>
class GetParentForOpGenericAdaptor : public detail::GetParentForOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::GetParentForOpGenericAdaptorBase;
public:
  GetParentForOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  GetParentForOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : GetParentForOpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

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
class GetParentForOpAdaptor : public GetParentForOpGenericAdaptor<::mlir::ValueRange> {
public:
  using GetParentForOpGenericAdaptor::GetParentForOpGenericAdaptor;
  GetParentForOpAdaptor(GetParentForOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class GetParentForOp : public ::mlir::Op<GetParentForOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::transform::TransformHandleTypeInterface>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::OneOperand, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait, ::mlir::transform::NavigationTransformOpTrait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::transform::TransformOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = GetParentForOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = GetParentForOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  using Properties = FoldAdaptor::Properties;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("affine"), ::llvm::StringRef("num_loops")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getAffineAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getAffineAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  ::mlir::StringAttr getNumLoopsAttrName() {
    return getAttributeNameForIndex(1);
  }

  static ::mlir::StringAttr getNumLoopsAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 1);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("transform.loop.get_parent_for");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> getTarget();
  ::mlir::MutableOperandRange getTargetMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> getParent();
  static ::mlir::LogicalResult setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::mlir::InFlightDiagnostic *diag);
  static ::mlir::Attribute getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop);
  static llvm::hash_code computePropertiesHash(const Properties &prop);
  static std::optional<mlir::Attribute> getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name);
  static void setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value);
  static void populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs);
  static ::mlir::LogicalResult verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> getDiag);
  static ::mlir::LogicalResult readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state);
  void writeProperties(::mlir::DialectBytecodeWriter &writer);
  ::mlir::IntegerAttr getNumLoopsAttr();
  uint64_t getNumLoops();
  ::mlir::BoolAttr getAffineAttr();
  bool getAffine();
  void setNumLoopsAttr(::mlir::IntegerAttr attr);
  void setNumLoops(uint64_t attrValue);
  void setAffineAttr(::mlir::BoolAttr attr);
  void setAffine(bool attrValue);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type parent, ::mlir::Value target, ::mlir::IntegerAttr num_loops, ::mlir::BoolAttr affine);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, ::mlir::IntegerAttr num_loops, ::mlir::BoolAttr affine);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type parent, ::mlir::Value target, uint64_t num_loops = 1, bool affine = false);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, uint64_t num_loops = 1, bool affine = false);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static void populateDefaultProperties(::mlir::OperationName opName, Properties &properties);
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  ::mlir::DiagnosedSilenceableFailure apply(::mlir::transform::TransformRewriter &rewriter, ::mlir::transform::TransformResults &transformResults, ::mlir::transform::TransformState &state);
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
};
} // namespace transform
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::transform::GetParentForOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::LoopCoalesceOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class LoopCoalesceOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  LoopCoalesceOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class LoopCoalesceOpGenericAdaptor : public detail::LoopCoalesceOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::LoopCoalesceOpGenericAdaptorBase;
public:
  LoopCoalesceOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  LoopCoalesceOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : LoopCoalesceOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

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
class LoopCoalesceOpAdaptor : public LoopCoalesceOpGenericAdaptor<::mlir::ValueRange> {
public:
  using LoopCoalesceOpGenericAdaptor::LoopCoalesceOpGenericAdaptor;
  LoopCoalesceOpAdaptor(LoopCoalesceOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class LoopCoalesceOp : public ::mlir::Op<LoopCoalesceOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::transform::TransformHandleTypeInterface>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::OneOperand, ::mlir::OpTrait::OpInvariants, ::mlir::transform::FunctionalStyleTransformOpTrait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::transform::TransformOpInterface::Trait, ::mlir::transform::TransformEachOpTrait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = LoopCoalesceOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = LoopCoalesceOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("transform.loop.coalesce");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> getTarget();
  ::mlir::MutableOperandRange getTargetMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> getTransformed();
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
      ::mlir::Operation *target,
      ::mlir::transform::ApplyToEachResultList &results,
      ::mlir::transform::TransformState &state);
};
} // namespace transform
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::transform::LoopCoalesceOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::LoopOutlineOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class LoopOutlineOpGenericAdaptorBase {
public:
  struct Properties {
    using func_nameTy = ::mlir::StringAttr;
    func_nameTy func_name;

    auto getFuncName() {
      auto &propStorage = this->func_name;
      return ::llvm::cast<::mlir::StringAttr>(propStorage);
    }
    void setFuncName(const ::mlir::StringAttr &propValue) {
      this->func_name = propValue;
    }
    bool operator==(const Properties &rhs) const {
      return 
        rhs.func_name == this->func_name &&
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
  LoopOutlineOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {});

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes();
  ::mlir::StringAttr getFuncNameAttr();
  ::llvm::StringRef getFuncName();
};
} // namespace detail
template <typename RangeT>
class LoopOutlineOpGenericAdaptor : public detail::LoopOutlineOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::LoopOutlineOpGenericAdaptorBase;
public:
  LoopOutlineOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  LoopOutlineOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : LoopOutlineOpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

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
class LoopOutlineOpAdaptor : public LoopOutlineOpGenericAdaptor<::mlir::ValueRange> {
public:
  using LoopOutlineOpGenericAdaptor::LoopOutlineOpGenericAdaptor;
  LoopOutlineOpAdaptor(LoopOutlineOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class LoopOutlineOp : public ::mlir::Op<LoopOutlineOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::NResults<2>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::OneOperand, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait, ::mlir::transform::FunctionalStyleTransformOpTrait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::transform::TransformOpInterface::Trait, ::mlir::OpAsmOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = LoopOutlineOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = LoopOutlineOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  using Properties = FoldAdaptor::Properties;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("func_name")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getFuncNameAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getFuncNameAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  void getAsmResultNames(::mlir::OpAsmSetValueNameFn setNameFn);
  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("transform.loop.outline");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> getTarget();
  ::mlir::MutableOperandRange getTargetMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> getFunction();
  ::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> getCall();
  static ::mlir::LogicalResult setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::mlir::InFlightDiagnostic *diag);
  static ::mlir::Attribute getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop);
  static llvm::hash_code computePropertiesHash(const Properties &prop);
  static std::optional<mlir::Attribute> getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name);
  static void setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value);
  static void populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs);
  static ::mlir::LogicalResult verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> getDiag);
  static ::mlir::LogicalResult readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state);
  void writeProperties(::mlir::DialectBytecodeWriter &writer);
  ::mlir::StringAttr getFuncNameAttr();
  ::llvm::StringRef getFuncName();
  void setFuncNameAttr(::mlir::StringAttr attr);
  void setFuncName(::llvm::StringRef attrValue);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type function, ::mlir::Type call, ::mlir::Value target, ::mlir::StringAttr func_name);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, ::mlir::StringAttr func_name);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type function, ::mlir::Type call, ::mlir::Value target, ::llvm::StringRef func_name);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, ::llvm::StringRef func_name);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  ::mlir::DiagnosedSilenceableFailure apply(::mlir::transform::TransformRewriter &rewriter, ::mlir::transform::TransformResults &transformResults, ::mlir::transform::TransformState &state);
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
};
} // namespace transform
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::transform::LoopOutlineOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::LoopPeelOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class LoopPeelOpGenericAdaptorBase {
public:
  struct Properties {
    using fail_if_already_divisibleTy = ::mlir::BoolAttr;
    fail_if_already_divisibleTy fail_if_already_divisible;

    auto getFailIfAlreadyDivisible() {
      auto &propStorage = this->fail_if_already_divisible;
      return ::llvm::dyn_cast_or_null<::mlir::BoolAttr>(propStorage);
    }
    void setFailIfAlreadyDivisible(const ::mlir::BoolAttr &propValue) {
      this->fail_if_already_divisible = propValue;
    }
    bool operator==(const Properties &rhs) const {
      return 
        rhs.fail_if_already_divisible == this->fail_if_already_divisible &&
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
  LoopPeelOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {});

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes();
  ::mlir::BoolAttr getFailIfAlreadyDivisibleAttr();
  bool getFailIfAlreadyDivisible();
};
} // namespace detail
template <typename RangeT>
class LoopPeelOpGenericAdaptor : public detail::LoopPeelOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::LoopPeelOpGenericAdaptorBase;
public:
  LoopPeelOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  LoopPeelOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : LoopPeelOpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

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
class LoopPeelOpAdaptor : public LoopPeelOpGenericAdaptor<::mlir::ValueRange> {
public:
  using LoopPeelOpGenericAdaptor::LoopPeelOpGenericAdaptor;
  LoopPeelOpAdaptor(LoopPeelOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class LoopPeelOp : public ::mlir::Op<LoopPeelOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::transform::TransformHandleTypeInterface>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::OneOperand, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait, ::mlir::transform::FunctionalStyleTransformOpTrait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::transform::TransformOpInterface::Trait, ::mlir::transform::TransformEachOpTrait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = LoopPeelOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = LoopPeelOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  using Properties = FoldAdaptor::Properties;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("fail_if_already_divisible")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getFailIfAlreadyDivisibleAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getFailIfAlreadyDivisibleAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("transform.loop.peel");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::transform::OperationType> getTarget();
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
  ::mlir::BoolAttr getFailIfAlreadyDivisibleAttr();
  bool getFailIfAlreadyDivisible();
  void setFailIfAlreadyDivisibleAttr(::mlir::BoolAttr attr);
  void setFailIfAlreadyDivisible(bool attrValue);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type transformed, ::mlir::Value target, ::mlir::BoolAttr fail_if_already_divisible);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, ::mlir::BoolAttr fail_if_already_divisible);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type transformed, ::mlir::Value target, bool fail_if_already_divisible = false);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, bool fail_if_already_divisible = false);
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
    assert(index < 1 && "invalid attribute index");
    assert(name.getStringRef() == getOperationName() && "invalid operation name");
    return name.getAttributeNames()[index];
  }

public:
  ::mlir::DiagnosedSilenceableFailure applyToOne(
      ::mlir::transform::TransformRewriter &rewriter,
      ::mlir::scf::ForOp target,
      ::mlir::transform::ApplyToEachResultList &results,
      ::mlir::transform::TransformState &state);
};
} // namespace transform
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::transform::LoopPeelOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::LoopPipelineOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class LoopPipelineOpGenericAdaptorBase {
public:
  struct Properties {
    using iteration_intervalTy = ::mlir::IntegerAttr;
    iteration_intervalTy iteration_interval;

    auto getIterationInterval() {
      auto &propStorage = this->iteration_interval;
      return ::llvm::dyn_cast_or_null<::mlir::IntegerAttr>(propStorage);
    }
    void setIterationInterval(const ::mlir::IntegerAttr &propValue) {
      this->iteration_interval = propValue;
    }
    using read_latencyTy = ::mlir::IntegerAttr;
    read_latencyTy read_latency;

    auto getReadLatency() {
      auto &propStorage = this->read_latency;
      return ::llvm::dyn_cast_or_null<::mlir::IntegerAttr>(propStorage);
    }
    void setReadLatency(const ::mlir::IntegerAttr &propValue) {
      this->read_latency = propValue;
    }
    bool operator==(const Properties &rhs) const {
      return 
        rhs.iteration_interval == this->iteration_interval &&
        rhs.read_latency == this->read_latency &&
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
  LoopPipelineOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {});

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes();
  ::mlir::IntegerAttr getIterationIntervalAttr();
  uint64_t getIterationInterval();
  ::mlir::IntegerAttr getReadLatencyAttr();
  uint64_t getReadLatency();
};
} // namespace detail
template <typename RangeT>
class LoopPipelineOpGenericAdaptor : public detail::LoopPipelineOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::LoopPipelineOpGenericAdaptorBase;
public:
  LoopPipelineOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  LoopPipelineOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : LoopPipelineOpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

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
class LoopPipelineOpAdaptor : public LoopPipelineOpGenericAdaptor<::mlir::ValueRange> {
public:
  using LoopPipelineOpGenericAdaptor::LoopPipelineOpGenericAdaptor;
  LoopPipelineOpAdaptor(LoopPipelineOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class LoopPipelineOp : public ::mlir::Op<LoopPipelineOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::transform::TransformHandleTypeInterface>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::OneOperand, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait, ::mlir::transform::FunctionalStyleTransformOpTrait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::transform::TransformOpInterface::Trait, ::mlir::transform::TransformEachOpTrait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = LoopPipelineOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = LoopPipelineOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  using Properties = FoldAdaptor::Properties;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("iteration_interval"), ::llvm::StringRef("read_latency")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getIterationIntervalAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getIterationIntervalAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  ::mlir::StringAttr getReadLatencyAttrName() {
    return getAttributeNameForIndex(1);
  }

  static ::mlir::StringAttr getReadLatencyAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 1);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("transform.loop.pipeline");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::transform::OperationType> getTarget();
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
  ::mlir::IntegerAttr getIterationIntervalAttr();
  uint64_t getIterationInterval();
  ::mlir::IntegerAttr getReadLatencyAttr();
  uint64_t getReadLatency();
  void setIterationIntervalAttr(::mlir::IntegerAttr attr);
  void setIterationInterval(uint64_t attrValue);
  void setReadLatencyAttr(::mlir::IntegerAttr attr);
  void setReadLatency(uint64_t attrValue);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type transformed, ::mlir::Value target, ::mlir::IntegerAttr iteration_interval, ::mlir::IntegerAttr read_latency);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, ::mlir::IntegerAttr iteration_interval, ::mlir::IntegerAttr read_latency);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type transformed, ::mlir::Value target, uint64_t iteration_interval = 1, uint64_t read_latency = 10);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, uint64_t iteration_interval = 1, uint64_t read_latency = 10);
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
    assert(index < 2 && "invalid attribute index");
    assert(name.getStringRef() == getOperationName() && "invalid operation name");
    return name.getAttributeNames()[index];
  }

public:
  ::mlir::DiagnosedSilenceableFailure applyToOne(
      ::mlir::transform::TransformRewriter &rewriter,
      ::mlir::scf::ForOp target,
      ::mlir::transform::ApplyToEachResultList &results,
      ::mlir::transform::TransformState &state);
};
} // namespace transform
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::transform::LoopPipelineOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::LoopPromoteIfOneIterationOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class LoopPromoteIfOneIterationOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  LoopPromoteIfOneIterationOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class LoopPromoteIfOneIterationOpGenericAdaptor : public detail::LoopPromoteIfOneIterationOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::LoopPromoteIfOneIterationOpGenericAdaptorBase;
public:
  LoopPromoteIfOneIterationOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  LoopPromoteIfOneIterationOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : LoopPromoteIfOneIterationOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

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
class LoopPromoteIfOneIterationOpAdaptor : public LoopPromoteIfOneIterationOpGenericAdaptor<::mlir::ValueRange> {
public:
  using LoopPromoteIfOneIterationOpGenericAdaptor::LoopPromoteIfOneIterationOpGenericAdaptor;
  LoopPromoteIfOneIterationOpAdaptor(LoopPromoteIfOneIterationOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class LoopPromoteIfOneIterationOp : public ::mlir::Op<LoopPromoteIfOneIterationOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::ZeroResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::OneOperand, ::mlir::OpTrait::OpInvariants, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::transform::TransformOpInterface::Trait, ::mlir::transform::TransformEachOpTrait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = LoopPromoteIfOneIterationOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = LoopPromoteIfOneIterationOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("transform.loop.promote_if_one_iteration");
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
      ::mlir::LoopLikeOpInterface target,
      ::mlir::transform::ApplyToEachResultList &results,
      ::mlir::transform::TransformState &state);
};
} // namespace transform
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::transform::LoopPromoteIfOneIterationOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::LoopUnrollOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class LoopUnrollOpGenericAdaptorBase {
public:
  struct Properties {
    using factorTy = ::mlir::IntegerAttr;
    factorTy factor;

    auto getFactor() {
      auto &propStorage = this->factor;
      return ::llvm::cast<::mlir::IntegerAttr>(propStorage);
    }
    void setFactor(const ::mlir::IntegerAttr &propValue) {
      this->factor = propValue;
    }
    bool operator==(const Properties &rhs) const {
      return 
        rhs.factor == this->factor &&
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
  LoopUnrollOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {});

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes();
  ::mlir::IntegerAttr getFactorAttr();
  uint64_t getFactor();
};
} // namespace detail
template <typename RangeT>
class LoopUnrollOpGenericAdaptor : public detail::LoopUnrollOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::LoopUnrollOpGenericAdaptorBase;
public:
  LoopUnrollOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  LoopUnrollOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : LoopUnrollOpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

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
class LoopUnrollOpAdaptor : public LoopUnrollOpGenericAdaptor<::mlir::ValueRange> {
public:
  using LoopUnrollOpGenericAdaptor::LoopUnrollOpGenericAdaptor;
  LoopUnrollOpAdaptor(LoopUnrollOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class LoopUnrollOp : public ::mlir::Op<LoopUnrollOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::ZeroResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::OneOperand, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait, ::mlir::transform::FunctionalStyleTransformOpTrait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::transform::TransformOpInterface::Trait, ::mlir::transform::TransformEachOpTrait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = LoopUnrollOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = LoopUnrollOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  using Properties = FoldAdaptor::Properties;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("factor")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getFactorAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getFactorAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("transform.loop.unroll");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> getTarget();
  ::mlir::MutableOperandRange getTargetMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  static ::mlir::LogicalResult setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::mlir::InFlightDiagnostic *diag);
  static ::mlir::Attribute getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop);
  static llvm::hash_code computePropertiesHash(const Properties &prop);
  static std::optional<mlir::Attribute> getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name);
  static void setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value);
  static void populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs);
  static ::mlir::LogicalResult verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> getDiag);
  static ::mlir::LogicalResult readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state);
  void writeProperties(::mlir::DialectBytecodeWriter &writer);
  ::mlir::IntegerAttr getFactorAttr();
  uint64_t getFactor();
  void setFactorAttr(::mlir::IntegerAttr attr);
  void setFactor(uint64_t attrValue);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value target, ::mlir::IntegerAttr factor);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, ::mlir::IntegerAttr factor);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value target, uint64_t factor);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, uint64_t factor);
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
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::transform::LoopUnrollOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::TakeAssumedBranchOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class TakeAssumedBranchOpGenericAdaptorBase {
public:
  struct Properties {
    using take_else_branchTy = ::mlir::UnitAttr;
    take_else_branchTy take_else_branch;

    auto getTakeElseBranch() {
      auto &propStorage = this->take_else_branch;
      return ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(propStorage);
    }
    void setTakeElseBranch(const ::mlir::UnitAttr &propValue) {
      this->take_else_branch = propValue;
    }
    bool operator==(const Properties &rhs) const {
      return 
        rhs.take_else_branch == this->take_else_branch &&
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
  TakeAssumedBranchOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {});

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes();
  ::mlir::UnitAttr getTakeElseBranchAttr();
  ::std::optional<bool> getTakeElseBranch();
};
} // namespace detail
template <typename RangeT>
class TakeAssumedBranchOpGenericAdaptor : public detail::TakeAssumedBranchOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::TakeAssumedBranchOpGenericAdaptorBase;
public:
  TakeAssumedBranchOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  TakeAssumedBranchOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : TakeAssumedBranchOpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

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
class TakeAssumedBranchOpAdaptor : public TakeAssumedBranchOpGenericAdaptor<::mlir::ValueRange> {
public:
  using TakeAssumedBranchOpGenericAdaptor::TakeAssumedBranchOpGenericAdaptor;
  TakeAssumedBranchOpAdaptor(TakeAssumedBranchOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class TakeAssumedBranchOp : public ::mlir::Op<TakeAssumedBranchOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::ZeroResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::OneOperand, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::transform::TransformOpInterface::Trait, ::mlir::transform::TransformEachOpTrait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = TakeAssumedBranchOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = TakeAssumedBranchOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  using Properties = FoldAdaptor::Properties;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("take_else_branch")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getTakeElseBranchAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getTakeElseBranchAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("transform.scf.take_assumed_branch");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> getTarget();
  ::mlir::MutableOperandRange getTargetMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  static ::mlir::LogicalResult setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::mlir::InFlightDiagnostic *diag);
  static ::mlir::Attribute getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop);
  static llvm::hash_code computePropertiesHash(const Properties &prop);
  static std::optional<mlir::Attribute> getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name);
  static void setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value);
  static void populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs);
  static ::mlir::LogicalResult verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> getDiag);
  static ::mlir::LogicalResult readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state);
  void writeProperties(::mlir::DialectBytecodeWriter &writer);
  ::mlir::UnitAttr getTakeElseBranchAttr();
  ::std::optional<bool> getTakeElseBranch();
  void setTakeElseBranchAttr(::mlir::UnitAttr attr);
  void setTakeElseBranch(bool attrValue);
  ::mlir::Attribute removeTakeElseBranchAttr();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value target, /*optional*/::mlir::UnitAttr take_else_branch);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, /*optional*/::mlir::UnitAttr take_else_branch);
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
      ::mlir::scf::IfOp ifOp,
      ::mlir::transform::ApplyToEachResultList &results,
      ::mlir::transform::TransformState &state);
};
} // namespace transform
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::transform::TakeAssumedBranchOp)


#endif  // GET_OP_CLASSES

