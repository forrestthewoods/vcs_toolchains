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
class PDLMatchOp;
} // namespace transform
} // namespace mlir
namespace mlir {
namespace transform {
class WithPDLPatternsOp;
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
// ::mlir::transform::PDLMatchOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class PDLMatchOpGenericAdaptorBase {
public:
  struct Properties {
    using pattern_nameTy = ::mlir::SymbolRefAttr;
    pattern_nameTy pattern_name;

    auto getPatternName() {
      auto &propStorage = this->pattern_name;
      return ::llvm::cast<::mlir::SymbolRefAttr>(propStorage);
    }
    void setPatternName(const ::mlir::SymbolRefAttr &propValue) {
      this->pattern_name = propValue;
    }
    bool operator==(const Properties &rhs) const {
      return 
        rhs.pattern_name == this->pattern_name &&
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
  PDLMatchOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {});

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes();
  ::mlir::SymbolRefAttr getPatternNameAttr();
  ::mlir::SymbolRefAttr getPatternName();
};
} // namespace detail
template <typename RangeT>
class PDLMatchOpGenericAdaptor : public detail::PDLMatchOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::PDLMatchOpGenericAdaptorBase;
public:
  PDLMatchOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  PDLMatchOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : PDLMatchOpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getRoot() {
    return (*getODSOperands(0).begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class PDLMatchOpAdaptor : public PDLMatchOpGenericAdaptor<::mlir::ValueRange> {
public:
  using PDLMatchOpGenericAdaptor::PDLMatchOpGenericAdaptor;
  PDLMatchOpAdaptor(PDLMatchOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class PDLMatchOp : public ::mlir::Op<PDLMatchOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::transform::TransformHandleTypeInterface>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::OneOperand, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait, ::mlir::transform::TransformOpInterface::Trait, ::mlir::MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = PDLMatchOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = PDLMatchOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  using Properties = FoldAdaptor::Properties;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("pattern_name")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getPatternNameAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getPatternNameAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("transform.pdl_match");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> getRoot();
  ::mlir::MutableOperandRange getRootMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> getMatched();
  static ::mlir::LogicalResult setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::mlir::InFlightDiagnostic *diag);
  static ::mlir::Attribute getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop);
  static llvm::hash_code computePropertiesHash(const Properties &prop);
  static std::optional<mlir::Attribute> getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name);
  static void setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value);
  static void populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs);
  static ::mlir::LogicalResult verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> getDiag);
  static ::mlir::LogicalResult readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state);
  void writeProperties(::mlir::DialectBytecodeWriter &writer);
  ::mlir::SymbolRefAttr getPatternNameAttr();
  ::mlir::SymbolRefAttr getPatternName();
  void setPatternNameAttr(::mlir::SymbolRefAttr attr);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type matched, ::mlir::Value root, ::mlir::SymbolRefAttr pattern_name);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value root, ::mlir::SymbolRefAttr pattern_name);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  ::mlir::DiagnosedSilenceableFailure apply(::mlir::transform::TransformRewriter &rewriter, ::mlir::transform::TransformResults &transformResults, ::mlir::transform::TransformState &state);
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
};
} // namespace transform
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::transform::PDLMatchOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::WithPDLPatternsOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class WithPDLPatternsOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  WithPDLPatternsOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
  ::mlir::Region &getBody();
  ::mlir::RegionRange getRegions();
};
} // namespace detail
template <typename RangeT>
class WithPDLPatternsOpGenericAdaptor : public detail::WithPDLPatternsOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::WithPDLPatternsOpGenericAdaptorBase;
public:
  WithPDLPatternsOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  WithPDLPatternsOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : WithPDLPatternsOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getRoot() {
    auto operands = getODSOperands(0);
    return operands.empty() ? ValueT{} : (*operands.begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class WithPDLPatternsOpAdaptor : public WithPDLPatternsOpGenericAdaptor<::mlir::ValueRange> {
public:
  using WithPDLPatternsOpGenericAdaptor::WithPDLPatternsOpGenericAdaptor;
  WithPDLPatternsOpAdaptor(WithPDLPatternsOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class WithPDLPatternsOp : public ::mlir::Op<WithPDLPatternsOp, ::mlir::OpTrait::OneRegion, ::mlir::OpTrait::ZeroResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::VariadicOperands, ::mlir::OpTrait::NoTerminator, ::mlir::OpTrait::OpInvariants, ::mlir::transform::TransformOpInterface::Trait, ::mlir::OpAsmOpInterface::Trait, ::mlir::transform::PossibleTopLevelTransformOpTrait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::OpTrait::SymbolTable> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = WithPDLPatternsOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = WithPDLPatternsOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("transform.with_pdl_patterns");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> getRoot();
  ::mlir::MutableOperandRange getRootMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Region &getBody();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, /*optional*/::mlir::Value root);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, /*optional*/::mlir::Value root);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  ::mlir::LogicalResult verify();
  ::mlir::DiagnosedSilenceableFailure apply(::mlir::transform::TransformRewriter &rewriter, ::mlir::transform::TransformResults &transformResults, ::mlir::transform::TransformState &state);
  void getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects);
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
public:
  /// Allow the dialect prefix to be omitted.
  static StringRef getDefaultDialect() { return "transform"; }
};
} // namespace transform
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::transform::WithPDLPatternsOp)


#endif  // GET_OP_CLASSES
