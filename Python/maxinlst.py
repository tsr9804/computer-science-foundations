def max_val(lst):
    lst_max = lst[0]
    for i in range(len(lst)):
        if lst[i] > lst_max:
            lst_max = lst[i]
    return lst_max


if __name__ == "__main__":
    li = list(map(int, input("Please enter a list of integers: """).split()))
    m = max_val(li)
    print(f"Max value is {m}")
