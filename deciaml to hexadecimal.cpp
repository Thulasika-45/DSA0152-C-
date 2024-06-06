#include <iostream>
#include <iomanip>

int main() {
    int number;
    std::cout << "Enter a number: ";
    std::cin >> number;

    std::cout << "Hexadecimal: " << std::hex << number << std::endl;

    return 0;
}

