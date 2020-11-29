#include <iostream>
#include <iomanip>

int main() {
    double weight, height, weightInKilos, heightInMeters, bmi;

    std::cout << "Please enter weight in pounds: ";
    std::cin >> weight;
    std::cout << "Please enter height in inches: ";
    std::cin >> height;

    weightInKilos = weight * 0.453592;
    heightInMeters = height * 0.0254;
    bmi = weightInKilos/(heightInMeters*heightInMeters);
    std::cout << std::setprecision(2) << std::fixed << "BMI is: " << bmi;
    return 0;
}
