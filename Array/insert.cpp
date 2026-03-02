#include <iostream>

int main() {
    int arr[10]; // Array with a capacity of 10
    int size = 5; // Current number of elements
    // Initialize first 5 elements
    arr[0] = 10; arr[1] = 20; arr[2] = 30; arr[3] = 40; arr[4] = 50;

    int newElement = 25;
    int position = 3; // Insert at index 2 (third position)

    // Check if there is enough space
    if (size >= 10) {
        std::cout << "Error: Array is full." << std::endl;
        return 1;
    }

    // Shift elements to the right from the desired position to the end
    for (int i = size - 1; i >= position; i--) {
        arr[i + 1] = arr[i];
    }

    // Insert the new element at the specified position
    arr[position] = newElement;

    // Increment the size of the array
    size++;

    // Print the modified array
    std::cout << "Array after insertion: ";
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
