thisdict = {
"brand": "Ford",
"model": "Mustang",
"year": 1964
}
x = thisdict.items()

car = {
"brand": "Ford",
"model": "Mustang",
"year": 1964
}
x = car.items()
print(x) #before the change
car["year"] = 2020
car.pop("brand")
print(x)


for x in car:
    print(x)



sets={1,2,3,4}
print(sets)
print(len(sets))
sets.pop()
print(sets)
