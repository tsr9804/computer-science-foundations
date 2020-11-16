WEEKDAY = ["Mon", "Tue", "Wed", "Thr", "Fri"]


def call_cost(day, start_time, duration):
    if day in WEEKDAY:
        if 800 <= start_time <= 1600:
            total_cost = duration * 0.4
        else:
            total_cost = duration * 0.25
    else:
        total_cost = duration * 0.15
    return total_cost


if __name__ == "__main__":
    d = input("Enter the day the call started at: ")
    st = int(input("Enter the time the call started at (hhmm): "))
    du = int(input("Enter the duration of the call (in minutes): "))
    cost = call_cost(d, st, du)
    print("This call will cost $" + "{:.2f}".format(cost))
