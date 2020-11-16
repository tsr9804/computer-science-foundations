def is_leap_year(year):
    isleap = False
    if year % 4 == 0:
        isleap = True
        if year % 100 == 0:
            isleap = False
            if year % 400 == 0:
                isleap = True
    return isleap


if __name__ == "__main__":
    y = int(input("Enter a year: "))
    if is_leap_year(y):
        print(f"{y} is a leap year")
    else:
        print(f"{y} is not a leap year")
