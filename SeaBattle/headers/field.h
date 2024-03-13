#pragma once
#include <memory>
#include <vector>
#include "square.h"

struct Square;

class Field {
  std::vector<std::vector<Square>> field;

 public:
  explicit Field();
  std::vector<Square> operator[] (size_t ind) const;
};
