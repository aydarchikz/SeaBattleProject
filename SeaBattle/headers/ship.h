#pragma once
#include <vector>
#include "square.h"

struct Square;

class IShip {
  std::vector<Square> ship;
};

class SingleDeckShip : public IShip {
 public:
  SingleDeckShip(const Field& field);
};

class DoubleDeckShip : public IShip {
};

class ThreeDeckShip : public IShip {
};

class FourDeckShip : public IShip {
};
