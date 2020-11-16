def string_splitter(st):
    mid = len(st)//2
    middle = st[mid]
    first = st[0:mid]
    second = st[mid+1:]
    return middle, first, second


if __name__ == "__main__":
    si = input("Enter an odd length string: ")
    m, f, s = string_splitter(si)
    print("Middle character: " + m)
    print("First half: " + f)
    print("Second half: " + s)
