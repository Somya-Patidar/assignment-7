#include <stdio.h>

int findMax(int arr[], int n) {
    if (n == 1){
     return arr[0];
    }
    int max = findMax(arr, n - 1);
    return (max > arr[n - 1]) ? max : arr[n - 1];
}

int main() {
    int arr[] = {10, 20, 4, 45, 32, 67};
    int n = sizeof(arr) / sizeof(arr[0]);
    int max = findMax(arr, n);
    printf("The largest element of the array is: %d\n", max);

    return 0;
}
