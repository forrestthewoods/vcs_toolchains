/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Enum Utility Declarations                                                  *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

namespace hlfir {
// allowed 32-bit signless integer cases: 0, 1
enum class CharExtremumPredicate : uint32_t {
  min = 0,
  max = 1,
};

::std::optional<CharExtremumPredicate> symbolizeCharExtremumPredicate(uint32_t);
::llvm::StringRef stringifyCharExtremumPredicate(CharExtremumPredicate);
::std::optional<CharExtremumPredicate> symbolizeCharExtremumPredicate(::llvm::StringRef);
inline constexpr unsigned getMaxEnumValForCharExtremumPredicate() {
  return 1;
}


inline ::llvm::StringRef stringifyEnum(CharExtremumPredicate enumValue) {
  return stringifyCharExtremumPredicate(enumValue);
}

template <typename EnumType>
::std::optional<EnumType> symbolizeEnum(::llvm::StringRef);

template <>
inline ::std::optional<CharExtremumPredicate> symbolizeEnum<CharExtremumPredicate>(::llvm::StringRef str) {
  return symbolizeCharExtremumPredicate(str);
}

class CharExtremumPredicateAttr : public ::mlir::IntegerAttr {
public:
  using ValueType = CharExtremumPredicate;
  using ::mlir::IntegerAttr::IntegerAttr;
  static bool classof(::mlir::Attribute attr);
  static CharExtremumPredicateAttr get(::mlir::MLIRContext *context, CharExtremumPredicate val);
  CharExtremumPredicate getValue() const;
};
} // namespace hlfir

namespace mlir {
template <typename T, typename>
struct FieldParser;

template<>
struct FieldParser<hlfir::CharExtremumPredicate, hlfir::CharExtremumPredicate> {
  template <typename ParserT>
  static FailureOr<hlfir::CharExtremumPredicate> parse(ParserT &parser) {
    // Parse the keyword/string containing the enum.
    std::string enumKeyword;
    auto loc = parser.getCurrentLocation();
    if (failed(parser.parseOptionalKeywordOrString(&enumKeyword)))
      return parser.emitError(loc, "expected keyword for allowed 32-bit signless integer cases: 0, 1");

    // Symbolize the keyword.
    if (::std::optional<hlfir::CharExtremumPredicate> attr = hlfir::symbolizeEnum<hlfir::CharExtremumPredicate>(enumKeyword))
      return *attr;
    return parser.emitError(loc, "invalid allowed 32-bit signless integer cases: 0, 1 specification: ") << enumKeyword;
  }
};
} // namespace mlir

namespace llvm {
inline ::llvm::raw_ostream &operator<<(::llvm::raw_ostream &p, hlfir::CharExtremumPredicate value) {
  auto valueStr = stringifyEnum(value);
  return p << valueStr;
}
} // namespace llvm

namespace llvm {
template<> struct DenseMapInfo<hlfir::CharExtremumPredicate> {
  using StorageInfo = ::llvm::DenseMapInfo<uint32_t>;

  static inline hlfir::CharExtremumPredicate getEmptyKey() {
    return static_cast<hlfir::CharExtremumPredicate>(StorageInfo::getEmptyKey());
  }

  static inline hlfir::CharExtremumPredicate getTombstoneKey() {
    return static_cast<hlfir::CharExtremumPredicate>(StorageInfo::getTombstoneKey());
  }

  static unsigned getHashValue(const hlfir::CharExtremumPredicate &val) {
    return StorageInfo::getHashValue(static_cast<uint32_t>(val));
  }

  static bool isEqual(const hlfir::CharExtremumPredicate &lhs, const hlfir::CharExtremumPredicate &rhs) {
    return lhs == rhs;
  }
};
}

