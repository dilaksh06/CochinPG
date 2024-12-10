file = open("a.txt", "r")  # Open the file in read mode
content = file.readlines()  # Read all lines into a list
for x in content:
    print(x)  # Use .strip() to avoid extra blank lines
file.close()  # Manually close the file
