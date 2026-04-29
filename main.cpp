#include <iostream>
#include "mathUtils.h"

int main() {
    double base = 2.0;
    int exp = 3;
    double n1 = 10.5, n2 = 20.0;
    int checkNum = 4;

    std::cout << base << "^" << exp << " = " << power(base, exp) << std::endl;
    std::cout << "Average of " << n1 << " and " << n2 << " = " << calculateAverage(n1, n2) << std::endl;
    std::cout << checkNum << " is " << (isEven(checkNum) ? "even" : "odd") << std::endl;

    return 0;
}
