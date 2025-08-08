#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int largest = arr[0];
    int secondLargest = arr[0];

    for (int i = 1; i < 5; i++) {
        
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } 
        else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    if (largest == secondLargest)
        cout << "Not  found." << endl;
    else
        cout << "Second largest number is: " << secondLargest << endl;

    return 0;
}
