#include<stdio.h>

int main(){

    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int reverse = 0;

    while (n > 0){
        reverse = reverse * 10 + n % 10;
        n = n / 10;
    }

    printf("Reversed number: %d", reverse);


    return 0;
}