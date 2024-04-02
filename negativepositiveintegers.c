#include <stdio.h>

void partition_negative(int arr[], int n) {
    int j = 0;  // Index to keep track of the boundary between negative and positive numbers
    for (int i = 0; i < n; i++) {
        if (arr[i] < 0) {
            // Swap arr[i] and arr[j] to move the negative number to the left
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            j++;
        }
    }
}

int main() {
    int arr[] = {-12, 11, -13, -5, 6, -7, 5, -3, -6};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    partition_negative(arr, n);

    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
