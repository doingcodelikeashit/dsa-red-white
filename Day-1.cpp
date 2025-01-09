#include<iostream>
using namespace std; // std is class
int main(){
    cout << "Hello World" << endl; // cout is object of std //endl used to break the line (end the line) in console
    //Datatypes
    int a = 10;
    float b = 1.3;
    char c = 'a';
    string s = "Prince"; // we can also do chat[7]
    bool x = true;
    const float pi = 3.14;// we can not change constant variable's value // and we have to initilize value while defining variable

    //arithmatec operators 
    int vinit = 20;
    int rutvik =10;

    cout << vinit + rutvik << endl;
    cout << vinit - rutvik << endl;
    cout << vinit * rutvik << endl;
    cout << vinit / rutvik << endl;
    cout << vinit % rutvik << endl; // mod returns reminder of division

    char name[5]="kunj";//home work -- find out why we cant do size of char array = number of characters ( replace 5 with 4 for error )
    cout << name[0] << endl;
    cout << name[1] << endl;
    cout << name[2] << endl;
    cout << name[3] << endl;
    cout << name[4] << endl;
}