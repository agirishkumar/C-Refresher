#include<stdio.h>
#include<math.h>

int main(){
    
    int n;
    int flag = 1;
    printf("Enter a natural number:");
    scanf("%d", &n);

    for (int i = 2; i * i <= n ; i++){
        if (n % i == 0){
            flag = 0;
            break;
        }        
    }

    if (flag == 1){
        printf("%d is a prime number", n);
    }
    else{
        printf("%d is not a prime number", n);
    }

    return 0;
}