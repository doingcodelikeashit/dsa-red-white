#include<bits/stdc++.h>
using namespace std;

int add(int a, int b){
    return a + b;
}

int sub(int a, int b){
    return a - b;
}

int mul(int a, int b){
    return a * b;
}

float divi(float a, float b){
    return a / b;
}

int mod(int a, int b){
    return a % b;
}

void print(){
    cout << "Press 1 for +\n";
    cout << "Press 2 for -\n";
    cout << "Press 3 for *\n";
    cout << "Press 4 for /\n";
    cout << "Press 5 for %\n";
    cout << "Press 0 for Exit\n";
}

int main(){
    int a, b, choose;
    
    print();
    
    cout << "Enter choice: ";
    cin >> choose;

    while(choose != 0){
        cout << "Enter a & b: ";
        cin >> a >> b;

        switch(choose){
            case 1:
                cout << endl << add(a, b) <<endl;
                break;
            case 2:
                cout << sub(a, b)<<endl;
                break;
            case 3:
                cout << mul(a, b)<<endl;
                break;
            case 4:
                cout << divi(a, b)<<endl;
                break;
            case 5:
                cout << mod(a, b)<<endl;
                break;
            default:
                cout << "Enter valid input\n";
                break;
        }

        print();
        cout<<"\n Enter choice:: ";
        cin >> choose;
    }

    return 0;
}
