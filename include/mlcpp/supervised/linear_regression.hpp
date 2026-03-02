#pragma once

#include "mlcpp/core/exceptions.hpp"
#include "mlcpp/core/types.hpp"

namespace mlcpp {

enum class OptimizationMethod { GradientDescent, ClosedForm };

class LinearRegression {
public:
  struct Config {
    OptimizationMethod method = OptimizationMethod::ClosedForm;
    double hyperp = 0.0; // lambda hyperparameter for L2 regularization
    double learn_rate = 0.01;
    int max_steps = 1000;
    double stop = 1e-8; // convergence stopping pt for GD
    bool verbose = false;
  };

  void fit() { NOT_IMPLEMENTED; }
};

} // namespace mlcpp
