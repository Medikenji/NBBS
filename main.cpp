#include <iostream>
#include <math.h>

class Army
{
public:
    Army(int setAmount, float morale, float training, float weaponQuality)
    {
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

    int amount;

    void recalculate()
    {
        calculateDefense();
        calculateLethality();
        calculateSurvivability();
        calculateCombatPower();
    }
    float getCombatPower() { return _combatPower; }
    float getSurvivability() { return _survivability; }
    float getTraining() { return _training; }
    bool checkAlive() { return (this->amount > this->_setAmount - this->_setAmount * (this->_morale * 0.01)); }
    int casualties() { return this->_setAmount - this->amount; }

private:
    // user set variables
    int _setAmount;
    float _morale;
    float _training;
    float _weaponQuality;
    // calculated variables
    float _defense;
    float _lethality;
    float _survivability;
    float _combatPower;
    // calulations
    void calculateDefense()
    {
        _defense = (_training * 0.01) * (amount);
    }
    void calculateLethality()
    {
        _lethality = (_training * 0.01) * ((_weaponQuality + 50) * 0.01);
    }
    void calculateSurvivability()
    {
        _survivability = (_defense * 0.01) * ((_morale + 50) * 0.01);
    }
    void calculateCombatPower()
    {
        _combatPower = amount * _lethality * ((_morale + 50) * 0.01);
    }
};

int main()
{
    while (true)
    {
        std::cout << "Enter the amount of soldiers in the first army: ";
        int firstArmyAmount;
        std::cin >> firstArmyAmount;
        std::cout << "Enter the morale of the first army: ";
        float firstArmyMorale;
        std::cin >> firstArmyMorale;
        std::cout << "Enter the training of the first army: ";
        float firstArmyTraining;
        std::cin >> firstArmyTraining;
        std::cout << "Enter the weapon quality of the first army: ";
        float firstArmyWeaponQuality;
        std::cin >> firstArmyWeaponQuality;
        std::cout << "Enter the amount of soldiers in the second army: ";
        int secondArmyAmount;
        std::cin >> secondArmyAmount;
        std::cout << "Enter the morale of the second army: ";
        float secondArmyMorale;
        std::cin >> secondArmyMorale;
        std::cout << "Enter the training of the second army: ";
        float secondArmyTraining;
        std::cin >> secondArmyTraining;
        std::cout << "Enter the weapon quality of the second army: ";
        float secondArmyWeaponQuality;
        std::cin >> secondArmyWeaponQuality;
        Army *firstArmy = new Army(firstArmyAmount, firstArmyMorale, firstArmyTraining, firstArmyWeaponQuality);
        Army *secondArmy = new Army(secondArmyAmount, secondArmyMorale, secondArmyTraining, secondArmyWeaponQuality);
        while (firstArmy->checkAlive() && secondArmy->checkAlive())
        {
            std::cout << "First Army: " << firstArmy->amount << std::endl;
            std::cout << "Second Army: " << secondArmy->amount << std::endl;
            secondArmy->amount -= (firstArmy->getCombatPower() / secondArmy->getSurvivability());
            firstArmy->amount -= (secondArmy->getCombatPower() / firstArmy->getSurvivability());
            firstArmy->recalculate();
            secondArmy->recalculate();
            if (!firstArmy->checkAlive())
            {
                std::cout << "First Army gave up with " << firstArmy->casualties() << " casualties" << std::endl;
                std::cout << "Second army had " << secondArmy->casualties() << " casualties" << std::endl;
            }
            if (!secondArmy->checkAlive())
            {
                std::cout << "Second Army gave up with " << secondArmy->casualties() << " casualties" << std::endl;
                std::cout << "First army had " << firstArmy->casualties() << " casualties" << std::endl;
            }
        }
        std::cin >> firstArmyAmount;
        return 0;
    }
}