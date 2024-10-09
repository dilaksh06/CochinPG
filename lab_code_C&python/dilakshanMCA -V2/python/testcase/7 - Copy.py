numb_list = []
list_limit = int(input("Enter the number of values you want to input: "))

for x in range(list_limit):
    while True:
        try:
            get_input = int(input(f"Enter the {x + 1} number: "))
            numb_list.append(get_input)
            break  # Exit the loop if the input is valid
        except ValueError:
            print("Please enter a valid integer.")

print(numb_list)
