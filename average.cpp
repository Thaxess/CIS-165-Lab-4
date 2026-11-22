#include <iostream>

int main() {

    // Declare five numbers
    double num1 = 28;
    double num2 = 32;
    double num3 = 37;
    double num4 = 24;
    double num5 = 33;

    // Calculate the sum and average of the five numbers
    double sum = num1 + num2 + num3 + num4 + num5;
    double average = sum / 5;

    // Output the sum and average
    std::cout << "Sum is " << sum << std::endl << "Average is " << average << "%" << std::endl;
    return 0;
}