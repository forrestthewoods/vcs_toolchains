/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Enum Utility Definitions                                                   *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

namespace fir {
std::string stringifyFortranVariableFlagsEnum(FortranVariableFlagsEnum symbol) {
  auto val = static_cast<uint32_t>(symbol);
  assert(8191u == (8191u | val) && "invalid bits set in bit enum");
  // Special case for all bits unset.
  if (val == 0) return "None";

  ::llvm::SmallVector<::llvm::StringRef, 2> strs;
  // Print bit enum groups before individual bits

  if (1u == (1u & val))
    strs.push_back("allocatable");

  if (2u == (2u & val))
    strs.push_back("asynchronous");

  if (4u == (4u & val))
    strs.push_back("bind_c");

  if (8u == (8u & val))
    strs.push_back("contiguous");

  if (16u == (16u & val))
    strs.push_back("intent_in");

  if (32u == (32u & val))
    strs.push_back("intent_inout");

  if (64u == (64u & val))
    strs.push_back("intent_out");

  if (128u == (128u & val))
    strs.push_back("optional");

  if (256u == (256u & val))
    strs.push_back("parameter");

  if (512u == (512u & val))
    strs.push_back("pointer");

  if (1024u == (1024u & val))
    strs.push_back("target");

  if (2048u == (2048u & val))
    strs.push_back("value");

  if (4096u == (4096u & val))
    strs.push_back("volatile");
  return ::llvm::join(strs, ", ");
}

::std::optional<FortranVariableFlagsEnum> symbolizeFortranVariableFlagsEnum(::llvm::StringRef str) {
  // Special case for all bits unset.
  if (str == "None") return FortranVariableFlagsEnum::None;

  ::llvm::SmallVector<::llvm::StringRef, 2> symbols;
  str.split(symbols, ",");

  uint32_t val = 0;
  for (auto symbol : symbols) {
    auto bit = llvm::StringSwitch<::std::optional<uint32_t>>(symbol.trim())
      .Case("allocatable", 1)
      .Case("asynchronous", 2)
      .Case("bind_c", 4)
      .Case("contiguous", 8)
      .Case("intent_in", 16)
      .Case("intent_inout", 32)
      .Case("intent_out", 64)
      .Case("optional", 128)
      .Case("parameter", 256)
      .Case("pointer", 512)
      .Case("target", 1024)
      .Case("value", 2048)
      .Case("volatile", 4096)
      .Default(::std::nullopt);
    if (bit) { val |= *bit; } else { return ::std::nullopt; }
  }
  return static_cast<FortranVariableFlagsEnum>(val);
}

::std::optional<FortranVariableFlagsEnum> symbolizeFortranVariableFlagsEnum(uint32_t value) {
  // Special case for all bits unset.
  if (value == 0) return FortranVariableFlagsEnum::None;

  if (value & ~static_cast<uint32_t>(8191u)) return std::nullopt;
  return static_cast<FortranVariableFlagsEnum>(value);
}
bool FortranVariableFlagsEnumAttr::classof(::mlir::Attribute attr) {
  return (((::llvm::isa<::mlir::IntegerAttr>(attr))) && ((::llvm::cast<::mlir::IntegerAttr>(attr).getType().isSignlessInteger(32)))) && ((!(::llvm::cast<::mlir::IntegerAttr>(attr).getValue().getZExtValue() & (~(0u|1u|2u|4u|8u|16u|32u|64u|128u|256u|512u|1024u|2048u|4096u)))));
}
FortranVariableFlagsEnumAttr FortranVariableFlagsEnumAttr::get(::mlir::MLIRContext *context, FortranVariableFlagsEnum val) {
  ::mlir::IntegerType intType = ::mlir::IntegerType::get(context, 32);
  ::mlir::IntegerAttr baseAttr = ::mlir::IntegerAttr::get(intType, static_cast<uint32_t>(val));
  return ::llvm::cast<FortranVariableFlagsEnumAttr>(baseAttr);
}
FortranVariableFlagsEnum FortranVariableFlagsEnumAttr::getValue() const {
  return static_cast<FortranVariableFlagsEnum>(::mlir::IntegerAttr::getInt());
}
} // namespace fir

