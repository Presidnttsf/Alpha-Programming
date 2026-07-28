def factorial(n):
    if n == 0 or n == 1:
        return 1;
    res = n * factorial(n-1);
    #print(n, "x", n-1, "=", res);
    return res;

#factorial(5);


def f_celcius (temp):
    res = (temp-32) * 5/9;
    return res;

print(f_celcius(98.6));

def gravity():
    pass;
    


def avg (n1, n2, n3, n4):
    sum = n1 + n2 + n3 + n4;
    res = sum / 4;
    return res;

print(avg(98, 95, 94, 92));
