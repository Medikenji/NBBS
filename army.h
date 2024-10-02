#ifndef ARMY_H
#define ARMY_H

#include "soldier.h"
#include <iostream>
#include <vector>

class Army {
  static uint8_t nextArmyNumber;

public:
  Army(uint8_t health, uint8_t _strength, uint8_t _equipment, uint8_t _training, uint32_t amount);
  ~Army();
  uint32_t getAmount() { return amount; };

private:
  uint8_t armyNumber;
  uint32_t amount;
  std::vector<Soldier *> soldiers;
};

#endif