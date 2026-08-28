# Check whether a character is:
# Uppercase
# Lowercase
# Digit
# Special character


def checkType(char):
    if (char.isalpha()):
        if(char == char.upper()):
         return "Upper Case";
        else:
         return "Lower Case";
    elif(char.isdigit()):
        return "Digit";
    else:
        return "special character";


char = input("Please enter character: ");
print(checkType(char));
