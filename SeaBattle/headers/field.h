#pragma once
#include <vector>
#include <memory>
#include "square.h"

class Field {
  std::vector<std::vector<std::shared_ptr<Square>>> field;

 public:
  explicit Field();
  std::vector<std::shared_ptr<Square>> operator[](size_t ind);
};
