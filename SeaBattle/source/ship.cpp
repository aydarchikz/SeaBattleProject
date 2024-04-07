#include "../headers/ship.h"

SingleDeckShip::SingleDeckShip(Field& field) {
  ShipCreator::FactoryMethod(1, this, field);
}

DoubleDeckShip::DoubleDeckShip(Field& field) {
  ShipCreator::FactoryMethod(2, this, field);
}

ThreeDeckShip::ThreeDeckShip(Field& field) {
  ShipCreator::FactoryMethod(3, this, field);
}

FourDeckShip::FourDeckShip(Field& field) {
  ShipCreator::FactoryMethod(4, this, field);
}
