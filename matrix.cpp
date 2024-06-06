#include <iostream>
#include <vector>

int main() {
    int n;
    std::cout << "Enter the size of the matrix (n x n): ";
    std::cin >> n;

    std::vector<std::vector<int>> matrix(n, std::vector<int>(n));

    std::cout << "Enter the elements of the matrix:" << std::endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            std::cin >> matrix[i][j];
        }
    }

    std::cout << "Matrix:" << std::endl;
    for (const auto &row : matrix) {
        for (int elem : row) {
            std::cout << elem << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}

