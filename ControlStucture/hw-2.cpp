#include<bits/stdc++.h>
using namespace std;
int main(){
    int a=1,b=2,c=3,d=0,e=5;
    if (a < b && a <c && a < d && a<< e)
    {
        cout << " a is min ";
    }
    if (b < a && b < c && b < d && b << e)
    {
        cout << " b is min ";
    }
    if (c < a && c <b && c < d && c << e)
    {
        cout << " c is min ";
    }
    if (d < a && d <b && d < c && d< e)
    {
        cout << " d is min ";
    }
    if (e < a && e < b && e < c && e<< d)
    {
        cout << " e is min ";
    }
}