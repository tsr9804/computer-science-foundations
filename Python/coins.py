def coins(dollars, cents):
    total = dollars*100 + cents
    quarters = total//25
    total = 0 if total <= 0 else total % 25
    dimes = total//10
    total = 0 if total <= 0 else total % 10
    nickels = total//5
    total = 0 if total <= 0 else total % 5
    pennies = total
    return quarters, dimes, nickels, pennies


if __name__ == "__main__":
    di = int(input("# of dollars: "))
    ci = int(input("# of cents: "))
    q, d, n, p = coins(di, ci)
    print(f"The coins are {q} quarters, {d} dimes, {n} nickels and {p} pennies")
