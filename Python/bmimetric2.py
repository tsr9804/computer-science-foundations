def bmi_metric(weight, height):
    BMI = round(weight/(height**2), 2)

    if BMI < 18.5:
        return BMI, "Underweight"
    elif BMI < 25.0:
        return BMI, "Normal"
    elif BMI < 30.0:
        return BMI, "Overweight"
    else:
        return BMI, "Obese"


if __name__ == "__main__":
    w = float(input("Please enter weight in kilograms: "))
    h = float(input("Please enter height in meters: "))
    bmi, status = bmi_metric(w, h)
    print(f"BMI is: {bmi}, Status is {status}")