#include<stdio.h>

typedef struct complexNumber{
    int real;
    int imag;
}complex;

complex add(complex x, complex y);

int main(){

    complex x,y,z;

    x.real = 5;
    x.imag = 6;

    y.real = 7;
    y.imag = 8;

    z = add(x,y);

    printf("\n sum = %d + %di", z.real, z.imag);

    return 0;
}

complex add(complex x, complex y){

    complex z;
    z.real = x.real + y.real;
    z.imag = x.imag + y.imag;
    return z;
}