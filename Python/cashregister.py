def cash_register(item1, item2, club_card, tax_rate):
    base_price = item1 + item2
    discount_price = apply_discount(item1, item2, club_card)
    total_price = discount_price + discount_price*(tax_rate*.01)

    return base_price, discount_price, total_price


def apply_discount(item1, item2, club_card):
    if club_card == "y":
        return (min(item1, item2)*.5 + max(item1, item2)) * .9
    else:
        return min(item1, item2)*.5 + max(item1, item2)


if __name__ == "__main__":
    it1 = float(input("Enter price of the first item: "))
    it2 = float(input("Enter price of the second item: "))
    cc = input("Does customer have a club card? (Y/N): ").lower()
    tr = float(input("Enter tax rate, e.g. 5.5 for 5.5% tax: "))
    base, discount, total = cash_register(it1, it2, cc, tr)

    print("Base price =", "{:.2f}".format(base))
    print("Price after discounts =", "{:.2f}".format(discount))
    print("Total price =", "{:.2f}".format(total))
