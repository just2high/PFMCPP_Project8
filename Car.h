#pragma once
#include <iostream>
#include "Vehicle.h"

struct Car : public Vehicle
{
    Car(const std::string& s);
    void closeWindows();

    void tryToEvade() override;
};
