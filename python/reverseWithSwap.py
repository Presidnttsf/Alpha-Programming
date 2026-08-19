a = 10
b = 20

# print(f"line 3=>, a: {a}, b: {b}")

temp = a;
a = b;
b = temp;

# print(f"line 10=>, a: {a}, b: {b}")

numbers = [10, 20, 30, 40, 50]


def reverseWithSwap(data):

    left = 0
    right = len(data) - 1

    while left < right:
        # print(left, right, "=>", data[left], data[right], "=", data[right], data[left])
    
        data[left], data[right] = data[right], data[left]

        left += 1
        right -= 1
    return data;
print(reverseWithSwap(numbers))


def reverseWithSwapTemp(data):
    if len(data) <= 1:
        return data;
    left = 0
    right = len(data) - 1

    while left < right:
        # print(left, right, "=>", data[left], data[right], "=", data[right], data[left])
        temp = data[left]
        data[left]=data[right]
        data[right]=temp
        

        left += 1
        right -= 1
    return data;
print(reverseWithSwapTemp(["N", "a", "z", "n", "e", "e", "n"]))
print(reverseWithSwapTemp(["N", "Z"]))
print(reverseWithSwapTemp(["N"]))

# how counts and length work
myLetter = [];
print(len(myLetter))



