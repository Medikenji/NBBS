#include "army.h"

Army::Army(int setAmount, float morale, float training, float weaponQuality) {
  amount = (setAmount < 1) ? 1 : setAmount;
  _setAmount = amount;
  _morale = (morale < 1) ? 1 : (morale > 100) ? 100
                                              : morale;
  _training = (training < 1) ? 1 : (training > 100) ? 100
                                                    : training;
  _weaponQuality = (weaponQuality < 1) ? 1 : (weaponQuality > 100) ? 100
                                                                   : weaponQuality;
  _defense = 0;
  _lethality = 0;
  _survivability = 0;
  _combatPower = 0;
  calculateDefense();
  calculateLethality();
  calculateSurvivability();
  calculateCombatPower();
}

void Army::recalculate() {
  calculateDefense();
  calculateLethality();
  calculateSurvivability();
  calculateCombatPower();
}

bool Army::checkAlive() {
  return amount > _setAmount - (_setAmount * (_morale * 0.01));
}
void Army::calculateDefense() {
  _defense = (_training * 0.01) * (amount);
}
void Army::calculateLethality() {
  _lethality = (_training * 0.01) * ((_weaponQuality + 50) * 0.01);
}
void Army::calculateSurvivability() {
  _survivability = (_defense * 0.01) * ((pow(0.01 * _morale, 2) * 0.01));
}
void Army::calculateCombatPower() {
  _combatPower = amount * _lethality * ((pow(0.01 * _morale, 2) * 0.01));
}