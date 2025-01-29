#include<bits/stdc++.h>
using namespace std;
int main(){
    // Q-1
    int i=1;
    while (i<=10)
    {
        cout << i << " ";
        i++;
    }
    cout<<endl;
     // Q-2
    i--;
    while (i >= 1)
    {
        cout << i << " ";
        i--;
    }
    cout<<endl;
    i++;
    // Q-3
    int n;
    cout<< "Enter any number : ";
    cin >> n;
    while (i<=n)
    {
        cout<<i<<" ";
        i++;
    }
    // Q-4
    int m;
    cout << "enter any number :: ";
    cin >> m;
    while (m>=1)
    {
        if (m%2==1)
        {
            cout << m << " ";
        }
        m--;
    }
    // Q-5
    int start,end;
    cout<<"Enter start year :: ";
    cin >> start;
    cout << "Enter End year :: ";
    cin >> end;
    int temp=start;
    while(temp <= end){
        if ((temp % 4 == 0 && temp % 100 != 0) || (temp % 400 == 0)) {
            cout << temp << endl;
        }
        temp++;
    }

}