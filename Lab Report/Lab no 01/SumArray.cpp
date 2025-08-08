#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;
    cout << "Enter array size: ";
    cin >> n;

    int arr[n];

    cout << "Enter numbers:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
    }

    cout << "Total sum = " << sum << endl;

    return 0;
}

