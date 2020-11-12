def run_bmimetric():
    weight = float(input("Please enter weight in kilograms: "))
    height = float(input("Please enter height in meters: "))
    return f"BMI is: {weight/(height**2)}"


if __name__ == "__main__":
    print(run_bmimetric())
