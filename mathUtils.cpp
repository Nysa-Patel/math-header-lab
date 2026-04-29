#include "mathUtils.h"
#include <cmath> 

double power(double base, int exp) {
    return std::pow(base, exp);
}

double calculateAverage(double a, double b) {
    return (a + b) / 2.0;
}

bool isEven(int number) {
    return number % 2 == 0;
}
