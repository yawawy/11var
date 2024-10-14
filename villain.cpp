// villain.cpp
#include "villain.h"

Villain::Villain() {
    std::cout << "Villain constructor without parameters called." << std::endl;
}

Villain::Villain(const std::string& name, const std::string& weapon, const std::string& skills,
    const std::string& evilDeed, const std::string& hideout)
    : Hero(name, weapon, skills), evilDeed(evilDeed), hideout(hideout) {
    std::cout << "Villain constructor with parameters called." << std::endl;
}

Villain::Villain(const Villain& other)
    : Hero(other), evilDeed(other.evilDeed), hideout(other.hideout) {
    std::cout << "Villain copy constructor called." << std::endl;
}

Villain::~Villain() {
    std::cout << "Villain destructor called." << std::endl;
}

std::string Villain::getEvilDeed() const {
    return evilDeed;
}

std::string Villain::getHideout() const {
    return hideout;
}

void Villain::setEvilDeed(const std::string& evilDeed) {
    this->evilDeed = evilDeed;
}

void Villain::setHideout(const std::string& hideout) {
    this->hideout = hideout;
}

void Villain::displayInfo() {
    Hero::displayInfo();
    std::cout << "Совершенное зло: " << evilDeed << std::endl;
    std::cout << "Убежище: " << hideout << std::endl;
}
