#include<bits/stdc++.h>
using namespace std;
int main(){
    //q-1
    int n;
    cout<<"Enter Size of array = ";
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cout<<"\n Enter "<<i<<" element :: ";
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout<<" Element :: "<<a[i]<<endl;
    }
    //q-2
    cout<<"Enter Size of array = ";
    cin >> n;
    int a2[n];
    int sum=0;
    for (int i = 0; i < n; i++)
    {
        cout<<"\n Enter "<<i<<" element :: ";
        cin >> a2[i];
    }
    for (int i = 0; i < n; i++)
    {
        sum+=a2[i];
    }
    cout<<"\n AVG of array is :: " << (float)(sum/n);
    //Q-3
    cout<<"Enter Size of array = ";
    cin >> n;
    int a3[n],a4[n];
    cout<<"\n Enter 1st array :: \n";
    for (int i = 0; i < n; i++)
    {
        cout<<"\n Enter "<<i<<" element :: ";
        cin >> a3[i];
    }
    cout<<"\n Enter 2nd array :: \n";
    for (int i = 0; i < n; i++)
    {
        cout<<"\n Enter "<<i<<" element :: ";
        cin >> a4[i];
    }
    cout<<"\n Addition of both is :: \n";
    for (int i = 0; i < n; i++)
    {
        cout<<i<<"th sum :: "<<(a3[i]+a4[i])<<endl;
    }
}