#pragma once
#include <iostream>
#include "iship.h"

class ShipCreator {
 public:
  static void FactoryMethod(int n_deck, IShip* ship, Field& field);
};
