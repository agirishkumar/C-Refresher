#include<stdio.h>

int binarySearch(int arr[], int l, int r, int target) {
    while (l <= r) {
        int mid = l + (r - l) / 2;

        if (arr[mid] == target) {
            return mid;
        } else if (arr[mid] < target) {
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }

    return -1; // Target not found
}

int main() {
    int arr[] = {3, 6, 9, 15, 28, 36, 49, 56, 63};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 56;

    int idx = binarySearch(arr, 0, n - 1, target);

    if (idx != -1) {
        printf("Target found at index %d\n", idx);
    } else {
        printf("Target not found in the array.\n");
    }

    return 0;
}
