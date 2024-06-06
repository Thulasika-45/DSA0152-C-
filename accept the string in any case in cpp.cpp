#include <iostream>
#include <algorithm>

int main() {
    std::string str;
    std::cout << "Enter a string: ";
    std::getline(std::cin, str);

    for (char &ch : str) {
        if (std::isupper(ch)) {
            ch = std::tolower(ch);
        } else if (std::islower(ch)) {
            ch = std::toupper(ch);
        }
    }

    std::cout << "Converted string: " << str << std::endl;

    return 0;
}

