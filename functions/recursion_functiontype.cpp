#include <iostream>
using namespace std;
void greet() {
    cout << "Hello! Welcome to the factorial calculator." << endl;
}
int getNumber() {
    int num;
    cout << "Enter a number to find its factorial: ";
    cin >> num;
    return num;
}
void displayFactorial(int num, int result) {
    cout << "The factorial of " << num << " is " << result << endl;
}
int factorial(int num) {
    if (num == 0 || num == 1) {
        return 1;
    } else {
        return num * factorial(num - 1);
    }
}

int main() {
    greet();
    int number = getNumber();
    int result = factorial(number);
    displayFactorial(number, result);
}