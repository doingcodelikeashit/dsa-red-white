#include<bits/stdc++.h>
using namespace std;
int main(){
    //Q-1
    char c = 97;
    do
    {
        cout<<c<<endl;
        c+=4;
    } while (c <= 122);
    
    //Q-2
    int num,count=0;
    cout << "\nEnter Num:: ";
    cin >> num;
    while (num > 0)
    {
        count++;
        num/=10;
    }
    cout<< "\ncount of number is :: "<< count << endl;
    //Q-3
    int number,first=0,temp,temp2,rem=0,last=0;
    cout << "\nEnter Number :: ";
    cin >> number;
    temp2=temp=number;
    count=0;
    while (number > 0)
    {
        first=number%10;
        number/=10;
    }
    while (temp > 0)
    {
        rem=temp2%10;
        temp/=10;
    }
    cout<<"\nSum of First And Last Digit = "<<(first+rem)<<endl;
}
