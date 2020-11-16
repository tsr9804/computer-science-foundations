def first_word(s):
    for i in range(len(s)):
        if s[i] == " ":
            return s[0:i]
    return s


if __name__ == "__main__":
    st = input("Please enter a string: ")
    fw = first_word(st)
    print(f"The first word is: {fw}")
