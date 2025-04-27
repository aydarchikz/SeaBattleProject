#pragma once
#include <iostream>
#include <vector>
#include <memory>
#include "factory.h"

class SingleDeckShip : public IShip {
 public:
  explicit SingleDeckShip(Field& field);
  ~SingleDeckShip() override = default;
};

class DoubleDeckShip : public IShip {
 public:
  explicit DoubleDeckShip(Field& field);
  ~DoubleDeckShip() override = default;
};

class ThreeDeckShip : public IShip {
 public:
  explicit ThreeDeckShip(Field& field);
  ~ThreeDeckShip() override = default;
};

class FourDeckShip : public IShip {
 public:
  explicit FourDeckShip(Field& field);
  ~FourDeckShip() override = default;
};
