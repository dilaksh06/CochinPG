
print("accessing global variable inside a function")
s="It's global"
def f():
    print(s)
f()

print("behavior of global and local variable")

y="It's global"

def a():
    y="It's local"
    print(y)
a()


print("behavior of global and local variable")

ab="It's globsl"
def dd():
    ab="It's local"
    print(ab)
print(ab)
dd()



print("behavior of global and local variable")

sde="It's global"

def ads():
    print(sde)
    sde="It's local"
    print(sde)
    




