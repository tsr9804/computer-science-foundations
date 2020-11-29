#include <iostream>


int main() {
    int dollars, cents, total;
    int quarters, dimes, nickels, pennies;

    std::cout << "Please enter the amount of money to convert:" << std::endl;
    std::cout << "# of dollars: ";
    std::cin >> dollars;
    std::cout << "# of cents: ";
    std::cin >> cents;

    total = dollars*100 + cents;
    quarters = total/25;
    total = (total > 0 ? total % 25 : 0);
    dimes = total/10;
    total = (total > 0 ? total % 10 : 0);
    nickels = total/5;
    total = (total > 0 ? total % 5 : 0);
    pennies = total;

    std::cout << "The coins are "
              << quarters
              << " quarters, "
              << dimes
              << " dimes, "
              << nickels
              << " nickels and "
              << pennies
              << " pennies";

    return 0;
}
