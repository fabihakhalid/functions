#include <iostream>
using namespace std;

int findSmallest(int arr[], int size) {
    int smallest = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < smallest) smallest = arr[i];
    }
    return smallest;
}

int main() {
    int arr[] = {3, 1, 4, 1, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "Smallest number: " << findSmallest(arr, size) << endl; // Result: 1
   return 0;
