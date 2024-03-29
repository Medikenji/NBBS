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
  int firstArmyCasualties = 0;
  int secondArmyCasualties = 0;
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
    printf("Battle duration dictates how many tick the battle will last.\nThe default value is 1, 2 is twice as fast and 0.5 is twice as long and et cetera.\nFor smaller battles you can decrease it and for larger battles you can increase it to your preference.\n");
    printf("\n");
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
      printf("\033[0;31m");
      printf("First Army lost %i\n", firstArmyCasualties);
      printf("Second Army lost %i\n", secondArmyCasualties);
      printf("\033[0m");
      system("cls");
      firstArmyCasualties = ((firstArmy->getCombatPower() / secondArmy->getSurvivability())) * battleDuration;
      secondArmyCasualties = ((secondArmy->getCombatPower() / firstArmy->getSurvivability())) * battleDuration;
      secondArmy->amount -= secondArmyCasualties;
      firstArmy->amount -= firstArmyCasualties;
      firstArmy->recalculate();
      secondArmy->recalculate();
      tick++;
    }
    if (!firstArmy->checkAlive()) {
      printf("First Army gave up with ");
      printf("\033[0;31m");
      printf("%i casualties\n", firstArmy->casualties());
      printf("\033[0m");
      printf("Second army had ");
      printf("\033[0;31m");
      printf("%i casualties\n", secondArmy->casualties());
      printf("\033[0m");
      printf("Battle lasted %i ticks\n", tick);
    } else {
      printf("Second Army gave up with ");
      printf("\033[0;31m");
      printf("%i casualties\n", secondArmy->casualties());
      printf("\033[0m");
      printf("First army had ");
      printf("\033[0;31m");
      printf("%i casualties\n", firstArmy->casualties());
      printf("\033[0m");
      printf("Battle lasted %i ticks\n", tick);
    }
    // end of loop
    getch();
    return 0;
  }
}