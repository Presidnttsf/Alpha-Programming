#include <stdio.h>

void pyramid (int num) {
    for (int i = 1; i <= num; i++) {
        for (int space = 1; space <= num - i; space++) {
            printf("   ");
        }

        for (int star = 1; star <= 2 * i - 1; star++) {
            printf(" * ");
        }

        printf("\n");
    }
}


void squareWithDiag (int n){
    for(int i=1; i<=n; i++){

        for(int j=1; j<=n; j++){
            if(i==1 || i==n || j==1 || j==n || i==j || j == n-i+1){

            printf(" * ");
            
            }
            else if(i==n/2+1 && j==2 || j==n/2+1 && i==2 || j==n-1 && i==n/2+1 || i==n-1 && j==n/2+1){
                printf(" A ");
            }           
            
            else{
                printf("   ");
            }
        }
            printf("\n");
    }
}


int main() {
    int num = 5;

    square(7);

    return 0;
}
