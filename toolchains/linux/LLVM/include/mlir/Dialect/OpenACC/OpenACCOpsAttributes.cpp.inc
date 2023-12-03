/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* AttrDef Definitions                                                        *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#ifdef GET_ATTRDEF_LIST
#undef GET_ATTRDEF_LIST

::mlir::acc::DeclareAttr,
::mlir::acc::ClauseDefaultValueAttr,
::mlir::acc::DataClauseAttr,
::mlir::acc::ReductionOperatorAttr

#endif  // GET_ATTRDEF_LIST

#ifdef GET_ATTRDEF_CLASSES
#undef GET_ATTRDEF_CLASSES

static ::mlir::OptionalParseResult generatedAttributeParser(::mlir::AsmParser &parser, ::llvm::StringRef *mnemonic, ::mlir::Type type, ::mlir::Attribute &value) {
  return ::mlir::AsmParser::KeywordSwitch<::mlir::OptionalParseResult>(parser)
    .Case(::mlir::acc::DeclareAttr::getMnemonic(), [&](llvm::StringRef, llvm::SMLoc) {
      value = ::mlir::acc::DeclareAttr::parse(parser, type);
      return ::mlir::success(!!value);
    })
    .Case(::mlir::acc::ClauseDefaultValueAttr::getMnemonic(), [&](llvm::StringRef, llvm::SMLoc) {
      value = ::mlir::acc::ClauseDefaultValueAttr::parse(parser, type);
      return ::mlir::success(!!value);
    })
    .Case(::mlir::acc::DataClauseAttr::getMnemonic(), [&](llvm::StringRef, llvm::SMLoc) {
      value = ::mlir::acc::DataClauseAttr::parse(parser, type);
      return ::mlir::success(!!value);
    })
    .Case(::mlir::acc::ReductionOperatorAttr::getMnemonic(), [&](llvm::StringRef, llvm::SMLoc) {
      value = ::mlir::acc::ReductionOperatorAttr::parse(parser, type);
      return ::mlir::success(!!value);
    })
    .Default([&](llvm::StringRef keyword, llvm::SMLoc) {
      *mnemonic = keyword;
      return std::nullopt;
    });
}

static ::mlir::LogicalResult generatedAttributePrinter(::mlir::Attribute def, ::mlir::AsmPrinter &printer) {
  return ::llvm::TypeSwitch<::mlir::Attribute, ::mlir::LogicalResult>(def)    .Case<::mlir::acc::DeclareAttr>([&](auto t) {
      printer << ::mlir::acc::DeclareAttr::getMnemonic();
t.print(printer);
      return ::mlir::success();
    })
    .Case<::mlir::acc::ClauseDefaultValueAttr>([&](auto t) {
      printer << ::mlir::acc::ClauseDefaultValueAttr::getMnemonic();
t.print(printer);
      return ::mlir::success();
    })
    .Case<::mlir::acc::DataClauseAttr>([&](auto t) {
      printer << ::mlir::acc::DataClauseAttr::getMnemonic();
t.print(printer);
      return ::mlir::success();
    })
    .Case<::mlir::acc::ReductionOperatorAttr>([&](auto t) {
      printer << ::mlir::acc::ReductionOperatorAttr::getMnemonic();
t.print(printer);
      return ::mlir::success();
    })
    .Default([](auto) { return ::mlir::failure(); });
}

namespace mlir {
namespace acc {
namespace detail {
struct DeclareAttrStorage : public ::mlir::AttributeStorage {
  using KeyTy = std::tuple<DataClauseAttr>;
  DeclareAttrStorage(DataClauseAttr dataClause) : dataClause(dataClause) {}

  KeyTy getAsKey() const {
    return KeyTy(dataClause);
  }

  bool operator==(const KeyTy &tblgenKey) const {
    return (dataClause == std::get<0>(tblgenKey));
  }

  static ::llvm::hash_code hashKey(const KeyTy &tblgenKey) {
    return ::llvm::hash_combine(std::get<0>(tblgenKey));
  }

  static DeclareAttrStorage *construct(::mlir::AttributeStorageAllocator &allocator, const KeyTy &tblgenKey) {
    auto dataClause = std::get<0>(tblgenKey);
    return new (allocator.allocate<DeclareAttrStorage>()) DeclareAttrStorage(dataClause);
  }

  DataClauseAttr dataClause;
};
} // namespace detail
DeclareAttr DeclareAttr::get(::mlir::MLIRContext *context, DataClauseAttr dataClause) {
  return Base::get(context, dataClause);
}

::mlir::Attribute DeclareAttr::parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType) {
  ::mlir::Builder odsBuilder(odsParser.getContext());
  ::llvm::SMLoc odsLoc = odsParser.getCurrentLocation();
  (void) odsLoc;
  ::mlir::FailureOr<DataClauseAttr> _result_dataClause;
  // Parse literal '<'
  if (odsParser.parseLess()) return {};
  // Parse parameter struct
  bool _seen_dataClause = false;
  {
    const auto _loop_body = [&](::llvm::StringRef _paramKey) -> bool {
      // Parse literal '='
      if (odsParser.parseEqual()) return {};
      if (!_seen_dataClause && _paramKey == "dataClause") {
        _seen_dataClause = true;

        // Parse variable 'dataClause'
        _result_dataClause = ::mlir::FieldParser<DataClauseAttr>::parse(odsParser);
        if (::mlir::failed(_result_dataClause)) {
          odsParser.emitError(odsParser.getCurrentLocation(), "failed to parse DeclareAttr parameter 'dataClause' which is to be a `DataClauseAttr`");
          return {};
        }
      } else {
        odsParser.emitError(odsParser.getCurrentLocation(), "duplicate or unknown struct parameter name: ") << _paramKey;
        return {};
      }
      return true;
    };
    for (unsigned odsStructIndex = 0; odsStructIndex < 1; ++odsStructIndex) {
      ::llvm::StringRef _paramKey;
      if (odsParser.parseKeyword(&_paramKey)) {
        odsParser.emitError(odsParser.getCurrentLocation(),
                           "expected a parameter name in struct");
        return {};
      }
      if (!_loop_body(_paramKey)) return {};
      if ((odsStructIndex != 1 - 1) && odsParser.parseComma())
        return {};
    }
  }
  // Parse literal '>'
  if (odsParser.parseGreater()) return {};
  assert(::mlir::succeeded(_result_dataClause));
  return DeclareAttr::get(odsParser.getContext(),
      DataClauseAttr((*_result_dataClause)));
}

void DeclareAttr::print(::mlir::AsmPrinter &odsPrinter) const {
  ::mlir::Builder odsBuilder(getContext());
  odsPrinter << "<";
  {
    bool _firstPrinted = true;
    if (!_firstPrinted) odsPrinter << ", ";
    _firstPrinted = false;
    odsPrinter << "dataClause = ";
    odsPrinter.printStrippedAttrOrType(getDataClause());
  }
  odsPrinter << ">";
}

DataClauseAttr DeclareAttr::getDataClause() const {
  return getImpl()->dataClause;
}

} // namespace acc
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::acc::DeclareAttr)
namespace mlir {
namespace acc {
namespace detail {
struct ClauseDefaultValueAttrStorage : public ::mlir::AttributeStorage {
  using KeyTy = std::tuple<::mlir::acc::ClauseDefaultValue>;
  ClauseDefaultValueAttrStorage(::mlir::acc::ClauseDefaultValue value) : value(value) {}

  KeyTy getAsKey() const {
    return KeyTy(value);
  }

  bool operator==(const KeyTy &tblgenKey) const {
    return (value == std::get<0>(tblgenKey));
  }

  static ::llvm::hash_code hashKey(const KeyTy &tblgenKey) {
    return ::llvm::hash_combine(std::get<0>(tblgenKey));
  }

  static ClauseDefaultValueAttrStorage *construct(::mlir::AttributeStorageAllocator &allocator, const KeyTy &tblgenKey) {
    auto value = std::get<0>(tblgenKey);
    return new (allocator.allocate<ClauseDefaultValueAttrStorage>()) ClauseDefaultValueAttrStorage(value);
  }

  ::mlir::acc::ClauseDefaultValue value;
};
} // namespace detail
ClauseDefaultValueAttr ClauseDefaultValueAttr::get(::mlir::MLIRContext *context, ::mlir::acc::ClauseDefaultValue value) {
  return Base::get(context, value);
}

::mlir::Attribute ClauseDefaultValueAttr::parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType) {
  ::mlir::Builder odsBuilder(odsParser.getContext());
  ::llvm::SMLoc odsLoc = odsParser.getCurrentLocation();
  (void) odsLoc;
  ::mlir::FailureOr<::mlir::acc::ClauseDefaultValue> _result_value;

  // Parse variable 'value'
  _result_value = [&]() -> ::mlir::FailureOr<::mlir::acc::ClauseDefaultValue> {
      auto loc = odsParser.getCurrentLocation();
      ::llvm::StringRef enumKeyword;
      if (::mlir::failed(odsParser.parseKeyword(&enumKeyword)))
        return ::mlir::failure();
      auto maybeEnum = ::mlir::acc::symbolizeClauseDefaultValue(enumKeyword);
      if (maybeEnum)
        return *maybeEnum;
      return {(::mlir::LogicalResult)(odsParser.emitError(loc) << "expected " << "::mlir::acc::ClauseDefaultValue" << " to be one of: " << "present" << ", " << "none")};
    }();
  if (::mlir::failed(_result_value)) {
    odsParser.emitError(odsParser.getCurrentLocation(), "failed to parse DefaultValueAttr parameter 'value' which is to be a `::mlir::acc::ClauseDefaultValue`");
    return {};
  }
  assert(::mlir::succeeded(_result_value));
  return ClauseDefaultValueAttr::get(odsParser.getContext(),
      ::mlir::acc::ClauseDefaultValue((*_result_value)));
}

void ClauseDefaultValueAttr::print(::mlir::AsmPrinter &odsPrinter) const {
  ::mlir::Builder odsBuilder(getContext());
  odsPrinter << ' ';
  odsPrinter << stringifyClauseDefaultValue(getValue());
}

::mlir::acc::ClauseDefaultValue ClauseDefaultValueAttr::getValue() const {
  return getImpl()->value;
}

} // namespace acc
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::acc::ClauseDefaultValueAttr)
namespace mlir {
namespace acc {
namespace detail {
struct DataClauseAttrStorage : public ::mlir::AttributeStorage {
  using KeyTy = std::tuple<::mlir::acc::DataClause>;
  DataClauseAttrStorage(::mlir::acc::DataClause value) : value(value) {}

  KeyTy getAsKey() const {
    return KeyTy(value);
  }

  bool operator==(const KeyTy &tblgenKey) const {
    return (value == std::get<0>(tblgenKey));
  }

  static ::llvm::hash_code hashKey(const KeyTy &tblgenKey) {
    return ::llvm::hash_combine(std::get<0>(tblgenKey));
  }

  static DataClauseAttrStorage *construct(::mlir::AttributeStorageAllocator &allocator, const KeyTy &tblgenKey) {
    auto value = std::get<0>(tblgenKey);
    return new (allocator.allocate<DataClauseAttrStorage>()) DataClauseAttrStorage(value);
  }

  ::mlir::acc::DataClause value;
};
} // namespace detail
DataClauseAttr DataClauseAttr::get(::mlir::MLIRContext *context, ::mlir::acc::DataClause value) {
  return Base::get(context, value);
}

::mlir::Attribute DataClauseAttr::parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType) {
  ::mlir::Builder odsBuilder(odsParser.getContext());
  ::llvm::SMLoc odsLoc = odsParser.getCurrentLocation();
  (void) odsLoc;
  ::mlir::FailureOr<::mlir::acc::DataClause> _result_value;

  // Parse variable 'value'
  _result_value = [&]() -> ::mlir::FailureOr<::mlir::acc::DataClause> {
      auto loc = odsParser.getCurrentLocation();
      ::llvm::StringRef enumKeyword;
      if (::mlir::failed(odsParser.parseKeyword(&enumKeyword)))
        return ::mlir::failure();
      auto maybeEnum = ::mlir::acc::symbolizeDataClause(enumKeyword);
      if (maybeEnum)
        return *maybeEnum;
      return {(::mlir::LogicalResult)(odsParser.emitError(loc) << "expected " << "::mlir::acc::DataClause" << " to be one of: " << "acc_copyin" << ", " << "acc_copyin_readonly" << ", " << "acc_copy" << ", " << "acc_copyout" << ", " << "acc_copyout_zero" << ", " << "acc_present" << ", " << "acc_create" << ", " << "acc_create_zero" << ", " << "acc_delete" << ", " << "acc_attach" << ", " << "acc_detach" << ", " << "acc_no_create" << ", " << "acc_private" << ", " << "acc_firstprivate" << ", " << "acc_deviceptr" << ", " << "acc_getdeviceptr" << ", " << "acc_update_host" << ", " << "acc_update_self" << ", " << "acc_update_device" << ", " << "acc_use_device" << ", " << "acc_reduction" << ", " << "acc_declare_device_resident" << ", " << "acc_declare_link")};
    }();
  if (::mlir::failed(_result_value)) {
    odsParser.emitError(odsParser.getCurrentLocation(), "failed to parse OpenACC_DataClauseAttr parameter 'value' which is to be a `::mlir::acc::DataClause`");
    return {};
  }
  assert(::mlir::succeeded(_result_value));
  return DataClauseAttr::get(odsParser.getContext(),
      ::mlir::acc::DataClause((*_result_value)));
}

void DataClauseAttr::print(::mlir::AsmPrinter &odsPrinter) const {
  ::mlir::Builder odsBuilder(getContext());
  odsPrinter << ' ';
  odsPrinter << stringifyDataClause(getValue());
}

::mlir::acc::DataClause DataClauseAttr::getValue() const {
  return getImpl()->value;
}

} // namespace acc
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::acc::DataClauseAttr)
namespace mlir {
namespace acc {
namespace detail {
struct ReductionOperatorAttrStorage : public ::mlir::AttributeStorage {
  using KeyTy = std::tuple<::mlir::acc::ReductionOperator>;
  ReductionOperatorAttrStorage(::mlir::acc::ReductionOperator value) : value(value) {}

  KeyTy getAsKey() const {
    return KeyTy(value);
  }

  bool operator==(const KeyTy &tblgenKey) const {
    return (value == std::get<0>(tblgenKey));
  }

  static ::llvm::hash_code hashKey(const KeyTy &tblgenKey) {
    return ::llvm::hash_combine(std::get<0>(tblgenKey));
  }

  static ReductionOperatorAttrStorage *construct(::mlir::AttributeStorageAllocator &allocator, const KeyTy &tblgenKey) {
    auto value = std::get<0>(tblgenKey);
    return new (allocator.allocate<ReductionOperatorAttrStorage>()) ReductionOperatorAttrStorage(value);
  }

  ::mlir::acc::ReductionOperator value;
};
} // namespace detail
ReductionOperatorAttr ReductionOperatorAttr::get(::mlir::MLIRContext *context, ::mlir::acc::ReductionOperator value) {
  return Base::get(context, value);
}

::mlir::Attribute ReductionOperatorAttr::parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType) {
  ::mlir::Builder odsBuilder(odsParser.getContext());
  ::llvm::SMLoc odsLoc = odsParser.getCurrentLocation();
  (void) odsLoc;
  ::mlir::FailureOr<::mlir::acc::ReductionOperator> _result_value;
  // Parse literal '<'
  if (odsParser.parseLess()) return {};

  // Parse variable 'value'
  _result_value = [&]() -> ::mlir::FailureOr<::mlir::acc::ReductionOperator> {
      auto loc = odsParser.getCurrentLocation();
      ::llvm::StringRef enumKeyword;
      if (::mlir::failed(odsParser.parseKeyword(&enumKeyword)))
        return ::mlir::failure();
      auto maybeEnum = ::mlir::acc::symbolizeReductionOperator(enumKeyword);
      if (maybeEnum)
        return *maybeEnum;
      return {(::mlir::LogicalResult)(odsParser.emitError(loc) << "expected " << "::mlir::acc::ReductionOperator" << " to be one of: " << "add" << ", " << "mul" << ", " << "max" << ", " << "min" << ", " << "iand" << ", " << "ior" << ", " << "xor" << ", " << "eqv" << ", " << "neqv" << ", " << "land" << ", " << "lor")};
    }();
  if (::mlir::failed(_result_value)) {
    odsParser.emitError(odsParser.getCurrentLocation(), "failed to parse OpenACC_ReductionOperatorAttr parameter 'value' which is to be a `::mlir::acc::ReductionOperator`");
    return {};
  }
  // Parse literal '>'
  if (odsParser.parseGreater()) return {};
  assert(::mlir::succeeded(_result_value));
  return ReductionOperatorAttr::get(odsParser.getContext(),
      ::mlir::acc::ReductionOperator((*_result_value)));
}

void ReductionOperatorAttr::print(::mlir::AsmPrinter &odsPrinter) const {
  ::mlir::Builder odsBuilder(getContext());
  odsPrinter << "<";
  odsPrinter << stringifyReductionOperator(getValue());
  odsPrinter << ">";
}

::mlir::acc::ReductionOperator ReductionOperatorAttr::getValue() const {
  return getImpl()->value;
}

} // namespace acc
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::acc::ReductionOperatorAttr)
namespace mlir {
namespace acc {

/// Parse an attribute registered to this dialect.
::mlir::Attribute OpenACCDialect::parseAttribute(::mlir::DialectAsmParser &parser,
                                      ::mlir::Type type) const {
  ::llvm::SMLoc typeLoc = parser.getCurrentLocation();
  ::llvm::StringRef attrTag;
  {
    ::mlir::Attribute attr;
    auto parseResult = generatedAttributeParser(parser, &attrTag, type, attr);
    if (parseResult.has_value())
      return attr;
  }
  
  parser.emitError(typeLoc) << "unknown attribute `"
      << attrTag << "` in dialect `" << getNamespace() << "`";
  return {};
}
/// Print an attribute registered to this dialect.
void OpenACCDialect::printAttribute(::mlir::Attribute attr,
                         ::mlir::DialectAsmPrinter &printer) const {
  if (::mlir::succeeded(generatedAttributePrinter(attr, printer)))
    return;
  
}
} // namespace acc
} // namespace mlir

#endif  // GET_ATTRDEF_CLASSES

