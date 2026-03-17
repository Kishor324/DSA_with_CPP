#include <iostream>
using namespace std;

int main() {
    // 1. Declaration and Initialization
    int arr[5] = {10, 20, 30, 40, 50};
    
    // 2. Accessing Elements
    cout << "First element: " << arr[0] << endl; // Output: 10
    
    // 3. Updating an Element
    arr[2] = 35; // Changes 30 to 35
    
    // 4. Traversing/Printing the Array
    cout << "Array elements: ";
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    // Output: 10 20 35 40 50 
    
    return 0;
}
