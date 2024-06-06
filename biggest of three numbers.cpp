#include <iostream>

int main() {
    int num1, num2, num3;
    
    std::cout << "Enter three numbers: ";
    std::cin >> num1 >> num2 >> num3;

    int biggest = num1;
    if (num2 > biggest) {
        biggest = num2;
    }
    if (num3 > biggest) {
        biggest = num3;
    }

    std::cout << "The biggest number is: " << biggest << std::endl;

    return 0;
}

