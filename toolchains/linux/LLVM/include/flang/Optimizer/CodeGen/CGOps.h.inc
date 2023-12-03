/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Op Declarations                                                            *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#if defined(GET_OP_CLASSES) || defined(GET_OP_FWD_DEFINES)
#undef GET_OP_FWD_DEFINES
namespace fir {
namespace cg {
class XArrayCoorOp;
} // namespace cg
} // namespace fir
namespace fir {
namespace cg {
class XEmboxOp;
} // namespace cg
} // namespace fir
namespace fir {
namespace cg {
class XReboxOp;
} // namespace cg
} // namespace fir
#endif

#ifdef GET_OP_CLASSES
#undef GET_OP_CLASSES


//===----------------------------------------------------------------------===//
// Local Utility Method Definitions
//===----------------------------------------------------------------------===//

namespace fir {
namespace cg {

//===----------------------------------------------------------------------===//
// ::fir::cg::XArrayCoorOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class XArrayCoorOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  XArrayCoorOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class XArrayCoorOpGenericAdaptor : public detail::XArrayCoorOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::XArrayCoorOpGenericAdaptorBase;
public:
  XArrayCoorOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  XArrayCoorOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : XArrayCoorOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

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

  RangeT getShape() {
    return getODSOperands(1);
  }

  RangeT getShift() {
    return getODSOperands(2);
  }

  RangeT getSlice() {
    return getODSOperands(3);
  }

  RangeT getSubcomponent() {
    return getODSOperands(4);
  }

  RangeT getIndices() {
    return getODSOperands(5);
  }

  RangeT getLenParams() {
    return getODSOperands(6);
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class XArrayCoorOpAdaptor : public XArrayCoorOpGenericAdaptor<::mlir::ValueRange> {
public:
  using XArrayCoorOpGenericAdaptor::XArrayCoorOpGenericAdaptor;
  XArrayCoorOpAdaptor(XArrayCoorOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class XArrayCoorOp : public ::mlir::Op<XArrayCoorOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::fir::ReferenceType>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::AtLeastNOperands<1>::Impl, ::mlir::OpTrait::AttrSizedOperandSegments, ::mlir::OpTrait::OpInvariants> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = XArrayCoorOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = XArrayCoorOpGenericAdaptor<RangeT>;
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
    return ::llvm::StringLiteral("fircg.ext_array_coor");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value getMemref();
  ::mlir::Operation::operand_range getShape();
  ::mlir::Operation::operand_range getShift();
  ::mlir::Operation::operand_range getSlice();
  ::mlir::Operation::operand_range getSubcomponent();
  ::mlir::Operation::operand_range getIndices();
  ::mlir::Operation::operand_range getLenParams();
  ::mlir::MutableOperandRange getMemrefMutable();
  ::mlir::MutableOperandRange getShapeMutable();
  ::mlir::MutableOperandRange getShiftMutable();
  ::mlir::MutableOperandRange getSliceMutable();
  ::mlir::MutableOperandRange getSubcomponentMutable();
  ::mlir::MutableOperandRange getIndicesMutable();
  ::mlir::MutableOperandRange getLenParamsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type resultType0, ::mlir::Value memref, ::mlir::ValueRange shape, ::mlir::ValueRange shift, ::mlir::ValueRange slice, ::mlir::ValueRange subcomponent, ::mlir::ValueRange indices, ::mlir::ValueRange lenParams);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value memref, ::mlir::ValueRange shape, ::mlir::ValueRange shift, ::mlir::ValueRange slice, ::mlir::ValueRange subcomponent, ::mlir::ValueRange indices, ::mlir::ValueRange lenParams);
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
  unsigned getRank();

  // Shape is optional, but if it exists, it will be at offset 1.
  unsigned shapeOffset() { return 1; }
  unsigned shiftOffset() { return shapeOffset() + getShape().size(); }
  unsigned sliceOffset() { return shiftOffset() + getShift().size(); }
  unsigned subcomponentOffset() { return sliceOffset() + getSlice().size(); }
  unsigned indicesOffset() {
    return subcomponentOffset() + getSubcomponent().size();
  }
  unsigned lenParamsOffset() { return indicesOffset() + getIndices().size(); }
};
} // namespace cg
} // namespace fir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::fir::cg::XArrayCoorOp)

namespace fir {
namespace cg {

//===----------------------------------------------------------------------===//
// ::fir::cg::XEmboxOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class XEmboxOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  XEmboxOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class XEmboxOpGenericAdaptor : public detail::XEmboxOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::XEmboxOpGenericAdaptorBase;
public:
  XEmboxOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  XEmboxOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : XEmboxOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

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

  RangeT getShape() {
    return getODSOperands(1);
  }

  RangeT getShift() {
    return getODSOperands(2);
  }

  RangeT getSlice() {
    return getODSOperands(3);
  }

  RangeT getSubcomponent() {
    return getODSOperands(4);
  }

  RangeT getSubstr() {
    return getODSOperands(5);
  }

  RangeT getLenParams() {
    return getODSOperands(6);
  }

  ValueT getSourceBox() {
    auto operands = getODSOperands(7);
    return operands.empty() ? ValueT{} : (*operands.begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class XEmboxOpAdaptor : public XEmboxOpGenericAdaptor<::mlir::ValueRange> {
public:
  using XEmboxOpGenericAdaptor::XEmboxOpGenericAdaptor;
  XEmboxOpAdaptor(XEmboxOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class XEmboxOp : public ::mlir::Op<XEmboxOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::Type>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::AtLeastNOperands<1>::Impl, ::mlir::OpTrait::AttrSizedOperandSegments, ::mlir::OpTrait::OpInvariants> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = XEmboxOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = XEmboxOpGenericAdaptor<RangeT>;
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
    return ::llvm::StringLiteral("fircg.ext_embox");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value getMemref();
  ::mlir::Operation::operand_range getShape();
  ::mlir::Operation::operand_range getShift();
  ::mlir::Operation::operand_range getSlice();
  ::mlir::Operation::operand_range getSubcomponent();
  ::mlir::Operation::operand_range getSubstr();
  ::mlir::Operation::operand_range getLenParams();
  ::mlir::Value getSourceBox();
  ::mlir::MutableOperandRange getMemrefMutable();
  ::mlir::MutableOperandRange getShapeMutable();
  ::mlir::MutableOperandRange getShiftMutable();
  ::mlir::MutableOperandRange getSliceMutable();
  ::mlir::MutableOperandRange getSubcomponentMutable();
  ::mlir::MutableOperandRange getSubstrMutable();
  ::mlir::MutableOperandRange getLenParamsMutable();
  ::mlir::MutableOperandRange getSourceBoxMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type resultType0, ::mlir::Value memref, ::mlir::ValueRange shape, ::mlir::ValueRange shift, ::mlir::ValueRange slice, ::mlir::ValueRange subcomponent, ::mlir::ValueRange substr, ::mlir::ValueRange lenParams, /*optional*/::mlir::Value sourceBox);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value memref, ::mlir::ValueRange shape, ::mlir::ValueRange shift, ::mlir::ValueRange slice, ::mlir::ValueRange subcomponent, ::mlir::ValueRange substr, ::mlir::ValueRange lenParams, /*optional*/::mlir::Value sourceBox);
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
  // The rank of the entity being emboxed
  unsigned getRank() { return getShape().size(); }

  // The rank of the result. A slice op can reduce the rank.
  unsigned getOutRank();

  // The shape operands are mandatory and always start at 1.
  unsigned shapeOffset() { return 1; }
  unsigned shiftOffset() { return shapeOffset() + getShape().size(); }
  unsigned sliceOffset() { return shiftOffset() + getShift().size(); }
  unsigned subcomponentOffset() { return sliceOffset() + getSlice().size(); }
  unsigned substrOffset() {
    return subcomponentOffset() + getSubcomponent().size();
  }
  unsigned lenParamOffset() { return substrOffset() + getSubstr().size(); }
  unsigned getSourceBoxOffset() {
    return lenParamOffset() + getLenParams().size();
  }
};
} // namespace cg
} // namespace fir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::fir::cg::XEmboxOp)

namespace fir {
namespace cg {

//===----------------------------------------------------------------------===//
// ::fir::cg::XReboxOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class XReboxOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  XReboxOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class XReboxOpGenericAdaptor : public detail::XReboxOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::XReboxOpGenericAdaptorBase;
public:
  XReboxOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  XReboxOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : XReboxOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getBox() {
    return (*getODSOperands(0).begin());
  }

  RangeT getShape() {
    return getODSOperands(1);
  }

  RangeT getShift() {
    return getODSOperands(2);
  }

  RangeT getSlice() {
    return getODSOperands(3);
  }

  RangeT getSubcomponent() {
    return getODSOperands(4);
  }

  RangeT getSubstr() {
    return getODSOperands(5);
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class XReboxOpAdaptor : public XReboxOpGenericAdaptor<::mlir::ValueRange> {
public:
  using XReboxOpGenericAdaptor::XReboxOpGenericAdaptor;
  XReboxOpAdaptor(XReboxOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class XReboxOp : public ::mlir::Op<XReboxOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::Type>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::AtLeastNOperands<1>::Impl, ::mlir::OpTrait::AttrSizedOperandSegments, ::mlir::OpTrait::OpInvariants> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = XReboxOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = XReboxOpGenericAdaptor<RangeT>;
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
    return ::llvm::StringLiteral("fircg.ext_rebox");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value getBox();
  ::mlir::Operation::operand_range getShape();
  ::mlir::Operation::operand_range getShift();
  ::mlir::Operation::operand_range getSlice();
  ::mlir::Operation::operand_range getSubcomponent();
  ::mlir::Operation::operand_range getSubstr();
  ::mlir::MutableOperandRange getBoxMutable();
  ::mlir::MutableOperandRange getShapeMutable();
  ::mlir::MutableOperandRange getShiftMutable();
  ::mlir::MutableOperandRange getSliceMutable();
  ::mlir::MutableOperandRange getSubcomponentMutable();
  ::mlir::MutableOperandRange getSubstrMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type resultType0, ::mlir::Value box, ::mlir::ValueRange shape, ::mlir::ValueRange shift, ::mlir::ValueRange slice, ::mlir::ValueRange subcomponent, ::mlir::ValueRange substr);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value box, ::mlir::ValueRange shape, ::mlir::ValueRange shift, ::mlir::ValueRange slice, ::mlir::ValueRange subcomponent, ::mlir::ValueRange substr);
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
  // The rank of the entity being reboxed
  unsigned getRank();
  // The rank of the result box
  unsigned getOutRank();

  unsigned shapeOffset() { return 1; }
  unsigned shiftOffset() { return shapeOffset() + getShape().size(); }
  unsigned sliceOffset() { return shiftOffset() + getShift().size(); }
  unsigned subcomponentOffset() { return sliceOffset() + getSlice().size(); }
  unsigned substrOffset() {
    return subcomponentOffset() + getSubcomponent().size();
  }
};
} // namespace cg
} // namespace fir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::fir::cg::XReboxOp)


#endif  // GET_OP_CLASSES

