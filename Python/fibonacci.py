def fibonacci(n):
    print(1)
    first, second = 0, 1
    for _ in range(n-1):
        next_val = first + second
        print(next)
        first, second = second, next_val


if __name__ == "__main__":
    i = int(input("Please enter a positive integer greater than 1: "))
    fibonacci(i)
