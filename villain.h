// villain.h
#ifndef VILLAIN_H
#define VILLAIN_H

#include "hero.h"

class Villain : public Hero {
public:
    Villain(); // конструктор без параметров
    Villain(const std::string& name, const std::string& weapon, const std::string& skills,
        const std::string& evilDeed, const std::string& hideout); // конструктор с параметрами
    Villain(const Villain& other); // конструктор копирования
    ~Villain(); // деструктор

    // методы get и set для своих характеристик
    std::string getEvilDeed() const;
    std::string getHideout() const;
    void setEvilDeed(const std::string& evilDeed);
    void setHideout(const std::string& hideout);

    // переопределенный метод
    void displayInfo() override;

private:
    std::string evilDeed;
    std::string hideout;
};

#endif
