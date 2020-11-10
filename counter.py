def run_counter():
    print("Please enter the number of coins:")
    quarters = int(input("# of quarters: "))
    dimes = int(input("# of dimes: "))
    nickels = int(input("# of nickels: "))
    pennies = int(input("# of pennies: "))
    total = 25*quarters + 10*dimes + 5*nickels + pennies
    dollars, cents = total//100, total % 100

    if dollars == 1:
        return f"The total is {dollars} dollar and {cents} cents"
    else:
        return f"The total is {dollars} dollars and {cents} cents"


if __name__ == "__main__":
    print(run_counter())
