#include <iostream>

int main() {
    // Declare and initialize an array of 5 integers
    int numbers[5] = {10, 20, 30, 40, 50}; //

    // Access and print array elements
    std::cout << "Array elements: ";
    for (int i = 0; i < 5; i++) {
        // Access element at index 'i'
        std::cout << numbers[i] << " ";
    }
    std::cout << std::endl;

    // Update an element
    numbers[2] = 35; // The third element (at index 2) is updated
    std::cout << "Updated third element: " << numbers[2] << std::endl;

    return 0;
}
