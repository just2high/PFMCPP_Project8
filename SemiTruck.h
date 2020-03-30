#pragma once
#include <iostream>
#include "Vehicle.h"

struct SemiTruck : public Vehicle
{
    SemiTruck(const std::string& s);
    SemiTruck(const SemiTruck&);
    SemiTruck& operator=(const SemiTruck&);

    ~SemiTruck() override;
    void closeWindows();
    
    void pullOver();


};
