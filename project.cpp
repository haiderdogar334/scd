#include <iostream>

class Calculator {
private:
    double a,b;
public:
    Calculator();

    double add(double a, double b);
    double subtract(double a, double b);
    double multiply(double a, double b);
    double divide(double a, double b);

};

Calculator::Calculator() {
    a = 0.0;
    b = 0.0;
}

double Calculator::add(double a, double b) {
    int sum = a + b;
    return sum;
}

double Calculator::subtract(double a, double b) {
    int subtract = a - b;
    return subtract;
}


int main() {
    Calculator myCalculator;

    return 0;
}
