#check whether a number is divisible by both 5 and 11


def divisibilityCheck(num):
    if(num%5 == 0 and num%11 == 0):
        print("Number is fully divisible by 5 and 11");
    elif(num%5 == 0):
        print("Number is fully divisible by only 5");
    elif(num%11 == 0):
        print("Number is fully divisible by only 11");
    else:
        print("Number is not fully divisible by either number.");


x = int(input("Please enter the number: "));

divisibilityCheck(x);
divisibilityCheck(112);
