def run_coins():
    dollars = int(input("# of dollars: "))
    cents = int(input("# of cents: "))
    total = dollars*100 + cents
    # get quarters
    quarters = total//25
    total = 0 if total <= 0 else total % 25
    # get dimes
    dimes = total//10
    total = 0 if total <= 0 else total % 10
    # get nickels
    nickels = total//5
    total = 0 if total <= 0 else total % 5
    # get pennies
    pennies = total

    return f"The coins are {quarters} quarters, {dimes} dimes, {nickels} " \
           f"nickels and {pennies} pennies"


if __name__ == "__main__":
    print(run_coins())
