student = {
    "name": "Rahul",
    "math": 25,
    "science": 62,
    "english": 31
}

totalMarks = student["math"] + student["science"] + student["english"]
percentage = totalMarks/300*100
formatedPercentage = f'{totalMarks/300*100:.2f}%'
print (totalMarks, percentage)

if percentage >= 40:
    print("pass")
else:
    print("fail")
