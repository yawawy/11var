// goodhero.cpp
#include "goodhero.h"

GoodHero::GoodHero() {
    std::cout << "GoodHero constructor without parameters called." << std::endl;
}

GoodHero::GoodHero(const std::string& name, const std::string& weapon, const std::string& skills)
    : Hero(name, weapon, skills) {
    std::cout << "GoodHero constructor with parameters called." << std::endl;
}

GoodHero::~GoodHero() {
    std::cout << "GoodHero destructor called." << std::endl;
}

void GoodHero::displayInfo() {
    Hero::displayInfo();
}
