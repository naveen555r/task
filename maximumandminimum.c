#include <stdio.h>

int main() {
    int arr[] = {10, 5, 8, 3, 15, 12};
    int n = sizeof(arr) / sizeof(arr[0]); 
    int max = arr[0]; 
    int min = arr[0]; 

    
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    printf("Maximum element in the array: %d\n", max);
    printf("Minimum element in the array: %d\n", min);

    return 0;
}

