/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Dialect Declarations                                                       *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

namespace mlir {

class DLTIDialect : public ::mlir::Dialect {
  explicit DLTIDialect(::mlir::MLIRContext *context);

  void initialize();
  friend class ::mlir::MLIRContext;
public:
  ~DLTIDialect() override;
  static constexpr ::llvm::StringLiteral getDialectNamespace() {
    return ::llvm::StringLiteral("dlti");
  }

  /// Parse an attribute registered to this dialect.
  ::mlir::Attribute parseAttribute(::mlir::DialectAsmParser &parser,
                                   ::mlir::Type type) const override;

  /// Print an attribute registered to this dialect.
  void printAttribute(::mlir::Attribute attr,
                      ::mlir::DialectAsmPrinter &os) const override;

    /// Provides a hook for verifying dialect attributes attached to the given
    /// op.
    ::mlir::LogicalResult verifyOperationAttribute(
        ::mlir::Operation *op, ::mlir::NamedAttribute attribute) override;

    // Top level attribute name.
    constexpr const static ::llvm::StringLiteral
    kDataLayoutAttrName = "dlti.dl_spec";

    // Constants used in entries.
    constexpr const static ::llvm::StringLiteral
    kDataLayoutEndiannessKey = "dlti.endianness";

    constexpr const static ::llvm::StringLiteral
    kDataLayoutEndiannessBig = "big";

    constexpr const static ::llvm::StringLiteral
    kDataLayoutEndiannessLittle = "little";

    constexpr const static ::llvm::StringLiteral
    kDataLayoutAllocaMemorySpaceKey = "dlti.alloca_memory_space";

    constexpr const static ::llvm::StringLiteral
    kDataLayoutStackAlignmentKey = "dlti.stack_alignment";
  };
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::DLTIDialect)