# Create a class
class Person:
 def __init__(self, name, age, city):
  self.name = name
  self.age = age
  self.city = city

 def greet(self):
  print("Hello, my name is", self.name)

 def info(self):
    print(self.name, self.age, self.city)
 
 def makeList(self):
  myList = list((self.name, self.age, self.city))
  return myList
 def makeDict(self):
    myDict = dict(name = self.name, age = self.age, city = self.city)
    return myDict



  # Create an object
p1 =  Person("John", 36, "Huston")
p2 =  Person("Nazneen", 16, "Nagpur")
 
# Call the greet method
p1.greet();
p1.info();
print(p1.makeList());
print(p1.makeDict());


