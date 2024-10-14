// hero.cpp
#include "hero.h"

Hero::Hero() {
    std::cout << "\nHero constructor without parameters called." << std::endl;
}

Hero::Hero(const std::string& name, const std::string& weapon, const std::string& skills)
    : name(name), weapon(weapon), skills(skills) {
    std::cout << "\nHero constructor with parameters called." << std::endl;
}

Hero::Hero(const Hero& other)
    : name(other.name), weapon(other.weapon), skills(other.skills) {
    std::cout << "\nHero copy constructor called." << std::endl;
}

Hero::~Hero() {
    std::cout << "\nHero destructor called." << std::endl;
}

std::string Hero::getName() {
    return name;
}

std::string Hero::getWeapon() {
    return weapon;
}

std::string Hero::getSkills() {
    return skills;
}

void Hero::setName(const std::string& name) {
    this->name = name;
}

void Hero::setWeapon(const std::string& weapon) {
    this->weapon = weapon;
}

void Hero::setSkills(const std::string& skills) {
    this->skills = skills;
}

void Hero::displayInfo() {
    std::cout << "Имя: " << name << std::endl;
    std::cout << "Оружие: " << weapon << std::endl;
    std::cout << "Способности: " << skills << std::endl;
}
