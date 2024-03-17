#pragma once
#include <vector>
#include <memory>
#include "square.h"

class Field {
 public:
  std::vector<std::vector<std::shared_ptr<Square>>> field;
  explicit Field();
  std::vector<std::shared_ptr<Square>> operator[](size_t ind) const;
};
