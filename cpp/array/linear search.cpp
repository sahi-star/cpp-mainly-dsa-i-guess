#include <iostream>
using namespace std;

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[size];
    cout << "Enter " << size << " elements: ";
    for(int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    int target;
    cout << "Enter the target element to search: ";
    cin >> target;

    bool found = false;
    for(int i = 0; i < size; i++) {
        if(arr[i] == target) {
            found = true;
            cout << "Target is found at index " << i << endl;
            break;
        }
    }

    if(!found) {
        cout << "Target is not found in the array." << endl;
    }

    return 0;
}


/* Output
  Enter the size of the array: 3
Enter 3 elements: 1
2
3
Enter the target element to search: 2
Target is found at index 1 */
