#include <stdio.h>

int main() {
    // 1. Declaration
    int numbers[5];

    // 2. Initialization (assigning values)
    numbers[0] = 10;
    numbers[1] = 20;
    numbers[2] = 30;
    numbers[3] = 40;
    numbers[4] = 50;

    // 3. Accessing elements and Traversal using a loop
    printf("Elements in the array: ");
    for (int i = 0; i < 5; i++) {
        // Access element at index 'i'
        printf("%d ", numbers[i]);
    }
    printf("\\n");

    // 4. Updating an element
    numbers[2] = 35;
    printf("Updated third element: %d\\n", numbers[2]);

    return 0;
}
