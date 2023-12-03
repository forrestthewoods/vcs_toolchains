/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Enum Utility Definitions                                                   *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

namespace mlir {
namespace vector {
std::string stringifyCombiningKind(CombiningKind symbol) {
  auto val = static_cast<uint32_t>(symbol);
  assert(2047u == (2047u | val) && "invalid bits set in bit enum");
  ::llvm::SmallVector<::llvm::StringRef, 2> strs;

  if (1u == (1u & val))
    strs.push_back("add");

  if (2u == (2u & val))
    strs.push_back("mul");

  if (4u == (4u & val))
    strs.push_back("minui");

  if (8u == (8u & val))
    strs.push_back("minsi");

  if (16u == (16u & val))
    strs.push_back("minf");

  if (32u == (32u & val))
    strs.push_back("maxui");

  if (64u == (64u & val))
    strs.push_back("maxsi");

  if (128u == (128u & val))
    strs.push_back("maxf");

  if (256u == (256u & val))
    strs.push_back("and");

  if (512u == (512u & val))
    strs.push_back("or");

  if (1024u == (1024u & val))
    strs.push_back("xor");
  return ::llvm::join(strs, "|");
}

::std::optional<CombiningKind> symbolizeCombiningKind(::llvm::StringRef str) {
  ::llvm::SmallVector<::llvm::StringRef, 2> symbols;
  str.split(symbols, "|");

  uint32_t val = 0;
  for (auto symbol : symbols) {
    auto bit = llvm::StringSwitch<::std::optional<uint32_t>>(symbol.trim())
      .Case("add", 1)
      .Case("mul", 2)
      .Case("minui", 4)
      .Case("minsi", 8)
      .Case("minf", 16)
      .Case("maxui", 32)
      .Case("maxsi", 64)
      .Case("maxf", 128)
      .Case("and", 256)
      .Case("or", 512)
      .Case("xor", 1024)
      .Default(::std::nullopt);
    if (bit) { val |= *bit; } else { return ::std::nullopt; }
  }
  return static_cast<CombiningKind>(val);
}

::std::optional<CombiningKind> symbolizeCombiningKind(uint32_t value) {
  if (value & ~static_cast<uint32_t>(2047u)) return std::nullopt;
  return static_cast<CombiningKind>(value);
}
} // namespace vector
} // namespace mlir

namespace mlir {
namespace vector {
::llvm::StringRef stringifyIteratorType(IteratorType val) {
  switch (val) {
    case IteratorType::parallel: return "parallel";
    case IteratorType::reduction: return "reduction";
  }
  return "";
}

::std::optional<IteratorType> symbolizeIteratorType(::llvm::StringRef str) {
  return ::llvm::StringSwitch<::std::optional<IteratorType>>(str)
      .Case("parallel", IteratorType::parallel)
      .Case("reduction", IteratorType::reduction)
      .Default(::std::nullopt);
}
::std::optional<IteratorType> symbolizeIteratorType(uint32_t value) {
  switch (value) {
  case 0: return IteratorType::parallel;
  case 1: return IteratorType::reduction;
  default: return ::std::nullopt;
  }
}

} // namespace vector
} // namespace mlir
