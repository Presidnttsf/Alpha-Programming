#include <stdio.h>

// It is divisible by 400, OR
// It is divisible by 4 AND not divisible by 100


int main()
{
        int year = 2016;

        if(year % 400 == 0|| (year % 4 == 0 && year%100 != 0) ){
            printf("%d is a leap year.", year);
        }   else{
            printf("%d is not a leap year.", year);
        }
    
    return 0;
}
