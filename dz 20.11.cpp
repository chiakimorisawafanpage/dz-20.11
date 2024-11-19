#include <iostream>
using namespace std;

double power(double number, int exponent) {
    double result = 1.0;

    if (exponent > 0) {
        for (int i = 0; i < exponent; ++i) {
            result *= number;
        }
    }
    else if (exponent < 0) {
        for (int i = 0; i < -exponent; ++i) {
            result *= number;
        }
        result = 1.0 / result;
    }
    return result;
}

int main() {
    double number;
    int exponent;

    cout << "число: ";
    cin >> number;

    cout << "степень: ";
    cin >> exponent;

    double result = power(number, exponent);
    cout << number <<" " << exponent <<" " << result << endl;

    return 0;
}
