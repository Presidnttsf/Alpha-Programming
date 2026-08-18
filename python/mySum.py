x = 10
y = 20
c =  sum([x, y])


#custom mySum

numbers = [2, 3, 4, 5, 8, 5, 4];

def mySum (*myData):
    size = len(myData);
    print("length", size)
    total = 0;
    for val in range(size):
        print("values", val)
        total += myData[val]
        
    return total;

res = mySum(10, 20)
# print(res)

def mySumOpt(*myData):
    if len(myData) == 1 and isinstance(myData[0], (list, tuple)):
        myData = myData[0]

    total = 0

    for val in myData:
        print("value:", val)
        total += val

    return total


print(mySumOpt(numbers))
print(mySumOpt(10, 20, 30))


