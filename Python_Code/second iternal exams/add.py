class Vector:
    def __init__(self, x, y):
        self.x = x
        self.y = y

    # Define the __add__ method to add two Vector objects
    def __add__(self, other):
        # Adding corresponding components of two vectors
        return Vector(self.x + other.x, self.y + other.y)

    def __repr__(self):
        return f"Vector({self.x}, {self.y})"

# Create two Vector objects
v1 = Vector(2, 3)
v2 = Vector(4, 1)
v3=Vector(5,1)

# Add the two Vector objects using the + operator
v3 = v1 + v2+ v3

print(v3)
