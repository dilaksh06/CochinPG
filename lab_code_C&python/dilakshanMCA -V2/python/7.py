def list_of_frequency(get_input):
    if not get_input.isalpha():
        return 0

    get_input = get_input.lower()

    thisdict = {}

    for char in get_input:
        if char in thisdict:
            thisdict[char] += 1
        else:
            thisdict[char] = 1

    sorted_dict = dict(sorted(thisdict.items(), key=lambda item: item[1], reverse=True))

    for key, value in sorted_dict.items():
        print(f"{key}: {value}")

    return 1  

text_input = input("Enter a text: ")
if list_of_frequency(text_input) == 0:
    print("The text entered by the user contains non-alphabetic characters.")
