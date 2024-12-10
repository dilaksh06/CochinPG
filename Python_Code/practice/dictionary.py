dictionary={"a":1,"b":2,"c":4,"d":6}
print(dictionary)
dicts=dict(abc=3,bdf=5)
print(dicts)
a=dictionary.keys()
print(a)

print("loop dictionary")
for i in dictionary:
    print(i)

print("print .items()")

for x,y in (dictionary.items()):
    print(x,y)

print(dictionary.items())
for i in a:
    print(i)

print(dictionary)
x=dictionary.pop("a")
print(dictionary)
dictionary.popitem()
print(dictionary)
del dictionary["b"]
print(dictionary)

#del dictionary
print(dictionary)
dictionary.clear()
print(dictionary)


print("\n\n")

thislist=["a",4,"cd",45]
print (thislist)

sd=(list(("a", "b","c","d","e","f",45)))

print("\n\n")
[print (x) for x in sd]
print("\n\n")
print(sd[1:])



for i in sd:
    print(i)


print("the tuple \n\n")

tuples=("a","b","c")
print(tuples)

tuples1=tuple(("a","b","c","d"))

print(tuples1)
