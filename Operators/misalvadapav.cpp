#include<bits/stdc++.h>
using namespace std;
int main(){
    int a=2,b=3;
    int *p=&a;
    (a<b)?cout<<"a is min"<<endl:cout<<"b is min"<<endl;
    cout << sizeof(a)<< endl;
    cout << "address of a is ::" << p;
}