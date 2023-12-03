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
namespace mlir {
namespace LLVM {
class LLVMArrayType;
class LLVMFixedVectorType;
class LLVMFunctionType;
class LLVMPointerType;
class LLVMScalableVectorType;
class LLVMTargetExtType;
namespace detail {
struct LLVMArrayTypeStorage;
} // namespace detail
class LLVMArrayType : public ::mlir::Type::TypeBase<LLVMArrayType, ::mlir::Type, detail::LLVMArrayTypeStorage, ::mlir::DataLayoutTypeInterface::Trait, ::mlir::DestructurableTypeInterface::Trait> {
public:
  using Base::Base;
  /// Checks if the given type can be used inside an array type.
  static bool isValidElementType(Type type);
  using Base::getChecked;
  static LLVMArrayType get(::mlir::MLIRContext *context, Type elementType, unsigned numElements);
  static LLVMArrayType getChecked(::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError, ::mlir::MLIRContext *context, Type elementType, unsigned numElements);
  static LLVMArrayType get(Type elementType, unsigned numElements);
  static LLVMArrayType getChecked(::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError, Type elementType, unsigned numElements);
  static ::mlir::LogicalResult verify(::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError, Type elementType, unsigned numElements);
  static constexpr ::llvm::StringLiteral getMnemonic() {
    return {"array"};
  }

  static ::mlir::Type parse(::mlir::AsmParser &odsParser);
  void print(::mlir::AsmPrinter &odsPrinter) const;
  Type getElementType() const;
  unsigned getNumElements() const;
  unsigned getTypeSize(const ::mlir::DataLayout &dataLayout, ::mlir::DataLayoutEntryListRef params) const;
  unsigned getTypeSizeInBits(const ::mlir::DataLayout &dataLayout, ::mlir::DataLayoutEntryListRef params) const;
  unsigned getABIAlignment(const ::mlir::DataLayout &dataLayout, ::mlir::DataLayoutEntryListRef params) const;
  unsigned getPreferredAlignment(const ::mlir::DataLayout &dataLayout, ::mlir::DataLayoutEntryListRef params) const;
  ::std::optional<::llvm::DenseMap<::mlir::Attribute, ::mlir::Type>> getSubelementIndexMap() const;
  ::mlir::Type getTypeAtIndex(::mlir::Attribute index) const;
};
namespace detail {
struct LLVMFixedVectorTypeStorage;
} // namespace detail
class LLVMFixedVectorType : public ::mlir::Type::TypeBase<LLVMFixedVectorType, ::mlir::Type, detail::LLVMFixedVectorTypeStorage> {
public:
  using Base::Base;
  /// Checks if the given type can be used in a vector type.
  static bool isValidElementType(Type type);
  using Base::getChecked;
  static LLVMFixedVectorType get(::mlir::MLIRContext *context, Type elementType, unsigned numElements);
  static LLVMFixedVectorType getChecked(::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError, ::mlir::MLIRContext *context, Type elementType, unsigned numElements);
  static LLVMFixedVectorType get(Type elementType, unsigned numElements);
  static LLVMFixedVectorType getChecked(::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError, Type elementType, unsigned numElements);
  static ::mlir::LogicalResult verify(::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError, Type elementType, unsigned numElements);
  static constexpr ::llvm::StringLiteral getMnemonic() {
    return {"vec"};
  }

  static ::mlir::Type parse(::mlir::AsmParser &odsParser);
  void print(::mlir::AsmPrinter &odsPrinter) const;
  Type getElementType() const;
  unsigned getNumElements() const;
};
namespace detail {
struct LLVMFunctionTypeStorage;
} // namespace detail
class LLVMFunctionType : public ::mlir::Type::TypeBase<LLVMFunctionType, ::mlir::Type, detail::LLVMFunctionTypeStorage> {
public:
  using Base::Base;
  /// Checks if the given type can be used an argument in a function type.
  static bool isValidArgumentType(Type type);

  /// Checks if the given type can be used as a result in a function type.
  static bool isValidResultType(Type type);

  /// Returns whether the function is variadic.
  bool isVarArg() const { return getVarArg(); }

  /// Returns a clone of this function type with the given argument
  /// and result types.
  LLVMFunctionType clone(TypeRange inputs, TypeRange results) const;

  /// Returns the result type of the function as an ArrayRef, enabling better
  /// integration with generic MLIR utilities.
  ArrayRef<Type> getReturnTypes() const;

  /// Returns the number of arguments to the function.
  unsigned getNumParams() const { return getParams().size(); }

  /// Returns `i`-th argument of the function. Asserts on out-of-bounds.
  Type getParamType(unsigned i) { return getParams()[i]; }
  using Base::getChecked;
  static LLVMFunctionType get(::mlir::MLIRContext *context, Type returnType, ::llvm::ArrayRef<Type> params, bool varArg);
  static LLVMFunctionType getChecked(::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError, ::mlir::MLIRContext *context, Type returnType, ::llvm::ArrayRef<Type> params, bool varArg);
  static LLVMFunctionType get(Type result, ArrayRef<Type> arguments, bool isVarArg = false);
  static LLVMFunctionType getChecked(::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError, Type result, ArrayRef<Type> arguments, bool isVarArg = false);
  static ::mlir::LogicalResult verify(::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError, Type returnType, ::llvm::ArrayRef<Type> params, bool varArg);
  static constexpr ::llvm::StringLiteral getMnemonic() {
    return {"func"};
  }

  static ::mlir::Type parse(::mlir::AsmParser &odsParser);
  void print(::mlir::AsmPrinter &odsPrinter) const;
  Type getReturnType() const;
  ::llvm::ArrayRef<Type> getParams() const;
  bool getVarArg() const;
};
namespace detail {
struct LLVMPointerTypeStorage;
} // namespace detail
class LLVMPointerType : public ::mlir::Type::TypeBase<LLVMPointerType, ::mlir::Type, detail::LLVMPointerTypeStorage, ::mlir::DataLayoutTypeInterface::Trait> {
public:
  using Base::Base;
  /// Returns `true` if this type is the opaque pointer type, i.e., it has no
  /// pointed-to type.
  bool isOpaque() const { return !getElementType(); }

  /// Checks if the given type can have a pointer type pointing to it.
  static bool isValidElementType(Type type);
  using Base::getChecked;
  static LLVMPointerType get(::mlir::MLIRContext *context, Type elementType, unsigned addressSpace);
  static LLVMPointerType getChecked(::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError, ::mlir::MLIRContext *context, Type elementType, unsigned addressSpace);
  static LLVMPointerType get(Type elementType, unsigned addressSpace = 0);
  static LLVMPointerType getChecked(::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError, Type elementType, unsigned addressSpace = 0);
  static LLVMPointerType get(::mlir::MLIRContext *context, unsigned addressSpace = 0);
  static LLVMPointerType getChecked(::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError, ::mlir::MLIRContext *context, unsigned addressSpace = 0);
  static ::mlir::LogicalResult verify(::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError, Type elementType, unsigned addressSpace);
  static constexpr ::llvm::StringLiteral getMnemonic() {
    return {"ptr"};
  }

  static ::mlir::Type parse(::mlir::AsmParser &odsParser);
  void print(::mlir::AsmPrinter &odsPrinter) const;
  Type getElementType() const;
  unsigned getAddressSpace() const;
  unsigned getTypeSizeInBits(const ::mlir::DataLayout &dataLayout, ::mlir::DataLayoutEntryListRef params) const;
  unsigned getABIAlignment(const ::mlir::DataLayout &dataLayout, ::mlir::DataLayoutEntryListRef params) const;
  unsigned getPreferredAlignment(const ::mlir::DataLayout &dataLayout, ::mlir::DataLayoutEntryListRef params) const;
  bool areCompatible(::mlir::DataLayoutEntryListRef oldLayout, ::mlir::DataLayoutEntryListRef newLayout) const;
  ::mlir::LogicalResult verifyEntries(::mlir::DataLayoutEntryListRef entries, ::mlir::Location loc) const;
};
namespace detail {
struct LLVMScalableVectorTypeStorage;
} // namespace detail
class LLVMScalableVectorType : public ::mlir::Type::TypeBase<LLVMScalableVectorType, ::mlir::Type, detail::LLVMScalableVectorTypeStorage> {
public:
  using Base::Base;
  /// Checks if the given type can be used in a vector type.
  static bool isValidElementType(Type type);
  using Base::getChecked;
  static LLVMScalableVectorType get(::mlir::MLIRContext *context, Type elementType, unsigned minNumElements);
  static LLVMScalableVectorType getChecked(::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError, ::mlir::MLIRContext *context, Type elementType, unsigned minNumElements);
  static LLVMScalableVectorType get(Type elementType, unsigned minNumElements);
  static LLVMScalableVectorType getChecked(::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError, Type elementType, unsigned minNumElements);
  static ::mlir::LogicalResult verify(::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError, Type elementType, unsigned minNumElements);
  static constexpr ::llvm::StringLiteral getMnemonic() {
    return {"vec"};
  }

  static ::mlir::Type parse(::mlir::AsmParser &odsParser);
  void print(::mlir::AsmPrinter &odsPrinter) const;
  Type getElementType() const;
  unsigned getMinNumElements() const;
};
namespace detail {
struct LLVMTargetExtTypeStorage;
} // namespace detail
class LLVMTargetExtType : public ::mlir::Type::TypeBase<LLVMTargetExtType, ::mlir::Type, detail::LLVMTargetExtTypeStorage> {
public:
  using Base::Base;
  enum Property {
    /// zeroinitializer is valid for this target extension type.
    HasZeroInit = 1U << 0,
    /// This type may be used as the value type of a global variable.
    CanBeGlobal = 1U << 1,
  };

  bool hasProperty(Property Prop) const;
  bool supportsMemOps() const;
  static LLVMTargetExtType get(::mlir::MLIRContext *context, ::llvm::StringRef extTypeName, ::llvm::ArrayRef<Type> typeParams, ::llvm::ArrayRef<unsigned int> intParams);
  static constexpr ::llvm::StringLiteral getMnemonic() {
    return {"target"};
  }

  static ::mlir::Type parse(::mlir::AsmParser &odsParser);
  void print(::mlir::AsmPrinter &odsPrinter) const;
  ::llvm::StringRef getExtTypeName() const;
  ::llvm::ArrayRef<Type> getTypeParams() const;
  ::llvm::ArrayRef<unsigned int> getIntParams() const;
};
} // namespace LLVM
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::LLVM::LLVMArrayType)
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::LLVM::LLVMFixedVectorType)
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::LLVM::LLVMFunctionType)
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::LLVM::LLVMPointerType)
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::LLVM::LLVMScalableVectorType)
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::LLVM::LLVMTargetExtType)

#endif  // GET_TYPEDEF_CLASSES
