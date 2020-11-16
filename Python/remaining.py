def remaining_words(s):
    for i in range(len(s)):
        if s[i] == " ":
            return s[i+1:]
    return ""


if __name__ == "__main__":
    st = input("Please enter a string: ")
    remain_str = remaining_words(st)
    print(f"The remaining string is: {remain_str}")