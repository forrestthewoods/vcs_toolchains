/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Interface Declarations                                                     *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

namespace hlfir {
class ElementalOpInterface;
namespace detail {
struct ElementalOpInterfaceInterfaceTraits {
  struct Concept {
    /// The methods defined by the interface.
    mlir::Block::BlockArgListType (*getIndices)(const Concept *impl, ::mlir::Operation *);
    mlir::Value (*getElementEntity)(const Concept *impl, ::mlir::Operation *);
    mlir::Region*(*getElementCleanup)(const Concept *impl, ::mlir::Operation *);
    mlir::Region&(*getElementalRegion)(const Concept *impl, ::mlir::Operation *);
    bool (*isOrdered)(const Concept *impl, ::mlir::Operation *);
  };
  template<typename ConcreteOp>
  class Model : public Concept {
  public:
    using Interface = hlfir::ElementalOpInterface;
    Model() : Concept{getIndices, getElementEntity, getElementCleanup, getElementalRegion, isOrdered} {}

    static inline mlir::Block::BlockArgListType getIndices(const Concept *impl, ::mlir::Operation *tablegen_opaque_val);
    static inline mlir::Value getElementEntity(const Concept *impl, ::mlir::Operation *tablegen_opaque_val);
    static inline mlir::Region*getElementCleanup(const Concept *impl, ::mlir::Operation *tablegen_opaque_val);
    static inline mlir::Region&getElementalRegion(const Concept *impl, ::mlir::Operation *tablegen_opaque_val);
    static inline bool isOrdered(const Concept *impl, ::mlir::Operation *tablegen_opaque_val);
  };
  template<typename ConcreteOp>
  class FallbackModel : public Concept {
  public:
    using Interface = hlfir::ElementalOpInterface;
    FallbackModel() : Concept{getIndices, getElementEntity, getElementCleanup, getElementalRegion, isOrdered} {}

    static inline mlir::Block::BlockArgListType getIndices(const Concept *impl, ::mlir::Operation *tablegen_opaque_val);
    static inline mlir::Value getElementEntity(const Concept *impl, ::mlir::Operation *tablegen_opaque_val);
    static inline mlir::Region*getElementCleanup(const Concept *impl, ::mlir::Operation *tablegen_opaque_val);
    static inline mlir::Region&getElementalRegion(const Concept *impl, ::mlir::Operation *tablegen_opaque_val);
    static inline bool isOrdered(const Concept *impl, ::mlir::Operation *tablegen_opaque_val);
  };
  template<typename ConcreteModel, typename ConcreteOp>
  class ExternalModel : public FallbackModel<ConcreteModel> {
  public:
    using ConcreteEntity = ConcreteOp;
  };
};template <typename ConcreteOp>
struct ElementalOpInterfaceTrait;

} // namespace detail
class ElementalOpInterface : public ::mlir::OpInterface<ElementalOpInterface, detail::ElementalOpInterfaceInterfaceTraits> {
public:
  using ::mlir::OpInterface<ElementalOpInterface, detail::ElementalOpInterfaceInterfaceTraits>::OpInterface;
  template <typename ConcreteOp>
  struct Trait : public detail::ElementalOpInterfaceTrait<ConcreteOp> {};
  /// Return the one based elemental indices.
  mlir::Block::BlockArgListType getIndices();
  /// Return the element entity being computed
  mlir::Value getElementEntity();
  /// Get element cleanup region, if any.
  mlir::Region*getElementCleanup();
  /// Get elemental region.
  mlir::Region&getElementalRegion();
  /// Must this elemental operation be evaluated in order?
  bool isOrdered();
};
namespace detail {
  template <typename ConcreteOp>
  struct ElementalOpInterfaceTrait : public ::mlir::OpInterface<ElementalOpInterface, detail::ElementalOpInterfaceInterfaceTraits>::Trait<ConcreteOp> {
  };
}// namespace detail
} // namespace hlfir
namespace hlfir {
class OrderedAssignmentTreeOpInterface;
namespace detail {
struct OrderedAssignmentTreeOpInterfaceInterfaceTraits {
  struct Concept {
    /// The methods defined by the interface.
    void (*getLeafRegions)(const Concept *impl, ::mlir::Operation *, llvm::SmallVectorImpl<mlir::Region*>&);
    mlir::Region*(*getSubTreeRegion)(const Concept *impl, ::mlir::Operation *);
  };
  template<typename ConcreteOp>
  class Model : public Concept {
  public:
    using Interface = hlfir::OrderedAssignmentTreeOpInterface;
    Model() : Concept{getLeafRegions, getSubTreeRegion} {}

    static inline void getLeafRegions(const Concept *impl, ::mlir::Operation *tablegen_opaque_val, llvm::SmallVectorImpl<mlir::Region*>& regions);
    static inline mlir::Region*getSubTreeRegion(const Concept *impl, ::mlir::Operation *tablegen_opaque_val);
  };
  template<typename ConcreteOp>
  class FallbackModel : public Concept {
  public:
    using Interface = hlfir::OrderedAssignmentTreeOpInterface;
    FallbackModel() : Concept{getLeafRegions, getSubTreeRegion} {}

    static inline void getLeafRegions(const Concept *impl, ::mlir::Operation *tablegen_opaque_val, llvm::SmallVectorImpl<mlir::Region*>& regions);
    static inline mlir::Region*getSubTreeRegion(const Concept *impl, ::mlir::Operation *tablegen_opaque_val);
  };
  template<typename ConcreteModel, typename ConcreteOp>
  class ExternalModel : public FallbackModel<ConcreteModel> {
  public:
    using ConcreteEntity = ConcreteOp;
  };
};template <typename ConcreteOp>
struct OrderedAssignmentTreeOpInterfaceTrait;

} // namespace detail
class OrderedAssignmentTreeOpInterface : public ::mlir::OpInterface<OrderedAssignmentTreeOpInterface, detail::OrderedAssignmentTreeOpInterfaceInterfaceTraits> {
public:
  using ::mlir::OpInterface<OrderedAssignmentTreeOpInterface, detail::OrderedAssignmentTreeOpInterfaceInterfaceTraits>::OpInterface;
  template <typename ConcreteOp>
  struct Trait : public detail::OrderedAssignmentTreeOpInterfaceTrait<ConcreteOp> {};
  /// Get the OrderedAssignmentTreeOpInterface leaf regions that contain evaluation code
  void getLeafRegions(llvm::SmallVectorImpl<mlir::Region*>& regions);
  /// Get the region, if any, containing the list of sub-tree OrderedAssignmentTreeOpInterface nodes
  mlir::Region*getSubTreeRegion();

    /// Interface verifier imlementation.
    mlir::LogicalResult verifyImpl();

    mlir::Block* getSubTreeBlock() {
      mlir::Region* region = getSubTreeRegion();
      return region && !region->empty()? &region->front() : nullptr;
    }
};
namespace detail {
  template <typename ConcreteOp>
  struct OrderedAssignmentTreeOpInterfaceTrait : public ::mlir::OpInterface<OrderedAssignmentTreeOpInterface, detail::OrderedAssignmentTreeOpInterfaceInterfaceTraits>::Trait<ConcreteOp> {
    static ::mlir::LogicalResult verifyTrait(::mlir::Operation *op) {
      return ::mlir::cast<::hlfir::OrderedAssignmentTreeOpInterface>(op).verifyImpl();
    }
  };
}// namespace detail
} // namespace hlfir
namespace hlfir {
template<typename ConcreteOp>
mlir::Block::BlockArgListType detail::ElementalOpInterfaceInterfaceTraits::Model<ConcreteOp>::getIndices(const Concept *impl, ::mlir::Operation *tablegen_opaque_val) {
  return (llvm::cast<ConcreteOp>(tablegen_opaque_val)).getIndices();
}
template<typename ConcreteOp>
mlir::Value detail::ElementalOpInterfaceInterfaceTraits::Model<ConcreteOp>::getElementEntity(const Concept *impl, ::mlir::Operation *tablegen_opaque_val) {
  return (llvm::cast<ConcreteOp>(tablegen_opaque_val)).getElementEntity();
}
template<typename ConcreteOp>
mlir::Region*detail::ElementalOpInterfaceInterfaceTraits::Model<ConcreteOp>::getElementCleanup(const Concept *impl, ::mlir::Operation *tablegen_opaque_val) {
  return (llvm::cast<ConcreteOp>(tablegen_opaque_val)).getElementCleanup();
}
template<typename ConcreteOp>
mlir::Region&detail::ElementalOpInterfaceInterfaceTraits::Model<ConcreteOp>::getElementalRegion(const Concept *impl, ::mlir::Operation *tablegen_opaque_val) {
  return (llvm::cast<ConcreteOp>(tablegen_opaque_val)).getElementalRegion();
}
template<typename ConcreteOp>
bool detail::ElementalOpInterfaceInterfaceTraits::Model<ConcreteOp>::isOrdered(const Concept *impl, ::mlir::Operation *tablegen_opaque_val) {
  return (llvm::cast<ConcreteOp>(tablegen_opaque_val)).isOrdered();
}
template<typename ConcreteOp>
mlir::Block::BlockArgListType detail::ElementalOpInterfaceInterfaceTraits::FallbackModel<ConcreteOp>::getIndices(const Concept *impl, ::mlir::Operation *tablegen_opaque_val) {
  return static_cast<const ConcreteOp *>(impl)->getIndices(tablegen_opaque_val);
}
template<typename ConcreteOp>
mlir::Value detail::ElementalOpInterfaceInterfaceTraits::FallbackModel<ConcreteOp>::getElementEntity(const Concept *impl, ::mlir::Operation *tablegen_opaque_val) {
  return static_cast<const ConcreteOp *>(impl)->getElementEntity(tablegen_opaque_val);
}
template<typename ConcreteOp>
mlir::Region*detail::ElementalOpInterfaceInterfaceTraits::FallbackModel<ConcreteOp>::getElementCleanup(const Concept *impl, ::mlir::Operation *tablegen_opaque_val) {
  return static_cast<const ConcreteOp *>(impl)->getElementCleanup(tablegen_opaque_val);
}
template<typename ConcreteOp>
mlir::Region&detail::ElementalOpInterfaceInterfaceTraits::FallbackModel<ConcreteOp>::getElementalRegion(const Concept *impl, ::mlir::Operation *tablegen_opaque_val) {
  return static_cast<const ConcreteOp *>(impl)->getElementalRegion(tablegen_opaque_val);
}
template<typename ConcreteOp>
bool detail::ElementalOpInterfaceInterfaceTraits::FallbackModel<ConcreteOp>::isOrdered(const Concept *impl, ::mlir::Operation *tablegen_opaque_val) {
  return static_cast<const ConcreteOp *>(impl)->isOrdered(tablegen_opaque_val);
}
} // namespace hlfir
namespace hlfir {
template<typename ConcreteOp>
void detail::OrderedAssignmentTreeOpInterfaceInterfaceTraits::Model<ConcreteOp>::getLeafRegions(const Concept *impl, ::mlir::Operation *tablegen_opaque_val, llvm::SmallVectorImpl<mlir::Region*>& regions) {
  return (llvm::cast<ConcreteOp>(tablegen_opaque_val)).getLeafRegions(regions);
}
template<typename ConcreteOp>
mlir::Region*detail::OrderedAssignmentTreeOpInterfaceInterfaceTraits::Model<ConcreteOp>::getSubTreeRegion(const Concept *impl, ::mlir::Operation *tablegen_opaque_val) {
  return (llvm::cast<ConcreteOp>(tablegen_opaque_val)).getSubTreeRegion();
}
template<typename ConcreteOp>
void detail::OrderedAssignmentTreeOpInterfaceInterfaceTraits::FallbackModel<ConcreteOp>::getLeafRegions(const Concept *impl, ::mlir::Operation *tablegen_opaque_val, llvm::SmallVectorImpl<mlir::Region*>& regions) {
  return static_cast<const ConcreteOp *>(impl)->getLeafRegions(tablegen_opaque_val, regions);
}
template<typename ConcreteOp>
mlir::Region*detail::OrderedAssignmentTreeOpInterfaceInterfaceTraits::FallbackModel<ConcreteOp>::getSubTreeRegion(const Concept *impl, ::mlir::Operation *tablegen_opaque_val) {
  return static_cast<const ConcreteOp *>(impl)->getSubTreeRegion(tablegen_opaque_val);
}
} // namespace hlfir
