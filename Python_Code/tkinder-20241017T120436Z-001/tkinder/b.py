import tkinter as tk

# Function to handle login button click event
def login():
    username = username_entry.get()
    password = password_entry.get()

    if username == "user" and password == "abc123":
        login_status.config(text="Login successful", fg="green", bg="#f0f8ff")
        # Hide the current login window and open a new one
        open_new_window()
    else:
        login_status.config(text="Login failed. Try again.", fg="red", bg="#f0f8ff")

# Function to open a new window after successful login
def open_new_window():
    parent.withdraw()  # Hide the login window
    new_window = tk.Toplevel(parent)
    new_window.geometry("400x300")
    new_window.configure(background="#f0f8ff")
    new_window.title("Welcome Page")

    # Create a label in the new window
    welcome_label = tk.Label(new_window, text="Welcome!", font=("Arial", 20, "bold"), fg="#66cc00", bg="#f0f8ff")
    welcome_label.pack(pady=50)

    # Optionally add a logout button to return to the login page
    logout_button = tk.Button(new_window, text="Logout", command=lambda: close_new_window(new_window), 
                              font=("Arial", 12, "bold"), bg="#79ff4d", fg="black", width=10)
    logout_button.pack(pady=20)

# Function to close the new window and return to the login page
def close_new_window(new_window):
    new_window.destroy()  # Close the new window
    parent.deiconify()  # Show the login window again

# Create the main Tkinter window (Login window)
parent = tk.Tk()
parent.geometry("400x400")  # Define window size
parent.configure(background="#f0f8ff")
parent.title("Login Form")

# Create a Frame to hold the form and center it
form_frame = tk.Frame(parent, bg="#f0f8ff")
form_frame.place(relx=0.5, rely=0.5, anchor="center")  # Center the frame

# Create a heading for the login form
heading_label = tk.Label(form_frame, text="Login", font=("Arial", 20, "bold"), fg="#66cc00", bg="#f0f8ff")
heading_label.grid(row=0, column=0, columnspan=2, pady=10)

# Create labels and Entry widgets for username and password
username_label = tk.Label(form_frame, text="Username:",     
                 bg="#f0f8ff",                       
                 font=("Arial", 14, "bold"),   
                 fg="#66cc00")
                 
password_label = tk.Label(form_frame, text="Password:",
                 bg="#f0f8ff",                       
                 font=("Arial", 14, "bold"),   
                 fg="#66cc00")
                 
username_entry = tk.Entry(form_frame, width=30)
password_entry = tk.Entry(form_frame, show="*", width=30)  # Show '*' for password entry

# Create a Login button
login_button = tk.Button(form_frame, text="Login", command=login,
                   activebackground="#2db300", 
                   activeforeground="white",
                   bg="#79ff4d",
                   fg="black",
                   font=("Arial", 12, "bold"),
                   cursor="hand2",
                   width=15
)

# Create a label to display login status
login_status = tk.Label(form_frame, text="", fg="black", font=("Arial", 12, "italic"))

# Use the Grid geometry manager to arrange widgets in the form frame
username_label.grid(row=1, column=0, padx=20, pady=20, sticky="e")
username_entry.grid(row=1, column=1, padx=20, pady=20)

password_label.grid(row=2, column=0, padx=20, pady=10, sticky="e")
password_entry.grid(row=2, column=1, padx=20, pady=10)

login_button.grid(row=3, column=0, columnspan=2, pady=20)

login_status.grid(row=4, column=0, columnspan=2, padx=20, pady=10)

# Run the Tkinter main loop
parent.mainloop()
