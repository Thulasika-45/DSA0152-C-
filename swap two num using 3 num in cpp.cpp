#include <iostream>

int main() {
    int decimal;
    std::cout << "Enter a decimal number: ";
    std::cin >> decimal;

    std::string binary = "";

    while (decimal > 0) {
        binary = std::to_string(decimal % 2) + binary;
        decimal /= 2;
    }

    std::cout << "Binary number: " << binary << std::endl;

    return 0;
}

