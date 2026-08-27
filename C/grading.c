#include <stdio.h>
#include <string.h>

#define MAX_MARKS 100
#define GRADE_A 90
#define GRADE_B 80
#define GRADE_C 70
#define GRADE_D 60
#define MIN_MARKS 35

void checkGrade(int marks){


if (marks < 0 || marks > MAX_MARKS) {
    printf("Invalid marks");
}
else if (marks >= GRADE_A) {
    printf("Grade A");
}
else if (marks >= GRADE_B) {
    printf("Grade B");
}
else if (marks >= GRADE_C) {
    printf("Grade C");
}
else if (marks >= GRADE_D || marks >= MIN_MARKS
) {
    printf("Grade D");
} else {
    printf("Grade F");
}
}

int main()
{
        float score; 
        printf("Please enter your marks: ");
        if(scanf("%f", &score) != 1){
            printf("Invalid input");
        }
        checkGrade(score);
    return 0;
}
