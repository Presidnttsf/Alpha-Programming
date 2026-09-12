#include <stdio.h>


int likeCounter(int *val){
    
    return  ++(*val);

}

void swap (int *val, int *val1){

    int temp = *val;
        *val = *val1;
        *val1 = temp;
}

int main()
{
    int count = 0;
    int val = 10;
    int val1 = 20;
    
    printf("Before swap %d %d\n", val, val1);
    // printf("%d\n", likeCounter(&count));
    // printf("%d\n", likeCounter(&count));

    swap(&val, &val1);
    printf("After swap %d %d\n", val, val1);




    return 0;
}
