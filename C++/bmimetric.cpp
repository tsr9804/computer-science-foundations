#include <iostream>


int main() {
    double height, weight, bmi;

    std::cout << "Please enter weight in kilograms: ";
    std::cin >> weight;
    std::cout << "Please enter height in meters: ";
    std::cin >> height;

    bmi = weight/(height*height);
    std::cout << "BMI is: " << bmi;
    return 0;
}
