#include<iostream>
using namespace std;

class Array{
  private: 
  int arr[100];   // simple static array, max 100 elements
    int size;       // store size of array

public:
    // Step 2: Function to input array
    void input() {
        cout << "Enter size of array: ";
        cin >> size;
        cout << "Enter " << size << " elements: ";
        for (int i = 0; i < size; i++) {
            cin >> arr[i];  // store elements in array
        }
    }

    // Step 3: Function to find minimum
    int findMin() {
        int minVal = arr[0];           // assume first element is minimum
        for (int i = 1; i < size; i++) {
            if (arr[i] < minVal) {     // compare with minVal
                minVal = arr[i];       // update minVal if smaller element found
            }
        }
        return minVal;
    }

    // Step 4: Function to find maximum
    int findMax() {
        int maxVal = arr[0];           // assume first element is maximum
        for (int i = 1; i < size; i++) {
            if (arr[i] > maxVal) {     // compare with maxVal
                maxVal = arr[i];       // update maxVal if bigger element found
            }
        }
        return maxVal;
    }
};
int main() {
    Array arrObj;          // create object of class

    arrObj.input();                  // input array

    cout << "Minimum value: " << arrObj.findMin() << endl; // print minimum
    cout << "Maximum value: " << arrObj.findMax() << endl; // print maximum

    return 0;
}