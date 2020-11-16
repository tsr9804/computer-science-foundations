def avg_val(lst):
    lst_sum = 0
    for i in range(len(lst)):
        lst_sum += lst[i]
    return lst_sum / len(lst)


if __name__ == "__main__":
    l = list(map(int, input("Please enter list values: ").split()))
    avg = avg_val(l)
    print(f"Average value is: {avg}")

