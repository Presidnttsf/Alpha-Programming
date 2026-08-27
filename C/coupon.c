#include <stdio.h>


int main()
{

int couponCode;

printf("Enter coupon:\n");
printf("1. FIRSTEAT100\n");
printf("2. HUNGRY70\n");
printf("3. SUNDAYFEAST\n");

scanf("%d", &couponCode);

switch(couponCode) {
    case 1:
        printf("FIRSTEAT100 - You will get 100 rs flat off");
        break;

    case 2:
        printf("HUNGRY70 - You will get 70 rs off");
        break;

    case 3:
        printf("SUNDAYFEAST - You will get free delivery");
        break;

    default:
        printf("Invalid coupon");
}

    return 0;
}
