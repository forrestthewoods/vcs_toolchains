/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Enum Utility Declarations                                                  *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

namespace mlir {
namespace gpu {
// threads for loop mapping
enum class Blocks : uint64_t {
  DimX = 0,
  DimY = 1,
  DimZ = 2,
};

::std::optional<Blocks> symbolizeBlocks(uint64_t);
::llvm::StringRef stringifyBlocks(Blocks);
::std::optional<Blocks> symbolizeBlocks(::llvm::StringRef);
inline constexpr unsigned getMaxEnumValForBlocks() {
  return 2;
}


inline ::llvm::StringRef stringifyEnum(Blocks enumValue) {
  return stringifyBlocks(enumValue);
}

template <typename EnumType>
::std::optional<EnumType> symbolizeEnum(::llvm::StringRef);

template <>
inline ::std::optional<Blocks> symbolizeEnum<Blocks>(::llvm::StringRef str) {
  return symbolizeBlocks(str);
}

class BlocksAttr : public ::mlir::IntegerAttr {
public:
  using ValueType = Blocks;
  using ::mlir::IntegerAttr::IntegerAttr;
  static bool classof(::mlir::Attribute attr);
  static BlocksAttr get(::mlir::MLIRContext *context, Blocks val);
  Blocks getValue() const;
};
} // namespace gpu
} // namespace mlir

namespace mlir {
template <typename T, typename>
struct FieldParser;

template<>
struct FieldParser<::mlir::gpu::Blocks, ::mlir::gpu::Blocks> {
  template <typename ParserT>
  static FailureOr<::mlir::gpu::Blocks> parse(ParserT &parser) {
    // Parse the keyword/string containing the enum.
    std::string enumKeyword;
    auto loc = parser.getCurrentLocation();
    if (failed(parser.parseOptionalKeywordOrString(&enumKeyword)))
      return parser.emitError(loc, "expected keyword for threads for loop mapping");

    // Symbolize the keyword.
    if (::std::optional<::mlir::gpu::Blocks> attr = ::mlir::gpu::symbolizeEnum<::mlir::gpu::Blocks>(enumKeyword))
      return *attr;
    return parser.emitError(loc, "invalid threads for loop mapping specification: ") << enumKeyword;
  }
};
} // namespace mlir

namespace llvm {
inline ::llvm::raw_ostream &operator<<(::llvm::raw_ostream &p, ::mlir::gpu::Blocks value) {
  auto valueStr = stringifyEnum(value);
  return p << valueStr;
}
} // namespace llvm

namespace llvm {
template<> struct DenseMapInfo<::mlir::gpu::Blocks> {
  using StorageInfo = ::llvm::DenseMapInfo<uint64_t>;

  static inline ::mlir::gpu::Blocks getEmptyKey() {
    return static_cast<::mlir::gpu::Blocks>(StorageInfo::getEmptyKey());
  }

  static inline ::mlir::gpu::Blocks getTombstoneKey() {
    return static_cast<::mlir::gpu::Blocks>(StorageInfo::getTombstoneKey());
  }

  static unsigned getHashValue(const ::mlir::gpu::Blocks &val) {
    return StorageInfo::getHashValue(static_cast<uint64_t>(val));
  }

  static bool isEqual(const ::mlir::gpu::Blocks &lhs, const ::mlir::gpu::Blocks &rhs) {
    return lhs == rhs;
  }
};
}

namespace mlir {
namespace gpu {
// GPU address space
enum class AddressSpace : uint32_t {
  Global = 1,
  Workgroup = 2,
  Private = 3,
};

::std::optional<AddressSpace> symbolizeAddressSpace(uint32_t);
::llvm::StringRef stringifyAddressSpace(AddressSpace);
::std::optional<AddressSpace> symbolizeAddressSpace(::llvm::StringRef);
inline constexpr unsigned getMaxEnumValForAddressSpace() {
  return 3;
}


inline ::llvm::StringRef stringifyEnum(AddressSpace enumValue) {
  return stringifyAddressSpace(enumValue);
}

template <typename EnumType>
::std::optional<EnumType> symbolizeEnum(::llvm::StringRef);

template <>
inline ::std::optional<AddressSpace> symbolizeEnum<AddressSpace>(::llvm::StringRef str) {
  return symbolizeAddressSpace(str);
}
} // namespace gpu
} // namespace mlir

namespace mlir {
template <typename T, typename>
struct FieldParser;

template<>
struct FieldParser<::mlir::gpu::AddressSpace, ::mlir::gpu::AddressSpace> {
  template <typename ParserT>
  static FailureOr<::mlir::gpu::AddressSpace> parse(ParserT &parser) {
    // Parse the keyword/string containing the enum.
    std::string enumKeyword;
    auto loc = parser.getCurrentLocation();
    if (failed(parser.parseOptionalKeywordOrString(&enumKeyword)))
      return parser.emitError(loc, "expected keyword for GPU address space");

    // Symbolize the keyword.
    if (::std::optional<::mlir::gpu::AddressSpace> attr = ::mlir::gpu::symbolizeEnum<::mlir::gpu::AddressSpace>(enumKeyword))
      return *attr;
    return parser.emitError(loc, "invalid GPU address space specification: ") << enumKeyword;
  }
};
} // namespace mlir

namespace llvm {
inline ::llvm::raw_ostream &operator<<(::llvm::raw_ostream &p, ::mlir::gpu::AddressSpace value) {
  auto valueStr = stringifyEnum(value);
  return p << valueStr;
}
} // namespace llvm

namespace llvm {
template<> struct DenseMapInfo<::mlir::gpu::AddressSpace> {
  using StorageInfo = ::llvm::DenseMapInfo<uint32_t>;

  static inline ::mlir::gpu::AddressSpace getEmptyKey() {
    return static_cast<::mlir::gpu::AddressSpace>(StorageInfo::getEmptyKey());
  }

  static inline ::mlir::gpu::AddressSpace getTombstoneKey() {
    return static_cast<::mlir::gpu::AddressSpace>(StorageInfo::getTombstoneKey());
  }

  static unsigned getHashValue(const ::mlir::gpu::AddressSpace &val) {
    return StorageInfo::getHashValue(static_cast<uint32_t>(val));
  }

  static bool isEqual(const ::mlir::gpu::AddressSpace &lhs, const ::mlir::gpu::AddressSpace &rhs) {
    return lhs == rhs;
  }
};
}

namespace mlir {
namespace gpu {
// linear ids for loop mapping
enum class LinearId : uint64_t {
  DimX = 0,
  DimY = 1,
  DimZ = 2,
};

::std::optional<LinearId> symbolizeLinearId(uint64_t);
::llvm::StringRef stringifyLinearId(LinearId);
::std::optional<LinearId> symbolizeLinearId(::llvm::StringRef);
inline constexpr unsigned getMaxEnumValForLinearId() {
  return 2;
}


inline ::llvm::StringRef stringifyEnum(LinearId enumValue) {
  return stringifyLinearId(enumValue);
}

template <typename EnumType>
::std::optional<EnumType> symbolizeEnum(::llvm::StringRef);

template <>
inline ::std::optional<LinearId> symbolizeEnum<LinearId>(::llvm::StringRef str) {
  return symbolizeLinearId(str);
}

class LinearIdAttr : public ::mlir::IntegerAttr {
public:
  using ValueType = LinearId;
  using ::mlir::IntegerAttr::IntegerAttr;
  static bool classof(::mlir::Attribute attr);
  static LinearIdAttr get(::mlir::MLIRContext *context, LinearId val);
  LinearId getValue() const;
};
} // namespace gpu
} // namespace mlir

namespace mlir {
template <typename T, typename>
struct FieldParser;

template<>
struct FieldParser<::mlir::gpu::LinearId, ::mlir::gpu::LinearId> {
  template <typename ParserT>
  static FailureOr<::mlir::gpu::LinearId> parse(ParserT &parser) {
    // Parse the keyword/string containing the enum.
    std::string enumKeyword;
    auto loc = parser.getCurrentLocation();
    if (failed(parser.parseOptionalKeywordOrString(&enumKeyword)))
      return parser.emitError(loc, "expected keyword for linear ids for loop mapping");

    // Symbolize the keyword.
    if (::std::optional<::mlir::gpu::LinearId> attr = ::mlir::gpu::symbolizeEnum<::mlir::gpu::LinearId>(enumKeyword))
      return *attr;
    return parser.emitError(loc, "invalid linear ids for loop mapping specification: ") << enumKeyword;
  }
};
} // namespace mlir

namespace llvm {
inline ::llvm::raw_ostream &operator<<(::llvm::raw_ostream &p, ::mlir::gpu::LinearId value) {
  auto valueStr = stringifyEnum(value);
  return p << valueStr;
}
} // namespace llvm

namespace llvm {
template<> struct DenseMapInfo<::mlir::gpu::LinearId> {
  using StorageInfo = ::llvm::DenseMapInfo<uint64_t>;

  static inline ::mlir::gpu::LinearId getEmptyKey() {
    return static_cast<::mlir::gpu::LinearId>(StorageInfo::getEmptyKey());
  }

  static inline ::mlir::gpu::LinearId getTombstoneKey() {
    return static_cast<::mlir::gpu::LinearId>(StorageInfo::getTombstoneKey());
  }

  static unsigned getHashValue(const ::mlir::gpu::LinearId &val) {
    return StorageInfo::getHashValue(static_cast<uint64_t>(val));
  }

  static bool isEqual(const ::mlir::gpu::LinearId &lhs, const ::mlir::gpu::LinearId &rhs) {
    return lhs == rhs;
  }
};
}

namespace mlir {
namespace gpu {
// threads for loop mapping
enum class Threads : uint64_t {
  DimX = 0,
  DimY = 1,
  DimZ = 2,
};

::std::optional<Threads> symbolizeThreads(uint64_t);
::llvm::StringRef stringifyThreads(Threads);
::std::optional<Threads> symbolizeThreads(::llvm::StringRef);
inline constexpr unsigned getMaxEnumValForThreads() {
  return 2;
}


inline ::llvm::StringRef stringifyEnum(Threads enumValue) {
  return stringifyThreads(enumValue);
}

template <typename EnumType>
::std::optional<EnumType> symbolizeEnum(::llvm::StringRef);

template <>
inline ::std::optional<Threads> symbolizeEnum<Threads>(::llvm::StringRef str) {
  return symbolizeThreads(str);
}

class ThreadsAttr : public ::mlir::IntegerAttr {
public:
  using ValueType = Threads;
  using ::mlir::IntegerAttr::IntegerAttr;
  static bool classof(::mlir::Attribute attr);
  static ThreadsAttr get(::mlir::MLIRContext *context, Threads val);
  Threads getValue() const;
};
} // namespace gpu
} // namespace mlir

namespace mlir {
template <typename T, typename>
struct FieldParser;

template<>
struct FieldParser<::mlir::gpu::Threads, ::mlir::gpu::Threads> {
  template <typename ParserT>
  static FailureOr<::mlir::gpu::Threads> parse(ParserT &parser) {
    // Parse the keyword/string containing the enum.
    std::string enumKeyword;
    auto loc = parser.getCurrentLocation();
    if (failed(parser.parseOptionalKeywordOrString(&enumKeyword)))
      return parser.emitError(loc, "expected keyword for threads for loop mapping");

    // Symbolize the keyword.
    if (::std::optional<::mlir::gpu::Threads> attr = ::mlir::gpu::symbolizeEnum<::mlir::gpu::Threads>(enumKeyword))
      return *attr;
    return parser.emitError(loc, "invalid threads for loop mapping specification: ") << enumKeyword;
  }
};
} // namespace mlir

namespace llvm {
inline ::llvm::raw_ostream &operator<<(::llvm::raw_ostream &p, ::mlir::gpu::Threads value) {
  auto valueStr = stringifyEnum(value);
  return p << valueStr;
}
} // namespace llvm

namespace llvm {
template<> struct DenseMapInfo<::mlir::gpu::Threads> {
  using StorageInfo = ::llvm::DenseMapInfo<uint64_t>;

  static inline ::mlir::gpu::Threads getEmptyKey() {
    return static_cast<::mlir::gpu::Threads>(StorageInfo::getEmptyKey());
  }

  static inline ::mlir::gpu::Threads getTombstoneKey() {
    return static_cast<::mlir::gpu::Threads>(StorageInfo::getTombstoneKey());
  }

  static unsigned getHashValue(const ::mlir::gpu::Threads &val) {
    return StorageInfo::getHashValue(static_cast<uint64_t>(val));
  }

  static bool isEqual(const ::mlir::gpu::Threads &lhs, const ::mlir::gpu::Threads &rhs) {
    return lhs == rhs;
  }
};
}

namespace mlir {
namespace gpu {
// threads for loop mapping
enum class Warps : uint64_t {
  DimX = 0,
  DimY = 1,
  DimZ = 2,
};

::std::optional<Warps> symbolizeWarps(uint64_t);
::llvm::StringRef stringifyWarps(Warps);
::std::optional<Warps> symbolizeWarps(::llvm::StringRef);
inline constexpr unsigned getMaxEnumValForWarps() {
  return 2;
}


inline ::llvm::StringRef stringifyEnum(Warps enumValue) {
  return stringifyWarps(enumValue);
}

template <typename EnumType>
::std::optional<EnumType> symbolizeEnum(::llvm::StringRef);

template <>
inline ::std::optional<Warps> symbolizeEnum<Warps>(::llvm::StringRef str) {
  return symbolizeWarps(str);
}

class WarpsAttr : public ::mlir::IntegerAttr {
public:
  using ValueType = Warps;
  using ::mlir::IntegerAttr::IntegerAttr;
  static bool classof(::mlir::Attribute attr);
  static WarpsAttr get(::mlir::MLIRContext *context, Warps val);
  Warps getValue() const;
};
} // namespace gpu
} // namespace mlir

namespace mlir {
template <typename T, typename>
struct FieldParser;

template<>
struct FieldParser<::mlir::gpu::Warps, ::mlir::gpu::Warps> {
  template <typename ParserT>
  static FailureOr<::mlir::gpu::Warps> parse(ParserT &parser) {
    // Parse the keyword/string containing the enum.
    std::string enumKeyword;
    auto loc = parser.getCurrentLocation();
    if (failed(parser.parseOptionalKeywordOrString(&enumKeyword)))
      return parser.emitError(loc, "expected keyword for threads for loop mapping");

    // Symbolize the keyword.
    if (::std::optional<::mlir::gpu::Warps> attr = ::mlir::gpu::symbolizeEnum<::mlir::gpu::Warps>(enumKeyword))
      return *attr;
    return parser.emitError(loc, "invalid threads for loop mapping specification: ") << enumKeyword;
  }
};
} // namespace mlir

namespace llvm {
inline ::llvm::raw_ostream &operator<<(::llvm::raw_ostream &p, ::mlir::gpu::Warps value) {
  auto valueStr = stringifyEnum(value);
  return p << valueStr;
}
} // namespace llvm

namespace llvm {
template<> struct DenseMapInfo<::mlir::gpu::Warps> {
  using StorageInfo = ::llvm::DenseMapInfo<uint64_t>;

  static inline ::mlir::gpu::Warps getEmptyKey() {
    return static_cast<::mlir::gpu::Warps>(StorageInfo::getEmptyKey());
  }

  static inline ::mlir::gpu::Warps getTombstoneKey() {
    return static_cast<::mlir::gpu::Warps>(StorageInfo::getTombstoneKey());
  }

  static unsigned getHashValue(const ::mlir::gpu::Warps &val) {
    return StorageInfo::getHashValue(static_cast<uint64_t>(val));
  }

  static bool isEqual(const ::mlir::gpu::Warps &lhs, const ::mlir::gpu::Warps &rhs) {
    return lhs == rhs;
  }
};
}

