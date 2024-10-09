def sort_list(numbers):
    n = len(numbers)
    for i in range(n):
        for j in range(0, n-i-1):
            if numbers[j] > numbers[j+1]:
                numbers[j], numbers[j+1] = numbers[j+1], numbers[j]


input_numbers = input("Enter a list of numbers separated by spaces: ")
numbers = list(map(int, input_numbers.split()))
    
print("Original list:", numbers)
sort_list(numbers)
print("Sorted list in non-decreasing order:", numbers)

