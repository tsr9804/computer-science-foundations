def bmi_imperial(weight, height):
    weight_kilos = weight * 0.453592
    height_meters = height * 0.0254
    return weight_kilos/(height_meters**2)


if __name__ == "__main__":
    w = float(input("Please enter weight in pounds: "))
    h = float(input("Please enter height in inches: "))
    bmi = bmi_imperial(w, h)
    print(f"BMI is: {bmi}")
