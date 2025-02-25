#include<bits/stdc++.h>
using namespace std;

// Function to create an array
void createArray(int *a, int n) {
    for (int i = 0; i < n; i++) {
        cout << endl << "Enter " << i << " Element :: ";
        cin >> a[i];
    }
}

// Function to print the array
void printArray(int *a, int n) {
    cout << endl << "Array elements are :: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

// Function to update an element in the array
void updateArray(int *a, int n) {
    int index, value;
    cout << endl << "Enter the index to update (0 to " << n-1 << ") :: ";
    cin >> index;
    if (index >= 0 && index < n) {
        cout << "Enter the new value :: ";
        cin >> value;
        a[index] = value;
        cout << "Element at index " << index << " updated successfully." << endl;
    } else {
        cout << "Invalid index!" << endl;
    }
}

// Function to delete an element from the array
void deleteArray(int *a, int &n) {
    int index;
    cout << endl << "Enter the index to delete (0 to " << n-1 << ") :: ";
    cin >> index;
    if (index >= 0 && index < n) {
        for (int i = index; i < n - 1; i++) {
            a[i] = a[i + 1];
        }
        n--;
        cout << "Element at index " << index << " deleted successfully." << endl;
    } else {
        cout << "Invalid index!" << endl;
    }
}

// Function to print the menu
void print() {
    cout << endl << "1. Create array";
    cout << endl << "2. Print array";
    cout << endl << "3. Update array";
    cout << endl << "4. Delete array";
    cout << endl << "0. Exit" << endl << endl;
}

int main() {
    int choose, size;
    int a[100];
    bool arrayCreated = false;

    do {
        print();
        cout << " Choose :: ";
        cin >> choose;
        switch (choose) {
            case 1:
                cout << "Enter Size of array (max 100) :: ";
                cin >> size;
                if (size > 0 && size <= 100) {
                    createArray(a, size);
                    arrayCreated = true;
                } else {
                    cout << "Invalid size! Size must be between 1 and 100." << endl;
                }
                break;
            case 2:
                if (arrayCreated) {
                    printArray(a, size);
                } else {
                    cout << "Array not created yet!" << endl;
                }
                break;
            case 3:
                if (arrayCreated) {
                    updateArray(a, size);
                } else {
                    cout << "Array not created yet!" << endl;
                }
                break;
            case 4:
                if (arrayCreated) {
                    deleteArray(a, size);
                } else {
                    cout << "Array not created yet!" << endl;
                }
                break;
            case 0:
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid choice! Please try again." << endl;
                break;
        }
    } while (choose != 0);
}