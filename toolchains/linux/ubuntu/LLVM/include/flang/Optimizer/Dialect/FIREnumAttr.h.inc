/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Enum Utility Declarations                                                  *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

namespace fir {
// Fortran variable attributes
enum class FortranVariableFlagsEnum : uint32_t {
  None = 0,
  allocatable = 1,
  asynchronous = 2,
  bind_c = 4,
  contiguous = 8,
  intent_in = 16,
  intent_inout = 32,
  intent_out = 64,
  optional = 128,
  parameter = 256,
  pointer = 512,
  target = 1024,
  value = 2048,
  fortran_volatile = 4096,
};

::std::optional<FortranVariableFlagsEnum> symbolizeFortranVariableFlagsEnum(uint32_t);
std::string stringifyFortranVariableFlagsEnum(FortranVariableFlagsEnum);
::std::optional<FortranVariableFlagsEnum> symbolizeFortranVariableFlagsEnum(::llvm::StringRef);

inline constexpr FortranVariableFlagsEnum operator|(FortranVariableFlagsEnum a, FortranVariableFlagsEnum b) {
  return static_cast<FortranVariableFlagsEnum>(static_cast<uint32_t>(a) | static_cast<uint32_t>(b));
}
inline constexpr FortranVariableFlagsEnum operator&(FortranVariableFlagsEnum a, FortranVariableFlagsEnum b) {
  return static_cast<FortranVariableFlagsEnum>(static_cast<uint32_t>(a) & static_cast<uint32_t>(b));
}
inline constexpr FortranVariableFlagsEnum operator^(FortranVariableFlagsEnum a, FortranVariableFlagsEnum b) {
  return static_cast<FortranVariableFlagsEnum>(static_cast<uint32_t>(a) ^ static_cast<uint32_t>(b));
}
inline constexpr FortranVariableFlagsEnum operator~(FortranVariableFlagsEnum bits) {
  // Ensure only bits that can be present in the enum are set
  return static_cast<FortranVariableFlagsEnum>(~static_cast<uint32_t>(bits) & static_cast<uint32_t>(8191u));
}
inline constexpr bool bitEnumContainsAll(FortranVariableFlagsEnum bits, FortranVariableFlagsEnum bit) {
  return (bits & bit) == bit;
}
inline constexpr bool bitEnumContainsAny(FortranVariableFlagsEnum bits, FortranVariableFlagsEnum bit) {
  return (static_cast<uint32_t>(bits) & static_cast<uint32_t>(bit)) != 0;
}
inline constexpr FortranVariableFlagsEnum bitEnumClear(FortranVariableFlagsEnum bits, FortranVariableFlagsEnum bit) {
  return bits & ~bit;
}
inline constexpr FortranVariableFlagsEnum bitEnumSet(FortranVariableFlagsEnum bits, FortranVariableFlagsEnum bit, /*optional*/bool value=true) {
  return value ? (bits | bit) : bitEnumClear(bits, bit);
}
  
inline std::string stringifyEnum(FortranVariableFlagsEnum enumValue) {
  return stringifyFortranVariableFlagsEnum(enumValue);
}

template <typename EnumType>
::std::optional<EnumType> symbolizeEnum(::llvm::StringRef);

template <>
inline ::std::optional<FortranVariableFlagsEnum> symbolizeEnum<FortranVariableFlagsEnum>(::llvm::StringRef str) {
  return symbolizeFortranVariableFlagsEnum(str);
}

class FortranVariableFlagsEnumAttr : public ::mlir::IntegerAttr {
public:
  using ValueType = FortranVariableFlagsEnum;
  using ::mlir::IntegerAttr::IntegerAttr;
  static bool classof(::mlir::Attribute attr);
  static FortranVariableFlagsEnumAttr get(::mlir::MLIRContext *context, FortranVariableFlagsEnum val);
  FortranVariableFlagsEnum getValue() const;
};
} // namespace fir

namespace mlir {
template <typename T, typename>
struct FieldParser;

template<>
struct FieldParser<::fir::FortranVariableFlagsEnum, ::fir::FortranVariableFlagsEnum> {
  template <typename ParserT>
  static FailureOr<::fir::FortranVariableFlagsEnum> parse(ParserT &parser) {
    // Parse the keyword/string containing the enum.
    std::string enumKeyword;
    auto loc = parser.getCurrentLocation();
    if (failed(parser.parseOptionalKeywordOrString(&enumKeyword)))
      return parser.emitError(loc, "expected keyword for Fortran variable attributes");

    // Symbolize the keyword.
    if (::std::optional<::fir::FortranVariableFlagsEnum> attr = ::fir::symbolizeEnum<::fir::FortranVariableFlagsEnum>(enumKeyword))
      return *attr;
    return parser.emitError(loc, "invalid Fortran variable attributes specification: ") << enumKeyword;
  }
};
} // namespace mlir

namespace llvm {
inline ::llvm::raw_ostream &operator<<(::llvm::raw_ostream &p, ::fir::FortranVariableFlagsEnum value) {
  auto valueStr = stringifyEnum(value);
  auto underlyingValue = static_cast<std::make_unsigned_t<::fir::FortranVariableFlagsEnum>>(value);
  if (underlyingValue && !llvm::has_single_bit(underlyingValue))
    return p << '"' << valueStr << '"';
  return p << valueStr;
}
} // namespace llvm

namespace llvm {
template<> struct DenseMapInfo<::fir::FortranVariableFlagsEnum> {
  using StorageInfo = ::llvm::DenseMapInfo<uint32_t>;

  static inline ::fir::FortranVariableFlagsEnum getEmptyKey() {
    return static_cast<::fir::FortranVariableFlagsEnum>(StorageInfo::getEmptyKey());
  }

  static inline ::fir::FortranVariableFlagsEnum getTombstoneKey() {
    return static_cast<::fir::FortranVariableFlagsEnum>(StorageInfo::getTombstoneKey());
  }

  static unsigned getHashValue(const ::fir::FortranVariableFlagsEnum &val) {
    return StorageInfo::getHashValue(static_cast<uint32_t>(val));
  }

  static bool isEqual(const ::fir::FortranVariableFlagsEnum &lhs, const ::fir::FortranVariableFlagsEnum &rhs) {
    return lhs == rhs;
  }
};
}

