// Copyright 2025 Mikhail Ibrahim
// Date: Mar 26, 2025
// Description: A C++ program that determines whether a number is positive,
// negative, or zero.

#include <iostream>

int main() {
    int number;

    // Prompt user for an integer input
    std::cout << "Enter an integer: ";
    std::cin >> number;

    // Check if the number is positive, negative, or zero
    if (number > 0) {
        std::cout << number << " is a positive number.\n";
    } else if (number < 0) {
        std::cout << number << " is a negative number.\n";
    } else {
        std::cout << number << " is just zero!\n";
    }

    return 0;
}
