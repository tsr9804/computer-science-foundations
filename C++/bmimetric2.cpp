#include<iostream>
#include <iomanip>
using namespace std;

int main() {
    double height, weight, bmi;

    std::cout << "Please enter weight in kilograms: ";
    std::cin >> weight;
    std::cout << "Please enter height in meters: ";
    std::cin >> height;

    bmi = weight/(height*height);
    if (bmi < 18.5){
        cout << setprecision(2) << std::fixed << "BMI is: " << bmi << ", Status is Underweight";
    } else if (bmi < 25.0) {
        cout << setprecision(2) << std::fixed << "BMI is: " << bmi << ", Status is Normal";
    } else if (bmi < 30.0) {
        cout << setprecision(2) << std::fixed << "BMI is: " << bmi << ", Status is Overweight";
    } else {
        cout << setprecision(2) << std::fixed << "BMI is: " << bmi << ", Status is Obese";
    }

    return 0;
}
