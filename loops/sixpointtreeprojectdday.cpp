#include<bits/stdc++.h>
using namespace std;
int main(){
    int sum=0;
    int n;
    cout << "Enter N : ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        sum+=i;
    }
    cout<<" \n Sum of 1 to N number is :: "<<sum<< endl;

    //Q-2
    sum=1;
    int n1;
    cout << "Enter N : ";
    cin >> n1;
    for (int i = 2; i <= n1; i++)
    {
        sum*=i;
    }
    cout<<" \n Factorial  of  N number is :: "<<sum<< endl;

    //Q-3
    int num;
    cout<<"Enter Number:: ";
    cin >> num;
    for (int i = 1; i <= 10; i++)
    {
        cout << " " << num << " * " << i <<" = " <<(num*i)<<endl;
    }
    

}