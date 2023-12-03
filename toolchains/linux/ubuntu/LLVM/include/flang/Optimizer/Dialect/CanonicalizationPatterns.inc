/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Rewriters                                                                  *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

static ::mlir::LogicalResult static_dag_matcher_0(::mlir::PatternRewriter &rewriter, ::mlir::Operation *op0, ::llvm::SmallVector<::mlir::Operation *, 4> &tblgen_ops, ::mlir::Operation::operand_range &arg, ::fir::ConvertOp &irm, ::fir::ConvertOp &res) {
  (void)tblgen_ops;
  auto castedOp1 = ::llvm::dyn_cast<::fir::ConvertOp>(op0); (void)castedOp1;
  if (!(castedOp1)){
    return rewriter.notifyMatchFailure(op0, [&](::mlir::Diagnostic &diag) {
      diag << "castedOp1 is not ::fir::ConvertOp type";
    });
  }
  res = castedOp1;
  {
    auto *op2 = (*castedOp1.getODSOperands(0).begin()).getDefiningOp();
    if (!(op2)){
      return rewriter.notifyMatchFailure(castedOp1, [&](::mlir::Diagnostic &diag) {
        diag << "There's no operation that defines operand 0 of castedOp1";
      });
    }
    auto castedOp2 = ::llvm::dyn_cast<::fir::ConvertOp>(op2); (void)castedOp2;
    if (!(castedOp2)){
      return rewriter.notifyMatchFailure(op2, [&](::mlir::Diagnostic &diag) {
        diag << "castedOp2 is not ::fir::ConvertOp type";
      });
    }
    irm = castedOp2;
    arg = castedOp2.getODSOperands(0);
    tblgen_ops.push_back(op2);
  }
  return ::mlir::success();
}

/* Generated from:
    /home/runner/work/llvm-project/llvm-project/final/llvm-project/flang/include/flang/Optimizer/Dialect/CanonicalizationPatterns.td:88
*/
struct CombineConvertOptPattern : public ::mlir::RewritePattern {
  CombineConvertOptPattern(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("fir.convert", 2, context, {}) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::Operation::operand_range arg(op0->getOperands());
    ::fir::ConvertOp irm;
    ::fir::ConvertOp res;
    ::llvm::SmallVector<::mlir::Operation *, 4> tblgen_ops;

    // Match
    tblgen_ops.push_back(op0);
    if(::mlir::failed(static_dag_matcher_0(rewriter, op0, tblgen_ops, arg, irm, res))) {
      return ::mlir::failure();
    }
    auto castedOp0 = ::llvm::dyn_cast_or_null<::fir::ConvertOp>(op0); (void)castedOp0;
    if (!(((*res.getODSResults(0).begin()).getType().isa<mlir::IntegerType>() && (*arg.begin()).getType().isa<mlir::IntegerType>()))){
      return rewriter.notifyMatchFailure(op0, [&](::mlir::Diagnostic &diag) {
        diag << "entities 'res, arg' failed to satisfy constraint: ''";
      });
    }
    if (!(((*res.getODSResults(0).begin()).getType() == (*arg.begin()).getType()))){
      return rewriter.notifyMatchFailure(op0, [&](::mlir::Diagnostic &diag) {
        diag << "entities 'res, arg' failed to satisfy constraint: ''";
      });
    }
    if (!(((*arg.begin()).getType().isa<mlir::IntegerType>() && (*irm.getODSResults(0).begin()).getType().isa<mlir::IntegerType>()))){
      return rewriter.notifyMatchFailure(op0, [&](::mlir::Diagnostic &diag) {
        diag << "entities 'arg, irm' failed to satisfy constraint: ''";
      });
    }
    if (!(((*arg.begin()).getType().getIntOrFloatBitWidth() <= (*irm.getODSResults(0).begin()).getType().getIntOrFloatBitWidth()))){
      return rewriter.notifyMatchFailure(op0, [&](::mlir::Diagnostic &diag) {
        diag << "entities 'arg, irm' failed to satisfy constraint: ''";
      });
    }

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc(), tblgen_ops[1]->getLoc()}); (void)odsLoc;
    ::llvm::SmallVector<::mlir::Value, 4> tblgen_repl_values;

    for (auto v: ::llvm::SmallVector<::mlir::Value, 4>{ arg }) {
      tblgen_repl_values.push_back(v);
    }

    rewriter.replaceOp(op0, tblgen_repl_values);
    return ::mlir::success();
  };
};

/* Generated from:
    /home/runner/work/llvm-project/llvm-project/final/llvm-project/flang/include/flang/Optimizer/Dialect/CanonicalizationPatterns.td:95
*/
struct CombineConvertTruncOptPattern : public ::mlir::RewritePattern {
  CombineConvertTruncOptPattern(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("fir.convert", 2, context, {"fir.convert"}) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::Operation::operand_range arg(op0->getOperands());
    ::fir::ConvertOp irm;
    ::fir::ConvertOp res;
    ::llvm::SmallVector<::mlir::Operation *, 4> tblgen_ops;

    // Match
    tblgen_ops.push_back(op0);
    if(::mlir::failed(static_dag_matcher_0(rewriter, op0, tblgen_ops, arg, irm, res))) {
      return ::mlir::failure();
    }
    auto castedOp0 = ::llvm::dyn_cast_or_null<::fir::ConvertOp>(op0); (void)castedOp0;
    if (!(((*res.getODSResults(0).begin()).getType().isa<mlir::IntegerType>() && (*arg.begin()).getType().isa<mlir::IntegerType>()))){
      return rewriter.notifyMatchFailure(op0, [&](::mlir::Diagnostic &diag) {
        diag << "entities 'res, arg' failed to satisfy constraint: ''";
      });
    }
    if (!(((*res.getODSResults(0).begin()).getType().getIntOrFloatBitWidth() < (*arg.begin()).getType().getIntOrFloatBitWidth()))){
      return rewriter.notifyMatchFailure(op0, [&](::mlir::Diagnostic &diag) {
        diag << "entities 'res, arg' failed to satisfy constraint: ''";
      });
    }
    if (!(((*arg.begin()).getType().isa<mlir::IntegerType>() && (*irm.getODSResults(0).begin()).getType().isa<mlir::IntegerType>()))){
      return rewriter.notifyMatchFailure(op0, [&](::mlir::Diagnostic &diag) {
        diag << "entities 'arg, irm' failed to satisfy constraint: ''";
      });
    }
    if (!(((*arg.begin()).getType().getIntOrFloatBitWidth() <= (*irm.getODSResults(0).begin()).getType().getIntOrFloatBitWidth()))){
      return rewriter.notifyMatchFailure(op0, [&](::mlir::Diagnostic &diag) {
        diag << "entities 'arg, irm' failed to satisfy constraint: ''";
      });
    }

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc(), tblgen_ops[1]->getLoc()}); (void)odsLoc;
    ::llvm::SmallVector<::mlir::Value, 4> tblgen_repl_values;
    ::fir::ConvertOp tblgen_ConvertOp_0;
    {
      ::llvm::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::llvm::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*arg.begin()));
      ::llvm::SmallVector<::mlir::Type, 4> tblgen_types; (void)tblgen_types;
      for (auto v: castedOp0.getODSResults(0)) {
        tblgen_types.push_back(v.getType());
      }
      tblgen_ConvertOp_0 = rewriter.create<::fir::ConvertOp>(odsLoc, tblgen_types, tblgen_values, tblgen_attrs);
    }

    for (auto v: ::llvm::SmallVector<::mlir::Value, 4>{ tblgen_ConvertOp_0.getODSResults(0) }) {
      tblgen_repl_values.push_back(v);
    }

    rewriter.replaceOp(op0, tblgen_repl_values);
    return ::mlir::success();
  };
};

/* Generated from:
    /home/runner/work/llvm-project/llvm-project/final/llvm-project/flang/include/flang/Optimizer/Dialect/CanonicalizationPatterns.td:66
*/
struct ConvertAscendingIndexOptPattern : public ::mlir::RewritePattern {
  ConvertAscendingIndexOptPattern(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("fir.convert", 2, context, {"fir.convert"}) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::Operation::operand_range arg(op0->getOperands());
    ::fir::ConvertOp irm;
    ::fir::ConvertOp res;
    ::llvm::SmallVector<::mlir::Operation *, 4> tblgen_ops;

    // Match
    tblgen_ops.push_back(op0);
    if(::mlir::failed(static_dag_matcher_0(rewriter, op0, tblgen_ops, arg, irm, res))) {
      return ::mlir::failure();
    }
    auto castedOp0 = ::llvm::dyn_cast_or_null<::fir::ConvertOp>(op0); (void)castedOp0;
    if (!(((*res.getODSResults(0).begin()).getType().isa<mlir::IndexType>()))){
      return rewriter.notifyMatchFailure(op0, [&](::mlir::Diagnostic &diag) {
        diag << "entities 'res' failed to satisfy constraint: ''";
      });
    }
    if (!(((*irm.getODSResults(0).begin()).getType().isa<mlir::IntegerType>() && (*arg.begin()).getType().isa<mlir::IntegerType>()))){
      return rewriter.notifyMatchFailure(op0, [&](::mlir::Diagnostic &diag) {
        diag << "entities 'irm, arg' failed to satisfy constraint: ''";
      });
    }
    if (!(((*arg.begin()).getType().getIntOrFloatBitWidth() <= (*irm.getODSResults(0).begin()).getType().getIntOrFloatBitWidth()))){
      return rewriter.notifyMatchFailure(op0, [&](::mlir::Diagnostic &diag) {
        diag << "entities 'arg, irm' failed to satisfy constraint: ''";
      });
    }

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc(), tblgen_ops[1]->getLoc()}); (void)odsLoc;
    ::llvm::SmallVector<::mlir::Value, 4> tblgen_repl_values;
    ::fir::ConvertOp tblgen_ConvertOp_0;
    {
      ::llvm::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::llvm::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*arg.begin()));
      ::llvm::SmallVector<::mlir::Type, 4> tblgen_types; (void)tblgen_types;
      for (auto v: castedOp0.getODSResults(0)) {
        tblgen_types.push_back(v.getType());
      }
      tblgen_ConvertOp_0 = rewriter.create<::fir::ConvertOp>(odsLoc, tblgen_types, tblgen_values, tblgen_attrs);
    }

    for (auto v: ::llvm::SmallVector<::mlir::Value, 4>{ tblgen_ConvertOp_0.getODSResults(0) }) {
      tblgen_repl_values.push_back(v);
    }

    rewriter.replaceOp(op0, tblgen_repl_values);
    return ::mlir::success();
  };
};

/* Generated from:
    /home/runner/work/llvm-project/llvm-project/final/llvm-project/flang/include/flang/Optimizer/Dialect/CanonicalizationPatterns.td:58
*/
struct ConvertConvertOptPattern : public ::mlir::RewritePattern {
  ConvertConvertOptPattern(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("fir.convert", 2, context, {"fir.convert"}) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::Operation::operand_range arg(op0->getOperands());
    ::fir::ConvertOp irm;
    ::fir::ConvertOp res;
    ::llvm::SmallVector<::mlir::Operation *, 4> tblgen_ops;

    // Match
    tblgen_ops.push_back(op0);
    if(::mlir::failed(static_dag_matcher_0(rewriter, op0, tblgen_ops, arg, irm, res))) {
      return ::mlir::failure();
    }
    auto castedOp0 = ::llvm::dyn_cast_or_null<::fir::ConvertOp>(op0); (void)castedOp0;
    if (!(((((*res.getODSResults(0).begin()).getType().isa<mlir::IntegerType>() &&   (*irm.getODSResults(0).begin()).getType().isa<mlir::IntegerType>() &&   (*arg.begin()).getType().isa<mlir::IntegerType>()) ||  ((*res.getODSResults(0).begin()).getType().isa<mlir::FloatType>() &&   (*irm.getODSResults(0).begin()).getType().isa<mlir::FloatType>() &&   (*arg.begin()).getType().isa<mlir::FloatType>())) && (((*res.getODSResults(0).begin()).getType().getIntOrFloatBitWidth() <=   (*irm.getODSResults(0).begin()).getType().getIntOrFloatBitWidth() &&   (*irm.getODSResults(0).begin()).getType().getIntOrFloatBitWidth() <=   (*arg.begin()).getType().getIntOrFloatBitWidth()) ||  ((*res.getODSResults(0).begin()).getType().getIntOrFloatBitWidth() >=   (*irm.getODSResults(0).begin()).getType().getIntOrFloatBitWidth() &&   (*irm.getODSResults(0).begin()).getType().getIntOrFloatBitWidth() >=   (*arg.begin()).getType().getIntOrFloatBitWidth()))))){
      return rewriter.notifyMatchFailure(op0, [&](::mlir::Diagnostic &diag) {
        diag << "entities 'res, irm, arg' failed to satisfy constraint: ''";
      });
    }

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc(), tblgen_ops[1]->getLoc()}); (void)odsLoc;
    ::llvm::SmallVector<::mlir::Value, 4> tblgen_repl_values;
    ::fir::ConvertOp tblgen_ConvertOp_0;
    {
      ::llvm::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::llvm::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*arg.begin()));
      ::llvm::SmallVector<::mlir::Type, 4> tblgen_types; (void)tblgen_types;
      for (auto v: castedOp0.getODSResults(0)) {
        tblgen_types.push_back(v.getType());
      }
      tblgen_ConvertOp_0 = rewriter.create<::fir::ConvertOp>(odsLoc, tblgen_types, tblgen_values, tblgen_attrs);
    }

    for (auto v: ::llvm::SmallVector<::mlir::Value, 4>{ tblgen_ConvertOp_0.getODSResults(0) }) {
      tblgen_repl_values.push_back(v);
    }

    rewriter.replaceOp(op0, tblgen_repl_values);
    return ::mlir::success();
  };
};

/* Generated from:
    /home/runner/work/llvm-project/llvm-project/final/llvm-project/flang/include/flang/Optimizer/Dialect/CanonicalizationPatterns.td:75
*/
struct ConvertDescendingIndexOptPattern : public ::mlir::RewritePattern {
  ConvertDescendingIndexOptPattern(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("fir.convert", 2, context, {"fir.convert"}) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::Operation::operand_range arg(op0->getOperands());
    ::fir::ConvertOp irm;
    ::fir::ConvertOp res;
    ::llvm::SmallVector<::mlir::Operation *, 4> tblgen_ops;

    // Match
    tblgen_ops.push_back(op0);
    if(::mlir::failed(static_dag_matcher_0(rewriter, op0, tblgen_ops, arg, irm, res))) {
      return ::mlir::failure();
    }
    auto castedOp0 = ::llvm::dyn_cast_or_null<::fir::ConvertOp>(op0); (void)castedOp0;
    if (!(((*arg.begin()).getType().isa<mlir::IndexType>()))){
      return rewriter.notifyMatchFailure(op0, [&](::mlir::Diagnostic &diag) {
        diag << "entities 'arg' failed to satisfy constraint: ''";
      });
    }
    if (!(((*irm.getODSResults(0).begin()).getType().isa<mlir::IntegerType>() && (*res.getODSResults(0).begin()).getType().isa<mlir::IntegerType>()))){
      return rewriter.notifyMatchFailure(op0, [&](::mlir::Diagnostic &diag) {
        diag << "entities 'irm, res' failed to satisfy constraint: ''";
      });
    }
    if (!(((*res.getODSResults(0).begin()).getType().getIntOrFloatBitWidth() <= (*irm.getODSResults(0).begin()).getType().getIntOrFloatBitWidth()))){
      return rewriter.notifyMatchFailure(op0, [&](::mlir::Diagnostic &diag) {
        diag << "entities 'res, irm' failed to satisfy constraint: ''";
      });
    }

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc(), tblgen_ops[1]->getLoc()}); (void)odsLoc;
    ::llvm::SmallVector<::mlir::Value, 4> tblgen_repl_values;
    ::fir::ConvertOp tblgen_ConvertOp_0;
    {
      ::llvm::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::llvm::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*arg.begin()));
      ::llvm::SmallVector<::mlir::Type, 4> tblgen_types; (void)tblgen_types;
      for (auto v: castedOp0.getODSResults(0)) {
        tblgen_types.push_back(v.getType());
      }
      tblgen_ConvertOp_0 = rewriter.create<::fir::ConvertOp>(odsLoc, tblgen_types, tblgen_values, tblgen_attrs);
    }

    for (auto v: ::llvm::SmallVector<::mlir::Value, 4>{ tblgen_ConvertOp_0.getODSResults(0) }) {
      tblgen_repl_values.push_back(v);
    }

    rewriter.replaceOp(op0, tblgen_repl_values);
    return ::mlir::success();
  };
};

/* Generated from:
    /home/runner/work/llvm-project/llvm-project/final/llvm-project/flang/include/flang/Optimizer/Dialect/CanonicalizationPatterns.td:107
*/
struct ForwardConstantConvertPattern : public ::mlir::RewritePattern {
  ForwardConstantConvertPattern(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("fir.convert", 2, context, {}) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::TypedAttr attr;
    ::mlir::arith::ConstantOp cnt;
    ::fir::ConvertOp res;
    ::llvm::SmallVector<::mlir::Operation *, 4> tblgen_ops;

    // Match
    tblgen_ops.push_back(op0);
    auto castedOp0 = ::llvm::dyn_cast<::fir::ConvertOp>(op0); (void)castedOp0;
    res = castedOp0;
    {
      auto *op1 = (*castedOp0.getODSOperands(0).begin()).getDefiningOp();
      if (!(op1)){
        return rewriter.notifyMatchFailure(castedOp0, [&](::mlir::Diagnostic &diag) {
          diag << "There's no operation that defines operand 0 of castedOp0";
        });
      }
      auto castedOp1 = ::llvm::dyn_cast<::mlir::arith::ConstantOp>(op1); (void)castedOp1;
      if (!(castedOp1)){
        return rewriter.notifyMatchFailure(op1, [&](::mlir::Diagnostic &diag) {
          diag << "castedOp1 is not ::mlir::arith::ConstantOp type";
        });
      }
      cnt = castedOp1;
      {
        auto tblgen_attr = op1->getAttrOfType<::mlir::TypedAttr>("value");(void)tblgen_attr;
        if (!(tblgen_attr)){
          return rewriter.notifyMatchFailure(op1, [&](::mlir::Diagnostic &diag) {
            diag << "expected op 'arith.constant' to have attribute 'value' of type '::mlir::TypedAttr'";
          });
        }
        attr = tblgen_attr;
      }
      tblgen_ops.push_back(op1);
    }
    if (!(((*res.getODSResults(0).begin()).getType().isa<mlir::IndexType>()))){
      return rewriter.notifyMatchFailure(op0, [&](::mlir::Diagnostic &diag) {
        diag << "entities 'res' failed to satisfy constraint: ''";
      });
    }
    if (!((fir::isa_integer((*cnt.getODSResults(0).begin()).getType())))){
      return rewriter.notifyMatchFailure(op0, [&](::mlir::Diagnostic &diag) {
        diag << "entities 'cnt' failed to satisfy constraint: ''";
      });
    }

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc(), tblgen_ops[1]->getLoc()}); (void)odsLoc;
    ::llvm::SmallVector<::mlir::Value, 4> tblgen_repl_values;
    auto nativeVar_0 = rewriter.create<mlir::arith::ConstantOp>(odsLoc, rewriter.getIndexType(), rewriter.getIndexAttr(attr.dyn_cast<mlir::IntegerAttr>().getInt())); (void)nativeVar_0;

    for (auto v: ::llvm::SmallVector<::mlir::Value, 4>{ {nativeVar_0} }) {
      tblgen_repl_values.push_back(v);
    }

    rewriter.replaceOp(op0, tblgen_repl_values);
    return ::mlir::success();
  };
};

/* Generated from:
    /home/runner/work/llvm-project/llvm-project/final/llvm-project/flang/include/flang/Optimizer/Dialect/CanonicalizationPatterns.td:82
*/
struct RedundantConvertOptPattern : public ::mlir::RewritePattern {
  RedundantConvertOptPattern(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("fir.convert", 1, context, {}) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::Operation::operand_range arg(op0->getOperands());
    ::fir::ConvertOp res;
    ::llvm::SmallVector<::mlir::Operation *, 4> tblgen_ops;

    // Match
    tblgen_ops.push_back(op0);
    auto castedOp0 = ::llvm::dyn_cast<::fir::ConvertOp>(op0); (void)castedOp0;
    res = castedOp0;
    arg = castedOp0.getODSOperands(0);
    if (!(((*res.getODSResults(0).begin()).getType() == (*arg.begin()).getType()))){
      return rewriter.notifyMatchFailure(op0, [&](::mlir::Diagnostic &diag) {
        diag << "entities 'res, arg' failed to satisfy constraint: ''";
      });
    }

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc()}); (void)odsLoc;
    ::llvm::SmallVector<::mlir::Value, 4> tblgen_repl_values;

    for (auto v: ::llvm::SmallVector<::mlir::Value, 4>{ arg }) {
      tblgen_repl_values.push_back(v);
    }

    rewriter.replaceOp(op0, tblgen_repl_values);
    return ::mlir::success();
  };
};

void LLVM_ATTRIBUTE_UNUSED populateWithGenerated(::mlir::RewritePatternSet &patterns) {
  patterns.add<CombineConvertOptPattern>(patterns.getContext());
  patterns.add<CombineConvertTruncOptPattern>(patterns.getContext());
  patterns.add<ConvertAscendingIndexOptPattern>(patterns.getContext());
  patterns.add<ConvertConvertOptPattern>(patterns.getContext());
  patterns.add<ConvertDescendingIndexOptPattern>(patterns.getContext());
  patterns.add<ForwardConstantConvertPattern>(patterns.getContext());
  patterns.add<RedundantConvertOptPattern>(patterns.getContext());
}
