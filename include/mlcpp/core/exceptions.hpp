#pragma once

#include <stdexcept>
#include <string>

namespace mlcpp {

class NotImplementedException : public std::logic_error {
public:
  explicit NotImplementedException(const std::string &func)
      : std::logic_error("Not Implemented: " + func) {}
};

} // namespace mlcpp

#define NOT_IMPLEMENTED throw NotImplementedException(__func__)
