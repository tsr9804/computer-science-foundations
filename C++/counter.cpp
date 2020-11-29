#include <iostream>


int main() {
    int quarters, dimes, nickels, pennies;
    int total, dollars, cents;

    std::cout << "Please enter the number of coins:" << std::endl;

    std::cout << "# of quarters: ";
    std::cin >> quarters;

    std::cout << "# of dimes: ";
    std::cin >> dimes;

    std::cout << "# of nickels: ";
    std::cin >> nickels;

    std::cout << "# of pennies: ";
    std::cin >> pennies;

    total = 25*quarters + 10*dimes + 5*nickels + pennies;
    dollars = total / 100;
    cents = total % 100;
    std::cout << "The total is " << dollars << " dollars and " << cents << " cents";

    return 0;
}
