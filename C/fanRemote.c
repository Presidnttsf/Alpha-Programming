#include <stdio.h>

void startFan (int val) {

    switch(val){

        case 'O' :
        printf("Fan is running.\n");
        break;
        case 'C' :
        printf("Fan is switched off.\n");
        break;
        
        case 1 :
        printf("Fan is running on speed 1\n");
        break;
        case 2 :
        printf("Fan is running on speed 2\n");
        break;
        case 3 :
        printf("Fan is running on speed 3\n");
        break;
        case 4 :
        printf("Fan is running on speed 4\n");
        break;
        case 5 :
        printf("Fan is running on speed 5\n");
        break;
        case 6 :
        printf("Fan is running on speed 6\n");
        break;
        default :
        printf("Fan is running on Boost");
        break;
    
    }


}



int main()
{
    char Button = 'O';
    int one = 1;  //6 watt
    int two = 2; // 12 watt
    int three = 3; // 18 watt
    int four = 4; // 24 watt
    int five  = 5; // 28 watt
    int B  = 6; // 36 watt
    
    startFan(five);

    return 0;
}
