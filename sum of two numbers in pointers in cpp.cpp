#include <iostream>

int main() {
    int a, b;
    int *p1 = &a;
    int *p2 = &b;

    std::cout << "Enter first number: ";
    std::cin >> *p1;
    std::cout << "Enter second number: ";
    std::cin >> *p2;

    int sum = *p1 + *p2;
    std::cout << "Sum: " << sum << std::endl;

    return 0;
}

