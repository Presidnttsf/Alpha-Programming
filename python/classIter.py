class MyClass:
    checkVar = "i am check"
    num = 105

    def __init__ (self, name, age, pob):
        self.name = name
        self.age = age
        self.pob = pob
    
    def __str__ (self):
        return f"Hi {self.name}, this is from magic method."
    
    def greet(self):
        return "Hello " + self.name
    
    def welcome(self):
        message = self.greet()
        print(message + " Welcome to Alpha programming" )
p1 = MyClass("Rupesh", 18, "Nagpur");

print(p1.greet())
print("now you are" , p1.age)
print("and your pob is", p1.pob)
p1.welcome()
p1.country = "India"
print(p1.country)
print(p1)

class Company:
    def __init__(self, employees):
        self.employees = employees

    def __iter__(self):
        return iter(self.employees)

c1 = Company(["Emil", "Tobias", "Linus"])
print("Emil" in c1)  # Output: True

# This also allows you to loop directly over the object:
for employee in c1:
    print(employee)


