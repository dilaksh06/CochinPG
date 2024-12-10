def write_student_data():
    # Step 1: Open the file in write mode
    with open("student_data.txt", "w") as file:
        while True:
            # Get user input for student data
            name = input("Enter student name (or type 'exit' to finish): ")
            if name.lower() == "exit":
                break
            roll_number = input("Enter roll number: ")
            marks = input("Enter marks: ")

            # Write the student data to the file
            file.write(f"{name}, {roll_number}, {marks}\n")
    print("Data written to 'student_data.txt' successfully.\n")

def read_student_data():
    try:
        with open("student_data.txt", "r") as file:
            print("Reading 'student_data.txt'...\n")
            total_marks = 0
            count = 0
            
            for line in file:
                print(line.strip())  # Display each line
                # Split each line to calculate total marks
                _, _, marks = line.strip().split(", ")
                total_marks += int(marks)
                count += 1

            # Calculate and display the average marks if data is present
            if count > 0:
                average_marks = total_marks / count
                print(f"\nAverage Marks of all students: {average_marks:.2f}")
            else:
                print("No student data found in the file.")
    except FileNotFoundError:
        print("File 'student_data.txt' not found. Please run the write function first.")

# Step 3: Run the functions
write_student_data()  # Collect and write student data
read_student_data()   # Read and display student data, along with average marks
