/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* AttrDef Declarations                                                       *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#ifdef GET_ATTRDEF_CLASSES
#undef GET_ATTRDEF_CLASSES


namespace mlir {
class AsmParser;
class AsmPrinter;
} // namespace mlir
namespace fir {
class FortranVariableFlagsAttr;
namespace detail {
struct FortranVariableFlagsAttrStorage;
} // namespace detail
class FortranVariableFlagsAttr : public ::mlir::Attribute::AttrBase<FortranVariableFlagsAttr, ::mlir::Attribute, detail::FortranVariableFlagsAttrStorage> {
public:
  using Base::Base;
  static FortranVariableFlagsAttr get(::mlir::MLIRContext *context, FortranVariableFlagsEnum flags);
  static constexpr ::llvm::StringLiteral getMnemonic() {
    return {"var_attrs"};
  }

  static ::mlir::Attribute parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType);
  void print(::mlir::AsmPrinter &odsPrinter) const;
  FortranVariableFlagsEnum getFlags() const;
};
} // namespace fir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::fir::FortranVariableFlagsAttr)

#endif  // GET_ATTRDEF_CLASSES

