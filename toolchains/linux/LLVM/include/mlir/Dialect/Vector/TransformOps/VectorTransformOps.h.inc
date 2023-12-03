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
class ApplyCastAwayVectorLeadingOneDimPatternsOp;
} // namespace transform
} // namespace mlir
namespace mlir {
namespace transform {
class ApplyLowerBroadcastPatternsOp;
} // namespace transform
} // namespace mlir
namespace mlir {
namespace transform {
class ApplyLowerContractionPatternsOp;
} // namespace transform
} // namespace mlir
namespace mlir {
namespace transform {
class ApplyLowerGatherPatternsOp;
} // namespace transform
} // namespace mlir
namespace mlir {
namespace transform {
class ApplyLowerMaskedTransfersPatternsOp;
} // namespace transform
} // namespace mlir
namespace mlir {
namespace transform {
class ApplyLowerMasksPatternsOp;
} // namespace transform
} // namespace mlir
namespace mlir {
namespace transform {
class ApplyLowerMultiReductionPatternsOp;
} // namespace transform
} // namespace mlir
namespace mlir {
namespace transform {
class ApplyLowerOuterProductPatternsOp;
} // namespace transform
} // namespace mlir
namespace mlir {
namespace transform {
class ApplyLowerScanPatternsOp;
} // namespace transform
} // namespace mlir
namespace mlir {
namespace transform {
class ApplyLowerShapeCastPatternsOp;
} // namespace transform
} // namespace mlir
namespace mlir {
namespace transform {
class ApplyLowerTransferPatternsOp;
} // namespace transform
} // namespace mlir
namespace mlir {
namespace transform {
class ApplyLowerTransposePatternsOp;
} // namespace transform
} // namespace mlir
namespace mlir {
namespace transform {
class ApplyMaterializeMasksPatternsOp;
} // namespace transform
} // namespace mlir
namespace mlir {
namespace transform {
class ApplyRankReducingSubviewPatternsOp;
} // namespace transform
} // namespace mlir
namespace mlir {
namespace transform {
class ApplySplitTransferFullPartialPatternsOp;
} // namespace transform
} // namespace mlir
namespace mlir {
namespace transform {
class ApplyTransferPermutationPatternsOp;
} // namespace transform
} // namespace mlir
namespace mlir {
namespace transform {
class ApplyTransferToScfPatternsOp;
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
// ::mlir::transform::ApplyCastAwayVectorLeadingOneDimPatternsOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class ApplyCastAwayVectorLeadingOneDimPatternsOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  ApplyCastAwayVectorLeadingOneDimPatternsOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class ApplyCastAwayVectorLeadingOneDimPatternsOpGenericAdaptor : public detail::ApplyCastAwayVectorLeadingOneDimPatternsOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::ApplyCastAwayVectorLeadingOneDimPatternsOpGenericAdaptorBase;
public:
  ApplyCastAwayVectorLeadingOneDimPatternsOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  ApplyCastAwayVectorLeadingOneDimPatternsOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : ApplyCastAwayVectorLeadingOneDimPatternsOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

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
class ApplyCastAwayVectorLeadingOneDimPatternsOpAdaptor : public ApplyCastAwayVectorLeadingOneDimPatternsOpGenericAdaptor<::mlir::ValueRange> {
public:
  using ApplyCastAwayVectorLeadingOneDimPatternsOpGenericAdaptor::ApplyCastAwayVectorLeadingOneDimPatternsOpGenericAdaptor;
  ApplyCastAwayVectorLeadingOneDimPatternsOpAdaptor(ApplyCastAwayVectorLeadingOneDimPatternsOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class ApplyCastAwayVectorLeadingOneDimPatternsOp : public ::mlir::Op<ApplyCastAwayVectorLeadingOneDimPatternsOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::ZeroResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::ZeroOperands, ::mlir::OpTrait::OpInvariants, ::mlir::transform::PatternDescriptorOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = ApplyCastAwayVectorLeadingOneDimPatternsOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = ApplyCastAwayVectorLeadingOneDimPatternsOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("transform.apply_patterns.vector.cast_away_vector_leading_one_dim");
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
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::transform::ApplyCastAwayVectorLeadingOneDimPatternsOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::ApplyLowerBroadcastPatternsOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class ApplyLowerBroadcastPatternsOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  ApplyLowerBroadcastPatternsOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class ApplyLowerBroadcastPatternsOpGenericAdaptor : public detail::ApplyLowerBroadcastPatternsOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::ApplyLowerBroadcastPatternsOpGenericAdaptorBase;
public:
  ApplyLowerBroadcastPatternsOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  ApplyLowerBroadcastPatternsOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : ApplyLowerBroadcastPatternsOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

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
class ApplyLowerBroadcastPatternsOpAdaptor : public ApplyLowerBroadcastPatternsOpGenericAdaptor<::mlir::ValueRange> {
public:
  using ApplyLowerBroadcastPatternsOpGenericAdaptor::ApplyLowerBroadcastPatternsOpGenericAdaptor;
  ApplyLowerBroadcastPatternsOpAdaptor(ApplyLowerBroadcastPatternsOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class ApplyLowerBroadcastPatternsOp : public ::mlir::Op<ApplyLowerBroadcastPatternsOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::ZeroResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::ZeroOperands, ::mlir::OpTrait::OpInvariants, ::mlir::transform::PatternDescriptorOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = ApplyLowerBroadcastPatternsOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = ApplyLowerBroadcastPatternsOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("transform.apply_patterns.vector.lower_broadcast");
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
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::transform::ApplyLowerBroadcastPatternsOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::ApplyLowerContractionPatternsOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class ApplyLowerContractionPatternsOpGenericAdaptorBase {
public:
  struct Properties {
    using lowering_strategyTy = ::mlir::vector::VectorContractLoweringAttr;
    lowering_strategyTy lowering_strategy;

    auto getLoweringStrategy() {
      auto &propStorage = this->lowering_strategy;
      return ::llvm::dyn_cast_or_null<::mlir::vector::VectorContractLoweringAttr>(propStorage);
    }
    void setLoweringStrategy(const ::mlir::vector::VectorContractLoweringAttr &propValue) {
      this->lowering_strategy = propValue;
    }
    bool operator==(const Properties &rhs) const {
      return 
        rhs.lowering_strategy == this->lowering_strategy &&
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
  ApplyLowerContractionPatternsOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {});

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes();
  ::mlir::vector::VectorContractLoweringAttr getLoweringStrategyAttr();
  ::mlir::vector::VectorContractLowering getLoweringStrategy();
};
} // namespace detail
template <typename RangeT>
class ApplyLowerContractionPatternsOpGenericAdaptor : public detail::ApplyLowerContractionPatternsOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::ApplyLowerContractionPatternsOpGenericAdaptorBase;
public:
  ApplyLowerContractionPatternsOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  ApplyLowerContractionPatternsOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : ApplyLowerContractionPatternsOpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

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
class ApplyLowerContractionPatternsOpAdaptor : public ApplyLowerContractionPatternsOpGenericAdaptor<::mlir::ValueRange> {
public:
  using ApplyLowerContractionPatternsOpGenericAdaptor::ApplyLowerContractionPatternsOpGenericAdaptor;
  ApplyLowerContractionPatternsOpAdaptor(ApplyLowerContractionPatternsOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class ApplyLowerContractionPatternsOp : public ::mlir::Op<ApplyLowerContractionPatternsOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::ZeroResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::ZeroOperands, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait, ::mlir::transform::PatternDescriptorOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = ApplyLowerContractionPatternsOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = ApplyLowerContractionPatternsOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  using Properties = FoldAdaptor::Properties;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("lowering_strategy")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getLoweringStrategyAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getLoweringStrategyAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("transform.apply_patterns.vector.lower_contraction");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
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
  ::mlir::vector::VectorContractLoweringAttr getLoweringStrategyAttr();
  ::mlir::vector::VectorContractLowering getLoweringStrategy();
  void setLoweringStrategyAttr(::mlir::vector::VectorContractLoweringAttr attr);
  void setLoweringStrategy(::mlir::vector::VectorContractLowering attrValue);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::vector::VectorContractLoweringAttr lowering_strategy);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::vector::VectorContractLoweringAttr lowering_strategy);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::vector::VectorContractLowering lowering_strategy = vector::VectorContractLowering::OuterProduct);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::vector::VectorContractLowering lowering_strategy = vector::VectorContractLowering::OuterProduct);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static void populateDefaultProperties(::mlir::OperationName opName, Properties &properties);
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  void populatePatterns(RewritePatternSet &patterns);
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
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::transform::ApplyLowerContractionPatternsOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::ApplyLowerGatherPatternsOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class ApplyLowerGatherPatternsOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  ApplyLowerGatherPatternsOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class ApplyLowerGatherPatternsOpGenericAdaptor : public detail::ApplyLowerGatherPatternsOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::ApplyLowerGatherPatternsOpGenericAdaptorBase;
public:
  ApplyLowerGatherPatternsOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  ApplyLowerGatherPatternsOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : ApplyLowerGatherPatternsOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

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
class ApplyLowerGatherPatternsOpAdaptor : public ApplyLowerGatherPatternsOpGenericAdaptor<::mlir::ValueRange> {
public:
  using ApplyLowerGatherPatternsOpGenericAdaptor::ApplyLowerGatherPatternsOpGenericAdaptor;
  ApplyLowerGatherPatternsOpAdaptor(ApplyLowerGatherPatternsOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class ApplyLowerGatherPatternsOp : public ::mlir::Op<ApplyLowerGatherPatternsOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::ZeroResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::ZeroOperands, ::mlir::OpTrait::OpInvariants, ::mlir::transform::PatternDescriptorOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = ApplyLowerGatherPatternsOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = ApplyLowerGatherPatternsOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("transform.apply_patterns.vector.lower_gather");
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
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::transform::ApplyLowerGatherPatternsOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::ApplyLowerMaskedTransfersPatternsOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class ApplyLowerMaskedTransfersPatternsOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  ApplyLowerMaskedTransfersPatternsOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class ApplyLowerMaskedTransfersPatternsOpGenericAdaptor : public detail::ApplyLowerMaskedTransfersPatternsOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::ApplyLowerMaskedTransfersPatternsOpGenericAdaptorBase;
public:
  ApplyLowerMaskedTransfersPatternsOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  ApplyLowerMaskedTransfersPatternsOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : ApplyLowerMaskedTransfersPatternsOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

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
class ApplyLowerMaskedTransfersPatternsOpAdaptor : public ApplyLowerMaskedTransfersPatternsOpGenericAdaptor<::mlir::ValueRange> {
public:
  using ApplyLowerMaskedTransfersPatternsOpGenericAdaptor::ApplyLowerMaskedTransfersPatternsOpGenericAdaptor;
  ApplyLowerMaskedTransfersPatternsOpAdaptor(ApplyLowerMaskedTransfersPatternsOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class ApplyLowerMaskedTransfersPatternsOp : public ::mlir::Op<ApplyLowerMaskedTransfersPatternsOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::ZeroResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::ZeroOperands, ::mlir::OpTrait::OpInvariants, ::mlir::transform::PatternDescriptorOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = ApplyLowerMaskedTransfersPatternsOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = ApplyLowerMaskedTransfersPatternsOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("transform.apply_patterns.vector.lower_masked_transfers");
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
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::transform::ApplyLowerMaskedTransfersPatternsOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::ApplyLowerMasksPatternsOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class ApplyLowerMasksPatternsOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  ApplyLowerMasksPatternsOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class ApplyLowerMasksPatternsOpGenericAdaptor : public detail::ApplyLowerMasksPatternsOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::ApplyLowerMasksPatternsOpGenericAdaptorBase;
public:
  ApplyLowerMasksPatternsOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  ApplyLowerMasksPatternsOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : ApplyLowerMasksPatternsOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

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
class ApplyLowerMasksPatternsOpAdaptor : public ApplyLowerMasksPatternsOpGenericAdaptor<::mlir::ValueRange> {
public:
  using ApplyLowerMasksPatternsOpGenericAdaptor::ApplyLowerMasksPatternsOpGenericAdaptor;
  ApplyLowerMasksPatternsOpAdaptor(ApplyLowerMasksPatternsOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class ApplyLowerMasksPatternsOp : public ::mlir::Op<ApplyLowerMasksPatternsOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::ZeroResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::ZeroOperands, ::mlir::OpTrait::OpInvariants, ::mlir::transform::PatternDescriptorOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = ApplyLowerMasksPatternsOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = ApplyLowerMasksPatternsOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("transform.apply_patterns.vector.lower_masks");
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
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::transform::ApplyLowerMasksPatternsOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::ApplyLowerMultiReductionPatternsOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class ApplyLowerMultiReductionPatternsOpGenericAdaptorBase {
public:
  struct Properties {
    using lowering_strategyTy = ::mlir::vector::VectorMultiReductionLoweringAttr;
    lowering_strategyTy lowering_strategy;

    auto getLoweringStrategy() {
      auto &propStorage = this->lowering_strategy;
      return ::llvm::dyn_cast_or_null<::mlir::vector::VectorMultiReductionLoweringAttr>(propStorage);
    }
    void setLoweringStrategy(const ::mlir::vector::VectorMultiReductionLoweringAttr &propValue) {
      this->lowering_strategy = propValue;
    }
    bool operator==(const Properties &rhs) const {
      return 
        rhs.lowering_strategy == this->lowering_strategy &&
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
  ApplyLowerMultiReductionPatternsOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {});

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes();
  ::mlir::vector::VectorMultiReductionLoweringAttr getLoweringStrategyAttr();
  ::mlir::vector::VectorMultiReductionLowering getLoweringStrategy();
};
} // namespace detail
template <typename RangeT>
class ApplyLowerMultiReductionPatternsOpGenericAdaptor : public detail::ApplyLowerMultiReductionPatternsOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::ApplyLowerMultiReductionPatternsOpGenericAdaptorBase;
public:
  ApplyLowerMultiReductionPatternsOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  ApplyLowerMultiReductionPatternsOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : ApplyLowerMultiReductionPatternsOpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

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
class ApplyLowerMultiReductionPatternsOpAdaptor : public ApplyLowerMultiReductionPatternsOpGenericAdaptor<::mlir::ValueRange> {
public:
  using ApplyLowerMultiReductionPatternsOpGenericAdaptor::ApplyLowerMultiReductionPatternsOpGenericAdaptor;
  ApplyLowerMultiReductionPatternsOpAdaptor(ApplyLowerMultiReductionPatternsOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class ApplyLowerMultiReductionPatternsOp : public ::mlir::Op<ApplyLowerMultiReductionPatternsOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::ZeroResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::ZeroOperands, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait, ::mlir::transform::PatternDescriptorOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = ApplyLowerMultiReductionPatternsOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = ApplyLowerMultiReductionPatternsOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  using Properties = FoldAdaptor::Properties;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("lowering_strategy")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getLoweringStrategyAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getLoweringStrategyAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("transform.apply_patterns.vector.lower_multi_reduction");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
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
  ::mlir::vector::VectorMultiReductionLoweringAttr getLoweringStrategyAttr();
  ::mlir::vector::VectorMultiReductionLowering getLoweringStrategy();
  void setLoweringStrategyAttr(::mlir::vector::VectorMultiReductionLoweringAttr attr);
  void setLoweringStrategy(::mlir::vector::VectorMultiReductionLowering attrValue);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::vector::VectorMultiReductionLoweringAttr lowering_strategy);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::vector::VectorMultiReductionLoweringAttr lowering_strategy);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::vector::VectorMultiReductionLowering lowering_strategy = vector::VectorMultiReductionLowering::InnerParallel);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::vector::VectorMultiReductionLowering lowering_strategy = vector::VectorMultiReductionLowering::InnerParallel);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static void populateDefaultProperties(::mlir::OperationName opName, Properties &properties);
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  void populatePatterns(RewritePatternSet &patterns);
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
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::transform::ApplyLowerMultiReductionPatternsOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::ApplyLowerOuterProductPatternsOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class ApplyLowerOuterProductPatternsOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  ApplyLowerOuterProductPatternsOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class ApplyLowerOuterProductPatternsOpGenericAdaptor : public detail::ApplyLowerOuterProductPatternsOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::ApplyLowerOuterProductPatternsOpGenericAdaptorBase;
public:
  ApplyLowerOuterProductPatternsOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  ApplyLowerOuterProductPatternsOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : ApplyLowerOuterProductPatternsOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

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
class ApplyLowerOuterProductPatternsOpAdaptor : public ApplyLowerOuterProductPatternsOpGenericAdaptor<::mlir::ValueRange> {
public:
  using ApplyLowerOuterProductPatternsOpGenericAdaptor::ApplyLowerOuterProductPatternsOpGenericAdaptor;
  ApplyLowerOuterProductPatternsOpAdaptor(ApplyLowerOuterProductPatternsOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class ApplyLowerOuterProductPatternsOp : public ::mlir::Op<ApplyLowerOuterProductPatternsOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::ZeroResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::ZeroOperands, ::mlir::OpTrait::OpInvariants, ::mlir::transform::PatternDescriptorOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = ApplyLowerOuterProductPatternsOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = ApplyLowerOuterProductPatternsOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("transform.apply_patterns.vector.lower_outerproduct");
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
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::transform::ApplyLowerOuterProductPatternsOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::ApplyLowerScanPatternsOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class ApplyLowerScanPatternsOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  ApplyLowerScanPatternsOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class ApplyLowerScanPatternsOpGenericAdaptor : public detail::ApplyLowerScanPatternsOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::ApplyLowerScanPatternsOpGenericAdaptorBase;
public:
  ApplyLowerScanPatternsOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  ApplyLowerScanPatternsOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : ApplyLowerScanPatternsOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

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
class ApplyLowerScanPatternsOpAdaptor : public ApplyLowerScanPatternsOpGenericAdaptor<::mlir::ValueRange> {
public:
  using ApplyLowerScanPatternsOpGenericAdaptor::ApplyLowerScanPatternsOpGenericAdaptor;
  ApplyLowerScanPatternsOpAdaptor(ApplyLowerScanPatternsOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class ApplyLowerScanPatternsOp : public ::mlir::Op<ApplyLowerScanPatternsOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::ZeroResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::ZeroOperands, ::mlir::OpTrait::OpInvariants, ::mlir::transform::PatternDescriptorOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = ApplyLowerScanPatternsOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = ApplyLowerScanPatternsOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("transform.apply_patterns.vector.lower_scan");
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
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::transform::ApplyLowerScanPatternsOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::ApplyLowerShapeCastPatternsOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class ApplyLowerShapeCastPatternsOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  ApplyLowerShapeCastPatternsOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class ApplyLowerShapeCastPatternsOpGenericAdaptor : public detail::ApplyLowerShapeCastPatternsOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::ApplyLowerShapeCastPatternsOpGenericAdaptorBase;
public:
  ApplyLowerShapeCastPatternsOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  ApplyLowerShapeCastPatternsOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : ApplyLowerShapeCastPatternsOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

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
class ApplyLowerShapeCastPatternsOpAdaptor : public ApplyLowerShapeCastPatternsOpGenericAdaptor<::mlir::ValueRange> {
public:
  using ApplyLowerShapeCastPatternsOpGenericAdaptor::ApplyLowerShapeCastPatternsOpGenericAdaptor;
  ApplyLowerShapeCastPatternsOpAdaptor(ApplyLowerShapeCastPatternsOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class ApplyLowerShapeCastPatternsOp : public ::mlir::Op<ApplyLowerShapeCastPatternsOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::ZeroResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::ZeroOperands, ::mlir::OpTrait::OpInvariants, ::mlir::transform::PatternDescriptorOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = ApplyLowerShapeCastPatternsOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = ApplyLowerShapeCastPatternsOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("transform.apply_patterns.vector.lower_shape_cast");
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
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::transform::ApplyLowerShapeCastPatternsOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::ApplyLowerTransferPatternsOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class ApplyLowerTransferPatternsOpGenericAdaptorBase {
public:
  struct Properties {
    using max_transfer_rankTy = ::mlir::IntegerAttr;
    max_transfer_rankTy max_transfer_rank;

    auto getMaxTransferRank() {
      auto &propStorage = this->max_transfer_rank;
      return ::llvm::dyn_cast_or_null<::mlir::IntegerAttr>(propStorage);
    }
    void setMaxTransferRank(const ::mlir::IntegerAttr &propValue) {
      this->max_transfer_rank = propValue;
    }
    bool operator==(const Properties &rhs) const {
      return 
        rhs.max_transfer_rank == this->max_transfer_rank &&
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
  ApplyLowerTransferPatternsOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {});

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes();
  ::mlir::IntegerAttr getMaxTransferRankAttr();
  uint64_t getMaxTransferRank();
};
} // namespace detail
template <typename RangeT>
class ApplyLowerTransferPatternsOpGenericAdaptor : public detail::ApplyLowerTransferPatternsOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::ApplyLowerTransferPatternsOpGenericAdaptorBase;
public:
  ApplyLowerTransferPatternsOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  ApplyLowerTransferPatternsOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : ApplyLowerTransferPatternsOpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

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
class ApplyLowerTransferPatternsOpAdaptor : public ApplyLowerTransferPatternsOpGenericAdaptor<::mlir::ValueRange> {
public:
  using ApplyLowerTransferPatternsOpGenericAdaptor::ApplyLowerTransferPatternsOpGenericAdaptor;
  ApplyLowerTransferPatternsOpAdaptor(ApplyLowerTransferPatternsOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class ApplyLowerTransferPatternsOp : public ::mlir::Op<ApplyLowerTransferPatternsOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::ZeroResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::ZeroOperands, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait, ::mlir::transform::PatternDescriptorOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = ApplyLowerTransferPatternsOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = ApplyLowerTransferPatternsOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  using Properties = FoldAdaptor::Properties;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("max_transfer_rank")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getMaxTransferRankAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getMaxTransferRankAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("transform.apply_patterns.vector.lower_transfer");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
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
  ::mlir::IntegerAttr getMaxTransferRankAttr();
  uint64_t getMaxTransferRank();
  void setMaxTransferRankAttr(::mlir::IntegerAttr attr);
  void setMaxTransferRank(uint64_t attrValue);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::IntegerAttr max_transfer_rank);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::IntegerAttr max_transfer_rank);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, uint64_t max_transfer_rank = 1);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, uint64_t max_transfer_rank = 1);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static void populateDefaultProperties(::mlir::OperationName opName, Properties &properties);
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  void populatePatterns(RewritePatternSet &patterns);
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
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::transform::ApplyLowerTransferPatternsOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::ApplyLowerTransposePatternsOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class ApplyLowerTransposePatternsOpGenericAdaptorBase {
public:
  struct Properties {
    using avx2_lowering_strategyTy = ::mlir::BoolAttr;
    avx2_lowering_strategyTy avx2_lowering_strategy;

    auto getAvx2LoweringStrategy() {
      auto &propStorage = this->avx2_lowering_strategy;
      return ::llvm::dyn_cast_or_null<::mlir::BoolAttr>(propStorage);
    }
    void setAvx2LoweringStrategy(const ::mlir::BoolAttr &propValue) {
      this->avx2_lowering_strategy = propValue;
    }
    using lowering_strategyTy = ::mlir::vector::VectorTransposeLoweringAttr;
    lowering_strategyTy lowering_strategy;

    auto getLoweringStrategy() {
      auto &propStorage = this->lowering_strategy;
      return ::llvm::dyn_cast_or_null<::mlir::vector::VectorTransposeLoweringAttr>(propStorage);
    }
    void setLoweringStrategy(const ::mlir::vector::VectorTransposeLoweringAttr &propValue) {
      this->lowering_strategy = propValue;
    }
    bool operator==(const Properties &rhs) const {
      return 
        rhs.avx2_lowering_strategy == this->avx2_lowering_strategy &&
        rhs.lowering_strategy == this->lowering_strategy &&
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
  ApplyLowerTransposePatternsOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {});

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes();
  ::mlir::vector::VectorTransposeLoweringAttr getLoweringStrategyAttr();
  ::mlir::vector::VectorTransposeLowering getLoweringStrategy();
  ::mlir::BoolAttr getAvx2LoweringStrategyAttr();
  bool getAvx2LoweringStrategy();
};
} // namespace detail
template <typename RangeT>
class ApplyLowerTransposePatternsOpGenericAdaptor : public detail::ApplyLowerTransposePatternsOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::ApplyLowerTransposePatternsOpGenericAdaptorBase;
public:
  ApplyLowerTransposePatternsOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  ApplyLowerTransposePatternsOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : ApplyLowerTransposePatternsOpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

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
class ApplyLowerTransposePatternsOpAdaptor : public ApplyLowerTransposePatternsOpGenericAdaptor<::mlir::ValueRange> {
public:
  using ApplyLowerTransposePatternsOpGenericAdaptor::ApplyLowerTransposePatternsOpGenericAdaptor;
  ApplyLowerTransposePatternsOpAdaptor(ApplyLowerTransposePatternsOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class ApplyLowerTransposePatternsOp : public ::mlir::Op<ApplyLowerTransposePatternsOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::ZeroResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::ZeroOperands, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait, ::mlir::transform::PatternDescriptorOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = ApplyLowerTransposePatternsOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = ApplyLowerTransposePatternsOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  using Properties = FoldAdaptor::Properties;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("avx2_lowering_strategy"), ::llvm::StringRef("lowering_strategy")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getAvx2LoweringStrategyAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getAvx2LoweringStrategyAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  ::mlir::StringAttr getLoweringStrategyAttrName() {
    return getAttributeNameForIndex(1);
  }

  static ::mlir::StringAttr getLoweringStrategyAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 1);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("transform.apply_patterns.vector.lower_transpose");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
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
  ::mlir::vector::VectorTransposeLoweringAttr getLoweringStrategyAttr();
  ::mlir::vector::VectorTransposeLowering getLoweringStrategy();
  ::mlir::BoolAttr getAvx2LoweringStrategyAttr();
  bool getAvx2LoweringStrategy();
  void setLoweringStrategyAttr(::mlir::vector::VectorTransposeLoweringAttr attr);
  void setLoweringStrategy(::mlir::vector::VectorTransposeLowering attrValue);
  void setAvx2LoweringStrategyAttr(::mlir::BoolAttr attr);
  void setAvx2LoweringStrategy(bool attrValue);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::vector::VectorTransposeLoweringAttr lowering_strategy, ::mlir::BoolAttr avx2_lowering_strategy);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::vector::VectorTransposeLoweringAttr lowering_strategy, ::mlir::BoolAttr avx2_lowering_strategy);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::vector::VectorTransposeLowering lowering_strategy = vector::VectorTransposeLowering::EltWise, bool avx2_lowering_strategy = false);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::vector::VectorTransposeLowering lowering_strategy = vector::VectorTransposeLowering::EltWise, bool avx2_lowering_strategy = false);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static void populateDefaultProperties(::mlir::OperationName opName, Properties &properties);
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  void populatePatterns(RewritePatternSet &patterns);
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
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::transform::ApplyLowerTransposePatternsOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::ApplyMaterializeMasksPatternsOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class ApplyMaterializeMasksPatternsOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  ApplyMaterializeMasksPatternsOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class ApplyMaterializeMasksPatternsOpGenericAdaptor : public detail::ApplyMaterializeMasksPatternsOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::ApplyMaterializeMasksPatternsOpGenericAdaptorBase;
public:
  ApplyMaterializeMasksPatternsOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  ApplyMaterializeMasksPatternsOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : ApplyMaterializeMasksPatternsOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

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
class ApplyMaterializeMasksPatternsOpAdaptor : public ApplyMaterializeMasksPatternsOpGenericAdaptor<::mlir::ValueRange> {
public:
  using ApplyMaterializeMasksPatternsOpGenericAdaptor::ApplyMaterializeMasksPatternsOpGenericAdaptor;
  ApplyMaterializeMasksPatternsOpAdaptor(ApplyMaterializeMasksPatternsOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class ApplyMaterializeMasksPatternsOp : public ::mlir::Op<ApplyMaterializeMasksPatternsOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::ZeroResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::ZeroOperands, ::mlir::OpTrait::OpInvariants, ::mlir::transform::PatternDescriptorOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = ApplyMaterializeMasksPatternsOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = ApplyMaterializeMasksPatternsOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("transform.apply_patterns.vector.materialize_masks");
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
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::transform::ApplyMaterializeMasksPatternsOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::ApplyRankReducingSubviewPatternsOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class ApplyRankReducingSubviewPatternsOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  ApplyRankReducingSubviewPatternsOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class ApplyRankReducingSubviewPatternsOpGenericAdaptor : public detail::ApplyRankReducingSubviewPatternsOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::ApplyRankReducingSubviewPatternsOpGenericAdaptorBase;
public:
  ApplyRankReducingSubviewPatternsOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  ApplyRankReducingSubviewPatternsOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : ApplyRankReducingSubviewPatternsOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

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
class ApplyRankReducingSubviewPatternsOpAdaptor : public ApplyRankReducingSubviewPatternsOpGenericAdaptor<::mlir::ValueRange> {
public:
  using ApplyRankReducingSubviewPatternsOpGenericAdaptor::ApplyRankReducingSubviewPatternsOpGenericAdaptor;
  ApplyRankReducingSubviewPatternsOpAdaptor(ApplyRankReducingSubviewPatternsOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class ApplyRankReducingSubviewPatternsOp : public ::mlir::Op<ApplyRankReducingSubviewPatternsOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::ZeroResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::ZeroOperands, ::mlir::OpTrait::OpInvariants, ::mlir::transform::PatternDescriptorOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = ApplyRankReducingSubviewPatternsOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = ApplyRankReducingSubviewPatternsOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("transform.apply_patterns.vector.rank_reducing_subview_patterns");
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
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::transform::ApplyRankReducingSubviewPatternsOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::ApplySplitTransferFullPartialPatternsOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class ApplySplitTransferFullPartialPatternsOpGenericAdaptorBase {
public:
  struct Properties {
    using split_transfer_strategyTy = ::mlir::vector::VectorTransferSplitAttr;
    split_transfer_strategyTy split_transfer_strategy;

    auto getSplitTransferStrategy() {
      auto &propStorage = this->split_transfer_strategy;
      return ::llvm::dyn_cast_or_null<::mlir::vector::VectorTransferSplitAttr>(propStorage);
    }
    void setSplitTransferStrategy(const ::mlir::vector::VectorTransferSplitAttr &propValue) {
      this->split_transfer_strategy = propValue;
    }
    bool operator==(const Properties &rhs) const {
      return 
        rhs.split_transfer_strategy == this->split_transfer_strategy &&
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
  ApplySplitTransferFullPartialPatternsOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {});

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes();
  ::mlir::vector::VectorTransferSplitAttr getSplitTransferStrategyAttr();
  ::mlir::vector::VectorTransferSplit getSplitTransferStrategy();
};
} // namespace detail
template <typename RangeT>
class ApplySplitTransferFullPartialPatternsOpGenericAdaptor : public detail::ApplySplitTransferFullPartialPatternsOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::ApplySplitTransferFullPartialPatternsOpGenericAdaptorBase;
public:
  ApplySplitTransferFullPartialPatternsOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  ApplySplitTransferFullPartialPatternsOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : ApplySplitTransferFullPartialPatternsOpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

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
class ApplySplitTransferFullPartialPatternsOpAdaptor : public ApplySplitTransferFullPartialPatternsOpGenericAdaptor<::mlir::ValueRange> {
public:
  using ApplySplitTransferFullPartialPatternsOpGenericAdaptor::ApplySplitTransferFullPartialPatternsOpGenericAdaptor;
  ApplySplitTransferFullPartialPatternsOpAdaptor(ApplySplitTransferFullPartialPatternsOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class ApplySplitTransferFullPartialPatternsOp : public ::mlir::Op<ApplySplitTransferFullPartialPatternsOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::ZeroResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::ZeroOperands, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait, ::mlir::transform::PatternDescriptorOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = ApplySplitTransferFullPartialPatternsOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = ApplySplitTransferFullPartialPatternsOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  using Properties = FoldAdaptor::Properties;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("split_transfer_strategy")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getSplitTransferStrategyAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getSplitTransferStrategyAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("transform.apply_patterns.vector.split_transfer_full_partial");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
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
  ::mlir::vector::VectorTransferSplitAttr getSplitTransferStrategyAttr();
  ::mlir::vector::VectorTransferSplit getSplitTransferStrategy();
  void setSplitTransferStrategyAttr(::mlir::vector::VectorTransferSplitAttr attr);
  void setSplitTransferStrategy(::mlir::vector::VectorTransferSplit attrValue);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::vector::VectorTransferSplitAttr split_transfer_strategy);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::vector::VectorTransferSplitAttr split_transfer_strategy);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::vector::VectorTransferSplit split_transfer_strategy = vector::VectorTransferSplit::LinalgCopy);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::vector::VectorTransferSplit split_transfer_strategy = vector::VectorTransferSplit::LinalgCopy);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static void populateDefaultProperties(::mlir::OperationName opName, Properties &properties);
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  void populatePatterns(RewritePatternSet &patterns);
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
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::transform::ApplySplitTransferFullPartialPatternsOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::ApplyTransferPermutationPatternsOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class ApplyTransferPermutationPatternsOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  ApplyTransferPermutationPatternsOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class ApplyTransferPermutationPatternsOpGenericAdaptor : public detail::ApplyTransferPermutationPatternsOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::ApplyTransferPermutationPatternsOpGenericAdaptorBase;
public:
  ApplyTransferPermutationPatternsOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  ApplyTransferPermutationPatternsOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : ApplyTransferPermutationPatternsOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

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
class ApplyTransferPermutationPatternsOpAdaptor : public ApplyTransferPermutationPatternsOpGenericAdaptor<::mlir::ValueRange> {
public:
  using ApplyTransferPermutationPatternsOpGenericAdaptor::ApplyTransferPermutationPatternsOpGenericAdaptor;
  ApplyTransferPermutationPatternsOpAdaptor(ApplyTransferPermutationPatternsOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class ApplyTransferPermutationPatternsOp : public ::mlir::Op<ApplyTransferPermutationPatternsOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::ZeroResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::ZeroOperands, ::mlir::OpTrait::OpInvariants, ::mlir::transform::PatternDescriptorOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = ApplyTransferPermutationPatternsOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = ApplyTransferPermutationPatternsOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("transform.apply_patterns.vector.transfer_permutation_patterns");
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
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::transform::ApplyTransferPermutationPatternsOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::ApplyTransferToScfPatternsOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class ApplyTransferToScfPatternsOpGenericAdaptorBase {
public:
  struct Properties {
    using full_unrollTy = ::mlir::BoolAttr;
    full_unrollTy full_unroll;

    auto getFullUnroll() {
      auto &propStorage = this->full_unroll;
      return ::llvm::dyn_cast_or_null<::mlir::BoolAttr>(propStorage);
    }
    void setFullUnroll(const ::mlir::BoolAttr &propValue) {
      this->full_unroll = propValue;
    }
    using max_transfer_rankTy = ::mlir::IntegerAttr;
    max_transfer_rankTy max_transfer_rank;

    auto getMaxTransferRank() {
      auto &propStorage = this->max_transfer_rank;
      return ::llvm::dyn_cast_or_null<::mlir::IntegerAttr>(propStorage);
    }
    void setMaxTransferRank(const ::mlir::IntegerAttr &propValue) {
      this->max_transfer_rank = propValue;
    }
    bool operator==(const Properties &rhs) const {
      return 
        rhs.full_unroll == this->full_unroll &&
        rhs.max_transfer_rank == this->max_transfer_rank &&
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
  ApplyTransferToScfPatternsOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {});

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes();
  ::mlir::IntegerAttr getMaxTransferRankAttr();
  uint64_t getMaxTransferRank();
  ::mlir::BoolAttr getFullUnrollAttr();
  bool getFullUnroll();
};
} // namespace detail
template <typename RangeT>
class ApplyTransferToScfPatternsOpGenericAdaptor : public detail::ApplyTransferToScfPatternsOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::ApplyTransferToScfPatternsOpGenericAdaptorBase;
public:
  ApplyTransferToScfPatternsOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  ApplyTransferToScfPatternsOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : ApplyTransferToScfPatternsOpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

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
class ApplyTransferToScfPatternsOpAdaptor : public ApplyTransferToScfPatternsOpGenericAdaptor<::mlir::ValueRange> {
public:
  using ApplyTransferToScfPatternsOpGenericAdaptor::ApplyTransferToScfPatternsOpGenericAdaptor;
  ApplyTransferToScfPatternsOpAdaptor(ApplyTransferToScfPatternsOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class ApplyTransferToScfPatternsOp : public ::mlir::Op<ApplyTransferToScfPatternsOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::ZeroResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::ZeroOperands, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait, ::mlir::transform::PatternDescriptorOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = ApplyTransferToScfPatternsOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = ApplyTransferToScfPatternsOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  using Properties = FoldAdaptor::Properties;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("full_unroll"), ::llvm::StringRef("max_transfer_rank")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getFullUnrollAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getFullUnrollAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  ::mlir::StringAttr getMaxTransferRankAttrName() {
    return getAttributeNameForIndex(1);
  }

  static ::mlir::StringAttr getMaxTransferRankAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 1);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("transform.apply_patterns.vector.transfer_to_scf");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
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
  ::mlir::IntegerAttr getMaxTransferRankAttr();
  uint64_t getMaxTransferRank();
  ::mlir::BoolAttr getFullUnrollAttr();
  bool getFullUnroll();
  void setMaxTransferRankAttr(::mlir::IntegerAttr attr);
  void setMaxTransferRank(uint64_t attrValue);
  void setFullUnrollAttr(::mlir::BoolAttr attr);
  void setFullUnroll(bool attrValue);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::IntegerAttr max_transfer_rank, ::mlir::BoolAttr full_unroll);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::IntegerAttr max_transfer_rank, ::mlir::BoolAttr full_unroll);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, uint64_t max_transfer_rank = 1, bool full_unroll = false);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, uint64_t max_transfer_rank = 1, bool full_unroll = false);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static void populateDefaultProperties(::mlir::OperationName opName, Properties &properties);
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  void populatePatterns(RewritePatternSet &patterns);
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
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::transform::ApplyTransferToScfPatternsOp)


#endif  // GET_OP_CLASSES

