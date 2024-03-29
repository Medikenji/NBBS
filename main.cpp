#include "army.h"

void text(const char *text, float *value) {
  printf("%s\n", text);
  scanf("%f", value);
}

void input() {
}

int main() {
  // start variables
  int tick = 0;
  float battleDuration;
  float firstArmyAmount;
  float firstArmyMorale;
  float firstArmyTraining;
  float firstArmyEquipmentQuality;
  float secondArmyAmount;
  float secondArmyMorale;
  float secondArmyTraining;
  float secondArmyEquipmentQuality;
  // simulation start
  while (true) {
    // start instructions and user input
    printf("Battle duration dictates how many tick the battle will last.\nThe default value is 1, 2 is twice as fast et cetera.\nFor smaller battles you can decrease it and for larger battles you can increase it to your preference.\n");
    text("Enter battle duration: ", &battleDuration);
    system("cls");
    text("Enter first army amount: ", &firstArmyAmount);
    text("Enter first army morale: ", &firstArmyMorale);
    text("Enter first army training: ", &firstArmyTraining);
    text("Enter first army equipment quality: ", &firstArmyEquipmentQuality);
    text("Enter second army amount: ", &secondArmyAmount);
    text("Enter second army morale: ", &secondArmyMorale);
    text("Enter second army training: ", &secondArmyTraining);
    text("Enter second army equipment quality: ", &secondArmyEquipmentQuality);
    system("cls");
    // end instructions and input and start simulation
    Army *firstArmy = new Army((int)firstArmyAmount, firstArmyMorale, firstArmyTraining, firstArmyEquipmentQuality);
    Army *secondArmy = new Army((int)secondArmyAmount, secondArmyMorale, secondArmyTraining, secondArmyEquipmentQuality);
    // simulation loop
    while (firstArmy->checkAlive() && secondArmy->checkAlive()) {
      printf("First Army: %i\n", firstArmy->amount);
      printf("Second Army: %i\n", secondArmy->amount);
      system("cls");
      secondArmy->amount -= ((firstArmy->getCombatPower() / secondArmy->getSurvivability())) * battleDuration;
      firstArmy->amount -= ((secondArmy->getCombatPower() / firstArmy->getSurvivability())) * battleDuration;
      firstArmy->recalculate();
      secondArmy->recalculate();
      tick++;
    }
    if (!firstArmy->checkAlive()) {
      printf("First Army gave up with %i casualties\n", firstArmy->casualties());
      printf("Second army had %i casualties\n", secondArmy->casualties());
      printf("Battle lasted %i ticks\n", tick);
    }
    if (!secondArmy->checkAlive()) {
      printf("Second Army gave up with %i casualties\n", secondArmy->casualties());
      printf("First army had %i casualties\n", firstArmy->casualties());
      printf("Battle lasted %i ticks\n", tick);
    }
    // end of loop
    getch();
    return 0;
  }
}