/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Enum Utility Definitions                                                   *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

namespace mlir {
namespace gpu {
::llvm::StringRef stringifyBlocks(Blocks val) {
  switch (val) {
    case Blocks::DimX: return "x";
    case Blocks::DimY: return "y";
    case Blocks::DimZ: return "z";
  }
  return "";
}

::std::optional<Blocks> symbolizeBlocks(::llvm::StringRef str) {
  return ::llvm::StringSwitch<::std::optional<Blocks>>(str)
      .Case("x", Blocks::DimX)
      .Case("y", Blocks::DimY)
      .Case("z", Blocks::DimZ)
      .Default(::std::nullopt);
}
::std::optional<Blocks> symbolizeBlocks(uint64_t value) {
  switch (value) {
  case 0: return Blocks::DimX;
  case 1: return Blocks::DimY;
  case 2: return Blocks::DimZ;
  default: return ::std::nullopt;
  }
}

bool BlocksAttr::classof(::mlir::Attribute attr) {
  return (((::llvm::isa<::mlir::IntegerAttr>(attr))) && ((::llvm::cast<::mlir::IntegerAttr>(attr).getType().isSignlessInteger(64)))) && (((::llvm::cast<::mlir::IntegerAttr>(attr).getInt() == 0)) || ((::llvm::cast<::mlir::IntegerAttr>(attr).getInt() == 1)) || ((::llvm::cast<::mlir::IntegerAttr>(attr).getInt() == 2)));
}
BlocksAttr BlocksAttr::get(::mlir::MLIRContext *context, Blocks val) {
  ::mlir::IntegerType intType = ::mlir::IntegerType::get(context, 64);
  ::mlir::IntegerAttr baseAttr = ::mlir::IntegerAttr::get(intType, static_cast<uint64_t>(val));
  return ::llvm::cast<BlocksAttr>(baseAttr);
}
Blocks BlocksAttr::getValue() const {
  return static_cast<Blocks>(::mlir::IntegerAttr::getInt());
}
} // namespace gpu
} // namespace mlir

namespace mlir {
namespace gpu {
::llvm::StringRef stringifyAddressSpace(AddressSpace val) {
  switch (val) {
    case AddressSpace::Global: return "global";
    case AddressSpace::Workgroup: return "workgroup";
    case AddressSpace::Private: return "private";
  }
  return "";
}

::std::optional<AddressSpace> symbolizeAddressSpace(::llvm::StringRef str) {
  return ::llvm::StringSwitch<::std::optional<AddressSpace>>(str)
      .Case("global", AddressSpace::Global)
      .Case("workgroup", AddressSpace::Workgroup)
      .Case("private", AddressSpace::Private)
      .Default(::std::nullopt);
}
::std::optional<AddressSpace> symbolizeAddressSpace(uint32_t value) {
  switch (value) {
  case 1: return AddressSpace::Global;
  case 2: return AddressSpace::Workgroup;
  case 3: return AddressSpace::Private;
  default: return ::std::nullopt;
  }
}

} // namespace gpu
} // namespace mlir

namespace mlir {
namespace gpu {
::llvm::StringRef stringifyLinearId(LinearId val) {
  switch (val) {
    case LinearId::DimX: return "x";
    case LinearId::DimY: return "y";
    case LinearId::DimZ: return "z";
  }
  return "";
}

::std::optional<LinearId> symbolizeLinearId(::llvm::StringRef str) {
  return ::llvm::StringSwitch<::std::optional<LinearId>>(str)
      .Case("x", LinearId::DimX)
      .Case("y", LinearId::DimY)
      .Case("z", LinearId::DimZ)
      .Default(::std::nullopt);
}
::std::optional<LinearId> symbolizeLinearId(uint64_t value) {
  switch (value) {
  case 0: return LinearId::DimX;
  case 1: return LinearId::DimY;
  case 2: return LinearId::DimZ;
  default: return ::std::nullopt;
  }
}

bool LinearIdAttr::classof(::mlir::Attribute attr) {
  return (((::llvm::isa<::mlir::IntegerAttr>(attr))) && ((::llvm::cast<::mlir::IntegerAttr>(attr).getType().isSignlessInteger(64)))) && (((::llvm::cast<::mlir::IntegerAttr>(attr).getInt() == 0)) || ((::llvm::cast<::mlir::IntegerAttr>(attr).getInt() == 1)) || ((::llvm::cast<::mlir::IntegerAttr>(attr).getInt() == 2)));
}
LinearIdAttr LinearIdAttr::get(::mlir::MLIRContext *context, LinearId val) {
  ::mlir::IntegerType intType = ::mlir::IntegerType::get(context, 64);
  ::mlir::IntegerAttr baseAttr = ::mlir::IntegerAttr::get(intType, static_cast<uint64_t>(val));
  return ::llvm::cast<LinearIdAttr>(baseAttr);
}
LinearId LinearIdAttr::getValue() const {
  return static_cast<LinearId>(::mlir::IntegerAttr::getInt());
}
} // namespace gpu
} // namespace mlir

namespace mlir {
namespace gpu {
::llvm::StringRef stringifyThreads(Threads val) {
  switch (val) {
    case Threads::DimX: return "x";
    case Threads::DimY: return "y";
    case Threads::DimZ: return "z";
  }
  return "";
}

::std::optional<Threads> symbolizeThreads(::llvm::StringRef str) {
  return ::llvm::StringSwitch<::std::optional<Threads>>(str)
      .Case("x", Threads::DimX)
      .Case("y", Threads::DimY)
      .Case("z", Threads::DimZ)
      .Default(::std::nullopt);
}
::std::optional<Threads> symbolizeThreads(uint64_t value) {
  switch (value) {
  case 0: return Threads::DimX;
  case 1: return Threads::DimY;
  case 2: return Threads::DimZ;
  default: return ::std::nullopt;
  }
}

bool ThreadsAttr::classof(::mlir::Attribute attr) {
  return (((::llvm::isa<::mlir::IntegerAttr>(attr))) && ((::llvm::cast<::mlir::IntegerAttr>(attr).getType().isSignlessInteger(64)))) && (((::llvm::cast<::mlir::IntegerAttr>(attr).getInt() == 0)) || ((::llvm::cast<::mlir::IntegerAttr>(attr).getInt() == 1)) || ((::llvm::cast<::mlir::IntegerAttr>(attr).getInt() == 2)));
}
ThreadsAttr ThreadsAttr::get(::mlir::MLIRContext *context, Threads val) {
  ::mlir::IntegerType intType = ::mlir::IntegerType::get(context, 64);
  ::mlir::IntegerAttr baseAttr = ::mlir::IntegerAttr::get(intType, static_cast<uint64_t>(val));
  return ::llvm::cast<ThreadsAttr>(baseAttr);
}
Threads ThreadsAttr::getValue() const {
  return static_cast<Threads>(::mlir::IntegerAttr::getInt());
}
} // namespace gpu
} // namespace mlir

namespace mlir {
namespace gpu {
::llvm::StringRef stringifyWarps(Warps val) {
  switch (val) {
    case Warps::DimX: return "x";
    case Warps::DimY: return "y";
    case Warps::DimZ: return "z";
  }
  return "";
}

::std::optional<Warps> symbolizeWarps(::llvm::StringRef str) {
  return ::llvm::StringSwitch<::std::optional<Warps>>(str)
      .Case("x", Warps::DimX)
      .Case("y", Warps::DimY)
      .Case("z", Warps::DimZ)
      .Default(::std::nullopt);
}
::std::optional<Warps> symbolizeWarps(uint64_t value) {
  switch (value) {
  case 0: return Warps::DimX;
  case 1: return Warps::DimY;
  case 2: return Warps::DimZ;
  default: return ::std::nullopt;
  }
}

bool WarpsAttr::classof(::mlir::Attribute attr) {
  return (((::llvm::isa<::mlir::IntegerAttr>(attr))) && ((::llvm::cast<::mlir::IntegerAttr>(attr).getType().isSignlessInteger(64)))) && (((::llvm::cast<::mlir::IntegerAttr>(attr).getInt() == 0)) || ((::llvm::cast<::mlir::IntegerAttr>(attr).getInt() == 1)) || ((::llvm::cast<::mlir::IntegerAttr>(attr).getInt() == 2)));
}
WarpsAttr WarpsAttr::get(::mlir::MLIRContext *context, Warps val) {
  ::mlir::IntegerType intType = ::mlir::IntegerType::get(context, 64);
  ::mlir::IntegerAttr baseAttr = ::mlir::IntegerAttr::get(intType, static_cast<uint64_t>(val));
  return ::llvm::cast<WarpsAttr>(baseAttr);
}
Warps WarpsAttr::getValue() const {
  return static_cast<Warps>(::mlir::IntegerAttr::getInt());
}
} // namespace gpu
} // namespace mlir

