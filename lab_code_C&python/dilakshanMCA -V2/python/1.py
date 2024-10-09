import re
print("this is to validate the user entered password")
password=str(input("enter the password : "))
self_flag=0


while True:
	if(len(password)<=6):
		self_flag=-1
		print("this is 1")
		break
	elif not re.search("[a-z]",password):
		self_flag=-1
		print("this is 2")
		break

	elif not re.search("[A-Z]",password):
		self_flag=-1
		print("this is 3")
		break

	elif not re.search("[0-9]",password):
		self_flag=-1
		print("this is 4")
		break

	elif not re.search("[$#@]",password):
		self_flag=-1
		print("this is 4")
		break
	else:
		self_flag=0
		print("this is a valid password")
		break
		
		
if self_flag==-1:
	print ("this is not a valid password")
