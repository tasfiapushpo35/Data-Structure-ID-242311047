#include <iostream>
using namespace std;

int main() {
    int arr[10] = {101, 102, 103, 104, 0, 0}; 
    int N = 4; 
    int k = 2; 
    int ITEM = 102;

    for (int j = N; j > k; j--) {
        arr[j] = arr[j - 1]; 
    }
    arr[k] = ITEM; 
    N++; 

    cout << "After insertion: ";
    for (int i = 0; i < N; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    int delete_position = 3; 
    for (int i = delete_position - 1; i < N - 1; i++) {
        arr[i] = arr[i + 1];
    }
    N--; 

    cout << "After deletion: ";
    for (int i = 0; i < N; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
