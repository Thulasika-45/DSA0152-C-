#include <iostream>
#include <algorithm>

int main() {
    std::string str;
    std::cout << "Enter an upper case string: ";
    std::getline(std::cin, str);

    std::transform(str.begin(), str.end(), str.begin(), ::tolower);

    std::cout << "Lower case string: " << str << std::endl;

    return 0;
}

