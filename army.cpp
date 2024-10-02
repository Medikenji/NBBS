#include "army.h"

uint8_t Army::nextArmyNumber = 0;

Army::Army(uint8_t health, uint8_t _strength, uint8_t _equipment, uint8_t _training, uint32_t amount) {
  this->armyNumber = ++nextArmyNumber;
  // nextArmyNumber++;
  if (amount > 25000000) {
    std::cout << "You can't have more than 25 million soldiers in an army." << std::endl;
    std::cout << "Amount has been set to 25 million." << std::endl;
    for (size_t i = 0; i < 25000000; i++) {
      this->soldiers.push_back(new Soldier(health, _strength, _equipment, _training, 25));
    }
  } else {
    for (size_t i = 0; i < amount; i++) {
      this->soldiers.push_back(new Soldier(health, _strength, _equipment, _training, 25));
    }
  }
  std::cout << "Army " << (int)this->armyNumber << " has " << this->amount << " soldiers." << std::endl;
  for (size_t i = 0; i < this->soldiers.size(); i++) {
    std::cout << "Soldier " << i << " has " << (int)this->soldiers[i]->getHealth() << " health and " << (int)this->soldiers[i]->getStrength() << " strength." << std::endl;
  }
}

Army::~Army() {
  for ( size_t i = 0; i < this->soldiers.size(); i++ ) {
    delete this->soldiers[i];
  }  
}