import tkinter as tk 
from tkinter import *
from tkinter import messagebox

#function to validate the login

# Function to validate the login
def validate_login():
    userid = username_entry.get()
    password = password_entry.get()

    # You can add your own validation logic here
    if userid == "admin" and password == "password":
        messagebox.showinfo("Login Successful", "Welcome, Admin!")
    else:
        messagebox.showerror("Login Failed", "Invalid username or password")


#create the main window

parent=tk.Tk()
parent.geometry("2000x1500")
parent.configure(background="#f2ffe6")
parent.title("Login Form")



# Create and place the username label and entry
username_label = tk.Label(parent, text="Userid:",

                 anchor=tk.CENTER,       
                 bg="#f2ffe6",      
                 height=1,              
                 width=30,              
                 bd=0,                  
                 font=("Arial", 16), 
                 cursor="hand2",   
                 fg="black",             
                 padx=15,               
                 pady=5,                
                 justify=tk.CENTER,    
                 relief=tk.RAISED,        
                 wraplength=250)
username_label .place(relx=0.5,rely=0.5)
username_label.pack(side = LEFT)

username_entry = tk.Entry(parent)
username_entry.pack(side = LEFT)

# Create and place the password label and entry
password_label = tk.Label(parent, text="Password:",
  anchor=tk.CENTER,       
                 bg="#f2ffe6",      
                 height=1,              
                 width=30,              
                 bd=0,                  
                 font=("Arial", 16), 
                 cursor="hand2",   
                 fg="black",             
                 padx=15,               
                 pady=5,                
                 justify=tk.CENTER,    
                 relief=tk.RAISED,        
                 wraplength=250  )
password_label.pack(side = LEFT)

password_entry = tk.Entry(parent, show="*")  # Show asterisks for password
password_entry.pack(side = LEFT)



# Create and place the login button
login_button = tk.Button(parent, text="Login", command=validate_login)
login_button.pack(side = LEFT)

# Start the Tkinter event loop
parent.mainloop()
