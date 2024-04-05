#include <iostream>
#include "army.h"

class Input
{
public:
    Input();
    void text(const char *text, float *value)
    {
        printf("%s\n", text);
        scanf("%f", value);
    }
    void battleStatus(Army *firstArmy, Army *secondArmy, int firstArmyCasualties, int secondArmyCasualties);
    void battleResults(Army *firstArmy, Army *secondArmy);
    void SetUp();
    // user variables
    int tick = 0;
    float gameSpeed;
    float firstArmyAmount;
    float firstArmyMorale;
    float firstArmyTraining;
    float firstArmyEquipmentQuality;
    float secondArmyAmount;
    float secondArmyMorale;
    float secondArmyTraining;
    float secondArmyEquipmentQuality;
};