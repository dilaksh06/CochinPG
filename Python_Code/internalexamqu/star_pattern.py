# Function to print star pyramid
def star_pyramid(n):
    for i in range(1, n+1):
        # Print leading spaces
        print('' * (n - i), end='')
        # Print stars
        print('*' * (2 * i - 1))

# Number of rows
n = int(input("Enter the number of rows for the pyramid: "))
star_pyramid(n)

