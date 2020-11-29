#include<iostream>
#include <algorithm>
#include <iomanip>
using namespace std;

double getMemberDiscount(double item1, double item2, char clubCard);

int main() {
    double item1, item2, basePrice, discountPrice, totalPrice, taxRate;
    char clubCard;

    cout << "Enter price of the first item: ";
    cin >> item1;
    cout << "Enter price of the second item: ";
    cin >> item2;
    cout << "Does customer have a club card? (Y/N): ";
    cin >> clubCard;
    cout << "Enter tax rate, e.g. 5.5 for 5.5% tax: ";
    cin >> taxRate;

    basePrice = item1 + item2;
    discountPrice = getMemberDiscount(item1, item2, clubCard);
    totalPrice = discountPrice + (discountPrice * (taxRate*.01));

    cout << "Base price = " << setprecision(2) << fixed << basePrice << endl;
    cout << "Price after discounts = " << setprecision(2) << fixed << discountPrice << endl;
    cout << "Total price = " << setprecision(2) << fixed <<totalPrice << endl;

    return 0;
}

double getMemberDiscount(double item1, double item2, char clubCard) {
    double minItem = min(item1, item2);
    double maxItem = max(item1, item2);
    double memberDiscountPrice = minItem*.5 + maxItem;
    if (clubCard == 'y' or clubCard == 'Y') {
        return memberDiscountPrice * .9;
    }
    return memberDiscountPrice;
}

