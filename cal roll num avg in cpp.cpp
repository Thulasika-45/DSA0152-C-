#include <iostream>

int main() {
    int rollNo, mark1, mark2, mark3, total;
    float average;
    
    std::cout << "Enter Roll No: ";
    std::cin >> rollNo;
    std::cout << "Enter marks in 3 subjects: ";
    std::cin >> mark1 >> mark2 >> mark3;
    
    total = mark1 + mark2 + mark3;
    average = total / 3.0;

    std::cout << "Roll No: " << rollNo << std::endl;
    std::cout << "Total Marks: " << total << std::endl;
    std::cout << "Average Marks: " << average << std::endl;

    return 0;
}

