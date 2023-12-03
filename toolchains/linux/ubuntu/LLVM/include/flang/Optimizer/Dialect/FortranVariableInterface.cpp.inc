/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Interface Definitions                                                      *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

/// Get the address produced by the definition
mlir::Value fir::FortranVariableOpInterface::getBase() {
      return getImpl()->getBase(getImpl(), getOperation());
  }
/// Get Fortran attributes
std::optional<fir::FortranVariableFlagsEnum> fir::FortranVariableOpInterface::getFortranAttrs() {
      return getImpl()->getFortranAttrs(getImpl(), getOperation());
  }
/// Get the shape of the variable. May be a null value.
mlir::Value fir::FortranVariableOpInterface::getShape() {
      return getImpl()->getShape(getImpl(), getOperation());
  }
/// Get explicit type parameters of the variable
mlir::OperandRange fir::FortranVariableOpInterface::getExplicitTypeParams() {
      return getImpl()->getExplicitTypeParams(getImpl(), getOperation());
  }
