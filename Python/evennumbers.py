def even_numbers(n):
    for i in range(1, n+1):
        print(i * 2)


if __name__ == "__main__":
    e = int(input("Please enter a positive integer: "))
    even_numbers(e)
