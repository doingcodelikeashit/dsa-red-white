#include<bits/stdc++.h>
using namespace std;
int main(){
    int a=50;
    int *ptr = &a;
    int **ptr2 = &ptr;
    int ***ptr3 = &ptr2;
    cout<<endl<<*ptr;
    cout<<endl<<**ptr2;
    cout<<endl<<***ptr3<<endl;
}