#include<iostream>
using namespace std;

class secondlargest{

  private: 
  int arr[100];   // 100 element sama ko data store garna sakxa
    int size;       // store size of array

public:
    void input() {
        cout << "Enter size of array: ";
        cin >> size;
        cout << "Enter " << size << " elements: ";
        for (int i = 0; i < size; i++) {
            cin >> arr[i];  // store elements in array
        }
    }
     int findMax() {
        int maxVal = arr[0];           // assume first element is maximum
        for (int i = 1; i < size; i++) {
            if (arr[i] > maxVal) {     // compare with maxVal
                maxVal = arr[i];       // update maxVal if bigger element found
            }
        }
        return maxVal;
    }

int findsecondmax() {
    int maxVal = findMax();   // get maximum value
    int secondMax =  arr[0];     // very small number

    for (int i = 0; i < size; i++) {
        if (arr[i] < maxVal && arr[i] > secondMax) {
            secondMax = arr[i];
        }
    }
    return secondMax;
}
};

int main(){

    secondlargest arrObj;          // create object of class

    arrObj.input();                  // input array

    cout << "Maximum value: " << arrObj.findMax() << endl; // print minimum
    cout << "second largest value: " << arrObj.findsecondmax() << endl; // print second minimun
    return 0;
}
