#include <iostream>

// Function to perform addition
long long add(long long a, long long b) {
    return a + b;
}

// Function to perform subtraction
long long subtract(long long a, long long b) {
    return a - b;
}

// Function to perform multiplication
long long multiply(long long a, long long b) {
    return a * b;
}

// Function to perform division
long long divide(long long a, long long b) {
    if (b != 0) {
        return a / b;
    } else {
        std::cout << "Error: Division by zero!" << std::endl;
        return 0;
    }
}

int main() {
    long long num1, num2;
    char operation;

    std::cout << "Enter the first number: ";
    std::cin >> num1;

    std::cout << "Enter the second number: ";
    std::cin >> num2;

    std::cout << "Enter the operation (+, -, *, /): ";
    std::cin >> operation;

    long long result;
    switch (operation) {
        case '+':
            result = add(num1, num2);
            break;
        case '-':
            result = subtract(num1, num2);
            break;
        case '*':
            result = multiply(num1, num2);
            break;
        case '/':
            result = divide(num1, num2);
            break;
        default:
            std::cout << "Invalid operation!" << std::endl;
            return 0;
    }

    std::cout << "Result: " << result << std::endl;

    return 0;
}