#include <stdio.h>

int main() {
    int size = 5; // Define the size of the square

    // Nested loop to print the square pattern
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
