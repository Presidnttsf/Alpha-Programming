
def reverseStr(strValue):
    size = len(strValue)
    reversed = []
    for index in range(size-1,-1,-1):
        # print(strValue[index], end=" ")
        reversed.append(strValue[index])
    return " ".join(reversed);


print(reverseStr("Tauseef."))

