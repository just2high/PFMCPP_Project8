#include "SemiTruck.h"
#include "Highway.h"

SemiTruck::SemiTruck(const std::string& n) : Vehicle(n) {}

void SemiTruck::closeWindows()
{
    setSpeed(65);
    std::cout << &name << ": closing the windows!" << std::endl;
}

SemiTruck::~SemiTruck() {}
