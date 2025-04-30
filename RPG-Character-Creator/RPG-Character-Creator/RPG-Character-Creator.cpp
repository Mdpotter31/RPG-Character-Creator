#include <iostream>
#include <string>
#include <stdexcept>
using namespace std;

// Declaring Variables at the top.
string raceChoice;
string classChoice;
string weaponChoice;
string armorChoice;
string statChoice;
int healthPoints = 20;
int armorPoints = 0;
int strStat = 10;
int dexStat = 10;
int intStat = 10;
int conStat = 10;
int maxIncrease = 10;
int statIncrease;





void completedStats(string raceChoice, string classChoice, string weaponChoice, string armorChoice, int strStat, int dexStat,int intStat,
    int conStat) {
    cout << "Your Character\n";
    cout << "You are a " << raceChoice << " " << classChoice << ". \n";
    cout << "You are equiped with a " << weaponChoice << " and wear " << armorChoice << " for armor. \n";
    cout << "\n";
    cout << "Player Stats\n";
    cout << "Strength: " << strStat << "\n";
    cout << "Dexterity: " << dexStat << "\n";
    cout << "Inteligence: " << intStat << "\n";
    cout << "Constitution: " << conStat << "\n";
    cout << "\n";
    cout << "Player Skills\n";
}




int main() 
{



    cout << "Welcome to character creator.\n";
    cout << "We'll start with a race to pick from.\n";
    cout << "Your options are 'Human', 'Elf', 'Dwarf', and 'Orc'\n";
    cin >> raceChoice;


    cout << "Now you will choose your class.\n";
    cout << "Your options are 'Warrior', 'Mage', 'Ranger', and 'Rogue'.\n";
    cin >> classChoice;

    cout << "Now you will choose your weapon.\n";
    cout << "Your options are 'Sword and Shield', 'Staff', 'Bow and Arrow', and "
        "'Dagger'.\n";
    cin >> weaponChoice;

    cout << "Now you will choose your armor.\n";
    cout << "Your options are 'chainmail', 'robes', 'leather', and 'cloth'.\n";
    cin >> armorChoice;

    cout << "Now you will add points yo your stats\n";
    cout << "Your options are 'Strength', 'Dexterity', 'Intelligence', "
        "'Constitution'.\n";
    cout << "All stats are base 10 points. You will get 10 more points to put "
        "where you want.\n";

    while (maxIncrease > 0) {
        cout << "Please type 'str' for strength, 'dex' for dexterity, 'int' for "
            "intelligence, and 'con' for constitution.\n";
        cin >> statChoice;
        if (statChoice == "str") {}
        else if (statChoice == "dex") {}
        else if (statChoice == "int") {}
        else if (statChoice == "con") {}
        else { cout << "Wrong Input, Please Retry.\n"; }

        cout << "How many points do you want in " << statChoice << "? \n";
        cin >> statIncrease;
        if (statIncrease <= maxIncrease) {
            maxIncrease = maxIncrease - statIncrease;
            if (statChoice == "str")
            {
                strStat = strStat + statIncrease;

            }
            else if (statChoice == "dex")
            {
                dexStat = dexStat + statIncrease;

            }
            else if (statChoice == "int")
            {
                intStat = intStat + statIncrease;

            }
            else if (statChoice == "con")
            {

                conStat = conStat + statIncrease;
            }

        }
        else {
            cout << "Wrong amount, please retry.\n";
        }

       

    }

   
    completedStats(raceChoice, classChoice, weaponChoice, armorChoice, strStat, dexStat, intStat, conStat);

    return 0;
}

