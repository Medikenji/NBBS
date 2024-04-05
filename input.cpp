#include "input.h"

Input::Input()
{
    printf("Game speed dictates how many tick the battle will last.\nThe default value is 1, 2 is twice as fast and 0.5 is twice as long and et cetera.\nFor smaller battles you can decrease it and for larger battles you can increase it to your preference.\n");
    printf("\n");
    text("Enter game speed: ", &gameSpeed);
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
};

void Input::battleStatus(Army *firstArmy, Army *secondArmy, int firstArmyCasualties, int secondArmyCasualties)
{
    printf("First Army: %i\n", firstArmy->amount);
    printf("Second Army: %i\n", secondArmy->amount);
    printf("\033[0;31m");
    printf("First Army lost %i\n", firstArmyCasualties);
    printf("Second Army lost %i\n", secondArmyCasualties);
    printf("\033[0m");
    system("cls");
}

void Input::battleResults(Army *firstArmy, Army *secondArmy)
{
    if (!firstArmy->checkAlive())
    {
        printf("First Army gave up with ");
        printf("\033[0;31m");
        printf("%i casualties\n", firstArmy->casualties());
        printf("\033[0m");
        printf("Second army had ");
        printf("\033[0;31m");
        printf("%i casualties\n", secondArmy->casualties());
        printf("\033[0m");
        printf("Battle lasted %i ticks\n", tick);
    }
    else
    {
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
}