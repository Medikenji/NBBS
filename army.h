#include <conio.h>
#include <cstdint>
#include <iostream>
#include <locale>
#include <math.h>

class Army {
public:
  Army(int64_t setAmount, float morale, float training, float weaponQuality);
  int64_t amount;
  int casualties() {
    if (amount > 0) {
      return _setAmount - amount;
    } else {
      return _setAmount;
    }
  };
  void recalculate();
  float getCombatPower() { return _combatPower; };
  float getSurvivability() { return _survivability; };
  bool checkAlive();

private:
  // user set variables
  uint32_t _setAmount;
  float _morale;
  float _training;
  float _weaponQuality;
  // calculated variables
  float _defense;
  float _lethality;
  float _survivability;
  float _combatPower;
  // calulations
  void calculateDefense();
  void calculateLethality();
  void calculateSurvivability();
  void calculateCombatPower();
};