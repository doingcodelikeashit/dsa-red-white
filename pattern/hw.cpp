#include<bits/stdc++.h>
using namespace std;
int main(){
    //Q-1
    for (int i = 1; i <= 5; i++)
    {
        for (int j = i; j >= 1; j--)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    //Q-2
    cout << endl<<"2"<<endl<<endl;
    for (int i = 5; i >= 1; i--)
    {
        for (int j = i; j <= 5; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    //Q-3
    cout << endl<<"3"<<endl<<endl;
    for (int i = 5; i >= 1; i--)
    {
        for (int j = i; j <= 5; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
    //Q-4
    cout << endl<<"4"<<endl<<endl;
    for (int i = 1; i <= 5 ; i++)
    {
        for (int j = i; j <= 5; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    //Q-5
    cout << endl<<"5"<<endl<<endl;
    for (int i = 1; i <= 5 ; i++)
    {
        for (int j = i; j <= 5; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
    //Q-6
    cout << endl<<"6"<<endl<<endl;
    for (int i = 1; i <= 5 ; i++)
    {
        int flag=1;
        for (int j = i; j <= 5; j++)
        {
            cout<< flag << " ";
            flag= !flag;
        }
        cout << endl;
    }
    //Q-7
    cout << endl<<"7"<<endl<<endl;
    for (char i = 'A'; i <= 'E'; i++)
    {
        for (char j = i; j >= 'A'; j--)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    //Q-8
    cout << endl<<"8"<<endl<<endl;
    int count=1;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = i; j > 0; j--)
        {
            cout << count << " ";
            count++;
        }
        cout << endl;
    }
}