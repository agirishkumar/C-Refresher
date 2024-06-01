#include<stdio.h>

int getMax(int* arr, int n){
    int max = arr[0];
    for (int i = 1; i < n; i++){
        if (arr[i] > max){
            max = arr[i];
        }
    }
    return max;
}

int main(){

    int arr[10] = {78,5580,65,98,34,57,90,23,45,78};

    printf("Largest element in array is: %d", getMax(arr, 10));

    return 0;
}