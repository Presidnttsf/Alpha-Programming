# 20. Vowel or Consonant
# Take a character and check whether it is a vowel or consonant.

# a, e, i, o, u vowels other than that consonant


def isConsonant (char):
    if(char in "0123456789"):
        return "invalid input";

    if(char == 'a' or char == 'e' or char =='i' or char =='o' or char =='u' or char == 'A' or char == 'E' or char =='I' or char =='O' or char =='U'):
        return "vowel";
    
    else:
        return "consonant";

# char = input("Please enter Alphabet: ");
        

# print(isConsonant(char));


x = "a";
# print(ord(x))
# print(ord('a'))
# print(ord('A'))
# print(x.isalpha())


isVowel = "aeiouAEIOU";
char = 'A';

for val in isVowel:
    if(char in isVowel):
       print("vowel");
       break;
    else:
      print("consoant");
      break;

