/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Dialect Declarations                                                       *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

namespace mlir {
namespace gpu {

class GPUDialect : public ::mlir::Dialect {
  explicit GPUDialect(::mlir::MLIRContext *context);

  void initialize();
  friend class ::mlir::MLIRContext;
public:
  ~GPUDialect() override;
  static constexpr ::llvm::StringLiteral getDialectNamespace() {
    return ::llvm::StringLiteral("gpu");
  }

  /// Parse an attribute registered to this dialect.
  ::mlir::Attribute parseAttribute(::mlir::DialectAsmParser &parser,
                                   ::mlir::Type type) const override;

  /// Print an attribute registered to this dialect.
  void printAttribute(::mlir::Attribute attr,
                      ::mlir::DialectAsmPrinter &os) const override;

  /// Parse a type registered to this dialect.
  ::mlir::Type parseType(::mlir::DialectAsmParser &parser) const override;

  /// Print a type registered to this dialect.
  void printType(::mlir::Type type,
                 ::mlir::DialectAsmPrinter &os) const override;

    /// Provides a hook for verifying dialect attributes attached to the given
    /// op.
    ::mlir::LogicalResult verifyOperationAttribute(
        ::mlir::Operation *op, ::mlir::NamedAttribute attribute) override;

    /// Get the name of the attribute used to annotate the modules that contain
    /// kernel modules.
    static StringRef getContainerModuleAttrName() {
      return "gpu.container_module";
    }
    /// Get the name of the attribute used to annotate external kernel
    /// functions.
    static StringRef getKernelFuncAttrName() { return "gpu.kernel"; }

    /// Returns whether the given function is a kernel function, i.e., has the
    /// 'gpu.kernel' attribute.
    static bool isKernel(Operation *op);

    /// Returns the number of workgroup (thread, block) dimensions supported in
    /// the GPU dialect.
    // TODO: consider generalizing this.
    static unsigned getNumWorkgroupDimensions() { return 3; }

    /// Returns the numeric value used to identify the workgroup memory address
    /// space.
    static AddressSpace getWorkgroupAddressSpace() { return AddressSpace::Workgroup; }

    /// Returns the numeric value used to identify the private memory address
    /// space.
    static AddressSpace getPrivateAddressSpace() { return AddressSpace::Private; }
  };
} // namespace gpu
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::gpu::GPUDialect)