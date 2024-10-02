#ifndef SOLDIER_H
#define SOLDIER_H

#include <iostream>
#include <stdint.h>
#include <vector>

class Soldier {
public:
  Soldier(uint8_t health, uint8_t strength, uint8_t equipment, uint8_t training, uint8_t statNoise);
  ~Soldier();
  uint8_t getHealth(){return _health;};
  uint8_t getStrength(){return _strength/10;};

private:
  uint8_t _health;
  uint8_t _strength;
  uint8_t _equipment;
  uint8_t _training;
  void capStats(std::vector<uint8_t> &stats);
  float addNoise(uint8_t noise);
};

#endif