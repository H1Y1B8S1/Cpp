/*
Example Scenario:
Imagine we are building a simple game where characters can have different weapons and armors.
We'll define the following classes :Weapon
                                   :Armor
                                   :CharacterA
Character "has-a" Weapon and "has-a" Armor.
*/

#include <string>
#include <iostream>

class Weapon
{
public:
    Weapon(const std::string &name, int damage)
        : name(name), damage(damage) {}

    std::string getName() const { return name; }
    int getDamage() const { return damage; }

private:
    std::string name;
    int damage;
};

class Armor
{
public:
    Armor(const std::string &name, int defense)
        : name(name), defense(defense) {}

    std::string getName() const { return name; }
    int getDefense() const { return defense; }

private:
    std::string name;
    int defense;
};

class Character
{
public:
    Character(const std::string &name, const Weapon &weapon, const Armor &armor)
        : name(name), weapon(weapon), armor(armor) {}

    void display() const
    {
        std::cout << "Character: " << name << std::endl;
        std::cout << "Weapon: " << weapon.getName() << " (Damage: " << weapon.getDamage() << ")" << std::endl;
        std::cout << "Armor: " << armor.getName() << " (Defense: " << armor.getDefense() << ")" << std::endl;
    }

private:
    std::string name;
    Weapon weapon;
    Armor armor;
};

int main()
{
    Weapon sword("Sword", 50);
    Armor shield("Shield", 20);

    Character hero("Hero", sword, shield);

    hero.display();

    return 0;
}
