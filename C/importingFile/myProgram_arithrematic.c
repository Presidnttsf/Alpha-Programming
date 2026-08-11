#include <stdio.h>
#include <math.h>

int addition (int a , int b, int c){
    return a + b + c;

};

int substraction (int a , int b){
    return a - b;

};

float division (float dividend , float divisor){
    
    return dividend / divisor;

};

float modulo (float dividend , float divisor){

    return fmod(dividend, divisor);

};

float avg (float a, float b, float c){
    return (a+b+c)/3;
};
