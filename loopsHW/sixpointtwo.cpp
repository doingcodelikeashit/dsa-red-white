#include<bits/stdc++.h>
using namespace std;
int main(){
    // Q-1
    int i=1;
    do
    {
        cout << i << " ";
        i++;
    } while (i<=10);
    cout << endl;
    // Q-2
    for (int j = 10; j >= 1; j--)
    {
        cout << j << " ";
    }
    cout << endl;
    // Q-3
    cout<<"enter n :: ";
    int n1,k=0;
    cin >> n1;
    do
    {
        if (k%2==0)
        {
            cout<< k << ' ';
        }
        
        k++;
    } while ( k<=n1);
    
    cout << endl;
    // Q-4
    int n;
    cout << "Enter N :: ";
    cin >> n;
    int a=0,flag=0;
    int b=1;
    cout << a << " " << b << " ";
    for (int i = 1; i <= n-2; i++)
    {
        flag=a+b;
        cout<< flag << " ";
        a=b;
        b=flag;
    }
    cout << endl;
}