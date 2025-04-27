#pragma once
#include <vector>
#include <memory>
#include "ship.h"

class Fleet {
  std::vector<std::vector<std::shared_ptr<IShip>>> fleet;

 public:
  explicit Fleet();
  std::vector<std::shared_ptr<IShip>> operator[](size_t ind);
  bool IsKilled(Field& field);
};
