#pragma once
#include <iostream>
#include "Vehicle.h"

// struct Highway;
struct SemiTruck : public Vehicle
{
    SemiTruck(const std::string& s);
    ~SemiTruck();
    void closeWindows();

};
