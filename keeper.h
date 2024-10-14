// keeper.h
#ifndef KEEPER_H
#define KEEPER_H

#include "base.h"
#include <vector>

class Keeper {
private:
    std::vector<Base*> objects;

public:
    Keeper();
    ~Keeper();

    void addObject(Base* obj);
    void removeObject(int index);
    void printAllObjects() const;
    void saveToFile(const std::string& filename) const;
    void loadFromFile(const std::string& filename);
};

#endif // KEEPER_H