def max_abs_val(lst):
    max_val = abs(lst[0])
    for i in range(len(lst)):
        if abs(lst[i]) > max_val:
            max_val = abs(lst[i])
    return max_val


if __name__ == "__main__":
    li = list(map(int, input("Please enter a list of integers: """).split()))
    m = max_abs_val(li)
    print(f"Max absolute value is {m}")
