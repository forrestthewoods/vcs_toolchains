/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* TypeDef Declarations                                                       *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#ifdef GET_TYPEDEF_CLASSES
#undef GET_TYPEDEF_CLASSES


namespace mlir {
class AsmParser;
class AsmPrinter;
} // namespace mlir
namespace hlfir {
class ExprType;
namespace detail {
struct ExprTypeStorage;
} // namespace detail
class ExprType : public ::mlir::Type::TypeBase<ExprType, ::mlir::Type, detail::ExprTypeStorage> {
public:
  using Base::Base;
  using Shape = llvm::SmallVector<int64_t>;
  mlir::Type getEleTy() const {return getElementType();}
  bool isScalar() const { return getShape().empty(); }
  bool isArray() const { return !isScalar(); }
  bool isPolymorphic() const { return getPolymorphic(); }
  unsigned getRank() const {return getShape().size();}
  mlir::Type getElementExprType() const {
    mlir::Type eleTy = getElementType();
    if (fir::isa_trivial(eleTy))
      return eleTy;
    return hlfir::ExprType::get(eleTy.getContext(), Shape{}, eleTy,
              isPolymorphic());
  }
  static constexpr int64_t getUnknownExtent() {
    return mlir::ShapedType::kDynamic;
  }
  static ExprType get(::mlir::MLIRContext *context, ::llvm::ArrayRef<int64_t> shape, mlir::Type elementType, bool polymorphic);
  static constexpr ::llvm::StringLiteral getMnemonic() {
    return {"expr"};
  }

  static ::mlir::Type parse(::mlir::AsmParser &odsParser);
  void print(::mlir::AsmPrinter &odsPrinter) const;
  ::llvm::ArrayRef<int64_t> getShape() const;
  mlir::Type getElementType() const;
  bool getPolymorphic() const;
};
} // namespace hlfir
MLIR_DECLARE_EXPLICIT_TYPE_ID(hlfir::ExprType)

#endif  // GET_TYPEDEF_CLASSES

