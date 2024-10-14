// villain.h
#ifndef VILLAIN_H
#define VILLAIN_H

#include "hero.h"

class Villain : public Hero {
public:
    Villain(); // ����������� ��� ����������
    Villain(const std::string& name, const std::string& weapon, const std::string& skills,
        const std::string& evilDeed, const std::string& hideout); // ����������� � �����������
    Villain(const Villain& other); // ����������� �����������
    ~Villain(); // ����������

    // ������ get � set ��� ����� �������������
    std::string getEvilDeed() const;
    std::string getHideout() const;
    void setEvilDeed(const std::string& evilDeed);
    void setHideout(const std::string& hideout);

    // ���������������� �����
    void displayInfo() override;

private:
    std::string evilDeed;
    std::string hideout;
};

#endif
