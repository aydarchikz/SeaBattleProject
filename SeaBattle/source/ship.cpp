#include "../headers/ship.h"

SingleDeckShip::SingleDeckShip(std::vector<std::vector<std::shared_ptr<Square>>>& field) {
  ShipCreator::FactoryMethod(1, this, field);
}

DoubleDeckShip::DoubleDeckShip(std::vector<std::vector<std::shared_ptr<Square>>> &field) {
  ShipCreator::FactoryMethod(2, this, field);
}

ThreeDeckShip::ThreeDeckShip(std::vector<std::vector<std::shared_ptr<Square>>> &field) {
  ShipCreator::FactoryMethod(3, this, field);
}

FourDeckShip::FourDeckShip(std::vector<std::vector<std::shared_ptr<Square>>> &field) {
  ShipCreator::FactoryMethod(4, this, field);
}
