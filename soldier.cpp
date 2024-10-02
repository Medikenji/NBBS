#include "soldier.h"

Soldier::Soldier(uint8_t health, uint8_t strength, uint8_t equipment, uint8_t training, uint8_t statNoise) {
  // initialize soldier stats
  this->_health = health;
  this->_strength = _strength;
  this->_equipment = _equipment;
  this->_training = _training;

  // add noise to stats
  uint8_t noise = statNoise;
  this->_health += this->_health * addNoise(statNoise);
  this->_strength += this->_strength * addNoise(statNoise);
  this->_equipment += this->_equipment * addNoise(statNoise);
  this->_training += this->_training * addNoise(statNoise);

  // cap stats
  std::vector<uint8_t> stats = {health, _strength, _equipment, _training};
  capStats(stats);

  // calculate final stats
  this->_health = (health + (health * ((_equipment * 0.5) / 100)) + (health * ((_training * 0.25) / 100)));
  this->_strength = (_strength + (_strength * ((_equipment * 0.25) / 100)) + (_strength * ((_training * 0.5) / 100)));
}


Soldier::~Soldier() {
  delete this;
}


void Soldier::capStats(std::vector<uint8_t> &stats) {
  for (int i = 0; i < stats.size(); i++) {
    // If the stat is greater than 100, cap it at 100
    if (stats[i] > 100) {
      stats[i] = 100;
    }
    // If the stat is less than 0, set it to 1
    if (stats[i] == 0) {
      stats[i] = 1;
    }
  }
}


float Soldier::addNoise(uint8_t noise) {
  // Generate a random number between 0 and half of the noise value
  float result = rand() % static_cast<int>(noise * 0.5);
  // Scale the result by 0.1
  return result * 0.1;
}