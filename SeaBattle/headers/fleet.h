#pragma once
#include <vector>
#include "ship.h"

class Fleet {
  std::vector<std::vector<IShip>> fleet;

 public:
  explicit Fleet();
  std::vector<IShip> operator[](size_t ind);
};
