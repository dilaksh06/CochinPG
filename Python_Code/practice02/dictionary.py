dictionary={"a":1,"b":2,"c":3,"d":4,"e":5}
print(dictionary)
dictionary.popitem()
print(dictionary)
del dictionary["b"]
dictionary["x"] = dictionary.pop("a")
print(dictionary)


# Original dictionary

s="it is me"
def f():
    global s
    print(s)
    s="It is local"
    print(s)

f()
    
