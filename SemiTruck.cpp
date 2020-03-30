#include "SemiTruck.h"
#include "Highway.h"

SemiTruck::SemiTruck(const std::string& n) : Vehicle(n) {}

void SemiTruck::closeWindows()
{
    setSpeed(65);
    std::cout << name << ": closing the windows!" << std::endl;
}

void SemiTruck::pullOver()
{
    setSpeed(0);
    std::cout << name << ": I'm stopping please don't arrest me!\n" << std::endl;
}

SemiTruck::SemiTruck(const SemiTruck&) = default;

SemiTruck& SemiTruck::operator=(const SemiTruck&) = default;

SemiTruck::~SemiTruck() = default;
