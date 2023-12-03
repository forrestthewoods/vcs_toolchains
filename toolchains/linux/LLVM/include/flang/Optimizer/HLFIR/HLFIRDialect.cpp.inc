/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Dialect Definitions                                                        *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

MLIR_DEFINE_EXPLICIT_TYPE_ID(hlfir::hlfirDialect)
namespace hlfir {

hlfirDialect::hlfirDialect(::mlir::MLIRContext *context)
    : ::mlir::Dialect(getDialectNamespace(), context, ::mlir::TypeID::get<hlfirDialect>()) {
  
    getContext()->loadDialect<fir::FIROpsDialect>();

  initialize();
}

hlfirDialect::~hlfirDialect() = default;

} // namespace hlfir
