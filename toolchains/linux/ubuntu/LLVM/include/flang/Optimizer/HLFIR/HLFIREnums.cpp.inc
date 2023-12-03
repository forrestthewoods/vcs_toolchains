/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Enum Utility Definitions                                                   *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

namespace hlfir {
::llvm::StringRef stringifyCharExtremumPredicate(CharExtremumPredicate val) {
  switch (val) {
    case CharExtremumPredicate::min: return "min";
    case CharExtremumPredicate::max: return "max";
  }
  return "";
}

::std::optional<CharExtremumPredicate> symbolizeCharExtremumPredicate(::llvm::StringRef str) {
  return ::llvm::StringSwitch<::std::optional<CharExtremumPredicate>>(str)
      .Case("min", CharExtremumPredicate::min)
      .Case("max", CharExtremumPredicate::max)
      .Default(::std::nullopt);
}
::std::optional<CharExtremumPredicate> symbolizeCharExtremumPredicate(uint32_t value) {
  switch (value) {
  case 0: return CharExtremumPredicate::min;
  case 1: return CharExtremumPredicate::max;
  default: return ::std::nullopt;
  }
}

bool CharExtremumPredicateAttr::classof(::mlir::Attribute attr) {
  return (((::llvm::isa<::mlir::IntegerAttr>(attr))) && ((::llvm::cast<::mlir::IntegerAttr>(attr).getType().isSignlessInteger(32)))) && (((::llvm::cast<::mlir::IntegerAttr>(attr).getInt() == 0)) || ((::llvm::cast<::mlir::IntegerAttr>(attr).getInt() == 1)));
}
CharExtremumPredicateAttr CharExtremumPredicateAttr::get(::mlir::MLIRContext *context, CharExtremumPredicate val) {
  ::mlir::IntegerType intType = ::mlir::IntegerType::get(context, 32);
  ::mlir::IntegerAttr baseAttr = ::mlir::IntegerAttr::get(intType, static_cast<uint32_t>(val));
  return ::llvm::cast<CharExtremumPredicateAttr>(baseAttr);
}
CharExtremumPredicate CharExtremumPredicateAttr::getValue() const {
  return static_cast<CharExtremumPredicate>(::mlir::IntegerAttr::getInt());
}
} // namespace hlfir

