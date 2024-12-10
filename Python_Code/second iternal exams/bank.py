class BankAccount:
    def __init__(self,account_number,account_holder,balance=0):
        self.account_number=account_number
        self.account_holder=account_holder
        self.balance=balance

    def deposit(self,amount):
        self.balance=self.balance+amount
        print(f"Deposited {amount}. New balance: {self.balance}")
    def withdrawal(self,amount):
        if (amount>self.balance):
             self.balance=amount-self.balance
        else:
             self.balance=self.balance-amount
        print(f"Withdrwa {amount}. New balance: {self.balance}")
    
        
            
    def get_balance(self):
        return(self.balance)

class SavingsAccount(BankAccount):
    def __init__(self,account_number,account_holder,balance,interest_rate=0.5):
        super().__init__(account_number,account_holder,balance)
        self.interest_rate=interest_rate
    def apply_interest(self):
        balance=self.balance+(self.balance*0.5)
        print(f"the balance wiht the interest rate is {balance}")


dilaksh=SavingsAccount(71,"dilakshan",5000)
dilaksh.deposit(4000)
dilaksh.withdrawal(4000)
dilaksh.apply_interest()

print("\n\nthis is second person\n")

# Create a SavingsAccount instance
account = SavingsAccount(account_number="12345678", account_holder="Alice", balance=1000, interest_rate=5)

# Deposit an amount and check the balance
account.deposit(500)  # Should add 500 to the balance

# Withdraw an amount and check the balance
account.withdrawal(200)  # Should deduct 200 from the balance

# Apply interest and display the updated balance
account.apply_interest()  # Should apply a 5% interest
