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
string classSkill;
string raceSkill;
int healthPoints = 20;
int armorPoints = 0;
int strStat = 10;
int dexStat = 10;
int intStat = 10;
int conStat = 10;
int stealthStat = 5;
int maxIncrease = 10;
int statIncrease;





void completedStats(string raceChoice, string classChoice, string weaponChoice, string armorChoice, int strStat, int dexStat, int intStat, int conStat, string raceSkill, string classSkill, int healthPoints, int armorPoints, int stealthStat) {
    cout << "Your Character\n";
    cout << "You are a " << raceChoice << " " << classChoice << ". \n";
    cout << "You are equiped with a " << weaponChoice << " and wear " << armorChoice << " for armor. \n";
    cout << "\n";
    cout << "Player Stats\n";
    cout << "Health: " << healthPoints << "\n";
    cout << "Armor: " << armorPoints << "\n";
    cout << "Strength: " << strStat << "\n";
    cout << "Dexterity: " << dexStat << "\n";
    cout << "Inteligence: " << intStat << "\n";
    cout << "Constitution: " << conStat << "\n";
    cout << "Stealth: " << stealthStat << "\n";
    cout << "\n";
    cout << "Player Skills\n";
    cout << "Your race skill is " << raceSkill << "\n";
    cout << "Your class skill is " << classSkill << "\n";
}




int main()
{



    cout << "Welcome to character creator.\n";
    cout << "We'll start with a race to pick from.\n";
    cout << "Your options are 'human', 'elf', 'dwarf', and 'orc'\n";
    cin >> raceChoice;
    if (raceChoice == "human") { raceSkill = "Jack of All Trades: You get a small bonus in 3 stats."; strStat += 1; conStat += 1; dexStat += 1; }
    else if (raceChoice == "elf") { raceSkill = "Night Vision: The ability to see in the dark."; dexStat += 3; }
    else if (raceChoice == "dwarf") { raceSkill = "Strength Progiency: A bonus to stregth"; strStat += 3; }
    else if (raceChoice == "orc") { raceSkill = "Beserker: Receiving damage boosts your damage."; conStat += 3; }
    else { cout << "Wrong Input, Please Retry.\n"; }



    cout << "Now you will choose your class.\n";
    cout << "Your options are 'warrior', 'mage', 'ranger', and 'rogue'.\n";
    cin >> classChoice;
    if (classChoice == "warrior") { classSkill = "Armor Proficiency: A bonus to your armor."; armorPoints += 5; }
    else if (classChoice == "mage") { classSkill = "Magic Proficiency: A bonus to your inteligence."; intStat += 5; }
    else if (classChoice == "ranger") { classSkill = "Bow Proficiency: A bonus to your dexterity."; dexStat += 5; }
    else if (classChoice == "rogue") { classSkill = "Stealth Proficiency: A bonus to your stealth."; stealthStat += 5; }
    else { cout << "Wrong Input, Please Retry.\n"; }



    cout << "Now you will choose your weapon.\n";
    cout << "Your options are 'sword', 'staff', 'bow', and "
        "'dagger'.\n";
    cin >> weaponChoice;
    if (weaponChoice == "sword") { weaponChoice = "Sword and Shield"; armorPoints += 2; strStat += 2; }
    else if (weaponChoice == "staff") { weaponChoice = "Magic Staff"; intStat += 4; }
    else if (weaponChoice == "bow") { weaponChoice = "Bow and Arrows"; dexStat += 4; }
    else if (weaponChoice == "dagger") { weaponChoice = "Dagger"; stealthStat += 4; }
    else { cout << "Wrong Input, Please Retry.\n"; }




    cout << "Now you will choose your armor.\n";
    cout << "Your options are 'chainmail', 'robes', 'leather', and 'cloak'.\n";
    cin >> armorChoice;
    if (armorChoice == "chainmail") { armorChoice = "Fine Chainmail"; armorPoints += 5; }
    else if (armorChoice == "robes") { armorChoice = "Wizard Robes"; intStat += 5; }
    else if (armorChoice == "leather") { armorChoice = "Leathers"; dexStat += 5; }
    else if (armorChoice == "cloak") { armorChoice = "Dark Cloak"; stealthStat += 5; }
    else { cout << "Wrong Input, Please Retry.\n"; }



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



    healthPoints = healthPoints + conStat;



    completedStats(raceChoice, classChoice, weaponChoice, armorChoice, strStat, dexStat, intStat, conStat, raceSkill, classSkill, healthPoints, armorPoints, stealthStat);

    return 0;
}