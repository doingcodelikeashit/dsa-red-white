#include<bits/stdc++.h>
using namespace std;
int main(){
    int a=3,b=4,c=5;
    bool flag=true;
    if(a<b && a<c){
        cout<<"and \n";
    }
    if(a>b || a>c){
        cout<<"or \n";
    }
    cout << !flag;
}