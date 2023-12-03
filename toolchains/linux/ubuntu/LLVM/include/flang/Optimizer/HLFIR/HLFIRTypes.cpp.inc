/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* TypeDef Definitions                                                        *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#ifdef GET_TYPEDEF_LIST
#undef GET_TYPEDEF_LIST

hlfir::ExprType

#endif  // GET_TYPEDEF_LIST

#ifdef GET_TYPEDEF_CLASSES
#undef GET_TYPEDEF_CLASSES

static ::mlir::OptionalParseResult generatedTypeParser(::mlir::AsmParser &parser, ::llvm::StringRef *mnemonic, ::mlir::Type &value) {
  return ::mlir::AsmParser::KeywordSwitch<::mlir::OptionalParseResult>(parser)
    .Case(hlfir::ExprType::getMnemonic(), [&](llvm::StringRef, llvm::SMLoc) {
      value = hlfir::ExprType::parse(parser);
      return ::mlir::success(!!value);
    })
    .Default([&](llvm::StringRef keyword, llvm::SMLoc) {
      *mnemonic = keyword;
      return std::nullopt;
    });
}

static ::mlir::LogicalResult generatedTypePrinter(::mlir::Type def, ::mlir::AsmPrinter &printer) {
  return ::llvm::TypeSwitch<::mlir::Type, ::mlir::LogicalResult>(def)    .Case<hlfir::ExprType>([&](auto t) {
      printer << hlfir::ExprType::getMnemonic();
t.print(printer);
      return ::mlir::success();
    })
    .Default([](auto) { return ::mlir::failure(); });
}

namespace hlfir {
namespace detail {
struct ExprTypeStorage : public ::mlir::TypeStorage {
  using KeyTy = std::tuple<::llvm::ArrayRef<int64_t>, mlir::Type, bool>;
  ExprTypeStorage(::llvm::ArrayRef<int64_t> shape, mlir::Type elementType, bool polymorphic) : shape(shape), elementType(elementType), polymorphic(polymorphic) {}

  KeyTy getAsKey() const {
    return KeyTy(shape, elementType, polymorphic);
  }

  bool operator==(const KeyTy &tblgenKey) const {
    return (shape == std::get<0>(tblgenKey)) && (elementType == std::get<1>(tblgenKey)) && (polymorphic == std::get<2>(tblgenKey));
  }

  static ::llvm::hash_code hashKey(const KeyTy &tblgenKey) {
    return ::llvm::hash_combine(std::get<0>(tblgenKey), std::get<1>(tblgenKey), std::get<2>(tblgenKey));
  }

  static ExprTypeStorage *construct(::mlir::TypeStorageAllocator &allocator, const KeyTy &tblgenKey) {
    auto shape = std::get<0>(tblgenKey);
    auto elementType = std::get<1>(tblgenKey);
    auto polymorphic = std::get<2>(tblgenKey);
    shape = allocator.copyInto(shape);
    return new (allocator.allocate<ExprTypeStorage>()) ExprTypeStorage(shape, elementType, polymorphic);
  }

  ::llvm::ArrayRef<int64_t> shape;
  mlir::Type elementType;
  bool polymorphic;
};
} // namespace detail
ExprType ExprType::get(::mlir::MLIRContext *context, ::llvm::ArrayRef<int64_t> shape, mlir::Type elementType, bool polymorphic) {
  return Base::get(context, shape, elementType, polymorphic);
}

::llvm::ArrayRef<int64_t> ExprType::getShape() const {
  return getImpl()->shape;
}

mlir::Type ExprType::getElementType() const {
  return getImpl()->elementType;
}

bool ExprType::getPolymorphic() const {
  return getImpl()->polymorphic;
}

} // namespace hlfir
MLIR_DEFINE_EXPLICIT_TYPE_ID(hlfir::ExprType)
namespace hlfir {

/// Parse a type registered to this dialect.
::mlir::Type hlfirDialect::parseType(::mlir::DialectAsmParser &parser) const {
  ::llvm::SMLoc typeLoc = parser.getCurrentLocation();
  ::llvm::StringRef mnemonic;
  ::mlir::Type genType;
  auto parseResult = generatedTypeParser(parser, &mnemonic, genType);
  if (parseResult.has_value())
    return genType;
  
  parser.emitError(typeLoc) << "unknown  type `"
      << mnemonic << "` in dialect `" << getNamespace() << "`";
  return {};
}
/// Print a type registered to this dialect.
void hlfirDialect::printType(::mlir::Type type,
                    ::mlir::DialectAsmPrinter &printer) const {
  if (::mlir::succeeded(generatedTypePrinter(type, printer)))
    return;
  
}
} // namespace hlfir

#endif  // GET_TYPEDEF_CLASSES

