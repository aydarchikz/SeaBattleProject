#pragma once
#include <iostream>
#include <vector>
#include <memory>
#include "factory.h"

class SingleDeckShip : public IShip {
 public:
  explicit SingleDeckShip(std::vector<std::vector<std::shared_ptr<Square>>>& field);
  ~SingleDeckShip() override = default;
};

class DoubleDeckShip : public IShip {
 public:
  explicit DoubleDeckShip(std::vector<std::vector<std::shared_ptr<Square>>>& field);
  ~DoubleDeckShip() override = default;
};

class ThreeDeckShip : public IShip {
 public:
  explicit ThreeDeckShip(std::vector<std::vector<std::shared_ptr<Square>>>& field);
  ~ThreeDeckShip() override = default;
};

class FourDeckShip : public IShip {
 public:
  explicit FourDeckShip(std::vector<std::vector<std::shared_ptr<Square>>>& field);
  ~FourDeckShip() override = default;
};
