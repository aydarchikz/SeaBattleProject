#pragma once
#include <vector>
#include <memory>
#include "field.h"

class IShip {
 public:
  std::vector<std::shared_ptr<Square>> ship;
  virtual ~IShip() = 0;
};