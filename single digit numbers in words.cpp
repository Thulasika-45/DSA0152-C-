#include <iostream>

int main() {
    int digit;
    std::cout << "Enter a single digit number: ";
    std::cin >> digit;

    if (digit < 0 || digit > 9) {
        std::cout << "Invalid input!" << std::endl;
        return 1;
    }

    std::string words[] = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
    std::cout << "In words: " << words[digit] << std::endl;

    return 0;
}

