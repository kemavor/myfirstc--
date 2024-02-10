
#include <iostream>

void zeroSmaller(int& num1, int& num2) {
    if (num1 < num2) {
        num1 = 0;
    } else {
        num2 = 0;
    }
}

int main() {
    int num1, num2;

    // Get the values from the user
    std::cout << "Enter the first number: ";
    std::cin >> num1;

    std::cout << "Enter the second number: ";
    std::cin >> num2;

    // Call the zeroSmaller() function
    zeroSmaller(num1, num2);

    // Display the modified values
    std::cout << "Modified values: " << num1 << ", " << num2 << std::endl;

    return 0;
}

