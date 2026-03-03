#pragma once

#include "mlcpp/core/exceptions.hpp"
#include "mlcpp/core/types.hpp"

namespace mlcpp {

enum class OptimizationMethod { GradientDescent, ClosedForm };

enum class LossFunction { L1, L2 };

// MSE method (L2 loss)
class LinearRegression {
public:
  struct Config {
    LossFunction loss_function = LossFunction::L2;
    OptimizationMethod method = OptimizationMethod::GradientDescent;
    double hyperp = 0.0; // lambda hyperparameter for L2 regularization
    double learn_rate = 0.01;
    int max_steps = 1000;
    double stop = 1e-8; // convergence stopping pt for GD
    bool verbose = false;
  };

  LinearRegression() : config_() {}
  explicit LinearRegression(const Config &cfg) : config_(cfg) {}

  void train() {
    if (config_.method == OptimizationMethod::GradientDescent &&
        config_.loss_function == LossFunction::L2) {
      // step = 0
      // while (step < max_steps)
      //    compute loss (MSE)
      //    compute dL/dw & dL/db
      //    step w in direction of dL/dw at rate = learn_rate
      //    step b in direction of dL/db at rate = learn_rate
      ;
    }
  }

  void test() { NOT_IMPLEMENTED; }
  void validate() { NOT_IMPLEMENTED; }

private:
  Config config_;
};
} // namespace mlcpp
