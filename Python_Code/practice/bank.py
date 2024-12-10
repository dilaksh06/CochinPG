class Bank:
    bank="DFCC Bank"
    def __init__(self,name,balance):
        self.name=name
        self.balance=balance
    def deposits(self,amt):
        self.total=self.balance+amt
        print(f"the total after the deposite is INR.{self.total}")
        print (f"thanks for banking wiht us")
    def witdrwal(self,amt):
        if (self.balance>=amt):
            self.total=self.balance-amt
            print(f"the balance after withdrwal is INR.{self.total}")
            print (f"thanks for banking wiht us")
        else:
            print(f"the current balance in the account is INR.{self.balance} so try the amont less than that")

name=(input("Enter ur name : "))
amount=int(input("enter the amount to depostis or withdreal : "))
      
person=Bank(name,4000)
person.deposits(amount)

person.witdrwal(amount)
