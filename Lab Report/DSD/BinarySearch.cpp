#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int target) {
    int low = 0;
    int high = n - 1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] == target)
            return mid;
        else if (arr[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }

    return -1; 
}

int main() {
    int arr[6] = {101, 102, 103, 104, 105, 106};
    int n = 6;
    int target = 103;

    int res = binarySearch(arr, n, target);

    if (res != -1)
        cout << "Found at index: " << res << "\n";
    else
        cout << "Not found\n";

    return 0;
}
