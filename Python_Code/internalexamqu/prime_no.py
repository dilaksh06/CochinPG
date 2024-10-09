for x in range(10, 100):
    for y in range(2, x):
        if x % y == 0:
            break
    else:
        print("{} is a prime number".format(x))
