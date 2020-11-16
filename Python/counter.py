def counter(quarters, dimes, nickels, pennies):
    total = 25*quarters + 10*dimes + 5*nickels + pennies
    dollars, cents = total//100, total % 100
    return dollars, cents


if __name__ == "__main__":
    print("Please enter the number of coins: ")
    q = int(input("# of quarters: "))
    d = int(input("# of dimes: "))
    n = int(input("# of nickels: "))
    p = int(input("# of pennies: "))
    d, c = counter(q, d, n, p)
    if d == 1:
        print(f"The total is {d} dollar and {c} cents")
    else:
        print(f"The total is {d} dollars and {c} cents")
