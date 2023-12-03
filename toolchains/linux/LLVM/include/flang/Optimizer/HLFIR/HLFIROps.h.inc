/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Op Declarations                                                            *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#if defined(GET_OP_CLASSES) || defined(GET_OP_FWD_DEFINES)
#undef GET_OP_FWD_DEFINES
namespace hlfir {
class AssignOp;
} // namespace hlfir
namespace hlfir {
class AllOp;
} // namespace hlfir
namespace hlfir {
class AnyOp;
} // namespace hlfir
namespace hlfir {
class ApplyOp;
} // namespace hlfir
namespace hlfir {
class AsExprOp;
} // namespace hlfir
namespace hlfir {
class AssociateOp;
} // namespace hlfir
namespace hlfir {
class CharExtremumOp;
} // namespace hlfir
namespace hlfir {
class ConcatOp;
} // namespace hlfir
namespace hlfir {
class CopyInOp;
} // namespace hlfir
namespace hlfir {
class CopyOutOp;
} // namespace hlfir
namespace hlfir {
class CountOp;
} // namespace hlfir
namespace hlfir {
class DeclareOp;
} // namespace hlfir
namespace hlfir {
class DesignateOp;
} // namespace hlfir
namespace hlfir {
class DestroyOp;
} // namespace hlfir
namespace hlfir {
class DotProductOp;
} // namespace hlfir
namespace hlfir {
class ElementalAddrOp;
} // namespace hlfir
namespace hlfir {
class ElementalOp;
} // namespace hlfir
namespace hlfir {
class ElseWhereOp;
} // namespace hlfir
namespace hlfir {
class EndAssociateOp;
} // namespace hlfir
namespace hlfir {
class ForallIndexOp;
} // namespace hlfir
namespace hlfir {
class ForallMaskOp;
} // namespace hlfir
namespace hlfir {
class ForallOp;
} // namespace hlfir
namespace hlfir {
class GetExtentOp;
} // namespace hlfir
namespace hlfir {
class GetLengthOp;
} // namespace hlfir
namespace hlfir {
class MatmulOp;
} // namespace hlfir
namespace hlfir {
class MatmulTransposeOp;
} // namespace hlfir
namespace hlfir {
class NoReassocOp;
} // namespace hlfir
namespace hlfir {
class NullOp;
} // namespace hlfir
namespace hlfir {
class ParentComponentOp;
} // namespace hlfir
namespace hlfir {
class ProductOp;
} // namespace hlfir
namespace hlfir {
class RegionAssignOp;
} // namespace hlfir
namespace hlfir {
class SetLengthOp;
} // namespace hlfir
namespace hlfir {
class ShapeOfOp;
} // namespace hlfir
namespace hlfir {
class SumOp;
} // namespace hlfir
namespace hlfir {
class TransposeOp;
} // namespace hlfir
namespace hlfir {
class WhereOp;
} // namespace hlfir
namespace hlfir {
class YieldElementOp;
} // namespace hlfir
namespace hlfir {
class YieldOp;
} // namespace hlfir
#endif

#ifdef GET_OP_CLASSES
#undef GET_OP_CLASSES


//===----------------------------------------------------------------------===//
// Local Utility Method Definitions
//===----------------------------------------------------------------------===//

namespace hlfir {

//===----------------------------------------------------------------------===//
// hlfir::AssignOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class AssignOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  AssignOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
  ::mlir::UnitAttr getReallocAttr();
  bool getRealloc();
  ::mlir::UnitAttr getKeepLhsLengthIfReallocAttr();
  bool getKeepLhsLengthIfRealloc();
  ::mlir::UnitAttr getTemporaryLhsAttr();
  bool getTemporaryLhs();
};
} // namespace detail
template <typename RangeT>
class AssignOpGenericAdaptor : public detail::AssignOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::AssignOpGenericAdaptorBase;
public:
  AssignOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  AssignOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : AssignOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getRhs() {
    return (*getODSOperands(0).begin());
  }

  ValueT getLhs() {
    return (*getODSOperands(1).begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class AssignOpAdaptor : public AssignOpGenericAdaptor<::mlir::ValueRange> {
public:
  using AssignOpGenericAdaptor::AssignOpGenericAdaptor;
  AssignOpAdaptor(AssignOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class AssignOp : public ::mlir::Op<AssignOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::ZeroResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::NOperands<2>::Impl, ::mlir::OpTrait::OpInvariants, ::mlir::MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = AssignOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = AssignOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("keep_lhs_length_if_realloc"), ::llvm::StringRef("realloc"), ::llvm::StringRef("temporary_lhs")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getKeepLhsLengthIfReallocAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getKeepLhsLengthIfReallocAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  ::mlir::StringAttr getReallocAttrName() {
    return getAttributeNameForIndex(1);
  }

  static ::mlir::StringAttr getReallocAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 1);
  }

  ::mlir::StringAttr getTemporaryLhsAttrName() {
    return getAttributeNameForIndex(2);
  }

  static ::mlir::StringAttr getTemporaryLhsAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 2);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("hlfir.assign");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value getRhs();
  ::mlir::Value getLhs();
  ::mlir::MutableOperandRange getRhsMutable();
  ::mlir::MutableOperandRange getLhsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::UnitAttr getReallocAttr();
  bool getRealloc();
  ::mlir::UnitAttr getKeepLhsLengthIfReallocAttr();
  bool getKeepLhsLengthIfRealloc();
  ::mlir::UnitAttr getTemporaryLhsAttr();
  bool getTemporaryLhs();
  void setReallocAttr(::mlir::UnitAttr attr);
  void setRealloc(bool attrValue);
  void setKeepLhsLengthIfReallocAttr(::mlir::UnitAttr attr);
  void setKeepLhsLengthIfRealloc(bool attrValue);
  void setTemporaryLhsAttr(::mlir::UnitAttr attr);
  void setTemporaryLhs(bool attrValue);
  ::mlir::Attribute removeReallocAttr();
  ::mlir::Attribute removeKeepLhsLengthIfReallocAttr();
  ::mlir::Attribute removeTemporaryLhsAttr();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value rhs, ::mlir::Value lhs, /*optional*/::mlir::UnitAttr realloc, /*optional*/::mlir::UnitAttr keep_lhs_length_if_realloc, /*optional*/::mlir::UnitAttr temporary_lhs);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value rhs, ::mlir::Value lhs, /*optional*/::mlir::UnitAttr realloc, /*optional*/::mlir::UnitAttr keep_lhs_length_if_realloc, /*optional*/::mlir::UnitAttr temporary_lhs);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value rhs, ::mlir::Value lhs, /*optional*/bool realloc = false, /*optional*/bool keep_lhs_length_if_realloc = false, /*optional*/bool temporary_lhs = false);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value rhs, ::mlir::Value lhs, /*optional*/bool realloc = false, /*optional*/bool keep_lhs_length_if_realloc = false, /*optional*/bool temporary_lhs = false);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  ::mlir::LogicalResult verify();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
  void getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects);
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
  /// Does this assignment have the Fortran 95 semantics of assignments
  /// to a whole allocatable?
  bool isAllocatableAssignment() {
    return getRealloc();
  }
  /// Is the assignment left hand side a whole allocatable character
  /// that should retain its length after the assignment?
  bool mustKeepLhsLengthInAllocatableAssignment() {
    return getKeepLhsLengthIfRealloc();
  }
  /// Is the assignment's left hand side a compiler generated temporary?
  bool isTemporaryLHS() {
    return getTemporaryLhs();
  }
};
} // namespace hlfir
MLIR_DECLARE_EXPLICIT_TYPE_ID(hlfir::AssignOp)

namespace hlfir {

//===----------------------------------------------------------------------===//
// hlfir::AllOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class AllOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  AllOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class AllOpGenericAdaptor : public detail::AllOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::AllOpGenericAdaptorBase;
public:
  AllOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  AllOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : AllOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getMask() {
    return (*getODSOperands(0).begin());
  }

  ValueT getDim() {
    auto operands = getODSOperands(1);
    return operands.empty() ? ValueT{} : (*operands.begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class AllOpAdaptor : public AllOpGenericAdaptor<::mlir::ValueRange> {
public:
  using AllOpGenericAdaptor::AllOpGenericAdaptor;
  AllOpAdaptor(AllOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class AllOp : public ::mlir::Op<AllOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::Type>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::AtLeastNOperands<1>::Impl, ::mlir::OpTrait::OpInvariants> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = AllOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = AllOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("hlfir.all");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value getMask();
  ::mlir::Value getDim();
  ::mlir::MutableOperandRange getMaskMutable();
  ::mlir::MutableOperandRange getDimMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type resultType0, ::mlir::Value mask, /*optional*/::mlir::Value dim);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value mask, /*optional*/::mlir::Value dim);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  ::mlir::LogicalResult verify();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
public:
};
} // namespace hlfir
MLIR_DECLARE_EXPLICIT_TYPE_ID(hlfir::AllOp)

namespace hlfir {

//===----------------------------------------------------------------------===//
// hlfir::AnyOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class AnyOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  AnyOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class AnyOpGenericAdaptor : public detail::AnyOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::AnyOpGenericAdaptorBase;
public:
  AnyOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  AnyOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : AnyOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getMask() {
    return (*getODSOperands(0).begin());
  }

  ValueT getDim() {
    auto operands = getODSOperands(1);
    return operands.empty() ? ValueT{} : (*operands.begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class AnyOpAdaptor : public AnyOpGenericAdaptor<::mlir::ValueRange> {
public:
  using AnyOpGenericAdaptor::AnyOpGenericAdaptor;
  AnyOpAdaptor(AnyOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class AnyOp : public ::mlir::Op<AnyOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::Type>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::AtLeastNOperands<1>::Impl, ::mlir::OpTrait::OpInvariants> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = AnyOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = AnyOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("hlfir.any");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value getMask();
  ::mlir::Value getDim();
  ::mlir::MutableOperandRange getMaskMutable();
  ::mlir::MutableOperandRange getDimMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type resultType0, ::mlir::Value mask, /*optional*/::mlir::Value dim);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value mask, /*optional*/::mlir::Value dim);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  ::mlir::LogicalResult verify();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
public:
};
} // namespace hlfir
MLIR_DECLARE_EXPLICIT_TYPE_ID(hlfir::AnyOp)

namespace hlfir {

//===----------------------------------------------------------------------===//
// hlfir::ApplyOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class ApplyOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  ApplyOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class ApplyOpGenericAdaptor : public detail::ApplyOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::ApplyOpGenericAdaptorBase;
public:
  ApplyOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  ApplyOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : ApplyOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getExpr() {
    return (*getODSOperands(0).begin());
  }

  RangeT getIndices() {
    return getODSOperands(1);
  }

  RangeT getTypeparams() {
    return getODSOperands(2);
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class ApplyOpAdaptor : public ApplyOpGenericAdaptor<::mlir::ValueRange> {
public:
  using ApplyOpGenericAdaptor::ApplyOpGenericAdaptor;
  ApplyOpAdaptor(ApplyOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class ApplyOp : public ::mlir::Op<ApplyOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::Type>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::AtLeastNOperands<1>::Impl, ::mlir::OpTrait::AttrSizedOperandSegments, ::mlir::OpTrait::OpInvariants, ::mlir::MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = ApplyOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = ApplyOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("operandSegmentSizes")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getOperandSegmentSizesAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getOperandSegmentSizesAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("hlfir.apply");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value getExpr();
  ::mlir::Operation::operand_range getIndices();
  ::mlir::Operation::operand_range getTypeparams();
  ::mlir::MutableOperandRange getExprMutable();
  ::mlir::MutableOperandRange getIndicesMutable();
  ::mlir::MutableOperandRange getTypeparamsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value getElementValue();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, mlir::Value expr, mlir::ValueRange indices, mlir::ValueRange typeparams);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type element_value, ::mlir::Value expr, ::mlir::ValueRange indices, ::mlir::ValueRange typeparams);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value expr, ::mlir::ValueRange indices, ::mlir::ValueRange typeparams);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
  void getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects);
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
} // namespace hlfir
MLIR_DECLARE_EXPLICIT_TYPE_ID(hlfir::ApplyOp)

namespace hlfir {

//===----------------------------------------------------------------------===//
// hlfir::AsExprOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class AsExprOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  AsExprOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class AsExprOpGenericAdaptor : public detail::AsExprOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::AsExprOpGenericAdaptorBase;
public:
  AsExprOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  AsExprOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : AsExprOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getVar() {
    return (*getODSOperands(0).begin());
  }

  ValueT getMustFree() {
    auto operands = getODSOperands(1);
    return operands.empty() ? ValueT{} : (*operands.begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class AsExprOpAdaptor : public AsExprOpGenericAdaptor<::mlir::ValueRange> {
public:
  using AsExprOpGenericAdaptor::AsExprOpGenericAdaptor;
  AsExprOpAdaptor(AsExprOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class AsExprOp : public ::mlir::Op<AsExprOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<hlfir::ExprType>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::AtLeastNOperands<1>::Impl, ::mlir::OpTrait::OpInvariants> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = AsExprOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = AsExprOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("hlfir.as_expr");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value getVar();
  ::mlir::TypedValue<::mlir::IntegerType> getMustFree();
  ::mlir::MutableOperandRange getVarMutable();
  ::mlir::MutableOperandRange getMustFreeMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, mlir::Value var, mlir::Value must_free = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type resultType0, ::mlir::Value var, /*optional*/::mlir::Value must_free);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value var, /*optional*/::mlir::Value must_free);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
public:
  // Is this a "move" ?
  bool isMove() { return getMustFree() != mlir::Value{}; }
};
} // namespace hlfir
MLIR_DECLARE_EXPLICIT_TYPE_ID(hlfir::AsExprOp)

namespace hlfir {

//===----------------------------------------------------------------------===//
// hlfir::AssociateOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class AssociateOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  AssociateOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
  ::mlir::StringAttr getUniqNameAttr();
  ::mlir::StringAttr getUniqName();
  ::fir::FortranVariableFlagsAttr getFortranAttrsAttr();
  ::std::optional<::fir::FortranVariableFlagsEnum> getFortranAttrs();
};
} // namespace detail
template <typename RangeT>
class AssociateOpGenericAdaptor : public detail::AssociateOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::AssociateOpGenericAdaptorBase;
public:
  AssociateOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  AssociateOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : AssociateOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getSource() {
    return (*getODSOperands(0).begin());
  }

  ValueT getShape() {
    auto operands = getODSOperands(1);
    return operands.empty() ? ValueT{} : (*operands.begin());
  }

  RangeT getTypeparams() {
    return getODSOperands(2);
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class AssociateOpAdaptor : public AssociateOpGenericAdaptor<::mlir::ValueRange> {
public:
  using AssociateOpGenericAdaptor::AssociateOpGenericAdaptor;
  AssociateOpAdaptor(AssociateOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class AssociateOp : public ::mlir::Op<AssociateOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::NResults<3>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::AtLeastNOperands<1>::Impl, ::mlir::OpTrait::AttrSizedOperandSegments, ::mlir::OpTrait::OpInvariants, fir::FortranVariableOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = AssociateOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = AssociateOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("fortran_attrs"), ::llvm::StringRef("operandSegmentSizes"), ::llvm::StringRef("uniq_name")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getFortranAttrsAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getFortranAttrsAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  ::mlir::StringAttr getOperandSegmentSizesAttrName() {
    return getAttributeNameForIndex(1);
  }

  static ::mlir::StringAttr getOperandSegmentSizesAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 1);
  }

  ::mlir::StringAttr getUniqNameAttrName() {
    return getAttributeNameForIndex(2);
  }

  static ::mlir::StringAttr getUniqNameAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 2);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("hlfir.associate");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value getSource();
  ::mlir::Value getShape();
  ::mlir::Operation::operand_range getTypeparams();
  ::mlir::MutableOperandRange getSourceMutable();
  ::mlir::MutableOperandRange getShapeMutable();
  ::mlir::MutableOperandRange getTypeparamsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::StringAttr getUniqNameAttr();
  ::mlir::StringAttr getUniqName();
  ::fir::FortranVariableFlagsAttr getFortranAttrsAttr();
  ::std::optional<::fir::FortranVariableFlagsEnum> getFortranAttrs();
  void setUniqNameAttr(::mlir::StringAttr attr);
  void setFortranAttrsAttr(::fir::FortranVariableFlagsAttr attr);
  void setFortranAttrs(::std::optional<::fir::FortranVariableFlagsEnum> attrValue);
  ::mlir::Attribute removeFortranAttrsAttr();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, mlir::Value source, llvm::StringRef uniq_name, mlir::Value shape = {}, mlir::ValueRange typeparams = {}, fir::FortranVariableFlagsAttr fortran_attrs = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type resultType0, ::mlir::Type resultType1, ::mlir::Type resultType2, ::mlir::Value source, /*optional*/::mlir::Value shape, ::mlir::ValueRange typeparams, ::mlir::StringAttr uniq_name, /*optional*/::fir::FortranVariableFlagsAttr fortran_attrs);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value source, /*optional*/::mlir::Value shape, ::mlir::ValueRange typeparams, ::mlir::StringAttr uniq_name, /*optional*/::fir::FortranVariableFlagsAttr fortran_attrs);
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
    assert(index < 3 && "invalid attribute index");
    assert(name.getStringRef() == getOperationName() && "invalid operation name");
    return name.getAttributeNames()[index];
  }

public:
  /// Override FortranVariableInterface default implementation
  mlir::Value getBase() {
    return getResult(0);
  }

  /// Get the variable FIR base (same as input). It lacks
  /// any explicit lower bounds and the extents might not be retrievable
  /// from it. This matches what is used as a "base" in FIR. All non
  /// polymorphic expressions FIR base is a simple raw address (they are
  /// contiguous in memory).
  mlir::Value getFirBase() {
    return getResult(1);
  }

  /// Return the result value that indicates if the variable storage
  /// was allocated on the heap. At the HLFIR level, this may not be
  /// known yet, and lowering will need to conditionally free the storage.
  mlir::Value getMustFreeStrorageFlag() {
    return getResult(2);
  }
};
} // namespace hlfir
MLIR_DECLARE_EXPLICIT_TYPE_ID(hlfir::AssociateOp)

namespace hlfir {

//===----------------------------------------------------------------------===//
// hlfir::CharExtremumOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class CharExtremumOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  CharExtremumOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
  hlfir::CharExtremumPredicateAttr getPredicateAttr();
  hlfir::CharExtremumPredicate getPredicate();
};
} // namespace detail
template <typename RangeT>
class CharExtremumOpGenericAdaptor : public detail::CharExtremumOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::CharExtremumOpGenericAdaptorBase;
public:
  CharExtremumOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  CharExtremumOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : CharExtremumOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  RangeT getStrings() {
    return getODSOperands(0);
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class CharExtremumOpAdaptor : public CharExtremumOpGenericAdaptor<::mlir::ValueRange> {
public:
  using CharExtremumOpGenericAdaptor::CharExtremumOpGenericAdaptor;
  CharExtremumOpAdaptor(CharExtremumOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class CharExtremumOp : public ::mlir::Op<CharExtremumOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::Type>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::VariadicOperands, ::mlir::OpTrait::OpInvariants> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = CharExtremumOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = CharExtremumOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("predicate")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getPredicateAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getPredicateAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("hlfir.char_extremum");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Operation::operand_range getStrings();
  ::mlir::MutableOperandRange getStringsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  hlfir::CharExtremumPredicateAttr getPredicateAttr();
  hlfir::CharExtremumPredicate getPredicate();
  void setPredicateAttr(hlfir::CharExtremumPredicateAttr attr);
  void setPredicate(hlfir::CharExtremumPredicate attrValue);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, hlfir::CharExtremumPredicate predicate, mlir::ValueRange strings);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type resultType0, hlfir::CharExtremumPredicateAttr predicate, ::mlir::ValueRange strings);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, hlfir::CharExtremumPredicateAttr predicate, ::mlir::ValueRange strings);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type resultType0, hlfir::CharExtremumPredicate predicate, ::mlir::ValueRange strings);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, hlfir::CharExtremumPredicate predicate, ::mlir::ValueRange strings);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  ::mlir::LogicalResult verify();
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
} // namespace hlfir
MLIR_DECLARE_EXPLICIT_TYPE_ID(hlfir::CharExtremumOp)

namespace hlfir {

//===----------------------------------------------------------------------===//
// hlfir::ConcatOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class ConcatOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  ConcatOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class ConcatOpGenericAdaptor : public detail::ConcatOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::ConcatOpGenericAdaptorBase;
public:
  ConcatOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  ConcatOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : ConcatOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  RangeT getStrings() {
    return getODSOperands(0);
  }

  ValueT getLength() {
    return (*getODSOperands(1).begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class ConcatOpAdaptor : public ConcatOpGenericAdaptor<::mlir::ValueRange> {
public:
  using ConcatOpGenericAdaptor::ConcatOpGenericAdaptor;
  ConcatOpAdaptor(ConcatOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class ConcatOp : public ::mlir::Op<ConcatOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::Type>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::AtLeastNOperands<1>::Impl, ::mlir::OpTrait::OpInvariants> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = ConcatOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = ConcatOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("hlfir.concat");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Operation::operand_range getStrings();
  ::mlir::Value getLength();
  ::mlir::MutableOperandRange getStringsMutable();
  ::mlir::MutableOperandRange getLengthMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, mlir::ValueRange strings, mlir::Value len);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type resultType0, ::mlir::ValueRange strings, ::mlir::Value length);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange strings, ::mlir::Value length);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  ::mlir::LogicalResult verify();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
public:
};
} // namespace hlfir
MLIR_DECLARE_EXPLICIT_TYPE_ID(hlfir::ConcatOp)

namespace hlfir {

//===----------------------------------------------------------------------===//
// hlfir::CopyInOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class CopyInOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  CopyInOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class CopyInOpGenericAdaptor : public detail::CopyInOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::CopyInOpGenericAdaptorBase;
public:
  CopyInOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  CopyInOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : CopyInOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getVar() {
    return (*getODSOperands(0).begin());
  }

  ValueT getVarIsPresent() {
    auto operands = getODSOperands(1);
    return operands.empty() ? ValueT{} : (*operands.begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class CopyInOpAdaptor : public CopyInOpGenericAdaptor<::mlir::ValueRange> {
public:
  using CopyInOpGenericAdaptor::CopyInOpGenericAdaptor;
  CopyInOpAdaptor(CopyInOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class CopyInOp : public ::mlir::Op<CopyInOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::NResults<2>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::AtLeastNOperands<1>::Impl, ::mlir::OpTrait::OpInvariants> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = CopyInOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = CopyInOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("hlfir.copy_in");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value getVar();
  ::mlir::TypedValue<::mlir::IntegerType> getVarIsPresent();
  ::mlir::MutableOperandRange getVarMutable();
  ::mlir::MutableOperandRange getVarIsPresentMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, mlir::Value var, mlir::Value var_is_present);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type resultType0, ::mlir::Type resultType1, ::mlir::Value var, /*optional*/::mlir::Value var_is_present);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value var, /*optional*/::mlir::Value var_is_present);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
public:
  /// Get the resulting copied-in fir.box or fir.class.
  mlir::Value getCopiedIn() {
    return getResult(0);
  }

  /// Get the result indicating if a copy was made.
  mlir::Value getWasCopied() {
    return getResult(1);
  }
};
} // namespace hlfir
MLIR_DECLARE_EXPLICIT_TYPE_ID(hlfir::CopyInOp)

namespace hlfir {

//===----------------------------------------------------------------------===//
// hlfir::CopyOutOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class CopyOutOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  CopyOutOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class CopyOutOpGenericAdaptor : public detail::CopyOutOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::CopyOutOpGenericAdaptorBase;
public:
  CopyOutOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  CopyOutOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : CopyOutOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getTemp() {
    return (*getODSOperands(0).begin());
  }

  ValueT getWasCopied() {
    return (*getODSOperands(1).begin());
  }

  ValueT getVar() {
    auto operands = getODSOperands(2);
    return operands.empty() ? ValueT{} : (*operands.begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class CopyOutOpAdaptor : public CopyOutOpGenericAdaptor<::mlir::ValueRange> {
public:
  using CopyOutOpGenericAdaptor::CopyOutOpGenericAdaptor;
  CopyOutOpAdaptor(CopyOutOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class CopyOutOp : public ::mlir::Op<CopyOutOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::ZeroResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::AtLeastNOperands<2>::Impl, ::mlir::OpTrait::OpInvariants> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = CopyOutOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = CopyOutOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("hlfir.copy_out");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value getTemp();
  ::mlir::TypedValue<::mlir::IntegerType> getWasCopied();
  ::mlir::Value getVar();
  ::mlir::MutableOperandRange getTempMutable();
  ::mlir::MutableOperandRange getWasCopiedMutable();
  ::mlir::MutableOperandRange getVarMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value temp, ::mlir::Value was_copied, /*optional*/::mlir::Value var);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value temp, ::mlir::Value was_copied, /*optional*/::mlir::Value var);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
public:
};
} // namespace hlfir
MLIR_DECLARE_EXPLICIT_TYPE_ID(hlfir::CopyOutOp)

namespace hlfir {

//===----------------------------------------------------------------------===//
// hlfir::CountOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class CountOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  CountOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class CountOpGenericAdaptor : public detail::CountOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::CountOpGenericAdaptorBase;
public:
  CountOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  CountOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : CountOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getMask() {
    return (*getODSOperands(0).begin());
  }

  ValueT getDim() {
    auto operands = getODSOperands(1);
    return operands.empty() ? ValueT{} : (*operands.begin());
  }

  ValueT getKind() {
    auto operands = getODSOperands(2);
    return operands.empty() ? ValueT{} : (*operands.begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class CountOpAdaptor : public CountOpGenericAdaptor<::mlir::ValueRange> {
public:
  using CountOpGenericAdaptor::CountOpGenericAdaptor;
  CountOpAdaptor(CountOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class CountOp : public ::mlir::Op<CountOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::Type>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::AtLeastNOperands<1>::Impl, ::mlir::OpTrait::AttrSizedOperandSegments, ::mlir::OpTrait::OpInvariants> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = CountOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = CountOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("operandSegmentSizes")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getOperandSegmentSizesAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getOperandSegmentSizesAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("hlfir.count");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value getMask();
  ::mlir::Value getDim();
  ::mlir::Value getKind();
  ::mlir::MutableOperandRange getMaskMutable();
  ::mlir::MutableOperandRange getDimMutable();
  ::mlir::MutableOperandRange getKindMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type resultType0, ::mlir::Value mask, /*optional*/::mlir::Value dim, /*optional*/::mlir::Value kind);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value mask, /*optional*/::mlir::Value dim, /*optional*/::mlir::Value kind);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  ::mlir::LogicalResult verify();
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
} // namespace hlfir
MLIR_DECLARE_EXPLICIT_TYPE_ID(hlfir::CountOp)

namespace hlfir {

//===----------------------------------------------------------------------===//
// hlfir::DeclareOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class DeclareOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  DeclareOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
  ::mlir::StringAttr getUniqNameAttr();
  ::mlir::StringAttr getUniqName();
  ::fir::FortranVariableFlagsAttr getFortranAttrsAttr();
  ::std::optional<::fir::FortranVariableFlagsEnum> getFortranAttrs();
};
} // namespace detail
template <typename RangeT>
class DeclareOpGenericAdaptor : public detail::DeclareOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::DeclareOpGenericAdaptorBase;
public:
  DeclareOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  DeclareOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : DeclareOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getMemref() {
    return (*getODSOperands(0).begin());
  }

  ValueT getShape() {
    auto operands = getODSOperands(1);
    return operands.empty() ? ValueT{} : (*operands.begin());
  }

  RangeT getTypeparams() {
    return getODSOperands(2);
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class DeclareOpAdaptor : public DeclareOpGenericAdaptor<::mlir::ValueRange> {
public:
  using DeclareOpGenericAdaptor::DeclareOpGenericAdaptor;
  DeclareOpAdaptor(DeclareOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class DeclareOp : public ::mlir::Op<DeclareOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::NResults<2>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::AtLeastNOperands<1>::Impl, ::mlir::OpTrait::AttrSizedOperandSegments, ::mlir::OpTrait::OpInvariants, fir::FortranVariableOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = DeclareOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = DeclareOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("fortran_attrs"), ::llvm::StringRef("operandSegmentSizes"), ::llvm::StringRef("uniq_name")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getFortranAttrsAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getFortranAttrsAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  ::mlir::StringAttr getOperandSegmentSizesAttrName() {
    return getAttributeNameForIndex(1);
  }

  static ::mlir::StringAttr getOperandSegmentSizesAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 1);
  }

  ::mlir::StringAttr getUniqNameAttrName() {
    return getAttributeNameForIndex(2);
  }

  static ::mlir::StringAttr getUniqNameAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 2);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("hlfir.declare");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value getMemref();
  ::mlir::Value getShape();
  ::mlir::Operation::operand_range getTypeparams();
  ::mlir::MutableOperandRange getMemrefMutable();
  ::mlir::MutableOperandRange getShapeMutable();
  ::mlir::MutableOperandRange getTypeparamsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::StringAttr getUniqNameAttr();
  ::mlir::StringAttr getUniqName();
  ::fir::FortranVariableFlagsAttr getFortranAttrsAttr();
  ::std::optional<::fir::FortranVariableFlagsEnum> getFortranAttrs();
  void setUniqNameAttr(::mlir::StringAttr attr);
  void setFortranAttrsAttr(::fir::FortranVariableFlagsAttr attr);
  void setFortranAttrs(::std::optional<::fir::FortranVariableFlagsEnum> attrValue);
  ::mlir::Attribute removeFortranAttrsAttr();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, mlir::Value memref, llvm::StringRef uniq_name, mlir::Value shape = {}, mlir::ValueRange typeparams = {}, fir::FortranVariableFlagsAttr fortran_attrs = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type resultType0, ::mlir::Type resultType1, ::mlir::Value memref, /*optional*/::mlir::Value shape, ::mlir::ValueRange typeparams, ::mlir::StringAttr uniq_name, /*optional*/::fir::FortranVariableFlagsAttr fortran_attrs);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value memref, /*optional*/::mlir::Value shape, ::mlir::ValueRange typeparams, ::mlir::StringAttr uniq_name, /*optional*/::fir::FortranVariableFlagsAttr fortran_attrs);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  ::mlir::LogicalResult verify();
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
  /// Get the variable original base (same as input). It lacks
  /// any explicit lower bounds and the extents might not be retrievable
  /// from it. This matches what is used as a "base" in FIR.
  mlir::Value getOriginalBase() {
    return getResult(1);
  }

  /// Override FortranVariableInterface default implementation
  mlir::Value getBase() {
    return getResult(0);
  }

  /// Given a FIR memory type, and information about non default lower
  /// bounds, get the related HLFIR variable type.
  static mlir::Type getHLFIRVariableType(mlir::Type type, bool hasLowerBounds);
};
} // namespace hlfir
MLIR_DECLARE_EXPLICIT_TYPE_ID(hlfir::DeclareOp)

namespace hlfir {

//===----------------------------------------------------------------------===//
// hlfir::DesignateOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class DesignateOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  DesignateOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
  ::mlir::StringAttr getComponentAttr();
  ::std::optional<::mlir::StringAttr> getComponent();
  ::mlir::DenseBoolArrayAttr getIsTripletAttr();
  ::llvm::ArrayRef<bool> getIsTriplet();
  ::mlir::BoolAttr getComplexPartAttr();
  ::std::optional< bool > getComplexPart();
  ::fir::FortranVariableFlagsAttr getFortranAttrsAttr();
  ::std::optional<::fir::FortranVariableFlagsEnum> getFortranAttrs();
};
} // namespace detail
template <typename RangeT>
class DesignateOpGenericAdaptor : public detail::DesignateOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::DesignateOpGenericAdaptorBase;
public:
  DesignateOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  DesignateOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : DesignateOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getMemref() {
    return (*getODSOperands(0).begin());
  }

  ValueT getComponentShape() {
    auto operands = getODSOperands(1);
    return operands.empty() ? ValueT{} : (*operands.begin());
  }

  RangeT getIndices() {
    return getODSOperands(2);
  }

  RangeT getSubstring() {
    return getODSOperands(3);
  }

  ValueT getShape() {
    auto operands = getODSOperands(4);
    return operands.empty() ? ValueT{} : (*operands.begin());
  }

  RangeT getTypeparams() {
    return getODSOperands(5);
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class DesignateOpAdaptor : public DesignateOpGenericAdaptor<::mlir::ValueRange> {
public:
  using DesignateOpGenericAdaptor::DesignateOpGenericAdaptor;
  DesignateOpAdaptor(DesignateOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class DesignateOp : public ::mlir::Op<DesignateOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::Type>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::AtLeastNOperands<1>::Impl, ::mlir::OpTrait::AttrSizedOperandSegments, ::mlir::OpTrait::OpInvariants, fir::FortranVariableOpInterface::Trait, ::mlir::MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = DesignateOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = DesignateOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("complex_part"), ::llvm::StringRef("component"), ::llvm::StringRef("fortran_attrs"), ::llvm::StringRef("is_triplet"), ::llvm::StringRef("operandSegmentSizes")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getComplexPartAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getComplexPartAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  ::mlir::StringAttr getComponentAttrName() {
    return getAttributeNameForIndex(1);
  }

  static ::mlir::StringAttr getComponentAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 1);
  }

  ::mlir::StringAttr getFortranAttrsAttrName() {
    return getAttributeNameForIndex(2);
  }

  static ::mlir::StringAttr getFortranAttrsAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 2);
  }

  ::mlir::StringAttr getIsTripletAttrName() {
    return getAttributeNameForIndex(3);
  }

  static ::mlir::StringAttr getIsTripletAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 3);
  }

  ::mlir::StringAttr getOperandSegmentSizesAttrName() {
    return getAttributeNameForIndex(4);
  }

  static ::mlir::StringAttr getOperandSegmentSizesAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 4);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("hlfir.designate");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value getMemref();
  ::mlir::Value getComponentShape();
  ::mlir::Operation::operand_range getIndices();
  ::mlir::Operation::operand_range getSubstring();
  ::mlir::Value getShape();
  ::mlir::Operation::operand_range getTypeparams();
  ::mlir::MutableOperandRange getMemrefMutable();
  ::mlir::MutableOperandRange getComponentShapeMutable();
  ::mlir::MutableOperandRange getIndicesMutable();
  ::mlir::MutableOperandRange getSubstringMutable();
  ::mlir::MutableOperandRange getShapeMutable();
  ::mlir::MutableOperandRange getTypeparamsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::StringAttr getComponentAttr();
  ::std::optional<::mlir::StringAttr> getComponent();
  ::mlir::DenseBoolArrayAttr getIsTripletAttr();
  ::llvm::ArrayRef<bool> getIsTriplet();
  ::mlir::BoolAttr getComplexPartAttr();
  ::std::optional< bool > getComplexPart();
  ::fir::FortranVariableFlagsAttr getFortranAttrsAttr();
  ::std::optional<::fir::FortranVariableFlagsEnum> getFortranAttrs();
  void setComponentAttr(::mlir::StringAttr attr);
  void setIsTripletAttr(::mlir::DenseBoolArrayAttr attr);
  void setIsTriplet(::llvm::ArrayRef<bool> attrValue);
  void setComplexPartAttr(::mlir::BoolAttr attr);
  void setComplexPart(::std::optional<bool> attrValue);
  void setFortranAttrsAttr(::fir::FortranVariableFlagsAttr attr);
  void setFortranAttrs(::std::optional<::fir::FortranVariableFlagsEnum> attrValue);
  ::mlir::Attribute removeComponentAttr();
  ::mlir::Attribute removeComplexPartAttr();
  ::mlir::Attribute removeFortranAttrsAttr();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, mlir::Type result_type, mlir::Value memref, llvm::StringRef component, mlir::Value component_shape, llvm::ArrayRef<std::variant<mlir::Value, std::tuple<mlir::Value, mlir::Value, mlir::Value>>> subscripts, mlir::ValueRange substring = {}, std::optional<bool> complex_part = {}, mlir::Value shape = {}, mlir::ValueRange typeparams = {}, fir::FortranVariableFlagsAttr fortran_attrs = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, mlir::Type result_type, mlir::Value memref, mlir::ValueRange indices, mlir::ValueRange typeparams = {}, fir::FortranVariableFlagsAttr fortran_attrs = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type resultType0, ::mlir::Value memref, /*optional*/::mlir::StringAttr component, /*optional*/::mlir::Value component_shape, ::mlir::ValueRange indices, ::mlir::DenseBoolArrayAttr is_triplet, ::mlir::ValueRange substring, /*optional*/::mlir::BoolAttr complex_part, /*optional*/::mlir::Value shape, ::mlir::ValueRange typeparams, /*optional*/::fir::FortranVariableFlagsAttr fortran_attrs);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value memref, /*optional*/::mlir::StringAttr component, /*optional*/::mlir::Value component_shape, ::mlir::ValueRange indices, ::mlir::DenseBoolArrayAttr is_triplet, ::mlir::ValueRange substring, /*optional*/::mlir::BoolAttr complex_part, /*optional*/::mlir::Value shape, ::mlir::ValueRange typeparams, /*optional*/::fir::FortranVariableFlagsAttr fortran_attrs);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type resultType0, ::mlir::Value memref, /*optional*/::mlir::StringAttr component, /*optional*/::mlir::Value component_shape, ::mlir::ValueRange indices, ::llvm::ArrayRef<bool> is_triplet, ::mlir::ValueRange substring, /*optional*/::mlir::BoolAttr complex_part, /*optional*/::mlir::Value shape, ::mlir::ValueRange typeparams, /*optional*/::fir::FortranVariableFlagsAttr fortran_attrs);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value memref, /*optional*/::mlir::StringAttr component, /*optional*/::mlir::Value component_shape, ::mlir::ValueRange indices, ::llvm::ArrayRef<bool> is_triplet, ::mlir::ValueRange substring, /*optional*/::mlir::BoolAttr complex_part, /*optional*/::mlir::Value shape, ::mlir::ValueRange typeparams, /*optional*/::fir::FortranVariableFlagsAttr fortran_attrs);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  ::mlir::LogicalResult verify();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
  void getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects);
private:
  ::mlir::StringAttr getAttributeNameForIndex(unsigned index) {
    return getAttributeNameForIndex((*this)->getName(), index);
  }

  static ::mlir::StringAttr getAttributeNameForIndex(::mlir::OperationName name, unsigned index) {
    assert(index < 5 && "invalid attribute index");
    assert(name.getStringRef() == getOperationName() && "invalid operation name");
    return name.getAttributeNames()[index];
  }

public:
  using Triplet = std::tuple<mlir::Value, mlir::Value, mlir::Value>;
  using Subscript = std::variant<mlir::Value, Triplet>;
  using Subscripts = llvm::SmallVector<Subscript, 8>;
};
} // namespace hlfir
MLIR_DECLARE_EXPLICIT_TYPE_ID(hlfir::DesignateOp)

namespace hlfir {

//===----------------------------------------------------------------------===//
// hlfir::DestroyOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class DestroyOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  DestroyOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class DestroyOpGenericAdaptor : public detail::DestroyOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::DestroyOpGenericAdaptorBase;
public:
  DestroyOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  DestroyOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : DestroyOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getExpr() {
    return (*getODSOperands(0).begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class DestroyOpAdaptor : public DestroyOpGenericAdaptor<::mlir::ValueRange> {
public:
  using DestroyOpGenericAdaptor::DestroyOpGenericAdaptor;
  DestroyOpAdaptor(DestroyOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class DestroyOp : public ::mlir::Op<DestroyOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::ZeroResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::OneOperand, ::mlir::OpTrait::OpInvariants, ::mlir::MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = DestroyOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = DestroyOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("hlfir.destroy");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value getExpr();
  ::mlir::MutableOperandRange getExprMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value expr);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value expr);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
  void getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects);
public:
};
} // namespace hlfir
MLIR_DECLARE_EXPLICIT_TYPE_ID(hlfir::DestroyOp)

namespace hlfir {

//===----------------------------------------------------------------------===//
// hlfir::DotProductOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class DotProductOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  DotProductOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
  ::mlir::arith::FastMathFlagsAttr getFastmathAttr();
  ::mlir::arith::FastMathFlags getFastmath();
};
} // namespace detail
template <typename RangeT>
class DotProductOpGenericAdaptor : public detail::DotProductOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::DotProductOpGenericAdaptorBase;
public:
  DotProductOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  DotProductOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : DotProductOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getLhs() {
    return (*getODSOperands(0).begin());
  }

  ValueT getRhs() {
    return (*getODSOperands(1).begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class DotProductOpAdaptor : public DotProductOpGenericAdaptor<::mlir::ValueRange> {
public:
  using DotProductOpGenericAdaptor::DotProductOpGenericAdaptor;
  DotProductOpAdaptor(DotProductOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class DotProductOp : public ::mlir::Op<DotProductOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::Type>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::NOperands<2>::Impl, ::mlir::OpTrait::OpInvariants, ::mlir::arith::ArithFastMathInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = DotProductOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = DotProductOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("fastmath")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getFastmathAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getFastmathAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("hlfir.dot_product");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value getLhs();
  ::mlir::Value getRhs();
  ::mlir::MutableOperandRange getLhsMutable();
  ::mlir::MutableOperandRange getRhsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::arith::FastMathFlagsAttr getFastmathAttr();
  ::mlir::arith::FastMathFlags getFastmath();
  void setFastmathAttr(::mlir::arith::FastMathFlagsAttr attr);
  void setFastmath(::mlir::arith::FastMathFlags attrValue);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type resultType0, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::arith::FastMathFlagsAttr fastmath);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::arith::FastMathFlagsAttr fastmath);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type resultType0, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::arith::FastMathFlags fastmath = ::mlir::arith::FastMathFlags::none);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::arith::FastMathFlags fastmath = ::mlir::arith::FastMathFlags::none);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static void populateDefaultAttrs(const ::mlir::OperationName &opName, ::mlir::NamedAttrList &attributes);
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  ::mlir::LogicalResult verify();
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
} // namespace hlfir
MLIR_DECLARE_EXPLICIT_TYPE_ID(hlfir::DotProductOp)

namespace hlfir {

//===----------------------------------------------------------------------===//
// hlfir::ElementalAddrOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class ElementalAddrOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  ElementalAddrOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
  ::mlir::UnitAttr getUnorderedAttr();
  ::std::optional<bool> getUnordered();
  ::mlir::Region &getBody();
  ::mlir::Region &getCleanup();
  ::mlir::RegionRange getRegions();
};
} // namespace detail
template <typename RangeT>
class ElementalAddrOpGenericAdaptor : public detail::ElementalAddrOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::ElementalAddrOpGenericAdaptorBase;
public:
  ElementalAddrOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  ElementalAddrOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : ElementalAddrOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getShape() {
    return (*getODSOperands(0).begin());
  }

  RangeT getTypeparams() {
    return getODSOperands(1);
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class ElementalAddrOpAdaptor : public ElementalAddrOpGenericAdaptor<::mlir::ValueRange> {
public:
  using ElementalAddrOpGenericAdaptor::ElementalAddrOpGenericAdaptor;
  ElementalAddrOpAdaptor(ElementalAddrOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class ElementalAddrOp : public ::mlir::Op<ElementalAddrOp, ::mlir::OpTrait::NRegions<2>::Impl, ::mlir::OpTrait::ZeroResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::AtLeastNOperands<1>::Impl, ::mlir::OpTrait::HasParent<RegionAssignOp>::Impl, ::mlir::OpTrait::OpInvariants, ::mlir::OpTrait::IsTerminator, ::mlir::OpTrait::HasRecursiveMemoryEffects, ::mlir::ConditionallySpeculatable::Trait, ::mlir::OpTrait::RecursivelySpeculatableImplTrait, hlfir::ElementalOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = ElementalAddrOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = ElementalAddrOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("unordered")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getUnorderedAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getUnorderedAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("hlfir.elemental_addr");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::fir::ShapeType> getShape();
  ::mlir::Operation::operand_range getTypeparams();
  ::mlir::MutableOperandRange getShapeMutable();
  ::mlir::MutableOperandRange getTypeparamsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Region &getBody();
  ::mlir::Region &getCleanup();
  ::mlir::UnitAttr getUnorderedAttr();
  ::std::optional<bool> getUnordered();
  void setUnorderedAttr(::mlir::UnitAttr attr);
  void setUnordered(bool attrValue);
  ::mlir::Attribute removeUnorderedAttr();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, mlir::Value shape, bool isUnordered = false);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value shape, ::mlir::ValueRange typeparams, /*optional*/::mlir::UnitAttr unordered);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value shape, ::mlir::ValueRange typeparams, /*optional*/::mlir::UnitAttr unordered);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  ::mlir::LogicalResult verify();
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
  mlir::Region::BlockArgListType getIndices() {
    return getBody().getArguments();
  }

  /// Return the hlfir::YieldOp terminator of the operation
  /// body. It yields the variable element address.
  /// This should only be called once the ElementalAddrOp has been built.
  hlfir::YieldOp getYieldOp();

  /// ElementalOpInterface implementation.

  mlir::Region& getElementalRegion() { return getBody(); }
  mlir::Value getElementEntity();
  mlir::Region* getElementCleanup();

  /// Must this elemental be evaluated in order?
  bool isOrdered() { return !getUnordered(); }
};
} // namespace hlfir
MLIR_DECLARE_EXPLICIT_TYPE_ID(hlfir::ElementalAddrOp)

namespace hlfir {

//===----------------------------------------------------------------------===//
// hlfir::ElementalOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class ElementalOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  ElementalOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
  ::mlir::UnitAttr getUnorderedAttr();
  ::std::optional<bool> getUnordered();
  ::mlir::Region &getRegion();
  ::mlir::RegionRange getRegions();
};
} // namespace detail
template <typename RangeT>
class ElementalOpGenericAdaptor : public detail::ElementalOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::ElementalOpGenericAdaptorBase;
public:
  ElementalOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  ElementalOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : ElementalOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getShape() {
    return (*getODSOperands(0).begin());
  }

  RangeT getTypeparams() {
    return getODSOperands(1);
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class ElementalOpAdaptor : public ElementalOpGenericAdaptor<::mlir::ValueRange> {
public:
  using ElementalOpGenericAdaptor::ElementalOpGenericAdaptor;
  ElementalOpAdaptor(ElementalOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class ElementalOp : public ::mlir::Op<ElementalOp, ::mlir::OpTrait::OneRegion, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<hlfir::ExprType>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::AtLeastNOperands<1>::Impl, ::mlir::OpTrait::OpInvariants, ::mlir::OpTrait::HasRecursiveMemoryEffects, hlfir::ElementalOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = ElementalOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = ElementalOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("unordered")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getUnorderedAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getUnorderedAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("hlfir.elemental");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value getShape();
  ::mlir::Operation::operand_range getTypeparams();
  ::mlir::MutableOperandRange getShapeMutable();
  ::mlir::MutableOperandRange getTypeparamsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Region &getRegion();
  ::mlir::UnitAttr getUnorderedAttr();
  ::std::optional<bool> getUnordered();
  void setUnorderedAttr(::mlir::UnitAttr attr);
  void setUnordered(bool attrValue);
  ::mlir::Attribute removeUnorderedAttr();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, mlir::Type result_type, mlir::Value shape, mlir::ValueRange typeparams = {}, bool isUnordered = false);
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
  mlir::Block *getBody() { return &getRegion().front(); }

  /// Get the indices iterating over the shape.
  mlir::Block::BlockArgListType getIndices() {
   return getBody()->getArguments();
  }
  /// ElementalOpInterface implementation.

  mlir::Region& getElementalRegion() { return getRegion(); }
  mlir::Value getElementEntity();
  mlir::Region* getElementCleanup() { return nullptr; }

  /// Must this elemental be evaluated in order?
  bool isOrdered() { return !getUnordered(); }
};
} // namespace hlfir
MLIR_DECLARE_EXPLICIT_TYPE_ID(hlfir::ElementalOp)

namespace hlfir {

//===----------------------------------------------------------------------===//
// hlfir::ElseWhereOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class ElseWhereOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  ElseWhereOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
  ::mlir::Region &getMaskRegion();
  ::mlir::Region &getBody();
  ::mlir::RegionRange getRegions();
};
} // namespace detail
template <typename RangeT>
class ElseWhereOpGenericAdaptor : public detail::ElseWhereOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::ElseWhereOpGenericAdaptorBase;
public:
  ElseWhereOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  ElseWhereOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : ElseWhereOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

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
class ElseWhereOpAdaptor : public ElseWhereOpGenericAdaptor<::mlir::ValueRange> {
public:
  using ElseWhereOpGenericAdaptor::ElseWhereOpGenericAdaptor;
  ElseWhereOpAdaptor(ElseWhereOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class ElseWhereOp : public ::mlir::Op<ElseWhereOp, ::mlir::OpTrait::NRegions<2>::Impl, ::mlir::OpTrait::ZeroResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::ZeroOperands, ::mlir::OpTrait::HasParent<WhereOp, ElseWhereOp>::Impl, ::mlir::OpTrait::OpInvariants, ::mlir::OpTrait::IsTerminator, hlfir::OrderedAssignmentTreeOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = ElseWhereOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = ElseWhereOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("hlfir.elsewhere");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Region &getMaskRegion();
  ::mlir::Region &getBody();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  ::mlir::LogicalResult verify();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
public:
  void getLeafRegions(llvm::SmallVectorImpl<mlir::Region*>& regions) {
    if (!getMaskRegion().empty())
      regions.push_back(&getMaskRegion());
  }
  mlir::Region* getSubTreeRegion() { return &getBody(); }
};
} // namespace hlfir
MLIR_DECLARE_EXPLICIT_TYPE_ID(hlfir::ElseWhereOp)

namespace hlfir {

//===----------------------------------------------------------------------===//
// hlfir::EndAssociateOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class EndAssociateOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  EndAssociateOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class EndAssociateOpGenericAdaptor : public detail::EndAssociateOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::EndAssociateOpGenericAdaptorBase;
public:
  EndAssociateOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  EndAssociateOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : EndAssociateOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getVar() {
    return (*getODSOperands(0).begin());
  }

  ValueT getMustFree() {
    return (*getODSOperands(1).begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class EndAssociateOpAdaptor : public EndAssociateOpGenericAdaptor<::mlir::ValueRange> {
public:
  using EndAssociateOpGenericAdaptor::EndAssociateOpGenericAdaptor;
  EndAssociateOpAdaptor(EndAssociateOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class EndAssociateOp : public ::mlir::Op<EndAssociateOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::ZeroResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::NOperands<2>::Impl, ::mlir::OpTrait::OpInvariants> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = EndAssociateOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = EndAssociateOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("hlfir.end_associate");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value getVar();
  ::mlir::TypedValue<::mlir::IntegerType> getMustFree();
  ::mlir::MutableOperandRange getVarMutable();
  ::mlir::MutableOperandRange getMustFreeMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, hlfir::AssociateOp associate);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value var, ::mlir::Value must_free);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value var, ::mlir::Value must_free);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
public:
};
} // namespace hlfir
MLIR_DECLARE_EXPLICIT_TYPE_ID(hlfir::EndAssociateOp)

namespace hlfir {

//===----------------------------------------------------------------------===//
// hlfir::ForallIndexOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class ForallIndexOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  ForallIndexOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
  ::mlir::StringAttr getNameAttr();
  ::mlir::StringAttr getName();
};
} // namespace detail
template <typename RangeT>
class ForallIndexOpGenericAdaptor : public detail::ForallIndexOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::ForallIndexOpGenericAdaptorBase;
public:
  ForallIndexOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  ForallIndexOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : ForallIndexOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getIndex() {
    return (*getODSOperands(0).begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class ForallIndexOpAdaptor : public ForallIndexOpGenericAdaptor<::mlir::ValueRange> {
public:
  using ForallIndexOpGenericAdaptor::ForallIndexOpGenericAdaptor;
  ForallIndexOpAdaptor(ForallIndexOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class ForallIndexOp : public ::mlir::Op<ForallIndexOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::Type>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::OneOperand, ::mlir::OpTrait::OpInvariants, fir::FortranVariableOpInterface::Trait, hlfir::OrderedAssignmentTreeOpInterface::Trait, ::mlir::ConditionallySpeculatable::Trait, ::mlir::OpTrait::AlwaysSpeculatableImplTrait, ::mlir::MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = ForallIndexOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = ForallIndexOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("name")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getNameAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getNameAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("hlfir.forall_index");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value getIndex();
  ::mlir::MutableOperandRange getIndexMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::StringAttr getNameAttr();
  ::mlir::StringAttr getName();
  void setNameAttr(::mlir::StringAttr attr);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type resultType0, ::mlir::Value index, ::mlir::StringAttr name);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value index, ::mlir::StringAttr name);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::LogicalResult canonicalize(ForallIndexOp op, ::mlir::PatternRewriter &rewriter);
  static void getCanonicalizationPatterns(::mlir::RewritePatternSet &results, ::mlir::MLIRContext *context);
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
  void getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects);
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
  /// Implement FortranVariableInterface interface.
  std::optional<fir::FortranVariableFlagsEnum> getFortranAttrs() const {
    return std::nullopt;
  }
  mlir::Value getShape() const {return mlir::Value{};}
  mlir::OperandRange getExplicitTypeParams() const {
    // Return an empty range.
    return {(*this)->getOperands().begin(), (*this)->getOperands().begin()};
  }
  /// Implement OrderedAssignmentTreeOpInterface interface.
  void getLeafRegions(llvm::SmallVectorImpl<mlir::Region*>& regions) {}
  mlir::Region* getSubTreeRegion() { return nullptr; }
};
} // namespace hlfir
MLIR_DECLARE_EXPLICIT_TYPE_ID(hlfir::ForallIndexOp)

namespace hlfir {

//===----------------------------------------------------------------------===//
// hlfir::ForallMaskOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class ForallMaskOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  ForallMaskOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
  ::mlir::Region &getMaskRegion();
  ::mlir::Region &getBody();
  ::mlir::RegionRange getRegions();
};
} // namespace detail
template <typename RangeT>
class ForallMaskOpGenericAdaptor : public detail::ForallMaskOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::ForallMaskOpGenericAdaptorBase;
public:
  ForallMaskOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  ForallMaskOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : ForallMaskOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

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
class ForallMaskOpAdaptor : public ForallMaskOpGenericAdaptor<::mlir::ValueRange> {
public:
  using ForallMaskOpGenericAdaptor::ForallMaskOpGenericAdaptor;
  ForallMaskOpAdaptor(ForallMaskOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class ForallMaskOp : public ::mlir::Op<ForallMaskOp, ::mlir::OpTrait::NRegions<2>::Impl, ::mlir::OpTrait::ZeroResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::ZeroOperands, ::mlir::OpTrait::OpInvariants, hlfir::OrderedAssignmentTreeOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = ForallMaskOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = ForallMaskOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("hlfir.forall_mask");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Region &getMaskRegion();
  ::mlir::Region &getBody();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  ::mlir::LogicalResult verify();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
public:
  void getLeafRegions(llvm::SmallVectorImpl<mlir::Region*>& regions) {
    regions.push_back(&getMaskRegion());
  }
  mlir::Region* getSubTreeRegion() { return &getBody(); }
};
} // namespace hlfir
MLIR_DECLARE_EXPLICIT_TYPE_ID(hlfir::ForallMaskOp)

namespace hlfir {

//===----------------------------------------------------------------------===//
// hlfir::ForallOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class ForallOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  ForallOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
  ::mlir::Region &getLbRegion();
  ::mlir::Region &getUbRegion();
  ::mlir::Region &getStepRegion();
  ::mlir::Region &getBody();
  ::mlir::RegionRange getRegions();
};
} // namespace detail
template <typename RangeT>
class ForallOpGenericAdaptor : public detail::ForallOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::ForallOpGenericAdaptorBase;
public:
  ForallOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  ForallOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : ForallOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

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
class ForallOpAdaptor : public ForallOpGenericAdaptor<::mlir::ValueRange> {
public:
  using ForallOpGenericAdaptor::ForallOpGenericAdaptor;
  ForallOpAdaptor(ForallOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class ForallOp : public ::mlir::Op<ForallOp, ::mlir::OpTrait::NRegions<4>::Impl, ::mlir::OpTrait::ZeroResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::ZeroOperands, ::mlir::OpTrait::OpInvariants, hlfir::OrderedAssignmentTreeOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = ForallOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = ForallOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("hlfir.forall");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Region &getLbRegion();
  ::mlir::Region &getUbRegion();
  ::mlir::Region &getStepRegion();
  ::mlir::Region &getBody();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
public:
  mlir::Value getForallIndexValue() {
    return getBody().getArguments()[0];
  }
  void getLeafRegions(llvm::SmallVectorImpl<mlir::Region*>& regions) {
    regions.push_back(&getLbRegion());
    regions.push_back(&getUbRegion());
    if (!getStepRegion().empty())
      regions.push_back(&getStepRegion());
  }
  mlir::Region* getSubTreeRegion() { return &getBody(); }
};
} // namespace hlfir
MLIR_DECLARE_EXPLICIT_TYPE_ID(hlfir::ForallOp)

namespace hlfir {

//===----------------------------------------------------------------------===//
// hlfir::GetExtentOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class GetExtentOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  GetExtentOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
  ::mlir::IntegerAttr getDimAttr();
  ::llvm::APInt getDim();
};
} // namespace detail
template <typename RangeT>
class GetExtentOpGenericAdaptor : public detail::GetExtentOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::GetExtentOpGenericAdaptorBase;
public:
  GetExtentOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  GetExtentOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : GetExtentOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getShape() {
    return (*getODSOperands(0).begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class GetExtentOpAdaptor : public GetExtentOpGenericAdaptor<::mlir::ValueRange> {
public:
  using GetExtentOpGenericAdaptor::GetExtentOpGenericAdaptor;
  GetExtentOpAdaptor(GetExtentOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class GetExtentOp : public ::mlir::Op<GetExtentOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::IndexType>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::OneOperand, ::mlir::OpTrait::OpInvariants, ::mlir::ConditionallySpeculatable::Trait, ::mlir::OpTrait::AlwaysSpeculatableImplTrait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::InferTypeOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = GetExtentOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = GetExtentOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("dim")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getDimAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getDimAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("hlfir.get_extent");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::fir::ShapeType> getShape();
  ::mlir::MutableOperandRange getShapeMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::IntegerAttr getDimAttr();
  ::llvm::APInt getDim();
  void setDimAttr(::mlir::IntegerAttr attr);
  void setDim(::llvm::APInt attrValue);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, mlir::Value shape, unsigned dim);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type resultType0, ::mlir::Value shape, ::mlir::IntegerAttr dim);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value shape, ::mlir::IntegerAttr dim);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value shape, ::mlir::IntegerAttr dim);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type resultType0, ::mlir::Value shape, ::llvm::APInt dim);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value shape, ::llvm::APInt dim);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value shape, ::llvm::APInt dim);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  ::mlir::LogicalResult verify();
  static ::mlir::LogicalResult inferReturnTypes(::mlir::MLIRContext *context, ::std::optional<::mlir::Location> location, ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::Type>&inferredReturnTypes);
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
  void getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects);
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
} // namespace hlfir
MLIR_DECLARE_EXPLICIT_TYPE_ID(hlfir::GetExtentOp)

namespace hlfir {

//===----------------------------------------------------------------------===//
// hlfir::GetLengthOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class GetLengthOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  GetLengthOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class GetLengthOpGenericAdaptor : public detail::GetLengthOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::GetLengthOpGenericAdaptorBase;
public:
  GetLengthOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  GetLengthOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : GetLengthOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getExpr() {
    return (*getODSOperands(0).begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class GetLengthOpAdaptor : public GetLengthOpGenericAdaptor<::mlir::ValueRange> {
public:
  using GetLengthOpGenericAdaptor::GetLengthOpGenericAdaptor;
  GetLengthOpAdaptor(GetLengthOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class GetLengthOp : public ::mlir::Op<GetLengthOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::IndexType>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::OneOperand, ::mlir::OpTrait::OpInvariants, ::mlir::ConditionallySpeculatable::Trait, ::mlir::OpTrait::AlwaysSpeculatableImplTrait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::InferTypeOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = GetLengthOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = GetLengthOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("hlfir.get_length");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value getExpr();
  ::mlir::MutableOperandRange getExprMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type resultType0, ::mlir::Value expr);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value expr);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value expr);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::LogicalResult canonicalize(GetLengthOp op, ::mlir::PatternRewriter &rewriter);
  static void getCanonicalizationPatterns(::mlir::RewritePatternSet &results, ::mlir::MLIRContext *context);
  static ::mlir::LogicalResult inferReturnTypes(::mlir::MLIRContext *context, ::std::optional<::mlir::Location> location, ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::Type>&inferredReturnTypes);
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
  void getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects);
public:
};
} // namespace hlfir
MLIR_DECLARE_EXPLICIT_TYPE_ID(hlfir::GetLengthOp)

namespace hlfir {

//===----------------------------------------------------------------------===//
// hlfir::MatmulOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class MatmulOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  MatmulOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
  ::mlir::arith::FastMathFlagsAttr getFastmathAttr();
  ::mlir::arith::FastMathFlags getFastmath();
};
} // namespace detail
template <typename RangeT>
class MatmulOpGenericAdaptor : public detail::MatmulOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::MatmulOpGenericAdaptorBase;
public:
  MatmulOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  MatmulOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : MatmulOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getLhs() {
    return (*getODSOperands(0).begin());
  }

  ValueT getRhs() {
    return (*getODSOperands(1).begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class MatmulOpAdaptor : public MatmulOpGenericAdaptor<::mlir::ValueRange> {
public:
  using MatmulOpGenericAdaptor::MatmulOpGenericAdaptor;
  MatmulOpAdaptor(MatmulOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class MatmulOp : public ::mlir::Op<MatmulOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<hlfir::ExprType>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::NOperands<2>::Impl, ::mlir::OpTrait::OpInvariants, ::mlir::arith::ArithFastMathInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = MatmulOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = MatmulOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("fastmath")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getFastmathAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getFastmathAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("hlfir.matmul");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value getLhs();
  ::mlir::Value getRhs();
  ::mlir::MutableOperandRange getLhsMutable();
  ::mlir::MutableOperandRange getRhsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::arith::FastMathFlagsAttr getFastmathAttr();
  ::mlir::arith::FastMathFlags getFastmath();
  void setFastmathAttr(::mlir::arith::FastMathFlagsAttr attr);
  void setFastmath(::mlir::arith::FastMathFlags attrValue);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type resultType0, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::arith::FastMathFlagsAttr fastmath);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::arith::FastMathFlagsAttr fastmath);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type resultType0, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::arith::FastMathFlags fastmath = ::mlir::arith::FastMathFlags::none);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::arith::FastMathFlags fastmath = ::mlir::arith::FastMathFlags::none);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static void populateDefaultAttrs(const ::mlir::OperationName &opName, ::mlir::NamedAttrList &attributes);
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  ::mlir::LogicalResult verify();
  static ::mlir::LogicalResult canonicalize(MatmulOp op, ::mlir::PatternRewriter &rewriter);
  static void getCanonicalizationPatterns(::mlir::RewritePatternSet &results, ::mlir::MLIRContext *context);
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
} // namespace hlfir
MLIR_DECLARE_EXPLICIT_TYPE_ID(hlfir::MatmulOp)

namespace hlfir {

//===----------------------------------------------------------------------===//
// hlfir::MatmulTransposeOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class MatmulTransposeOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  MatmulTransposeOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
  ::mlir::arith::FastMathFlagsAttr getFastmathAttr();
  ::mlir::arith::FastMathFlags getFastmath();
};
} // namespace detail
template <typename RangeT>
class MatmulTransposeOpGenericAdaptor : public detail::MatmulTransposeOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::MatmulTransposeOpGenericAdaptorBase;
public:
  MatmulTransposeOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  MatmulTransposeOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : MatmulTransposeOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getLhs() {
    return (*getODSOperands(0).begin());
  }

  ValueT getRhs() {
    return (*getODSOperands(1).begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class MatmulTransposeOpAdaptor : public MatmulTransposeOpGenericAdaptor<::mlir::ValueRange> {
public:
  using MatmulTransposeOpGenericAdaptor::MatmulTransposeOpGenericAdaptor;
  MatmulTransposeOpAdaptor(MatmulTransposeOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class MatmulTransposeOp : public ::mlir::Op<MatmulTransposeOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<hlfir::ExprType>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::NOperands<2>::Impl, ::mlir::OpTrait::OpInvariants, ::mlir::arith::ArithFastMathInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = MatmulTransposeOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = MatmulTransposeOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("fastmath")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getFastmathAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getFastmathAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("hlfir.matmul_transpose");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value getLhs();
  ::mlir::Value getRhs();
  ::mlir::MutableOperandRange getLhsMutable();
  ::mlir::MutableOperandRange getRhsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::arith::FastMathFlagsAttr getFastmathAttr();
  ::mlir::arith::FastMathFlags getFastmath();
  void setFastmathAttr(::mlir::arith::FastMathFlagsAttr attr);
  void setFastmath(::mlir::arith::FastMathFlags attrValue);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type resultType0, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::arith::FastMathFlagsAttr fastmath);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::arith::FastMathFlagsAttr fastmath);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type resultType0, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::arith::FastMathFlags fastmath = ::mlir::arith::FastMathFlags::none);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::arith::FastMathFlags fastmath = ::mlir::arith::FastMathFlags::none);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static void populateDefaultAttrs(const ::mlir::OperationName &opName, ::mlir::NamedAttrList &attributes);
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  ::mlir::LogicalResult verify();
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
} // namespace hlfir
MLIR_DECLARE_EXPLICIT_TYPE_ID(hlfir::MatmulTransposeOp)

namespace hlfir {

//===----------------------------------------------------------------------===//
// hlfir::NoReassocOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class NoReassocOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  NoReassocOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class NoReassocOpGenericAdaptor : public detail::NoReassocOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::NoReassocOpGenericAdaptorBase;
public:
  NoReassocOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  NoReassocOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : NoReassocOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getVal() {
    return (*getODSOperands(0).begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class NoReassocOpAdaptor : public NoReassocOpGenericAdaptor<::mlir::ValueRange> {
public:
  using NoReassocOpGenericAdaptor::NoReassocOpGenericAdaptor;
  NoReassocOpAdaptor(NoReassocOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class NoReassocOp : public ::mlir::Op<NoReassocOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::Type>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::OneOperand, ::mlir::OpTrait::OpInvariants, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::OpTrait::SameOperandsAndResultType, ::mlir::InferTypeOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = NoReassocOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = NoReassocOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("hlfir.no_reassoc");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value getVal();
  ::mlir::MutableOperandRange getValMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type resultType0, ::mlir::Value val);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value val);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value val);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::LogicalResult inferReturnTypes(::mlir::MLIRContext *context, ::std::optional<::mlir::Location> location, ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::Type>&inferredReturnTypes);
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
  void getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects);
public:
};
} // namespace hlfir
MLIR_DECLARE_EXPLICIT_TYPE_ID(hlfir::NoReassocOp)

namespace hlfir {

//===----------------------------------------------------------------------===//
// hlfir::NullOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class NullOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  NullOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class NullOpGenericAdaptor : public detail::NullOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::NullOpGenericAdaptorBase;
public:
  NullOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  NullOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : NullOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

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
class NullOpAdaptor : public NullOpGenericAdaptor<::mlir::ValueRange> {
public:
  using NullOpGenericAdaptor::NullOpGenericAdaptor;
  NullOpAdaptor(NullOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class NullOp : public ::mlir::Op<NullOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::Type>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::ZeroOperands, ::mlir::OpTrait::OpInvariants, ::mlir::MemoryEffectOpInterface::Trait, fir::FortranVariableOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = NullOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = NullOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("hlfir.null");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type resultType0);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
  void getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects);
public:
  // Implement FortranVariableInterface interface.
  std::optional<fir::FortranVariableFlagsEnum> getFortranAttrs() const {
    return std::nullopt;
  }
  mlir::Value getShape() const {return mlir::Value{};}
  mlir::OperandRange getExplicitTypeParams() const {
    // Return an empty range.
    return {(*this)->getOperands().begin(), (*this)->getOperands().begin()};
  }
};
} // namespace hlfir
MLIR_DECLARE_EXPLICIT_TYPE_ID(hlfir::NullOp)

namespace hlfir {

//===----------------------------------------------------------------------===//
// hlfir::ParentComponentOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class ParentComponentOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  ParentComponentOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class ParentComponentOpGenericAdaptor : public detail::ParentComponentOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::ParentComponentOpGenericAdaptorBase;
public:
  ParentComponentOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  ParentComponentOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : ParentComponentOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getMemref() {
    return (*getODSOperands(0).begin());
  }

  ValueT getShape() {
    auto operands = getODSOperands(1);
    return operands.empty() ? ValueT{} : (*operands.begin());
  }

  RangeT getTypeparams() {
    return getODSOperands(2);
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class ParentComponentOpAdaptor : public ParentComponentOpGenericAdaptor<::mlir::ValueRange> {
public:
  using ParentComponentOpGenericAdaptor::ParentComponentOpGenericAdaptor;
  ParentComponentOpAdaptor(ParentComponentOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class ParentComponentOp : public ::mlir::Op<ParentComponentOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::Type>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::AtLeastNOperands<1>::Impl, ::mlir::OpTrait::AttrSizedOperandSegments, ::mlir::OpTrait::OpInvariants, fir::FortranVariableOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = ParentComponentOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = ParentComponentOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("operandSegmentSizes")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getOperandSegmentSizesAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getOperandSegmentSizesAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("hlfir.parent_comp");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value getMemref();
  ::mlir::Value getShape();
  ::mlir::Operation::operand_range getTypeparams();
  ::mlir::MutableOperandRange getMemrefMutable();
  ::mlir::MutableOperandRange getShapeMutable();
  ::mlir::MutableOperandRange getTypeparamsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type resultType0, ::mlir::Value memref, /*optional*/::mlir::Value shape, ::mlir::ValueRange typeparams);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value memref, /*optional*/::mlir::Value shape, ::mlir::ValueRange typeparams);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  ::mlir::LogicalResult verify();
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
  // Implement FortranVariableInterface interface. Parent components have
  // no attributes (pointer, allocatable or contiguous can only be added
  // to regular components).
  std::optional<fir::FortranVariableFlagsEnum> getFortranAttrs() const {
    return std::nullopt;
  }
};
} // namespace hlfir
MLIR_DECLARE_EXPLICIT_TYPE_ID(hlfir::ParentComponentOp)

namespace hlfir {

//===----------------------------------------------------------------------===//
// hlfir::ProductOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class ProductOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  ProductOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
  ::mlir::arith::FastMathFlagsAttr getFastmathAttr();
  ::mlir::arith::FastMathFlags getFastmath();
};
} // namespace detail
template <typename RangeT>
class ProductOpGenericAdaptor : public detail::ProductOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::ProductOpGenericAdaptorBase;
public:
  ProductOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  ProductOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : ProductOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getArray() {
    return (*getODSOperands(0).begin());
  }

  ValueT getDim() {
    auto operands = getODSOperands(1);
    return operands.empty() ? ValueT{} : (*operands.begin());
  }

  ValueT getMask() {
    auto operands = getODSOperands(2);
    return operands.empty() ? ValueT{} : (*operands.begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class ProductOpAdaptor : public ProductOpGenericAdaptor<::mlir::ValueRange> {
public:
  using ProductOpGenericAdaptor::ProductOpGenericAdaptor;
  ProductOpAdaptor(ProductOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class ProductOp : public ::mlir::Op<ProductOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::Type>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::AtLeastNOperands<1>::Impl, ::mlir::OpTrait::AttrSizedOperandSegments, ::mlir::OpTrait::OpInvariants, ::mlir::arith::ArithFastMathInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = ProductOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = ProductOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("fastmath"), ::llvm::StringRef("operandSegmentSizes")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getFastmathAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getFastmathAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  ::mlir::StringAttr getOperandSegmentSizesAttrName() {
    return getAttributeNameForIndex(1);
  }

  static ::mlir::StringAttr getOperandSegmentSizesAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 1);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("hlfir.product");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value getArray();
  ::mlir::Value getDim();
  ::mlir::Value getMask();
  ::mlir::MutableOperandRange getArrayMutable();
  ::mlir::MutableOperandRange getDimMutable();
  ::mlir::MutableOperandRange getMaskMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::arith::FastMathFlagsAttr getFastmathAttr();
  ::mlir::arith::FastMathFlags getFastmath();
  void setFastmathAttr(::mlir::arith::FastMathFlagsAttr attr);
  void setFastmath(::mlir::arith::FastMathFlags attrValue);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type resultType0, ::mlir::Value array, /*optional*/::mlir::Value dim, /*optional*/::mlir::Value mask, ::mlir::arith::FastMathFlagsAttr fastmath);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value array, /*optional*/::mlir::Value dim, /*optional*/::mlir::Value mask, ::mlir::arith::FastMathFlagsAttr fastmath);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type resultType0, ::mlir::Value array, /*optional*/::mlir::Value dim, /*optional*/::mlir::Value mask, ::mlir::arith::FastMathFlags fastmath = ::mlir::arith::FastMathFlags::none);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value array, /*optional*/::mlir::Value dim, /*optional*/::mlir::Value mask, ::mlir::arith::FastMathFlags fastmath = ::mlir::arith::FastMathFlags::none);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static void populateDefaultAttrs(const ::mlir::OperationName &opName, ::mlir::NamedAttrList &attributes);
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  ::mlir::LogicalResult verify();
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
} // namespace hlfir
MLIR_DECLARE_EXPLICIT_TYPE_ID(hlfir::ProductOp)

namespace hlfir {

//===----------------------------------------------------------------------===//
// hlfir::RegionAssignOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class RegionAssignOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  RegionAssignOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
  ::mlir::Region &getRhsRegion();
  ::mlir::Region &getLhsRegion();
  ::mlir::Region &getUserDefinedAssignment();
  ::mlir::RegionRange getRegions();
};
} // namespace detail
template <typename RangeT>
class RegionAssignOpGenericAdaptor : public detail::RegionAssignOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::RegionAssignOpGenericAdaptorBase;
public:
  RegionAssignOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  RegionAssignOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : RegionAssignOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

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
class RegionAssignOpAdaptor : public RegionAssignOpGenericAdaptor<::mlir::ValueRange> {
public:
  using RegionAssignOpGenericAdaptor::RegionAssignOpGenericAdaptor;
  RegionAssignOpAdaptor(RegionAssignOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class RegionAssignOp : public ::mlir::Op<RegionAssignOp, ::mlir::OpTrait::NRegions<3>::Impl, ::mlir::OpTrait::ZeroResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::ZeroOperands, ::mlir::OpTrait::OpInvariants, hlfir::OrderedAssignmentTreeOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = RegionAssignOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = RegionAssignOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("hlfir.region_assign");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Region &getRhsRegion();
  ::mlir::Region &getLhsRegion();
  ::mlir::Region &getUserDefinedAssignment();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &p);
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  ::mlir::LogicalResult verify();
public:
  mlir::Value getUserAssignmentRhs() {
    return getUserDefinedAssignment().getArguments()[0];
  }
  mlir::Value getUserAssignmentLhs() {
    return getUserDefinedAssignment().getArguments()[1];
  }
  void getLeafRegions(llvm::SmallVectorImpl<mlir::Region*>& regions) {
    regions.push_back(&getRhsRegion());
    regions.push_back(&getLhsRegion());
    if (!getUserDefinedAssignment().empty())
      regions.push_back(&getUserDefinedAssignment());
  }
  mlir::Region* getSubTreeRegion() { return nullptr; }

};
} // namespace hlfir
MLIR_DECLARE_EXPLICIT_TYPE_ID(hlfir::RegionAssignOp)

namespace hlfir {

//===----------------------------------------------------------------------===//
// hlfir::SetLengthOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class SetLengthOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  SetLengthOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class SetLengthOpGenericAdaptor : public detail::SetLengthOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::SetLengthOpGenericAdaptorBase;
public:
  SetLengthOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  SetLengthOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : SetLengthOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getString() {
    return (*getODSOperands(0).begin());
  }

  ValueT getLength() {
    return (*getODSOperands(1).begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class SetLengthOpAdaptor : public SetLengthOpGenericAdaptor<::mlir::ValueRange> {
public:
  using SetLengthOpGenericAdaptor::SetLengthOpGenericAdaptor;
  SetLengthOpAdaptor(SetLengthOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class SetLengthOp : public ::mlir::Op<SetLengthOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::Type>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::NOperands<2>::Impl, ::mlir::OpTrait::OpInvariants> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = SetLengthOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = SetLengthOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("hlfir.set_length");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value getString();
  ::mlir::Value getLength();
  ::mlir::MutableOperandRange getStringMutable();
  ::mlir::MutableOperandRange getLengthMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, mlir::Value string, mlir::Value len);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type resultType0, ::mlir::Value string, ::mlir::Value length);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value string, ::mlir::Value length);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
public:
};
} // namespace hlfir
MLIR_DECLARE_EXPLICIT_TYPE_ID(hlfir::SetLengthOp)

namespace hlfir {

//===----------------------------------------------------------------------===//
// hlfir::ShapeOfOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class ShapeOfOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  ShapeOfOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class ShapeOfOpGenericAdaptor : public detail::ShapeOfOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::ShapeOfOpGenericAdaptorBase;
public:
  ShapeOfOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  ShapeOfOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : ShapeOfOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getExpr() {
    return (*getODSOperands(0).begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class ShapeOfOpAdaptor : public ShapeOfOpGenericAdaptor<::mlir::ValueRange> {
public:
  using ShapeOfOpGenericAdaptor::ShapeOfOpGenericAdaptor;
  ShapeOfOpAdaptor(ShapeOfOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class ShapeOfOp : public ::mlir::Op<ShapeOfOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::fir::ShapeType>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::OneOperand, ::mlir::OpTrait::OpInvariants, ::mlir::ConditionallySpeculatable::Trait, ::mlir::OpTrait::AlwaysSpeculatableImplTrait, ::mlir::MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = ShapeOfOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = ShapeOfOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("hlfir.shape_of");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value getExpr();
  ::mlir::MutableOperandRange getExprMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, mlir::Value expr);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type resultType0, ::mlir::Value expr);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value expr);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  ::mlir::LogicalResult verify();
  static ::mlir::LogicalResult canonicalize(ShapeOfOp op, ::mlir::PatternRewriter &rewriter);
  static void getCanonicalizationPatterns(::mlir::RewritePatternSet &results, ::mlir::MLIRContext *context);
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
  void getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects);
public:
  std::size_t getRank();
};
} // namespace hlfir
MLIR_DECLARE_EXPLICIT_TYPE_ID(hlfir::ShapeOfOp)

namespace hlfir {

//===----------------------------------------------------------------------===//
// hlfir::SumOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class SumOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  SumOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
  ::mlir::arith::FastMathFlagsAttr getFastmathAttr();
  ::mlir::arith::FastMathFlags getFastmath();
};
} // namespace detail
template <typename RangeT>
class SumOpGenericAdaptor : public detail::SumOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::SumOpGenericAdaptorBase;
public:
  SumOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  SumOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : SumOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getArray() {
    return (*getODSOperands(0).begin());
  }

  ValueT getDim() {
    auto operands = getODSOperands(1);
    return operands.empty() ? ValueT{} : (*operands.begin());
  }

  ValueT getMask() {
    auto operands = getODSOperands(2);
    return operands.empty() ? ValueT{} : (*operands.begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class SumOpAdaptor : public SumOpGenericAdaptor<::mlir::ValueRange> {
public:
  using SumOpGenericAdaptor::SumOpGenericAdaptor;
  SumOpAdaptor(SumOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class SumOp : public ::mlir::Op<SumOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::Type>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::AtLeastNOperands<1>::Impl, ::mlir::OpTrait::AttrSizedOperandSegments, ::mlir::OpTrait::OpInvariants, ::mlir::arith::ArithFastMathInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = SumOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = SumOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("fastmath"), ::llvm::StringRef("operandSegmentSizes")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getFastmathAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getFastmathAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  ::mlir::StringAttr getOperandSegmentSizesAttrName() {
    return getAttributeNameForIndex(1);
  }

  static ::mlir::StringAttr getOperandSegmentSizesAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 1);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("hlfir.sum");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value getArray();
  ::mlir::Value getDim();
  ::mlir::Value getMask();
  ::mlir::MutableOperandRange getArrayMutable();
  ::mlir::MutableOperandRange getDimMutable();
  ::mlir::MutableOperandRange getMaskMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::arith::FastMathFlagsAttr getFastmathAttr();
  ::mlir::arith::FastMathFlags getFastmath();
  void setFastmathAttr(::mlir::arith::FastMathFlagsAttr attr);
  void setFastmath(::mlir::arith::FastMathFlags attrValue);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type resultType0, ::mlir::Value array, /*optional*/::mlir::Value dim, /*optional*/::mlir::Value mask, ::mlir::arith::FastMathFlagsAttr fastmath);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value array, /*optional*/::mlir::Value dim, /*optional*/::mlir::Value mask, ::mlir::arith::FastMathFlagsAttr fastmath);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type resultType0, ::mlir::Value array, /*optional*/::mlir::Value dim, /*optional*/::mlir::Value mask, ::mlir::arith::FastMathFlags fastmath = ::mlir::arith::FastMathFlags::none);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value array, /*optional*/::mlir::Value dim, /*optional*/::mlir::Value mask, ::mlir::arith::FastMathFlags fastmath = ::mlir::arith::FastMathFlags::none);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static void populateDefaultAttrs(const ::mlir::OperationName &opName, ::mlir::NamedAttrList &attributes);
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  ::mlir::LogicalResult verify();
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
} // namespace hlfir
MLIR_DECLARE_EXPLICIT_TYPE_ID(hlfir::SumOp)

namespace hlfir {

//===----------------------------------------------------------------------===//
// hlfir::TransposeOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class TransposeOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  TransposeOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class TransposeOpGenericAdaptor : public detail::TransposeOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::TransposeOpGenericAdaptorBase;
public:
  TransposeOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  TransposeOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : TransposeOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getArray() {
    return (*getODSOperands(0).begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class TransposeOpAdaptor : public TransposeOpGenericAdaptor<::mlir::ValueRange> {
public:
  using TransposeOpGenericAdaptor::TransposeOpGenericAdaptor;
  TransposeOpAdaptor(TransposeOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class TransposeOp : public ::mlir::Op<TransposeOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<hlfir::ExprType>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::OneOperand, ::mlir::OpTrait::OpInvariants> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = TransposeOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = TransposeOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("hlfir.transpose");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value getArray();
  ::mlir::MutableOperandRange getArrayMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type resultType0, ::mlir::Value array);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value array);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  ::mlir::LogicalResult verify();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
public:
};
} // namespace hlfir
MLIR_DECLARE_EXPLICIT_TYPE_ID(hlfir::TransposeOp)

namespace hlfir {

//===----------------------------------------------------------------------===//
// hlfir::WhereOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class WhereOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  WhereOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
  ::mlir::Region &getMaskRegion();
  ::mlir::Region &getBody();
  ::mlir::RegionRange getRegions();
};
} // namespace detail
template <typename RangeT>
class WhereOpGenericAdaptor : public detail::WhereOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::WhereOpGenericAdaptorBase;
public:
  WhereOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  WhereOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : WhereOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

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
class WhereOpAdaptor : public WhereOpGenericAdaptor<::mlir::ValueRange> {
public:
  using WhereOpGenericAdaptor::WhereOpGenericAdaptor;
  WhereOpAdaptor(WhereOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class WhereOp : public ::mlir::Op<WhereOp, ::mlir::OpTrait::NRegions<2>::Impl, ::mlir::OpTrait::ZeroResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::ZeroOperands, ::mlir::OpTrait::OpInvariants, hlfir::OrderedAssignmentTreeOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = WhereOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = WhereOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("hlfir.where");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Region &getMaskRegion();
  ::mlir::Region &getBody();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  ::mlir::LogicalResult verify();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
public:
  void getLeafRegions(llvm::SmallVectorImpl<mlir::Region*>& regions) {
    regions.push_back(&getMaskRegion());
  }
  mlir::Region* getSubTreeRegion() { return &getBody(); }
};
} // namespace hlfir
MLIR_DECLARE_EXPLICIT_TYPE_ID(hlfir::WhereOp)

namespace hlfir {

//===----------------------------------------------------------------------===//
// hlfir::YieldElementOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class YieldElementOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  YieldElementOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class YieldElementOpGenericAdaptor : public detail::YieldElementOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::YieldElementOpGenericAdaptorBase;
public:
  YieldElementOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  YieldElementOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : YieldElementOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getElementValue() {
    return (*getODSOperands(0).begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class YieldElementOpAdaptor : public YieldElementOpGenericAdaptor<::mlir::ValueRange> {
public:
  using YieldElementOpGenericAdaptor::YieldElementOpGenericAdaptor;
  YieldElementOpAdaptor(YieldElementOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class YieldElementOp : public ::mlir::Op<YieldElementOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::ZeroResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::OneOperand, ::mlir::OpTrait::HasParent<ElementalOp>::Impl, ::mlir::OpTrait::OpInvariants, ::mlir::OpTrait::IsTerminator, ::mlir::ConditionallySpeculatable::Trait, ::mlir::OpTrait::AlwaysSpeculatableImplTrait, ::mlir::MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = YieldElementOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = YieldElementOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("hlfir.yield_element");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value getElementValue();
  ::mlir::MutableOperandRange getElementValueMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value element_value);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value element_value);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
  void getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects);
public:
};
} // namespace hlfir
MLIR_DECLARE_EXPLICIT_TYPE_ID(hlfir::YieldElementOp)

namespace hlfir {

//===----------------------------------------------------------------------===//
// hlfir::YieldOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class YieldOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  YieldOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
  ::mlir::Region &getCleanup();
  ::mlir::RegionRange getRegions();
};
} // namespace detail
template <typename RangeT>
class YieldOpGenericAdaptor : public detail::YieldOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::YieldOpGenericAdaptorBase;
public:
  YieldOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  YieldOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : YieldOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getEntity() {
    return (*getODSOperands(0).begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class YieldOpAdaptor : public YieldOpGenericAdaptor<::mlir::ValueRange> {
public:
  using YieldOpGenericAdaptor::YieldOpGenericAdaptor;
  YieldOpAdaptor(YieldOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class YieldOp : public ::mlir::Op<YieldOp, ::mlir::OpTrait::OneRegion, ::mlir::OpTrait::ZeroResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::OneOperand, ::mlir::OpTrait::HasParent<RegionAssignOp, ElementalAddrOp, ForallOp, ForallMaskOp, WhereOp, ElseWhereOp>::Impl, ::mlir::OpTrait::SingleBlockImplicitTerminator<fir::FirEndOp>::Impl, ::mlir::OpTrait::OpInvariants, ::mlir::OpTrait::IsTerminator, ::mlir::ConditionallySpeculatable::Trait, ::mlir::OpTrait::RecursivelySpeculatableImplTrait, ::mlir::OpTrait::HasRecursiveMemoryEffects> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = YieldOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = YieldOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("hlfir.yield");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value getEntity();
  ::mlir::MutableOperandRange getEntityMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Region &getCleanup();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value entity);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value entity);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
public:
};
} // namespace hlfir
MLIR_DECLARE_EXPLICIT_TYPE_ID(hlfir::YieldOp)


#endif  // GET_OP_CLASSES

