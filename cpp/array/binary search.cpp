#include <iostream>
using namespace std;

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[size];

    cout << "Enter " << size << " elements in sorted order:\n";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    int target;
    cout << "Enter the target value to search: ";
    cin >> target;

    int start = 0;
    int end = size - 1;
    bool found = false;

    while (start <= end) {
        int mid = (start + end) / 2;

        if (arr[mid] == target) {
            cout << "Target found at index " << mid << endl;
            found = true;
            break;
        }
        else if (arr[mid] < target) {
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
    }

    if (!found) {
        cout << "Target not found in the array." << endl;
    }

    return 0;
}

/* Output
Enter the size of the array: 5
Enter 5 elements in sorted order:
1
2
3
4
5
Enter the target value to search: 3
Target found at index 2 */
