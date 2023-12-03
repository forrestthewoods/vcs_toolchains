/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* TypeDef Definitions                                                        *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#ifdef GET_TYPEDEF_LIST
#undef GET_TYPEDEF_LIST

::fir::BoxCharType,
::fir::BoxProcType,
::fir::BoxType,
::fir::CharacterType,
::fir::ClassType,
::fir::ComplexType,
::fir::FieldType,
::fir::HeapType,
::fir::IntegerType,
::fir::LLVMPointerType,
::fir::LenType,
::fir::LogicalType,
::fir::PointerType,
::fir::RealType,
::fir::RecordType,
::fir::ReferenceType,
::fir::SequenceType,
::fir::ShapeShiftType,
::fir::ShapeType,
::fir::ShiftType,
::fir::SliceType,
::fir::TypeDescType,
::fir::VectorType,
::fir::VoidType

#endif  // GET_TYPEDEF_LIST

#ifdef GET_TYPEDEF_CLASSES
#undef GET_TYPEDEF_CLASSES

static ::mlir::OptionalParseResult generatedTypeParser(::mlir::AsmParser &parser, ::llvm::StringRef *mnemonic, ::mlir::Type &value) {
  return ::mlir::AsmParser::KeywordSwitch<::mlir::OptionalParseResult>(parser)
    .Case(::fir::BoxCharType::getMnemonic(), [&](llvm::StringRef, llvm::SMLoc) {
      value = ::fir::BoxCharType::parse(parser);
      return ::mlir::success(!!value);
    })
    .Case(::fir::BoxProcType::getMnemonic(), [&](llvm::StringRef, llvm::SMLoc) {
      value = ::fir::BoxProcType::parse(parser);
      return ::mlir::success(!!value);
    })
    .Case(::fir::BoxType::getMnemonic(), [&](llvm::StringRef, llvm::SMLoc) {
      value = ::fir::BoxType::parse(parser);
      return ::mlir::success(!!value);
    })
    .Case(::fir::CharacterType::getMnemonic(), [&](llvm::StringRef, llvm::SMLoc) {
      value = ::fir::CharacterType::parse(parser);
      return ::mlir::success(!!value);
    })
    .Case(::fir::ClassType::getMnemonic(), [&](llvm::StringRef, llvm::SMLoc) {
      value = ::fir::ClassType::parse(parser);
      return ::mlir::success(!!value);
    })
    .Case(::fir::ComplexType::getMnemonic(), [&](llvm::StringRef, llvm::SMLoc) {
      value = ::fir::ComplexType::parse(parser);
      return ::mlir::success(!!value);
    })
    .Case(::fir::FieldType::getMnemonic(), [&](llvm::StringRef, llvm::SMLoc) {
      value = ::fir::FieldType::get(parser.getContext());
      return ::mlir::success(!!value);
    })
    .Case(::fir::HeapType::getMnemonic(), [&](llvm::StringRef, llvm::SMLoc) {
      value = ::fir::HeapType::parse(parser);
      return ::mlir::success(!!value);
    })
    .Case(::fir::IntegerType::getMnemonic(), [&](llvm::StringRef, llvm::SMLoc) {
      value = ::fir::IntegerType::parse(parser);
      return ::mlir::success(!!value);
    })
    .Case(::fir::LLVMPointerType::getMnemonic(), [&](llvm::StringRef, llvm::SMLoc) {
      value = ::fir::LLVMPointerType::parse(parser);
      return ::mlir::success(!!value);
    })
    .Case(::fir::LenType::getMnemonic(), [&](llvm::StringRef, llvm::SMLoc) {
      value = ::fir::LenType::get(parser.getContext());
      return ::mlir::success(!!value);
    })
    .Case(::fir::LogicalType::getMnemonic(), [&](llvm::StringRef, llvm::SMLoc) {
      value = ::fir::LogicalType::parse(parser);
      return ::mlir::success(!!value);
    })
    .Case(::fir::PointerType::getMnemonic(), [&](llvm::StringRef, llvm::SMLoc) {
      value = ::fir::PointerType::parse(parser);
      return ::mlir::success(!!value);
    })
    .Case(::fir::RealType::getMnemonic(), [&](llvm::StringRef, llvm::SMLoc) {
      value = ::fir::RealType::parse(parser);
      return ::mlir::success(!!value);
    })
    .Case(::fir::RecordType::getMnemonic(), [&](llvm::StringRef, llvm::SMLoc) {
      value = ::fir::RecordType::parse(parser);
      return ::mlir::success(!!value);
    })
    .Case(::fir::ReferenceType::getMnemonic(), [&](llvm::StringRef, llvm::SMLoc) {
      value = ::fir::ReferenceType::parse(parser);
      return ::mlir::success(!!value);
    })
    .Case(::fir::SequenceType::getMnemonic(), [&](llvm::StringRef, llvm::SMLoc) {
      value = ::fir::SequenceType::parse(parser);
      return ::mlir::success(!!value);
    })
    .Case(::fir::ShapeShiftType::getMnemonic(), [&](llvm::StringRef, llvm::SMLoc) {
      value = ::fir::ShapeShiftType::parse(parser);
      return ::mlir::success(!!value);
    })
    .Case(::fir::ShapeType::getMnemonic(), [&](llvm::StringRef, llvm::SMLoc) {
      value = ::fir::ShapeType::parse(parser);
      return ::mlir::success(!!value);
    })
    .Case(::fir::ShiftType::getMnemonic(), [&](llvm::StringRef, llvm::SMLoc) {
      value = ::fir::ShiftType::parse(parser);
      return ::mlir::success(!!value);
    })
    .Case(::fir::SliceType::getMnemonic(), [&](llvm::StringRef, llvm::SMLoc) {
      value = ::fir::SliceType::parse(parser);
      return ::mlir::success(!!value);
    })
    .Case(::fir::TypeDescType::getMnemonic(), [&](llvm::StringRef, llvm::SMLoc) {
      value = ::fir::TypeDescType::parse(parser);
      return ::mlir::success(!!value);
    })
    .Case(::fir::VectorType::getMnemonic(), [&](llvm::StringRef, llvm::SMLoc) {
      value = ::fir::VectorType::parse(parser);
      return ::mlir::success(!!value);
    })
    .Case(::fir::VoidType::getMnemonic(), [&](llvm::StringRef, llvm::SMLoc) {
      value = ::fir::VoidType::get(parser.getContext());
      return ::mlir::success(!!value);
    })
    .Default([&](llvm::StringRef keyword, llvm::SMLoc) {
      *mnemonic = keyword;
      return std::nullopt;
    });
}

static ::mlir::LogicalResult generatedTypePrinter(::mlir::Type def, ::mlir::AsmPrinter &printer) {
  return ::llvm::TypeSwitch<::mlir::Type, ::mlir::LogicalResult>(def)    .Case<::fir::BoxCharType>([&](auto t) {
      printer << ::fir::BoxCharType::getMnemonic();
t.print(printer);
      return ::mlir::success();
    })
    .Case<::fir::BoxProcType>([&](auto t) {
      printer << ::fir::BoxProcType::getMnemonic();
t.print(printer);
      return ::mlir::success();
    })
    .Case<::fir::BoxType>([&](auto t) {
      printer << ::fir::BoxType::getMnemonic();
t.print(printer);
      return ::mlir::success();
    })
    .Case<::fir::CharacterType>([&](auto t) {
      printer << ::fir::CharacterType::getMnemonic();
t.print(printer);
      return ::mlir::success();
    })
    .Case<::fir::ClassType>([&](auto t) {
      printer << ::fir::ClassType::getMnemonic();
t.print(printer);
      return ::mlir::success();
    })
    .Case<::fir::ComplexType>([&](auto t) {
      printer << ::fir::ComplexType::getMnemonic();
t.print(printer);
      return ::mlir::success();
    })
    .Case<::fir::FieldType>([&](auto t) {
      printer << ::fir::FieldType::getMnemonic();
      return ::mlir::success();
    })
    .Case<::fir::HeapType>([&](auto t) {
      printer << ::fir::HeapType::getMnemonic();
t.print(printer);
      return ::mlir::success();
    })
    .Case<::fir::IntegerType>([&](auto t) {
      printer << ::fir::IntegerType::getMnemonic();
t.print(printer);
      return ::mlir::success();
    })
    .Case<::fir::LLVMPointerType>([&](auto t) {
      printer << ::fir::LLVMPointerType::getMnemonic();
t.print(printer);
      return ::mlir::success();
    })
    .Case<::fir::LenType>([&](auto t) {
      printer << ::fir::LenType::getMnemonic();
      return ::mlir::success();
    })
    .Case<::fir::LogicalType>([&](auto t) {
      printer << ::fir::LogicalType::getMnemonic();
t.print(printer);
      return ::mlir::success();
    })
    .Case<::fir::PointerType>([&](auto t) {
      printer << ::fir::PointerType::getMnemonic();
t.print(printer);
      return ::mlir::success();
    })
    .Case<::fir::RealType>([&](auto t) {
      printer << ::fir::RealType::getMnemonic();
t.print(printer);
      return ::mlir::success();
    })
    .Case<::fir::RecordType>([&](auto t) {
      printer << ::fir::RecordType::getMnemonic();
t.print(printer);
      return ::mlir::success();
    })
    .Case<::fir::ReferenceType>([&](auto t) {
      printer << ::fir::ReferenceType::getMnemonic();
t.print(printer);
      return ::mlir::success();
    })
    .Case<::fir::SequenceType>([&](auto t) {
      printer << ::fir::SequenceType::getMnemonic();
t.print(printer);
      return ::mlir::success();
    })
    .Case<::fir::ShapeShiftType>([&](auto t) {
      printer << ::fir::ShapeShiftType::getMnemonic();
t.print(printer);
      return ::mlir::success();
    })
    .Case<::fir::ShapeType>([&](auto t) {
      printer << ::fir::ShapeType::getMnemonic();
t.print(printer);
      return ::mlir::success();
    })
    .Case<::fir::ShiftType>([&](auto t) {
      printer << ::fir::ShiftType::getMnemonic();
t.print(printer);
      return ::mlir::success();
    })
    .Case<::fir::SliceType>([&](auto t) {
      printer << ::fir::SliceType::getMnemonic();
t.print(printer);
      return ::mlir::success();
    })
    .Case<::fir::TypeDescType>([&](auto t) {
      printer << ::fir::TypeDescType::getMnemonic();
t.print(printer);
      return ::mlir::success();
    })
    .Case<::fir::VectorType>([&](auto t) {
      printer << ::fir::VectorType::getMnemonic();
t.print(printer);
      return ::mlir::success();
    })
    .Case<::fir::VoidType>([&](auto t) {
      printer << ::fir::VoidType::getMnemonic();
      return ::mlir::success();
    })
    .Default([](auto) { return ::mlir::failure(); });
}

namespace fir {
namespace detail {
struct BoxCharTypeStorage : public ::mlir::TypeStorage {
  using KeyTy = std::tuple<KindTy>;
  BoxCharTypeStorage(KindTy kind) : kind(kind) {}

  KeyTy getAsKey() const {
    return KeyTy(kind);
  }

  bool operator==(const KeyTy &tblgenKey) const {
    return (kind == std::get<0>(tblgenKey));
  }

  static ::llvm::hash_code hashKey(const KeyTy &tblgenKey) {
    return ::llvm::hash_combine(std::get<0>(tblgenKey));
  }

  static BoxCharTypeStorage *construct(::mlir::TypeStorageAllocator &allocator, const KeyTy &tblgenKey) {
    auto kind = std::get<0>(tblgenKey);
    return new (allocator.allocate<BoxCharTypeStorage>()) BoxCharTypeStorage(kind);
  }

  KindTy kind;
};
} // namespace detail
BoxCharType BoxCharType::get(::mlir::MLIRContext *context, KindTy kind) {
  return Base::get(context, kind);
}

KindTy BoxCharType::getKind() const {
  return getImpl()->kind;
}

} // namespace fir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::fir::BoxCharType)
namespace fir {
namespace detail {
struct BoxProcTypeStorage : public ::mlir::TypeStorage {
  using KeyTy = std::tuple<mlir::Type>;
  BoxProcTypeStorage(mlir::Type eleTy) : eleTy(eleTy) {}

  KeyTy getAsKey() const {
    return KeyTy(eleTy);
  }

  bool operator==(const KeyTy &tblgenKey) const {
    return (eleTy == std::get<0>(tblgenKey));
  }

  static ::llvm::hash_code hashKey(const KeyTy &tblgenKey) {
    return ::llvm::hash_combine(std::get<0>(tblgenKey));
  }

  static BoxProcTypeStorage *construct(::mlir::TypeStorageAllocator &allocator, const KeyTy &tblgenKey) {
    auto eleTy = std::get<0>(tblgenKey);
    return new (allocator.allocate<BoxProcTypeStorage>()) BoxProcTypeStorage(eleTy);
  }

  mlir::Type eleTy;
};
} // namespace detail
BoxProcType BoxProcType::get(::mlir::MLIRContext *context, mlir::Type eleTy) {
  return Base::get(context, eleTy);
}

BoxProcType BoxProcType::getChecked(::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError, ::mlir::MLIRContext *context, mlir::Type eleTy) {
  return Base::getChecked(emitError, context, eleTy);
}

mlir::Type BoxProcType::getEleTy() const {
  return getImpl()->eleTy;
}

} // namespace fir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::fir::BoxProcType)
namespace fir {
namespace detail {
struct BoxTypeStorage : public ::mlir::TypeStorage {
  using KeyTy = std::tuple<mlir::Type>;
  BoxTypeStorage(mlir::Type eleTy) : eleTy(eleTy) {}

  KeyTy getAsKey() const {
    return KeyTy(eleTy);
  }

  bool operator==(const KeyTy &tblgenKey) const {
    return (eleTy == std::get<0>(tblgenKey));
  }

  static ::llvm::hash_code hashKey(const KeyTy &tblgenKey) {
    return ::llvm::hash_combine(std::get<0>(tblgenKey));
  }

  static BoxTypeStorage *construct(::mlir::TypeStorageAllocator &allocator, const KeyTy &tblgenKey) {
    auto eleTy = std::get<0>(tblgenKey);
    return new (allocator.allocate<BoxTypeStorage>()) BoxTypeStorage(eleTy);
  }

  mlir::Type eleTy;
};
} // namespace detail
BoxType BoxType::get(mlir::Type eleTy) {
  return Base::get(eleTy.getContext(), eleTy);
}

BoxType BoxType::getChecked(::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError, mlir::Type eleTy) {
  return Base::get(eleTy.getContext(), eleTy);
}

::mlir::Type BoxType::parse(::mlir::AsmParser &odsParser) {
  ::mlir::Builder odsBuilder(odsParser.getContext());
  ::llvm::SMLoc odsLoc = odsParser.getCurrentLocation();
  (void) odsLoc;
  ::mlir::FailureOr<mlir::Type> _result_eleTy;
  // Parse literal '<'
  if (odsParser.parseLess()) return {};

  // Parse variable 'eleTy'
  _result_eleTy = ::mlir::FieldParser<mlir::Type>::parse(odsParser);
  if (::mlir::failed(_result_eleTy)) {
    odsParser.emitError(odsParser.getCurrentLocation(), "failed to parse fir_BoxType parameter 'eleTy' which is to be a `mlir::Type`");
    return {};
  }
  // Parse literal '>'
  if (odsParser.parseGreater()) return {};
  assert(::mlir::succeeded(_result_eleTy));
  return odsParser.getChecked<BoxType>(odsLoc, odsParser.getContext(),
      mlir::Type((*_result_eleTy)));
}

void BoxType::print(::mlir::AsmPrinter &odsPrinter) const {
  ::mlir::Builder odsBuilder(getContext());
  odsPrinter << "<";
  odsPrinter.printStrippedAttrOrType(getEleTy());
  odsPrinter << ">";
}

mlir::Type BoxType::getEleTy() const {
  return getImpl()->eleTy;
}

} // namespace fir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::fir::BoxType)
namespace fir {
namespace detail {
struct CharacterTypeStorage : public ::mlir::TypeStorage {
  using KeyTy = std::tuple<KindTy, CharacterType::LenType>;
  CharacterTypeStorage(KindTy FKind, CharacterType::LenType len) : FKind(FKind), len(len) {}

  KeyTy getAsKey() const {
    return KeyTy(FKind, len);
  }

  bool operator==(const KeyTy &tblgenKey) const {
    return (FKind == std::get<0>(tblgenKey)) && (len == std::get<1>(tblgenKey));
  }

  static ::llvm::hash_code hashKey(const KeyTy &tblgenKey) {
    return ::llvm::hash_combine(std::get<0>(tblgenKey), std::get<1>(tblgenKey));
  }

  static CharacterTypeStorage *construct(::mlir::TypeStorageAllocator &allocator, const KeyTy &tblgenKey) {
    auto FKind = std::get<0>(tblgenKey);
    auto len = std::get<1>(tblgenKey);
    return new (allocator.allocate<CharacterTypeStorage>()) CharacterTypeStorage(FKind, len);
  }

  KindTy FKind;
  CharacterType::LenType len;
};
} // namespace detail
CharacterType CharacterType::get(::mlir::MLIRContext *context, KindTy FKind, CharacterType::LenType len) {
  return Base::get(context, FKind, len);
}

KindTy CharacterType::getFKind() const {
  return getImpl()->FKind;
}

CharacterType::LenType CharacterType::getLen() const {
  return getImpl()->len;
}

} // namespace fir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::fir::CharacterType)
namespace fir {
namespace detail {
struct ClassTypeStorage : public ::mlir::TypeStorage {
  using KeyTy = std::tuple<mlir::Type>;
  ClassTypeStorage(mlir::Type eleTy) : eleTy(eleTy) {}

  KeyTy getAsKey() const {
    return KeyTy(eleTy);
  }

  bool operator==(const KeyTy &tblgenKey) const {
    return (eleTy == std::get<0>(tblgenKey));
  }

  static ::llvm::hash_code hashKey(const KeyTy &tblgenKey) {
    return ::llvm::hash_combine(std::get<0>(tblgenKey));
  }

  static ClassTypeStorage *construct(::mlir::TypeStorageAllocator &allocator, const KeyTy &tblgenKey) {
    auto eleTy = std::get<0>(tblgenKey);
    return new (allocator.allocate<ClassTypeStorage>()) ClassTypeStorage(eleTy);
  }

  mlir::Type eleTy;
};
} // namespace detail
ClassType ClassType::get(::mlir::MLIRContext *context, mlir::Type eleTy) {
  return Base::get(context, eleTy);
}

ClassType ClassType::getChecked(::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError, ::mlir::MLIRContext *context, mlir::Type eleTy) {
  return Base::getChecked(emitError, context, eleTy);
}

ClassType ClassType::get(mlir::Type eleTy) {
  return Base::get(eleTy.getContext(), eleTy);
}

ClassType ClassType::getChecked(::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError, mlir::Type eleTy) {
  return Base::getChecked(emitError, eleTy.getContext(), eleTy);
}

::mlir::Type ClassType::parse(::mlir::AsmParser &odsParser) {
  ::mlir::Builder odsBuilder(odsParser.getContext());
  ::llvm::SMLoc odsLoc = odsParser.getCurrentLocation();
  (void) odsLoc;
  ::mlir::FailureOr<mlir::Type> _result_eleTy;
  // Parse literal '<'
  if (odsParser.parseLess()) return {};

  // Parse variable 'eleTy'
  _result_eleTy = ::mlir::FieldParser<mlir::Type>::parse(odsParser);
  if (::mlir::failed(_result_eleTy)) {
    odsParser.emitError(odsParser.getCurrentLocation(), "failed to parse fir_ClassType parameter 'eleTy' which is to be a `mlir::Type`");
    return {};
  }
  // Parse literal '>'
  if (odsParser.parseGreater()) return {};
  assert(::mlir::succeeded(_result_eleTy));
  return odsParser.getChecked<ClassType>(odsLoc, odsParser.getContext(),
      mlir::Type((*_result_eleTy)));
}

void ClassType::print(::mlir::AsmPrinter &odsPrinter) const {
  ::mlir::Builder odsBuilder(getContext());
  odsPrinter << "<";
  odsPrinter.printStrippedAttrOrType(getEleTy());
  odsPrinter << ">";
}

mlir::Type ClassType::getEleTy() const {
  return getImpl()->eleTy;
}

} // namespace fir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::fir::ClassType)
namespace fir {
namespace detail {
struct ComplexTypeStorage : public ::mlir::TypeStorage {
  using KeyTy = std::tuple<KindTy>;
  ComplexTypeStorage(KindTy fKind) : fKind(fKind) {}

  KeyTy getAsKey() const {
    return KeyTy(fKind);
  }

  bool operator==(const KeyTy &tblgenKey) const {
    return (fKind == std::get<0>(tblgenKey));
  }

  static ::llvm::hash_code hashKey(const KeyTy &tblgenKey) {
    return ::llvm::hash_combine(std::get<0>(tblgenKey));
  }

  static ComplexTypeStorage *construct(::mlir::TypeStorageAllocator &allocator, const KeyTy &tblgenKey) {
    auto fKind = std::get<0>(tblgenKey);
    return new (allocator.allocate<ComplexTypeStorage>()) ComplexTypeStorage(fKind);
  }

  KindTy fKind;
};
} // namespace detail
ComplexType ComplexType::get(::mlir::MLIRContext *context, KindTy fKind) {
  return Base::get(context, fKind);
}

KindTy ComplexType::getFKind() const {
  return getImpl()->fKind;
}

} // namespace fir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::fir::ComplexType)
namespace fir {
} // namespace fir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::fir::FieldType)
namespace fir {
namespace detail {
struct HeapTypeStorage : public ::mlir::TypeStorage {
  using KeyTy = std::tuple<mlir::Type>;
  HeapTypeStorage(mlir::Type eleTy) : eleTy(eleTy) {}

  KeyTy getAsKey() const {
    return KeyTy(eleTy);
  }

  bool operator==(const KeyTy &tblgenKey) const {
    return (eleTy == std::get<0>(tblgenKey));
  }

  static ::llvm::hash_code hashKey(const KeyTy &tblgenKey) {
    return ::llvm::hash_combine(std::get<0>(tblgenKey));
  }

  static HeapTypeStorage *construct(::mlir::TypeStorageAllocator &allocator, const KeyTy &tblgenKey) {
    auto eleTy = std::get<0>(tblgenKey);
    return new (allocator.allocate<HeapTypeStorage>()) HeapTypeStorage(eleTy);
  }

  mlir::Type eleTy;
};
} // namespace detail
HeapType HeapType::get(mlir::Type elementType) {
  assert(singleIndirectionLevel(elementType) && "invalid element type");
  return Base::get(elementType.getContext(), elementType);
}

HeapType HeapType::getChecked(::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError, mlir::Type elementType) {
  assert(singleIndirectionLevel(elementType) && "invalid element type");
  return Base::get(elementType.getContext(), elementType);
}

mlir::Type HeapType::getEleTy() const {
  return getImpl()->eleTy;
}

} // namespace fir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::fir::HeapType)
namespace fir {
namespace detail {
struct IntegerTypeStorage : public ::mlir::TypeStorage {
  using KeyTy = std::tuple<KindTy>;
  IntegerTypeStorage(KindTy fKind) : fKind(fKind) {}

  KeyTy getAsKey() const {
    return KeyTy(fKind);
  }

  bool operator==(const KeyTy &tblgenKey) const {
    return (fKind == std::get<0>(tblgenKey));
  }

  static ::llvm::hash_code hashKey(const KeyTy &tblgenKey) {
    return ::llvm::hash_combine(std::get<0>(tblgenKey));
  }

  static IntegerTypeStorage *construct(::mlir::TypeStorageAllocator &allocator, const KeyTy &tblgenKey) {
    auto fKind = std::get<0>(tblgenKey);
    return new (allocator.allocate<IntegerTypeStorage>()) IntegerTypeStorage(fKind);
  }

  KindTy fKind;
};
} // namespace detail
IntegerType IntegerType::get(::mlir::MLIRContext *context, KindTy fKind) {
  return Base::get(context, fKind);
}

KindTy IntegerType::getFKind() const {
  return getImpl()->fKind;
}

} // namespace fir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::fir::IntegerType)
namespace fir {
namespace detail {
struct LLVMPointerTypeStorage : public ::mlir::TypeStorage {
  using KeyTy = std::tuple<mlir::Type>;
  LLVMPointerTypeStorage(mlir::Type eleTy) : eleTy(eleTy) {}

  KeyTy getAsKey() const {
    return KeyTy(eleTy);
  }

  bool operator==(const KeyTy &tblgenKey) const {
    return (eleTy == std::get<0>(tblgenKey));
  }

  static ::llvm::hash_code hashKey(const KeyTy &tblgenKey) {
    return ::llvm::hash_combine(std::get<0>(tblgenKey));
  }

  static LLVMPointerTypeStorage *construct(::mlir::TypeStorageAllocator &allocator, const KeyTy &tblgenKey) {
    auto eleTy = std::get<0>(tblgenKey);
    return new (allocator.allocate<LLVMPointerTypeStorage>()) LLVMPointerTypeStorage(eleTy);
  }

  mlir::Type eleTy;
};
} // namespace detail
LLVMPointerType LLVMPointerType::get(::mlir::MLIRContext *context, mlir::Type eleTy) {
  return Base::get(context, eleTy);
}

LLVMPointerType LLVMPointerType::get(mlir::Type elementType) {
  return Base::get(elementType.getContext(), elementType);
}

::mlir::Type LLVMPointerType::parse(::mlir::AsmParser &odsParser) {
  ::mlir::Builder odsBuilder(odsParser.getContext());
  ::llvm::SMLoc odsLoc = odsParser.getCurrentLocation();
  (void) odsLoc;
  ::mlir::FailureOr<mlir::Type> _result_eleTy;
  // Parse literal '<'
  if (odsParser.parseLess()) return {};

  // Parse variable 'eleTy'
  _result_eleTy = ::mlir::FieldParser<mlir::Type>::parse(odsParser);
  if (::mlir::failed(_result_eleTy)) {
    odsParser.emitError(odsParser.getCurrentLocation(), "failed to parse fir_LLVMPointerType parameter 'eleTy' which is to be a `mlir::Type`");
    return {};
  }
  // Parse literal '>'
  if (odsParser.parseGreater()) return {};
  assert(::mlir::succeeded(_result_eleTy));
  return LLVMPointerType::get(odsParser.getContext(),
      mlir::Type((*_result_eleTy)));
}

void LLVMPointerType::print(::mlir::AsmPrinter &odsPrinter) const {
  ::mlir::Builder odsBuilder(getContext());
  odsPrinter << "<";
  odsPrinter.printStrippedAttrOrType(getEleTy());
  odsPrinter << ">";
}

mlir::Type LLVMPointerType::getEleTy() const {
  return getImpl()->eleTy;
}

} // namespace fir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::fir::LLVMPointerType)
namespace fir {
} // namespace fir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::fir::LenType)
namespace fir {
namespace detail {
struct LogicalTypeStorage : public ::mlir::TypeStorage {
  using KeyTy = std::tuple<KindTy>;
  LogicalTypeStorage(KindTy fKind) : fKind(fKind) {}

  KeyTy getAsKey() const {
    return KeyTy(fKind);
  }

  bool operator==(const KeyTy &tblgenKey) const {
    return (fKind == std::get<0>(tblgenKey));
  }

  static ::llvm::hash_code hashKey(const KeyTy &tblgenKey) {
    return ::llvm::hash_combine(std::get<0>(tblgenKey));
  }

  static LogicalTypeStorage *construct(::mlir::TypeStorageAllocator &allocator, const KeyTy &tblgenKey) {
    auto fKind = std::get<0>(tblgenKey);
    return new (allocator.allocate<LogicalTypeStorage>()) LogicalTypeStorage(fKind);
  }

  KindTy fKind;
};
} // namespace detail
LogicalType LogicalType::get(::mlir::MLIRContext *context, KindTy fKind) {
  return Base::get(context, fKind);
}

KindTy LogicalType::getFKind() const {
  return getImpl()->fKind;
}

} // namespace fir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::fir::LogicalType)
namespace fir {
namespace detail {
struct PointerTypeStorage : public ::mlir::TypeStorage {
  using KeyTy = std::tuple<mlir::Type>;
  PointerTypeStorage(mlir::Type eleTy) : eleTy(eleTy) {}

  KeyTy getAsKey() const {
    return KeyTy(eleTy);
  }

  bool operator==(const KeyTy &tblgenKey) const {
    return (eleTy == std::get<0>(tblgenKey));
  }

  static ::llvm::hash_code hashKey(const KeyTy &tblgenKey) {
    return ::llvm::hash_combine(std::get<0>(tblgenKey));
  }

  static PointerTypeStorage *construct(::mlir::TypeStorageAllocator &allocator, const KeyTy &tblgenKey) {
    auto eleTy = std::get<0>(tblgenKey);
    return new (allocator.allocate<PointerTypeStorage>()) PointerTypeStorage(eleTy);
  }

  mlir::Type eleTy;
};
} // namespace detail
PointerType PointerType::get(mlir::Type elementType) {
  assert(singleIndirectionLevel(elementType) && "invalid element type");
  return Base::get(elementType.getContext(), elementType);
}

PointerType PointerType::getChecked(::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError, mlir::Type elementType) {
  assert(singleIndirectionLevel(elementType) && "invalid element type");
  return Base::get(elementType.getContext(), elementType);
}

mlir::Type PointerType::getEleTy() const {
  return getImpl()->eleTy;
}

} // namespace fir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::fir::PointerType)
namespace fir {
namespace detail {
struct RealTypeStorage : public ::mlir::TypeStorage {
  using KeyTy = std::tuple<KindTy>;
  RealTypeStorage(KindTy fKind) : fKind(fKind) {}

  KeyTy getAsKey() const {
    return KeyTy(fKind);
  }

  bool operator==(const KeyTy &tblgenKey) const {
    return (fKind == std::get<0>(tblgenKey));
  }

  static ::llvm::hash_code hashKey(const KeyTy &tblgenKey) {
    return ::llvm::hash_combine(std::get<0>(tblgenKey));
  }

  static RealTypeStorage *construct(::mlir::TypeStorageAllocator &allocator, const KeyTy &tblgenKey) {
    auto fKind = std::get<0>(tblgenKey);
    return new (allocator.allocate<RealTypeStorage>()) RealTypeStorage(fKind);
  }

  KindTy fKind;
};
} // namespace detail
RealType RealType::get(::mlir::MLIRContext *context, KindTy fKind) {
  return Base::get(context, fKind);
}

RealType RealType::getChecked(::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError, ::mlir::MLIRContext *context, KindTy fKind) {
  return Base::getChecked(emitError, context, fKind);
}

KindTy RealType::getFKind() const {
  return getImpl()->fKind;
}

} // namespace fir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::fir::RealType)
namespace fir {
RecordType RecordType::get(::mlir::MLIRContext *context, ::llvm::StringRef name) {
  return Base::get(context, name);
}

RecordType RecordType::getChecked(::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError, ::mlir::MLIRContext *context, ::llvm::StringRef name) {
  return Base::getChecked(emitError, context, name);
}

} // namespace fir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::fir::RecordType)
namespace fir {
namespace detail {
struct ReferenceTypeStorage : public ::mlir::TypeStorage {
  using KeyTy = std::tuple<mlir::Type>;
  ReferenceTypeStorage(mlir::Type eleTy) : eleTy(eleTy) {}

  KeyTy getAsKey() const {
    return KeyTy(eleTy);
  }

  bool operator==(const KeyTy &tblgenKey) const {
    return (eleTy == std::get<0>(tblgenKey));
  }

  static ::llvm::hash_code hashKey(const KeyTy &tblgenKey) {
    return ::llvm::hash_combine(std::get<0>(tblgenKey));
  }

  static ReferenceTypeStorage *construct(::mlir::TypeStorageAllocator &allocator, const KeyTy &tblgenKey) {
    auto eleTy = std::get<0>(tblgenKey);
    return new (allocator.allocate<ReferenceTypeStorage>()) ReferenceTypeStorage(eleTy);
  }

  mlir::Type eleTy;
};
} // namespace detail
ReferenceType ReferenceType::get(mlir::Type elementType) {
  return Base::get(elementType.getContext(), elementType);
}

ReferenceType ReferenceType::getChecked(::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError, mlir::Type elementType) {
  return Base::get(elementType.getContext(), elementType);
}

mlir::Type ReferenceType::getEleTy() const {
  return getImpl()->eleTy;
}

} // namespace fir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::fir::ReferenceType)
namespace fir {
namespace detail {
struct SequenceTypeStorage : public ::mlir::TypeStorage {
  using KeyTy = std::tuple<::llvm::ArrayRef<int64_t>, mlir::Type, mlir::AffineMapAttr>;
  SequenceTypeStorage(::llvm::ArrayRef<int64_t> shape, mlir::Type eleTy, mlir::AffineMapAttr layoutMap) : shape(shape), eleTy(eleTy), layoutMap(layoutMap) {}

  KeyTy getAsKey() const {
    return KeyTy(shape, eleTy, layoutMap);
  }

  bool operator==(const KeyTy &tblgenKey) const {
    return (shape == std::get<0>(tblgenKey)) && (eleTy == std::get<1>(tblgenKey)) && (layoutMap == std::get<2>(tblgenKey));
  }

  static ::llvm::hash_code hashKey(const KeyTy &tblgenKey) {
    return ::llvm::hash_combine(std::get<0>(tblgenKey), std::get<1>(tblgenKey), std::get<2>(tblgenKey));
  }

  static SequenceTypeStorage *construct(::mlir::TypeStorageAllocator &allocator, const KeyTy &tblgenKey) {
    auto shape = std::get<0>(tblgenKey);
    auto eleTy = std::get<1>(tblgenKey);
    auto layoutMap = std::get<2>(tblgenKey);
    shape = allocator.copyInto(shape);
    return new (allocator.allocate<SequenceTypeStorage>()) SequenceTypeStorage(shape, eleTy, layoutMap);
  }

  ::llvm::ArrayRef<int64_t> shape;
  mlir::Type eleTy;
  mlir::AffineMapAttr layoutMap;
};
} // namespace detail
SequenceType SequenceType::get(::mlir::MLIRContext *context, ::llvm::ArrayRef<int64_t> shape, mlir::Type eleTy, mlir::AffineMapAttr layoutMap) {
  return Base::get(context, shape, eleTy, layoutMap);
}

SequenceType SequenceType::getChecked(::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError, ::mlir::MLIRContext *context, ::llvm::ArrayRef<int64_t> shape, mlir::Type eleTy, mlir::AffineMapAttr layoutMap) {
  return Base::getChecked(emitError, context, shape, eleTy, layoutMap);
}

SequenceType SequenceType::get(llvm::ArrayRef<int64_t> shape, mlir::Type eleTy) {
  return get(eleTy.getContext(), shape, eleTy, {});
}

SequenceType SequenceType::getChecked(::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError, llvm::ArrayRef<int64_t> shape, mlir::Type eleTy) {
  return get(eleTy.getContext(), shape, eleTy, {});
}

SequenceType SequenceType::get(mlir::Type eleTy, size_t dimensions) {
  llvm::SmallVector<int64_t> shape(dimensions, getUnknownExtent());
  return get(eleTy.getContext(), shape, eleTy, {});
}

SequenceType SequenceType::getChecked(::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError, mlir::Type eleTy, size_t dimensions) {
  llvm::SmallVector<int64_t> shape(dimensions, getUnknownExtent());
  return get(eleTy.getContext(), shape, eleTy, {});
}

::llvm::ArrayRef<int64_t> SequenceType::getShape() const {
  return getImpl()->shape;
}

mlir::Type SequenceType::getEleTy() const {
  return getImpl()->eleTy;
}

mlir::AffineMapAttr SequenceType::getLayoutMap() const {
  return getImpl()->layoutMap;
}

} // namespace fir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::fir::SequenceType)
namespace fir {
namespace detail {
struct ShapeShiftTypeStorage : public ::mlir::TypeStorage {
  using KeyTy = std::tuple<unsigned>;
  ShapeShiftTypeStorage(unsigned rank) : rank(rank) {}

  KeyTy getAsKey() const {
    return KeyTy(rank);
  }

  bool operator==(const KeyTy &tblgenKey) const {
    return (rank == std::get<0>(tblgenKey));
  }

  static ::llvm::hash_code hashKey(const KeyTy &tblgenKey) {
    return ::llvm::hash_combine(std::get<0>(tblgenKey));
  }

  static ShapeShiftTypeStorage *construct(::mlir::TypeStorageAllocator &allocator, const KeyTy &tblgenKey) {
    auto rank = std::get<0>(tblgenKey);
    return new (allocator.allocate<ShapeShiftTypeStorage>()) ShapeShiftTypeStorage(rank);
  }

  unsigned rank;
};
} // namespace detail
ShapeShiftType ShapeShiftType::get(::mlir::MLIRContext *context, unsigned rank) {
  return Base::get(context, rank);
}

unsigned ShapeShiftType::getRank() const {
  return getImpl()->rank;
}

} // namespace fir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::fir::ShapeShiftType)
namespace fir {
namespace detail {
struct ShapeTypeStorage : public ::mlir::TypeStorage {
  using KeyTy = std::tuple<unsigned>;
  ShapeTypeStorage(unsigned rank) : rank(rank) {}

  KeyTy getAsKey() const {
    return KeyTy(rank);
  }

  bool operator==(const KeyTy &tblgenKey) const {
    return (rank == std::get<0>(tblgenKey));
  }

  static ::llvm::hash_code hashKey(const KeyTy &tblgenKey) {
    return ::llvm::hash_combine(std::get<0>(tblgenKey));
  }

  static ShapeTypeStorage *construct(::mlir::TypeStorageAllocator &allocator, const KeyTy &tblgenKey) {
    auto rank = std::get<0>(tblgenKey);
    return new (allocator.allocate<ShapeTypeStorage>()) ShapeTypeStorage(rank);
  }

  unsigned rank;
};
} // namespace detail
ShapeType ShapeType::get(::mlir::MLIRContext *context, unsigned rank) {
  return Base::get(context, rank);
}

unsigned ShapeType::getRank() const {
  return getImpl()->rank;
}

} // namespace fir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::fir::ShapeType)
namespace fir {
namespace detail {
struct ShiftTypeStorage : public ::mlir::TypeStorage {
  using KeyTy = std::tuple<unsigned>;
  ShiftTypeStorage(unsigned rank) : rank(rank) {}

  KeyTy getAsKey() const {
    return KeyTy(rank);
  }

  bool operator==(const KeyTy &tblgenKey) const {
    return (rank == std::get<0>(tblgenKey));
  }

  static ::llvm::hash_code hashKey(const KeyTy &tblgenKey) {
    return ::llvm::hash_combine(std::get<0>(tblgenKey));
  }

  static ShiftTypeStorage *construct(::mlir::TypeStorageAllocator &allocator, const KeyTy &tblgenKey) {
    auto rank = std::get<0>(tblgenKey);
    return new (allocator.allocate<ShiftTypeStorage>()) ShiftTypeStorage(rank);
  }

  unsigned rank;
};
} // namespace detail
ShiftType ShiftType::get(::mlir::MLIRContext *context, unsigned rank) {
  return Base::get(context, rank);
}

unsigned ShiftType::getRank() const {
  return getImpl()->rank;
}

} // namespace fir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::fir::ShiftType)
namespace fir {
namespace detail {
struct SliceTypeStorage : public ::mlir::TypeStorage {
  using KeyTy = std::tuple<unsigned>;
  SliceTypeStorage(unsigned rank) : rank(rank) {}

  KeyTy getAsKey() const {
    return KeyTy(rank);
  }

  bool operator==(const KeyTy &tblgenKey) const {
    return (rank == std::get<0>(tblgenKey));
  }

  static ::llvm::hash_code hashKey(const KeyTy &tblgenKey) {
    return ::llvm::hash_combine(std::get<0>(tblgenKey));
  }

  static SliceTypeStorage *construct(::mlir::TypeStorageAllocator &allocator, const KeyTy &tblgenKey) {
    auto rank = std::get<0>(tblgenKey);
    return new (allocator.allocate<SliceTypeStorage>()) SliceTypeStorage(rank);
  }

  unsigned rank;
};
} // namespace detail
SliceType SliceType::get(::mlir::MLIRContext *context, unsigned rank) {
  return Base::get(context, rank);
}

unsigned SliceType::getRank() const {
  return getImpl()->rank;
}

} // namespace fir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::fir::SliceType)
namespace fir {
namespace detail {
struct TypeDescTypeStorage : public ::mlir::TypeStorage {
  using KeyTy = std::tuple<mlir::Type>;
  TypeDescTypeStorage(mlir::Type ofTy) : ofTy(ofTy) {}

  KeyTy getAsKey() const {
    return KeyTy(ofTy);
  }

  bool operator==(const KeyTy &tblgenKey) const {
    return (ofTy == std::get<0>(tblgenKey));
  }

  static ::llvm::hash_code hashKey(const KeyTy &tblgenKey) {
    return ::llvm::hash_combine(std::get<0>(tblgenKey));
  }

  static TypeDescTypeStorage *construct(::mlir::TypeStorageAllocator &allocator, const KeyTy &tblgenKey) {
    auto ofTy = std::get<0>(tblgenKey);
    return new (allocator.allocate<TypeDescTypeStorage>()) TypeDescTypeStorage(ofTy);
  }

  mlir::Type ofTy;
};
} // namespace detail
TypeDescType TypeDescType::get(mlir::Type elementType) {
  return Base::get(elementType.getContext(), elementType);
}

TypeDescType TypeDescType::getChecked(::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError, mlir::Type elementType) {
  return Base::get(elementType.getContext(), elementType);
}

mlir::Type TypeDescType::getOfTy() const {
  return getImpl()->ofTy;
}

} // namespace fir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::fir::TypeDescType)
namespace fir {
namespace detail {
struct VectorTypeStorage : public ::mlir::TypeStorage {
  using KeyTy = std::tuple<uint64_t, mlir::Type>;
  VectorTypeStorage(uint64_t len, mlir::Type eleTy) : len(len), eleTy(eleTy) {}

  KeyTy getAsKey() const {
    return KeyTy(len, eleTy);
  }

  bool operator==(const KeyTy &tblgenKey) const {
    return (len == std::get<0>(tblgenKey)) && (eleTy == std::get<1>(tblgenKey));
  }

  static ::llvm::hash_code hashKey(const KeyTy &tblgenKey) {
    return ::llvm::hash_combine(std::get<0>(tblgenKey), std::get<1>(tblgenKey));
  }

  static VectorTypeStorage *construct(::mlir::TypeStorageAllocator &allocator, const KeyTy &tblgenKey) {
    auto len = std::get<0>(tblgenKey);
    auto eleTy = std::get<1>(tblgenKey);
    return new (allocator.allocate<VectorTypeStorage>()) VectorTypeStorage(len, eleTy);
  }

  uint64_t len;
  mlir::Type eleTy;
};
} // namespace detail
VectorType VectorType::get(uint64_t len, mlir::Type eleTy) {
  return Base::get(eleTy.getContext(), len, eleTy);
}

VectorType VectorType::getChecked(::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError, uint64_t len, mlir::Type eleTy) {
  return Base::get(eleTy.getContext(), len, eleTy);
}

uint64_t VectorType::getLen() const {
  return getImpl()->len;
}

mlir::Type VectorType::getEleTy() const {
  return getImpl()->eleTy;
}

} // namespace fir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::fir::VectorType)
namespace fir {
} // namespace fir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::fir::VoidType)

#endif  // GET_TYPEDEF_CLASSES

