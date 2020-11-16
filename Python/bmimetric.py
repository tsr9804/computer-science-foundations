def bmi_metric(weight, height):
    return weight/(height**2)


if __name__ == "__main__":
    w = float(input("Please enter weight in kilograms: "))
    h = float(input("Please enter height in meters: "))
    bmi = bmi_metric(w, h)
    print(f"BMI is: {bmi}")
