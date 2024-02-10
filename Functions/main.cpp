#include <iostream>

double power(double n, int p = 2) {
    double result = 1.0;
    for (int i = 0; i < p; i++) {
        result *= n;
    }
    return result;
}

int main() {
    double n;
    int p;

    // Get the values from the user
    std::cout << "Enter a number: ";
    std::cin >> n;

    std::cout << "Enter the power (optional, default is 2): ";
    std::cin >> p;

    // Calculate and display the result
    double result = power(n, p);
    std::cout << "Result: " << result << std::endl;

    return 0;
}
