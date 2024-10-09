

# Function to print Fibonacci series
def fibonacci(n):
    a, b = 0, 1
    count = 0
    
    if n <= 0:
        print("Please enter a positive integer.")
    elif n == 1:
        print("Fibonacci sequence up to", n, ":")
        print(a)
    else:
        print("Fibonacci sequence:")
        while count < n:
            print(a, end=' ')
            a, b = b, a + b
            count += 1

# Number of terms
n_terms = int(input("Enter the number of terms: "))
fibonacci(n_terms)

