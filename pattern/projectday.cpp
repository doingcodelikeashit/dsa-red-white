#include<bits/stdc++.h>
using namespace std;
int main(){
    //Q-1
    cout << "\n q-1 \n";
    for (int i = 41; i <= 45; i++)
    {
        for (int j = 41; j <= i; j++)
        {
            cout<<j<<" ";
        }
        cout << endl;
    }
    //Q-2
    cout << "\n q-2 \n\n";
    int count=11;
    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout<<count<<" ";
            count++;
        }
        cout << endl;
    }
    //Q-3
    cout << "\n q-3 \n\n";
    
    for (int i = 5; i >= 1; i--)
    {
        for (int s = 1; s <= i-1; s++)
        {
            cout<<"  ";
        }
        
        for (int j = i; j <=5 ; j++)
        {
            cout<<j<<" ";
        }
        cout << endl;
    }

    //Q-4
    cout << "\n q-4 \n\n";
    int flag=1;
    for (int i = 5; i >= 1; i--)
    {
        for (int s = i; s <= 5; s++)
        {
            cout<<" ";
        }
        int flag=1;
        for (int j = i; j >=1 ; j--)
        {
            cout<<flag;
            flag = !flag;
        }
        cout << endl;
    }

    //Q-5
    cout << "\n q-5 \n\n";
    int temp=1;
    for (int i = 5; i >= 1; i--)
    {
        for (int s = 1; s <= i-1; s++)
        {
            cout<<"  ";
        }
        
        for (int j = i; j <=5 ; j++)
        {
            cout<<j<<" ";
        }

        for (int k = 4; k >= i; k--)
        {
            cout<< k << " ";
        }
        cout << endl;
    }

    //Q-6
    cout << "\n q-6 \n\n";
    temp = 8;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout<<j<<" ";
        }
        for (int k = 1; k <= temp; k++)
        {
            cout<<"  ";
        }
        for (int l = i; l >= 1; l--)
        {
            cout<<l<<" ";
        }
        
        temp-=2;
        cout<<endl;
    }
    //Q-7
    cout << "\n q-7 \n\n";
    for (int i = 1; i <= 6; i++)
    {
        if (i==1)
        {
            for (int j = 0; j < 5; j++)
            {
                cout << "* ";
            }
            cout<<endl;
        }
        if (i==2)
        {
            cout<<"* ";
            for (int j = 0; j < 6; j++)
            {
                cout<<" ";
            }
            cout<<"*";
            cout<<endl;
        }
        if (i==3)
        {
            for (int j = 0; j < 5; j++)
            {
                cout << "* ";
            }
            cout<<endl;
        }
        if (i == 4 || i == 5 || i==6)
        {
            cout<<"*"<<endl;
        }
        
    }
    
}