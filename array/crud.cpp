#include<bits/stdc++.h>
using namespace std;
int main(){

    int a[100];
    cout<<"Enter 1 for create the array :: \n Enter 2 for print the array :: \n Enter 3 for update the element :: \n Enter 4 for delete the element :: \n Enter 5 for exit :: \n";
    int choose;
    cin >> choose;
    while(choose != 5){
    switch (choose)
    {
    case 1 :
        cout<<"Enter size of array :: ";
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cout<<"\n Enter "<<i<<" element :: ";
            cin >> a[i];
        }
        break;
    case 2 :
        if(a[0]=='\0'){
            cout<<"enter the array first (choose 1)"<<endl;
            break;
        }
        
        for (int i = 0; a[i] != '\0'; i++)
        {
            cout<<endl<<a[i];
        }
        cout<<endl;
        break;
    case 3 :
        int pos;
        cout<<"Enter position you want to update :: ";
        cin >> pos;
        int value;
        cout<<"Enter value you want to update :: ";
        cin >> value;
        a[pos-1]=value;
        break;
    case 4 :
        cout<<"Enter position you want to delete :: ";
        cin >> pos;
        cout<<n<<endl;
        for (int i = pos-1;i<n; i++)
        {
            a[i]=a[i+1];
        }
        break;
    default:
        break;
    }
    cout<<"Enter 1 for create the array :: \n Enter 2 for print the array :: \n Enter 3 for update the element :: \n Enter 4 for delete the element :: \n Enter 5 for exit :: \n";
    cout<<"Choose :: ";
    cin >> choose;
}
}