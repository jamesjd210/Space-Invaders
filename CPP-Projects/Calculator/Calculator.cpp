#include "Calculator.h"
#include <stdexcept>

using namespace std;

double add(double a, double b) {
    return a + b;
}

double subtract(double a, double b) {
    return a - b;
}

double multiply(double a, double b) {
    return a * b;
}

double divide (double a, double b) {
    if(b == 0) {
        throw invalid_argument("Divide by 0 Error");
    }
    return a / b;
}