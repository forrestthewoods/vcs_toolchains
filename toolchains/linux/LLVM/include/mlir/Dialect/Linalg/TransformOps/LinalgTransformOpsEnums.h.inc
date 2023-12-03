/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Enum Utility Declarations                                                  *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

namespace mlir {
namespace transform {
// An interface to match
enum class MatchInterfaceEnum : uint32_t {
  LinalgOp = 0,
  TilingInterface = 1,
};

::std::optional<MatchInterfaceEnum> symbolizeMatchInterfaceEnum(uint32_t);
::llvm::StringRef stringifyMatchInterfaceEnum(MatchInterfaceEnum);
::std::optional<MatchInterfaceEnum> symbolizeMatchInterfaceEnum(::llvm::StringRef);
inline constexpr unsigned getMaxEnumValForMatchInterfaceEnum() {
  return 1;
}


inline ::llvm::StringRef stringifyEnum(MatchInterfaceEnum enumValue) {
  return stringifyMatchInterfaceEnum(enumValue);
}

template <typename EnumType>
::std::optional<EnumType> symbolizeEnum(::llvm::StringRef);

template <>
inline ::std::optional<MatchInterfaceEnum> symbolizeEnum<MatchInterfaceEnum>(::llvm::StringRef str) {
  return symbolizeMatchInterfaceEnum(str);
}

class MatchInterfaceEnumAttr : public ::mlir::IntegerAttr {
public:
  using ValueType = MatchInterfaceEnum;
  using ::mlir::IntegerAttr::IntegerAttr;
  static bool classof(::mlir::Attribute attr);
  static MatchInterfaceEnumAttr get(::mlir::MLIRContext *context, MatchInterfaceEnum val);
  MatchInterfaceEnum getValue() const;
};
} // namespace transform
} // namespace mlir

namespace mlir {
template <typename T, typename>
struct FieldParser;

template<>
struct FieldParser<mlir::transform::MatchInterfaceEnum, mlir::transform::MatchInterfaceEnum> {
  template <typename ParserT>
  static FailureOr<mlir::transform::MatchInterfaceEnum> parse(ParserT &parser) {
    // Parse the keyword/string containing the enum.
    std::string enumKeyword;
    auto loc = parser.getCurrentLocation();
    if (failed(parser.parseOptionalKeywordOrString(&enumKeyword)))
      return parser.emitError(loc, "expected keyword for An interface to match");

    // Symbolize the keyword.
    if (::std::optional<mlir::transform::MatchInterfaceEnum> attr = mlir::transform::symbolizeEnum<mlir::transform::MatchInterfaceEnum>(enumKeyword))
      return *attr;
    return parser.emitError(loc, "invalid An interface to match specification: ") << enumKeyword;
  }
};
} // namespace mlir

namespace llvm {
inline ::llvm::raw_ostream &operator<<(::llvm::raw_ostream &p, mlir::transform::MatchInterfaceEnum value) {
  auto valueStr = stringifyEnum(value);
  return p << valueStr;
}
} // namespace llvm

namespace llvm {
template<> struct DenseMapInfo<mlir::transform::MatchInterfaceEnum> {
  using StorageInfo = ::llvm::DenseMapInfo<uint32_t>;

  static inline mlir::transform::MatchInterfaceEnum getEmptyKey() {
    return static_cast<mlir::transform::MatchInterfaceEnum>(StorageInfo::getEmptyKey());
  }

  static inline mlir::transform::MatchInterfaceEnum getTombstoneKey() {
    return static_cast<mlir::transform::MatchInterfaceEnum>(StorageInfo::getTombstoneKey());
  }

  static unsigned getHashValue(const mlir::transform::MatchInterfaceEnum &val) {
    return StorageInfo::getHashValue(static_cast<uint32_t>(val));
  }

  static bool isEqual(const mlir::transform::MatchInterfaceEnum &lhs, const mlir::transform::MatchInterfaceEnum &rhs) {
    return lhs == rhs;
  }
};
}

