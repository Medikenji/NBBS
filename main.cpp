#include <conio.h>
#include "input.h"

int main()
{
  // army variables
  float *firstArmyCombatPowerP;
  float *secondArmyCombatPowerP;
  float *firstArmySurvivabilityP;
  float *secondArmySurvivabilityP;
  int firstArmyCasualties = 0;
  int secondArmyCasualties = 0;
  // program start
  while (true)
  {
    // start instructions and user input
    Input *input = new Input();
    // end instructions and make instances of armies
    Army *firstArmy = new Army((int)input->firstArmyAmount, input->firstArmyMorale, input->firstArmyTraining, input->firstArmyEquipmentQuality);
    Army *secondArmy = new Army((int)input->secondArmyAmount, input->secondArmyMorale, input->secondArmyTraining, input->secondArmyEquipmentQuality);
    firstArmyCombatPowerP = firstArmy->getCombatPower();
    secondArmyCombatPowerP = secondArmy->getCombatPower();
    firstArmySurvivabilityP = firstArmy->getSurvivability();
    secondArmySurvivabilityP = secondArmy->getSurvivability();
    // simulation loop start
    while (firstArmy->checkAlive() && secondArmy->checkAlive())
    {
      // print battle status
      input->battleStatus(firstArmy, secondArmy, firstArmyCasualties, secondArmyCasualties);
      // calculate casualties per tick
      firstArmyCasualties = ((*firstArmyCombatPowerP / *secondArmySurvivabilityP)) * input->gameSpeed;
      secondArmyCasualties = ((*secondArmyCombatPowerP / *firstArmySurvivabilityP)) * input->gameSpeed;
      secondArmy->amount -= secondArmyCasualties;
      firstArmy->amount -= firstArmyCasualties;
      firstArmy->recalculate();
      secondArmy->recalculate();
      input->tick++;
    // simulation loop end
    }
    // print battle results
    input->battleResults(firstArmy, secondArmy);
    // end of loop
    getch();
    return 0;
  }
}