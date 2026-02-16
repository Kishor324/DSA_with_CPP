#include<iostream>

 using namespace std;

 int main()
 {
  
    int  i, j ;

 int arr[10] = { }; // Max size 10
    int current_size = 5;          // Track the number of valid elements
    int pos_to_delete = 2;         // Index to delete (value 3)

    // Shift elements to the left, overwriting the element at pos_to_delete
    for (int i = pos_to_delete; i < current_size - 1; ++i) {
        arr[i] = arr[i + 1];
    }

    // Decrement the logical size of the array
    current_size--;
    
    return 0;
 };