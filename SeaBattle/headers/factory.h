#pragma once
#include <iostream>
#include "iship.h"

class ShipCreator {
 public:
  static void FactoryMethod(int count_deck, IShip* ship, std::vector<std::vector<std::shared_ptr<Square>>>& field);
};
