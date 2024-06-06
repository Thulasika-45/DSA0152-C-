#include <iostream>
#include <cmath>

int main() {
    int binary;
    std::cout << "Enter a binary number: ";
    std::cin >> binary;

    int decimal = 0, power = 0;

    while (binary != 0) {
        int lastDigit = binary % 10;
        decimal += lastDigit * pow(2, power);
        binary /= 10;
        ++power;
    }

    std::cout << "Decimal number: " << decimal << std::endl;

    return 0;
}

