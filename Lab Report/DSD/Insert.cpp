#include <iostream>
using namespace std;

int main() {
    int arr[10] = {101, 102, 103, 104, 105};
    int N = 5; 
    int k = 2; 
    int ITEM = 999; 

    for (int j = N; j > k; j--) {
        arr[j] = arr[j - 1];
    }

    arr[k] = ITEM; 
    N++; 

    for (int i = 0; i < N; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
