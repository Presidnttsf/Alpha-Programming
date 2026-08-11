#include <stdio.h>
#include "greets.c"
#include "./myProgram/arithrematic.c"


int main() {

printf("I am main function\n");
salam();
paji();
namaste();
int addRes = addition(10, 2, 3);
printf("Addition = %d\n", addRes);

int subRes = substraction(10,(2+3));
printf("Substraction = %d\n", subRes);

float modRes = modulo(2,50 );
printf("Modulous = %f\n", modRes);

float divRes = division(25, 50 );
printf("Division = %f\n", divRes);

  return 0;
}


