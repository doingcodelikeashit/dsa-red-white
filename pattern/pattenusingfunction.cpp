#include <iostream>
using namespace std;

void rightHalfPyramid(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}

void leftHalfPyramid(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            cout << "  ";
        }
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}

void fullPyramid(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

void invertedRightHalfPyramid(int n) {
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}

void invertedLeftHalfPyramid(int n) {
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= n - i; j++) {
            cout << "  ";
        }
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}

void invertedFullPyramid(int n) {
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

void rhombusPattern(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        for (int j = 1; j <= n; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

void diamondPattern(int n) {
    fullPyramid(n);
    invertedFullPyramid(n - 1);
}

void hourglassPattern(int n) {
    invertedFullPyramid(n);
    fullPyramid(n - 1);
}

void hollowSquarePattern(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i == 1 || i == n || j == 1 || j == n)
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;
    }
}

void hollowFullPyramid(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            if (j == 1 || j == 2 * i - 1 || i == n)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
}

void hollowInvertedFullPyramid(int n) {
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            if (j == 1 || j == 2 * i - 1 || i == n)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
}

void floydsTriangle(int n) {
    int num = 1;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << num++ << " ";
        }
        cout << endl;
    }
}

void pascalsTriangle(int n) {
    for (int i = 0; i < n; i++) {
        int num = 1;
        for (int j = 0; j <= i; j++) {
            cout << num << " ";
            num = num * (i - j) / (j + 1);
        }
        cout << endl;
    }
}

int main() {
    int choice, n;
    while (true) {
        cout << "\nChoose a pattern (0 to Exit): ";
        cin >> choice;
        if (choice == 0) break;
        cout << "Enter number of rows: ";
        cin >> n;
        switch (choice) {
            case 1: rightHalfPyramid(n); break;
            case 2: leftHalfPyramid(n); break;
            case 3: fullPyramid(n); break;
            case 4: invertedRightHalfPyramid(n); break;
            case 5: invertedLeftHalfPyramid(n); break;
            case 6: invertedFullPyramid(n); break;
            case 7: rhombusPattern(n); break;
            case 8: diamondPattern(n); break;
            case 9: hourglassPattern(n); break;
            case 10: hollowSquarePattern(n); break;
            case 11: hollowFullPyramid(n); break;
            case 12: hollowInvertedFullPyramid(n); break;
            case 13: floydsTriangle(n); break;
            case 14: pascalsTriangle(n); break;
            default: cout << "Invalid choice!" << endl;
        }
    }
    return 0;
}
