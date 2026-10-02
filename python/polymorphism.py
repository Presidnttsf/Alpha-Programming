class Parent:
    def __init__(self, name, city, age):
        print("parent is executed")
        self.name = name
        self.city = city
        self.age = age

    def printDetails(self):
        print("from parent")
        print(self.name, self.city, self.age)


class Child(Parent):
    def __init__(self, childName, parentName, city, age):
        print("child is executed")
        super().__init__(parentName, city, age)
        self.childName = childName

    def printDetails(self):
        print(
            "ParentName:", self.name,
            "childname:", self.childName,
            self.city,
            self.age
        )


class GrandChild(Child):
    def __init__(self, childName, parentName, city, age, grandChildName):
        print("grandchild is executed")
        super().__init__(childName, parentName, city, age)
        self.grandChildName = grandChildName

    def printDetails(self):
        print(
            "ParentName:", self.name,
            "childname:", self.childName,
            self.city,
            self.age,
            "grandchildname:", self.grandChildName
        )


p = Child("child name", "tsf", "Mumbai", 25)

p.country = "India"

print(p.country)
print(p.name)
print(p.childName)
p.printDetails()


g = GrandChild("CN", "p", "C", 10, "b")
g.printDetails()
