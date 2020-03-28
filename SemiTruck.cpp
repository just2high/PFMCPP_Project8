#include "SemiTruck.h"
#include "Highway.h"

SemiTruck::SemiTruck(const std::string& n) : Vehicle(n) {}

void SemiTruck::closeWindows()
{
    setSpeed(65);
    std::cout << &name << ": closing the windows!" << std::endl;
}

/* void SemiTruck::slowDown( Highway* h )
{
    setSpeed(h->speedLimit);
    std::cout << &name << ": hello officer, what seems to be the problem?" << std::endl;
}
 */