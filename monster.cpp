// monster.cpp
#include "monster.h"

Monster::Monster() {
    std::cout << "Monster constructor without parameters called." << std::endl;
}

Monster::Monster(const std::string& name, const std::string& description)
    : Hero(name, "", ""), description(description) {
    std::cout << "Monster constructor with parameters called." << std::endl;
}

Monster::Monster(const Monster& other)
    : Hero(other), description(other.description) {
    std::cout << "Monster copy constructor called." << std::endl;
}

Monster::~Monster() {
    std::cout << "Monster destructor called." << std::endl;
}

std::string Monster::getDescription() const {
    return description;
}

void Monster::setDescription(const std::string& description) {
    this->description = description;
}

void Monster::displayInfo() {
    Hero::displayInfo();
    std::cout << "Описание: " << getDescription() << std::endl;
}
