#pragma once
#include <iostream>
#include "Vehicle.h"

struct SemiTruck : public Vehicle
{
    SemiTruck(const std::string& s);

    void closeWindows();
    
    void pullOver();

    void tryToEvade() override;
};
