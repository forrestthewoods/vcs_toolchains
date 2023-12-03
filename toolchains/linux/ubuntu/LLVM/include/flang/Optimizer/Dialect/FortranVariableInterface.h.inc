/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Interface Declarations                                                     *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

namespace fir {
class FortranVariableOpInterface;
namespace detail {
struct FortranVariableOpInterfaceInterfaceTraits {
  struct Concept {
    /// The methods defined by the interface.
    mlir::Value (*getBase)(const Concept *impl, ::mlir::Operation *);
    std::optional<fir::FortranVariableFlagsEnum> (*getFortranAttrs)(const Concept *impl, ::mlir::Operation *);
    mlir::Value (*getShape)(const Concept *impl, ::mlir::Operation *);
    mlir::OperandRange (*getExplicitTypeParams)(const Concept *impl, ::mlir::Operation *);
  };
  template<typename ConcreteOp>
  class Model : public Concept {
  public:
    using Interface = fir::FortranVariableOpInterface;
    Model() : Concept{getBase, getFortranAttrs, getShape, getExplicitTypeParams} {}

    static inline mlir::Value getBase(const Concept *impl, ::mlir::Operation *tablegen_opaque_val);
    static inline std::optional<fir::FortranVariableFlagsEnum> getFortranAttrs(const Concept *impl, ::mlir::Operation *tablegen_opaque_val);
    static inline mlir::Value getShape(const Concept *impl, ::mlir::Operation *tablegen_opaque_val);
    static inline mlir::OperandRange getExplicitTypeParams(const Concept *impl, ::mlir::Operation *tablegen_opaque_val);
  };
  template<typename ConcreteOp>
  class FallbackModel : public Concept {
  public:
    using Interface = fir::FortranVariableOpInterface;
    FallbackModel() : Concept{getBase, getFortranAttrs, getShape, getExplicitTypeParams} {}

    static inline mlir::Value getBase(const Concept *impl, ::mlir::Operation *tablegen_opaque_val);
    static inline std::optional<fir::FortranVariableFlagsEnum> getFortranAttrs(const Concept *impl, ::mlir::Operation *tablegen_opaque_val);
    static inline mlir::Value getShape(const Concept *impl, ::mlir::Operation *tablegen_opaque_val);
    static inline mlir::OperandRange getExplicitTypeParams(const Concept *impl, ::mlir::Operation *tablegen_opaque_val);
  };
  template<typename ConcreteModel, typename ConcreteOp>
  class ExternalModel : public FallbackModel<ConcreteModel> {
  public:
    using ConcreteEntity = ConcreteOp;
    mlir::Value getBase(::mlir::Operation *tablegen_opaque_val) const;
    std::optional<fir::FortranVariableFlagsEnum> getFortranAttrs(::mlir::Operation *tablegen_opaque_val) const;
    mlir::Value getShape(::mlir::Operation *tablegen_opaque_val) const;
    mlir::OperandRange getExplicitTypeParams(::mlir::Operation *tablegen_opaque_val) const;
  };
};template <typename ConcreteOp>
struct FortranVariableOpInterfaceTrait;

} // namespace detail
class FortranVariableOpInterface : public ::mlir::OpInterface<FortranVariableOpInterface, detail::FortranVariableOpInterfaceInterfaceTraits> {
public:
  using ::mlir::OpInterface<FortranVariableOpInterface, detail::FortranVariableOpInterfaceInterfaceTraits>::OpInterface;
  template <typename ConcreteOp>
  struct Trait : public detail::FortranVariableOpInterfaceTrait<ConcreteOp> {};
  /// Get the address produced by the definition
  mlir::Value getBase();
  /// Get Fortran attributes
  std::optional<fir::FortranVariableFlagsEnum> getFortranAttrs();
  /// Get the shape of the variable. May be a null value.
  mlir::Value getShape();
  /// Get explicit type parameters of the variable
  mlir::OperandRange getExplicitTypeParams();


    /// Get the sequence type or scalar value type corresponding to this
    /// variable.
    mlir::Type getElementOrSequenceType() {
      mlir::Type type = fir::unwrapPassByRefType(fir::unwrapRefType(getBase().getType()));
      if (auto boxCharType = type.dyn_cast<fir::BoxCharType>())
        return boxCharType.getEleTy();
      return type;
    }

    /// Get the scalar value type corresponding to this variable.
    mlir::Type getElementType() {
      return fir::unwrapSequenceType(getElementOrSequenceType());
    }

    /// Is the variable an array?
    bool isArray() {
      return getElementOrSequenceType().isa<fir::SequenceType>();
    }

    /// Return the rank of the entity if it is known at compile time.
    std::optional<unsigned> getRank() {
      if (auto sequenceType =
            getElementOrSequenceType().dyn_cast<fir::SequenceType>()) {
        if (sequenceType.hasUnknownShape())
          return {};
        return sequenceType.getDimension();
      }
      return 0;
    }

    /// Is this variable a Fortran pointer?
    bool isPointer() {
      auto attrs = getFortranAttrs();
      return attrs && bitEnumContainsAny(*attrs,
                        fir::FortranVariableFlagsEnum::pointer);
    }

    /// Is this variable a Fortran allocatable?
    bool isAllocatable() {
      auto attrs = getFortranAttrs();
      return attrs && bitEnumContainsAny(*attrs,
                        fir::FortranVariableFlagsEnum::allocatable);
    }

    /// Is this variable a Fortran optional?
    bool isOptional() {
      auto attrs = getFortranAttrs();
      return attrs && bitEnumContainsAny(*attrs,
                        fir::FortranVariableFlagsEnum::optional);
    }

    /// Does this variable have the Fortran CONTIGUOUS attribute?
    /// Note that not having this attribute does not imply the
    /// variable is not contiguous.
    bool hasContiguousAttr() {
      auto attrs = getFortranAttrs();
      return attrs && bitEnumContainsAny(*attrs,
                        fir::FortranVariableFlagsEnum::contiguous);
    }

    /// Is this a Fortran character variable?
    bool isCharacter() {
      return getElementType().isa<fir::CharacterType>();
    }

    /// Is this a Fortran character variable with an explicit length?
    bool hasExplicitCharLen() {
      return isCharacter() && !getExplicitTypeParams().empty();
    }

    /// Return the length of explicit length character variable.
    mlir::Value getExplicitCharLen() {
      assert(hasExplicitCharLen() && "must be an explicit length character");
      return getExplicitTypeParams()[0];
    }

    /// Is this variable represented as a fir.box or fir.class value?
    bool isBoxValue() {
      return getBase().getType().isa<fir::BaseBoxType>();
    }

    /// Is this variable represented as a fir.box or fir.class address?
    bool isBoxAddress() {
      return fir::isBoxAddress(getBase().getType());
    }

    /// Is this variable represented as the value or address of a fir.box or
    /// fir.class?
    bool isBox() {
      return fir::isBoxAddressOrValue(getBase().getType());
    }

    /// Is this variable a Fortran parameter?
    bool isParameter() {
      auto attrs = getFortranAttrs();
      return attrs && bitEnumContainsAny(*attrs,
                        fir::FortranVariableFlagsEnum::parameter);
    }

    /// Interface verifier imlementation for declare operations.
    mlir::LogicalResult verifyDeclareLikeOpImpl(mlir::Value memRef);
};
namespace detail {
  template <typename ConcreteOp>
  struct FortranVariableOpInterfaceTrait : public ::mlir::OpInterface<FortranVariableOpInterface, detail::FortranVariableOpInterfaceInterfaceTraits>::Trait<ConcreteOp> {
    /// Get the address produced by the definition
    mlir::Value getBase() {
      ConcreteOp op = mlir::cast<ConcreteOp>(this->getOperation());
        return op.getResult();
    }
    /// Get Fortran attributes
    std::optional<fir::FortranVariableFlagsEnum> getFortranAttrs() {
      ConcreteOp op = mlir::cast<ConcreteOp>(this->getOperation());
        return op.getFortran_attrs();
    }
    /// Get the shape of the variable. May be a null value.
    mlir::Value getShape() {
      ConcreteOp op = mlir::cast<ConcreteOp>(this->getOperation());
        return op.getShape();
    }
    /// Get explicit type parameters of the variable
    mlir::OperandRange getExplicitTypeParams() {
      ConcreteOp op = mlir::cast<ConcreteOp>(this->getOperation());
        return op.getTypeparams();
    }
  };
}// namespace detail
} // namespace fir
namespace fir {
template<typename ConcreteOp>
mlir::Value detail::FortranVariableOpInterfaceInterfaceTraits::Model<ConcreteOp>::getBase(const Concept *impl, ::mlir::Operation *tablegen_opaque_val) {
  return (llvm::cast<ConcreteOp>(tablegen_opaque_val)).getBase();
}
template<typename ConcreteOp>
std::optional<fir::FortranVariableFlagsEnum> detail::FortranVariableOpInterfaceInterfaceTraits::Model<ConcreteOp>::getFortranAttrs(const Concept *impl, ::mlir::Operation *tablegen_opaque_val) {
  return (llvm::cast<ConcreteOp>(tablegen_opaque_val)).getFortranAttrs();
}
template<typename ConcreteOp>
mlir::Value detail::FortranVariableOpInterfaceInterfaceTraits::Model<ConcreteOp>::getShape(const Concept *impl, ::mlir::Operation *tablegen_opaque_val) {
  return (llvm::cast<ConcreteOp>(tablegen_opaque_val)).getShape();
}
template<typename ConcreteOp>
mlir::OperandRange detail::FortranVariableOpInterfaceInterfaceTraits::Model<ConcreteOp>::getExplicitTypeParams(const Concept *impl, ::mlir::Operation *tablegen_opaque_val) {
  return (llvm::cast<ConcreteOp>(tablegen_opaque_val)).getExplicitTypeParams();
}
template<typename ConcreteOp>
mlir::Value detail::FortranVariableOpInterfaceInterfaceTraits::FallbackModel<ConcreteOp>::getBase(const Concept *impl, ::mlir::Operation *tablegen_opaque_val) {
  return static_cast<const ConcreteOp *>(impl)->getBase(tablegen_opaque_val);
}
template<typename ConcreteOp>
std::optional<fir::FortranVariableFlagsEnum> detail::FortranVariableOpInterfaceInterfaceTraits::FallbackModel<ConcreteOp>::getFortranAttrs(const Concept *impl, ::mlir::Operation *tablegen_opaque_val) {
  return static_cast<const ConcreteOp *>(impl)->getFortranAttrs(tablegen_opaque_val);
}
template<typename ConcreteOp>
mlir::Value detail::FortranVariableOpInterfaceInterfaceTraits::FallbackModel<ConcreteOp>::getShape(const Concept *impl, ::mlir::Operation *tablegen_opaque_val) {
  return static_cast<const ConcreteOp *>(impl)->getShape(tablegen_opaque_val);
}
template<typename ConcreteOp>
mlir::OperandRange detail::FortranVariableOpInterfaceInterfaceTraits::FallbackModel<ConcreteOp>::getExplicitTypeParams(const Concept *impl, ::mlir::Operation *tablegen_opaque_val) {
  return static_cast<const ConcreteOp *>(impl)->getExplicitTypeParams(tablegen_opaque_val);
}
template<typename ConcreteModel, typename ConcreteOp>
mlir::Value detail::FortranVariableOpInterfaceInterfaceTraits::ExternalModel<ConcreteModel, ConcreteOp>::getBase(::mlir::Operation *tablegen_opaque_val) const {
ConcreteOp op = mlir::cast<ConcreteOp>(this->getOperation());
        return op.getResult();
}
template<typename ConcreteModel, typename ConcreteOp>
std::optional<fir::FortranVariableFlagsEnum> detail::FortranVariableOpInterfaceInterfaceTraits::ExternalModel<ConcreteModel, ConcreteOp>::getFortranAttrs(::mlir::Operation *tablegen_opaque_val) const {
ConcreteOp op = mlir::cast<ConcreteOp>(this->getOperation());
        return op.getFortran_attrs();
}
template<typename ConcreteModel, typename ConcreteOp>
mlir::Value detail::FortranVariableOpInterfaceInterfaceTraits::ExternalModel<ConcreteModel, ConcreteOp>::getShape(::mlir::Operation *tablegen_opaque_val) const {
ConcreteOp op = mlir::cast<ConcreteOp>(this->getOperation());
        return op.getShape();
}
template<typename ConcreteModel, typename ConcreteOp>
mlir::OperandRange detail::FortranVariableOpInterfaceInterfaceTraits::ExternalModel<ConcreteModel, ConcreteOp>::getExplicitTypeParams(::mlir::Operation *tablegen_opaque_val) const {
ConcreteOp op = mlir::cast<ConcreteOp>(this->getOperation());
        return op.getTypeparams();
}
} // namespace fir
