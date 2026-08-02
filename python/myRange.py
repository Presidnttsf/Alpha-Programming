def my_range(start, stop=None, step=1):

    # If only one argument is passed
    if stop is None:
        stop = start
        start = 0

    # Step cannot be zero
    if step == 0:
        raise ValueError("step cannot be zero")

    # Base case for positive step
    if step > 0 and start >= stop:
        return []

    # Base case for negative step
    if step < 0 and start <= stop:
        return []

    # Recursive call
    return [start] + my_range(start + step, stop, step)

range0 = my_range(15)
range1 = range(12, 0, -1)


for i in range1:
    #print(i)
    pass

for i in range0:
    print(i)
