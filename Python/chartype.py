def char_type(ch):
    if ch.islower():
        return "lower case letter"
    elif ch.isupper():
        return "upper case letter"
    elif ch.isdigit():
        return "digit"
    else:
        return "non-alphanumeric  character"


if __name__ == "__main__":
    c = input("Enter a character: ")
    ct = char_type(c)
    print(f"{c} is a {ct}.")
