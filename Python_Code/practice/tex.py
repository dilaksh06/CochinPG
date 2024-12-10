with open("a.txt", "r") as file:
    data = file.readlines()
    print(data)
    for line in data:
        word = line.split()
        print (word)
