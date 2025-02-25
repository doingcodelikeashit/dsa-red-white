#include <iostream>
using namespace std;

int main() {
    int arr1[] = {10, 20, 30, 40, 50};
    cout << "Task 1: For Each Loop" << endl;
    cout << "Array elements: ";
    for (int element : arr1) {
        cout << element << " ";
    }
    cout << endl << endl;

    int arr2[] = {5, 10, 15, 20, 25, 30};
    cout << "Task 2: Using the sizeof() Operator" << endl;
    int totalSize = sizeof(arr2);
    int elementSize = sizeof(arr2[0]);
    int numElements = sizeof(arr2) / sizeof(arr2[0]);
    cout << "Total size of the array: " << totalSize << " bytes" << endl;
    cout << "Size of a single element: " << elementSize << " bytes" << endl;
    cout << "Total number of elements: " << numElements << endl << endl;

    int arr3[] = {12, 45, 67, 23, 9, 54};
    int n = sizeof(arr3) / sizeof(arr3[0]);

    int largest = arr3[0];
    int smallest = arr3[0];
    for (int i = 1; i < n; i++) {
        if (arr3[i] > largest) {
            largest = arr3[i];
        }
        if (arr3[i] < smallest) {
            smallest = arr3[i];
        }
    }
    cout << "Task 3.1: Find the Largest & Smallest Element" << endl;
    cout << "Largest element: " << largest << endl;
    cout << "Smallest element: " << smallest << endl << endl;

    int arr[] = {1, 2, 3, 4, 5};
    n = sizeof(arr) / sizeof(arr[0]);

    int reversedArr[n];

    for (int i = 0; i < n; i++) {
        reversedArr[i] = arr[n - i - 1];
    }

    for (int i = 0; i < n; i++) {
        arr[i] = reversedArr[i];
    }

    cout << "Reversed array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr3[i];
    }
    cout << "Task 3.3: Sum of Array Elements" << endl;
    cout << "Sum of array elements: " << sum << endl;
}