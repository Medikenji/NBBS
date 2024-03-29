#include "army.h"

void text(const char *text, float *value) {
  std::cout << text << std::endl;
  std::cin >> *value;
}

int main() {
  float firstArmyAmount;
  float firstArmyMorale;
  float firstArmyTraining;
  float firstArmyEquipmentQuality;
  float secondArmyAmount;
  float secondArmyMorale;
  float secondArmyTraining;
  float secondArmyEquipmentQuality;
  while (true) {
    text("Enter first army amount: ", &firstArmyAmount);
    text("Enter first army morale: ", &firstArmyMorale);
    text("Enter first army training: ", &firstArmyTraining);
    text("Enter first army equipment quality: ", &firstArmyEquipmentQuality);
    text("Enter second army amount: ", &secondArmyAmount);
    text("Enter second army morale: ", &secondArmyMorale);
    text("Enter second army training: ", &secondArmyTraining);
    text("Enter second army equipment quality: ", &secondArmyEquipmentQuality);
    system("cls");
    Army *firstArmy = new Army((int)firstArmyAmount, firstArmyMorale, firstArmyTraining, firstArmyEquipmentQuality);
    Army *secondArmy = new Army((int)secondArmyAmount, secondArmyMorale, secondArmyTraining, secondArmyEquipmentQuality);
    while (firstArmy->checkAlive() && secondArmy->checkAlive()) {
      std::cout.imbue(std::locale(""));
      std::cout << "First Army: " << firstArmy->amount << std::endl;
      std::cout.imbue(std::locale(""));
      std::cout << "Second Army: " << secondArmy->amount << std::endl;
      system("cls");
      secondArmy->amount -= (firstArmy->getCombatPower() / secondArmy->getSurvivability());
      firstArmy->amount -= (secondArmy->getCombatPower() / firstArmy->getSurvivability());
      firstArmy->recalculate();
      secondArmy->recalculate();
    }
    if (!firstArmy->checkAlive()) {
      std::cout << "First Army gave up with " << firstArmy->casualties() << " casualties" << std::endl;
      std::cout << "Second army had " << secondArmy->casualties() << " casualties" << std::endl;
    }
    if (!secondArmy->checkAlive()) {
      std::cout << "Second Army gave up with " << secondArmy->casualties() << " casualties" << std::endl;
      std::cout << "First army had " << firstArmy->casualties() << " casualties" << std::endl;
    }
    getch();
    return 0;
  }
}