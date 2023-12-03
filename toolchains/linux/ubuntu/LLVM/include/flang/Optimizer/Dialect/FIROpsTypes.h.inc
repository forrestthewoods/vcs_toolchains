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
namespace fir {
class BoxCharType;
class BoxProcType;
class BoxType;
class CharacterType;
class ClassType;
class ComplexType;
class FieldType;
class HeapType;
class IntegerType;
class LLVMPointerType;
class LenType;
class LogicalType;
class PointerType;
class RealType;
class RecordType;
class ReferenceType;
class SequenceType;
class ShapeShiftType;
class ShapeType;
class ShiftType;
class SliceType;
class TypeDescType;
class VectorType;
class VoidType;
namespace detail {
struct BoxCharTypeStorage;
} // namespace detail
class BoxCharType : public ::mlir::Type::TypeBase<BoxCharType, ::mlir::Type, detail::BoxCharTypeStorage> {
public:
  using Base::Base;
  using KindTy = unsigned;

  // a !fir.boxchar<k> always wraps a !fir.char<k, ?>
  CharacterType getElementType(mlir::MLIRContext *context) const;

  CharacterType getEleTy() const;
  static BoxCharType get(::mlir::MLIRContext *context, KindTy kind);
  static constexpr ::llvm::StringLiteral getMnemonic() {
    return {"boxchar"};
  }

  static ::mlir::Type parse(::mlir::AsmParser &odsParser);
  void print(::mlir::AsmPrinter &odsPrinter) const;
  KindTy getKind() const;
};
namespace detail {
struct BoxProcTypeStorage;
} // namespace detail
class BoxProcType : public ::mlir::Type::TypeBase<BoxProcType, ::mlir::Type, detail::BoxProcTypeStorage> {
public:
  using Base::Base;
  using Base::getChecked;
  static BoxProcType get(::mlir::MLIRContext *context, mlir::Type eleTy);
  static BoxProcType getChecked(::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError, ::mlir::MLIRContext *context, mlir::Type eleTy);
  static ::mlir::LogicalResult verify(::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError, mlir::Type eleTy);
  static constexpr ::llvm::StringLiteral getMnemonic() {
    return {"boxproc"};
  }

  static ::mlir::Type parse(::mlir::AsmParser &odsParser);
  void print(::mlir::AsmPrinter &odsPrinter) const;
  mlir::Type getEleTy() const;
};
namespace detail {
struct BoxTypeStorage;
} // namespace detail
class BoxType : public ::mlir::Type::TypeBase<BoxType, BaseBoxType, detail::BoxTypeStorage> {
public:
  using Base::Base;
  mlir::Type getElementType() const { return getEleTy(); }
  using Base::getChecked;
  static BoxType get(mlir::Type eleTy);
  static BoxType getChecked(::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError, mlir::Type eleTy);
  static ::mlir::LogicalResult verify(::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError, mlir::Type eleTy);
  static constexpr ::llvm::StringLiteral getMnemonic() {
    return {"box"};
  }

  static ::mlir::Type parse(::mlir::AsmParser &odsParser);
  void print(::mlir::AsmPrinter &odsPrinter) const;
  mlir::Type getEleTy() const;
};
namespace detail {
struct CharacterTypeStorage;
} // namespace detail
class CharacterType : public ::mlir::Type::TypeBase<CharacterType, ::mlir::Type, detail::CharacterTypeStorage> {
public:
  using Base::Base;
  using KindTy = unsigned;
  using LenType = std::int64_t;

  /// Return unknown length Character type. e.g., CHARACTER(LEN=n).
  static CharacterType getUnknownLen(mlir::MLIRContext *ctxt, KindTy kind) {
    return get(ctxt, kind, unknownLen());
  }

  /// Return length 1 Character type. e.g., CHARACTER(LEN=1).
  static CharacterType getSingleton(mlir::MLIRContext *ctxt, KindTy kind) {
    return get(ctxt, kind, singleton());
  }

  /// Character is a singleton and has a LEN of 1.
  static constexpr LenType singleton() { return 1; }

  /// Character has a LEN value which is not a compile-time known constant.
  static constexpr LenType unknownLen() { return mlir::ShapedType::kDynamic; }

  /// Character LEN is a runtime value.
  bool hasDynamicLen() { return getLen() == unknownLen(); }

  /// Character LEN is a compile-time constant value.
  bool hasConstantLen() { return !hasDynamicLen(); }
  static CharacterType get(::mlir::MLIRContext *context, KindTy FKind, CharacterType::LenType len);
  static constexpr ::llvm::StringLiteral getMnemonic() {
    return {"char"};
  }

  static ::mlir::Type parse(::mlir::AsmParser &odsParser);
  void print(::mlir::AsmPrinter &odsPrinter) const;
  KindTy getFKind() const;
  CharacterType::LenType getLen() const;
};
namespace detail {
struct ClassTypeStorage;
} // namespace detail
class ClassType : public ::mlir::Type::TypeBase<ClassType, BaseBoxType, detail::ClassTypeStorage> {
public:
  using Base::Base;
  using Base::getChecked;
  static ClassType get(::mlir::MLIRContext *context, mlir::Type eleTy);
  static ClassType getChecked(::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError, ::mlir::MLIRContext *context, mlir::Type eleTy);
  static ClassType get(mlir::Type eleTy);
  static ClassType getChecked(::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError, mlir::Type eleTy);
  static ::mlir::LogicalResult verify(::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError, mlir::Type eleTy);
  static constexpr ::llvm::StringLiteral getMnemonic() {
    return {"class"};
  }

  static ::mlir::Type parse(::mlir::AsmParser &odsParser);
  void print(::mlir::AsmPrinter &odsPrinter) const;
  mlir::Type getEleTy() const;
};
namespace detail {
struct ComplexTypeStorage;
} // namespace detail
class ComplexType : public ::mlir::Type::TypeBase<ComplexType, ::mlir::Type, detail::ComplexTypeStorage> {
public:
  using Base::Base;
  using KindTy = unsigned;

  mlir::Type getElementType() const;
  mlir::Type getEleType(const fir::KindMapping &kindMap) const;
  static ComplexType get(::mlir::MLIRContext *context, KindTy fKind);
  static constexpr ::llvm::StringLiteral getMnemonic() {
    return {"complex"};
  }

  static ::mlir::Type parse(::mlir::AsmParser &odsParser);
  void print(::mlir::AsmPrinter &odsPrinter) const;
  KindTy getFKind() const;
};
class FieldType : public ::mlir::Type::TypeBase<FieldType, ::mlir::Type, ::mlir::TypeStorage> {
public:
  using Base::Base;
  static constexpr ::llvm::StringLiteral getMnemonic() {
    return {"field"};
  }

};
namespace detail {
struct HeapTypeStorage;
} // namespace detail
class HeapType : public ::mlir::Type::TypeBase<HeapType, ::mlir::Type, detail::HeapTypeStorage> {
public:
  using Base::Base;
  mlir::Type getElementType() const { return getEleTy(); }
  using Base::getChecked;
  static HeapType get(mlir::Type elementType);
  static HeapType getChecked(::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError, mlir::Type elementType);
  static ::mlir::LogicalResult verify(::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError, mlir::Type eleTy);
  static constexpr ::llvm::StringLiteral getMnemonic() {
    return {"heap"};
  }

  static ::mlir::Type parse(::mlir::AsmParser &odsParser);
  void print(::mlir::AsmPrinter &odsPrinter) const;
  mlir::Type getEleTy() const;
};
namespace detail {
struct IntegerTypeStorage;
} // namespace detail
class IntegerType : public ::mlir::Type::TypeBase<IntegerType, ::mlir::Type, detail::IntegerTypeStorage> {
public:
  using Base::Base;
  using KindTy = unsigned;
  static IntegerType get(::mlir::MLIRContext *context, KindTy fKind);
  static constexpr ::llvm::StringLiteral getMnemonic() {
    return {"int"};
  }

  static ::mlir::Type parse(::mlir::AsmParser &odsParser);
  void print(::mlir::AsmPrinter &odsPrinter) const;
  KindTy getFKind() const;
};
namespace detail {
struct LLVMPointerTypeStorage;
} // namespace detail
class LLVMPointerType : public ::mlir::Type::TypeBase<LLVMPointerType, ::mlir::Type, detail::LLVMPointerTypeStorage> {
public:
  using Base::Base;
  mlir::Type getElementType() const { return getEleTy(); }
  static LLVMPointerType get(::mlir::MLIRContext *context, mlir::Type eleTy);
  static LLVMPointerType get(mlir::Type elementType);
  static constexpr ::llvm::StringLiteral getMnemonic() {
    return {"llvm_ptr"};
  }

  static ::mlir::Type parse(::mlir::AsmParser &odsParser);
  void print(::mlir::AsmPrinter &odsPrinter) const;
  mlir::Type getEleTy() const;
};
class LenType : public ::mlir::Type::TypeBase<LenType, ::mlir::Type, ::mlir::TypeStorage> {
public:
  using Base::Base;
  static constexpr ::llvm::StringLiteral getMnemonic() {
    return {"len"};
  }

};
namespace detail {
struct LogicalTypeStorage;
} // namespace detail
class LogicalType : public ::mlir::Type::TypeBase<LogicalType, ::mlir::Type, detail::LogicalTypeStorage> {
public:
  using Base::Base;
  using KindTy = unsigned;
  static LogicalType get(::mlir::MLIRContext *context, KindTy fKind);
  static constexpr ::llvm::StringLiteral getMnemonic() {
    return {"logical"};
  }

  static ::mlir::Type parse(::mlir::AsmParser &odsParser);
  void print(::mlir::AsmPrinter &odsPrinter) const;
  KindTy getFKind() const;
};
namespace detail {
struct PointerTypeStorage;
} // namespace detail
class PointerType : public ::mlir::Type::TypeBase<PointerType, ::mlir::Type, detail::PointerTypeStorage> {
public:
  using Base::Base;
  mlir::Type getElementType() const { return getEleTy(); }
  using Base::getChecked;
  static PointerType get(mlir::Type elementType);
  static PointerType getChecked(::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError, mlir::Type elementType);
  static ::mlir::LogicalResult verify(::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError, mlir::Type eleTy);
  static constexpr ::llvm::StringLiteral getMnemonic() {
    return {"ptr"};
  }

  static ::mlir::Type parse(::mlir::AsmParser &odsParser);
  void print(::mlir::AsmPrinter &odsPrinter) const;
  mlir::Type getEleTy() const;
};
namespace detail {
struct RealTypeStorage;
} // namespace detail
class RealType : public ::mlir::Type::TypeBase<RealType, ::mlir::Type, detail::RealTypeStorage> {
public:
  using Base::Base;
  using KindTy = unsigned;
  using Base::getChecked;
  static RealType get(::mlir::MLIRContext *context, KindTy fKind);
  static RealType getChecked(::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError, ::mlir::MLIRContext *context, KindTy fKind);
  static ::mlir::LogicalResult verify(::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError, KindTy fKind);
  static constexpr ::llvm::StringLiteral getMnemonic() {
    return {"real"};
  }

  static ::mlir::Type parse(::mlir::AsmParser &odsParser);
  void print(::mlir::AsmPrinter &odsPrinter) const;
  KindTy getFKind() const;
};
class RecordType : public ::mlir::Type::TypeBase<RecordType, ::mlir::Type, detail::RecordTypeStorage> {
public:
  using Base::Base;
  using TypePair = std::pair<std::string, mlir::Type>;
  using TypeList = std::vector<TypePair>;
  TypeList getTypeList() const;
  TypeList getLenParamList() const;

  mlir::Type getType(llvm::StringRef ident);
  // Returns the index of the field \p ident in the type list.
  // Returns maximum unsigned if ident is not a field of this RecordType.
  unsigned getFieldIndex(llvm::StringRef ident);
  mlir::Type getType(unsigned index) {
    assert(index < getNumFields());
    return getTypeList()[index].second;
  }
  unsigned getNumFields() { return getTypeList().size(); }
  unsigned getNumLenParams() { return getLenParamList().size(); }
  bool isDependentType() { return getNumLenParams(); }

  bool isFinalized() const;
  void finalize(llvm::ArrayRef<TypePair> lenPList,
                llvm::ArrayRef<TypePair> typeList);

  detail::RecordTypeStorage const *uniqueKey() const;
  using Base::getChecked;
  static RecordType get(::mlir::MLIRContext *context, ::llvm::StringRef name);
  static RecordType getChecked(::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError, ::mlir::MLIRContext *context, ::llvm::StringRef name);
  static ::mlir::LogicalResult verify(::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError, ::llvm::StringRef name);
  static constexpr ::llvm::StringLiteral getMnemonic() {
    return {"type"};
  }

  static ::mlir::Type parse(::mlir::AsmParser &odsParser);
  void print(::mlir::AsmPrinter &odsPrinter) const;
  ::llvm::StringRef getName() const;
};
namespace detail {
struct ReferenceTypeStorage;
} // namespace detail
class ReferenceType : public ::mlir::Type::TypeBase<ReferenceType, ::mlir::Type, detail::ReferenceTypeStorage> {
public:
  using Base::Base;
  mlir::Type getElementType() const { return getEleTy(); }
  using Base::getChecked;
  static ReferenceType get(mlir::Type elementType);
  static ReferenceType getChecked(::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError, mlir::Type elementType);
  static ::mlir::LogicalResult verify(::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError, mlir::Type eleTy);
  static constexpr ::llvm::StringLiteral getMnemonic() {
    return {"ref"};
  }

  static ::mlir::Type parse(::mlir::AsmParser &odsParser);
  void print(::mlir::AsmPrinter &odsPrinter) const;
  mlir::Type getEleTy() const;
};
namespace detail {
struct SequenceTypeStorage;
} // namespace detail
class SequenceType : public ::mlir::Type::TypeBase<SequenceType, ::mlir::Type, detail::SequenceTypeStorage> {
public:
  using Base::Base;
  using Extent = int64_t;
  using Shape = llvm::SmallVector<Extent>;
  using ShapeRef = llvm::ArrayRef<int64_t>;
  unsigned getConstantRows() const;

  // The number of dimensions of the sequence
  unsigned getDimension() const { return getShape().size(); }

  // Is the shape of the sequence dynamic?
  bool hasDynamicExtents() const {
    for(const auto d : getShape())
      if (d == getUnknownExtent())
        return true;
    return false;
  }

  // Does the sequence have unknown shape? (`array<* x T>`)
  bool hasUnknownShape() const { return getShape().empty(); }

  // The value `kDynamic` represents an unknown extent for a dimension
  static constexpr Extent getUnknownExtent() {
    return mlir::ShapedType::kDynamic;
  }
  using Base::getChecked;
  static SequenceType get(::mlir::MLIRContext *context, ::llvm::ArrayRef<int64_t> shape, mlir::Type eleTy, mlir::AffineMapAttr layoutMap);
  static SequenceType getChecked(::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError, ::mlir::MLIRContext *context, ::llvm::ArrayRef<int64_t> shape, mlir::Type eleTy, mlir::AffineMapAttr layoutMap);
  static SequenceType get(llvm::ArrayRef<int64_t> shape, mlir::Type eleTy);
  static SequenceType getChecked(::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError, llvm::ArrayRef<int64_t> shape, mlir::Type eleTy);
  static SequenceType get(mlir::Type eleTy, size_t dimensions);
  static SequenceType getChecked(::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError, mlir::Type eleTy, size_t dimensions);
  static ::mlir::LogicalResult verify(::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError, ::llvm::ArrayRef<int64_t> shape, mlir::Type eleTy, mlir::AffineMapAttr layoutMap);
  static constexpr ::llvm::StringLiteral getMnemonic() {
    return {"array"};
  }

  static ::mlir::Type parse(::mlir::AsmParser &odsParser);
  void print(::mlir::AsmPrinter &odsPrinter) const;
  ::llvm::ArrayRef<int64_t> getShape() const;
  mlir::Type getEleTy() const;
  mlir::AffineMapAttr getLayoutMap() const;
};
namespace detail {
struct ShapeShiftTypeStorage;
} // namespace detail
class ShapeShiftType : public ::mlir::Type::TypeBase<ShapeShiftType, ::mlir::Type, detail::ShapeShiftTypeStorage> {
public:
  using Base::Base;
  static ShapeShiftType get(::mlir::MLIRContext *context, unsigned rank);
  static constexpr ::llvm::StringLiteral getMnemonic() {
    return {"shapeshift"};
  }

  static ::mlir::Type parse(::mlir::AsmParser &odsParser);
  void print(::mlir::AsmPrinter &odsPrinter) const;
  unsigned getRank() const;
};
namespace detail {
struct ShapeTypeStorage;
} // namespace detail
class ShapeType : public ::mlir::Type::TypeBase<ShapeType, ::mlir::Type, detail::ShapeTypeStorage> {
public:
  using Base::Base;
  static ShapeType get(::mlir::MLIRContext *context, unsigned rank);
  static constexpr ::llvm::StringLiteral getMnemonic() {
    return {"shape"};
  }

  static ::mlir::Type parse(::mlir::AsmParser &odsParser);
  void print(::mlir::AsmPrinter &odsPrinter) const;
  unsigned getRank() const;
};
namespace detail {
struct ShiftTypeStorage;
} // namespace detail
class ShiftType : public ::mlir::Type::TypeBase<ShiftType, ::mlir::Type, detail::ShiftTypeStorage> {
public:
  using Base::Base;
  static ShiftType get(::mlir::MLIRContext *context, unsigned rank);
  static constexpr ::llvm::StringLiteral getMnemonic() {
    return {"shift"};
  }

  static ::mlir::Type parse(::mlir::AsmParser &odsParser);
  void print(::mlir::AsmPrinter &odsPrinter) const;
  unsigned getRank() const;
};
namespace detail {
struct SliceTypeStorage;
} // namespace detail
class SliceType : public ::mlir::Type::TypeBase<SliceType, ::mlir::Type, detail::SliceTypeStorage> {
public:
  using Base::Base;
  static SliceType get(::mlir::MLIRContext *context, unsigned rank);
  static constexpr ::llvm::StringLiteral getMnemonic() {
    return {"slice"};
  }

  static ::mlir::Type parse(::mlir::AsmParser &odsParser);
  void print(::mlir::AsmPrinter &odsPrinter) const;
  unsigned getRank() const;
};
namespace detail {
struct TypeDescTypeStorage;
} // namespace detail
class TypeDescType : public ::mlir::Type::TypeBase<TypeDescType, ::mlir::Type, detail::TypeDescTypeStorage> {
public:
  using Base::Base;
  using Base::getChecked;
  static TypeDescType get(mlir::Type elementType);
  static TypeDescType getChecked(::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError, mlir::Type elementType);
  static ::mlir::LogicalResult verify(::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError, mlir::Type ofTy);
  static constexpr ::llvm::StringLiteral getMnemonic() {
    return {"tdesc"};
  }

  static ::mlir::Type parse(::mlir::AsmParser &odsParser);
  void print(::mlir::AsmPrinter &odsPrinter) const;
  mlir::Type getOfTy() const;
};
namespace detail {
struct VectorTypeStorage;
} // namespace detail
class VectorType : public ::mlir::Type::TypeBase<VectorType, ::mlir::Type, detail::VectorTypeStorage> {
public:
  using Base::Base;
  static bool isValidElementType(mlir::Type t);
  using Base::getChecked;
  static VectorType get(uint64_t len, mlir::Type eleTy);
  static VectorType getChecked(::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError, uint64_t len, mlir::Type eleTy);
  static ::mlir::LogicalResult verify(::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError, uint64_t len, mlir::Type eleTy);
  static constexpr ::llvm::StringLiteral getMnemonic() {
    return {"vector"};
  }

  static ::mlir::Type parse(::mlir::AsmParser &odsParser);
  void print(::mlir::AsmPrinter &odsPrinter) const;
  uint64_t getLen() const;
  mlir::Type getEleTy() const;
};
class VoidType : public ::mlir::Type::TypeBase<VoidType, ::mlir::Type, ::mlir::TypeStorage> {
public:
  using Base::Base;
  static constexpr ::llvm::StringLiteral getMnemonic() {
    return {"void"};
  }

};
} // namespace fir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::fir::BoxCharType)
MLIR_DECLARE_EXPLICIT_TYPE_ID(::fir::BoxProcType)
MLIR_DECLARE_EXPLICIT_TYPE_ID(::fir::BoxType)
MLIR_DECLARE_EXPLICIT_TYPE_ID(::fir::CharacterType)
MLIR_DECLARE_EXPLICIT_TYPE_ID(::fir::ClassType)
MLIR_DECLARE_EXPLICIT_TYPE_ID(::fir::ComplexType)
MLIR_DECLARE_EXPLICIT_TYPE_ID(::fir::FieldType)
MLIR_DECLARE_EXPLICIT_TYPE_ID(::fir::HeapType)
MLIR_DECLARE_EXPLICIT_TYPE_ID(::fir::IntegerType)
MLIR_DECLARE_EXPLICIT_TYPE_ID(::fir::LLVMPointerType)
MLIR_DECLARE_EXPLICIT_TYPE_ID(::fir::LenType)
MLIR_DECLARE_EXPLICIT_TYPE_ID(::fir::LogicalType)
MLIR_DECLARE_EXPLICIT_TYPE_ID(::fir::PointerType)
MLIR_DECLARE_EXPLICIT_TYPE_ID(::fir::RealType)
MLIR_DECLARE_EXPLICIT_TYPE_ID(::fir::RecordType)
MLIR_DECLARE_EXPLICIT_TYPE_ID(::fir::ReferenceType)
MLIR_DECLARE_EXPLICIT_TYPE_ID(::fir::SequenceType)
MLIR_DECLARE_EXPLICIT_TYPE_ID(::fir::ShapeShiftType)
MLIR_DECLARE_EXPLICIT_TYPE_ID(::fir::ShapeType)
MLIR_DECLARE_EXPLICIT_TYPE_ID(::fir::ShiftType)
MLIR_DECLARE_EXPLICIT_TYPE_ID(::fir::SliceType)
MLIR_DECLARE_EXPLICIT_TYPE_ID(::fir::TypeDescType)
MLIR_DECLARE_EXPLICIT_TYPE_ID(::fir::VectorType)
MLIR_DECLARE_EXPLICIT_TYPE_ID(::fir::VoidType)

#endif  // GET_TYPEDEF_CLASSES

