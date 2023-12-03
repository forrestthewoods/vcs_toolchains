/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* AttrDef Definitions                                                        *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#ifdef GET_ATTRDEF_LIST
#undef GET_ATTRDEF_LIST

::fir::FortranVariableFlagsAttr

#endif  // GET_ATTRDEF_LIST

#ifdef GET_ATTRDEF_CLASSES
#undef GET_ATTRDEF_CLASSES

static ::mlir::OptionalParseResult generatedAttributeParser(::mlir::AsmParser &parser, ::llvm::StringRef *mnemonic, ::mlir::Type type, ::mlir::Attribute &value) {
  return ::mlir::AsmParser::KeywordSwitch<::mlir::OptionalParseResult>(parser)
    .Case(::fir::FortranVariableFlagsAttr::getMnemonic(), [&](llvm::StringRef, llvm::SMLoc) {
      value = ::fir::FortranVariableFlagsAttr::parse(parser, type);
      return ::mlir::success(!!value);
    })
    .Default([&](llvm::StringRef keyword, llvm::SMLoc) {
      *mnemonic = keyword;
      return std::nullopt;
    });
}

static ::mlir::LogicalResult generatedAttributePrinter(::mlir::Attribute def, ::mlir::AsmPrinter &printer) {
  return ::llvm::TypeSwitch<::mlir::Attribute, ::mlir::LogicalResult>(def)    .Case<::fir::FortranVariableFlagsAttr>([&](auto t) {
      printer << ::fir::FortranVariableFlagsAttr::getMnemonic();
t.print(printer);
      return ::mlir::success();
    })
    .Default([](auto) { return ::mlir::failure(); });
}

namespace fir {
namespace detail {
struct FortranVariableFlagsAttrStorage : public ::mlir::AttributeStorage {
  using KeyTy = std::tuple<FortranVariableFlagsEnum>;
  FortranVariableFlagsAttrStorage(FortranVariableFlagsEnum flags) : flags(flags) {}

  KeyTy getAsKey() const {
    return KeyTy(flags);
  }

  bool operator==(const KeyTy &tblgenKey) const {
    return (flags == std::get<0>(tblgenKey));
  }

  static ::llvm::hash_code hashKey(const KeyTy &tblgenKey) {
    return ::llvm::hash_combine(std::get<0>(tblgenKey));
  }

  static FortranVariableFlagsAttrStorage *construct(::mlir::AttributeStorageAllocator &allocator, const KeyTy &tblgenKey) {
    auto flags = std::get<0>(tblgenKey);
    return new (allocator.allocate<FortranVariableFlagsAttrStorage>()) FortranVariableFlagsAttrStorage(flags);
  }

  FortranVariableFlagsEnum flags;
};
} // namespace detail
FortranVariableFlagsAttr FortranVariableFlagsAttr::get(::mlir::MLIRContext *context, FortranVariableFlagsEnum flags) {
  return Base::get(context, flags);
}

FortranVariableFlagsEnum FortranVariableFlagsAttr::getFlags() const {
  return getImpl()->flags;
}

} // namespace fir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::fir::FortranVariableFlagsAttr)

#endif  // GET_ATTRDEF_CLASSES

