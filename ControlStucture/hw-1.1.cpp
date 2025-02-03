#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,day;
    char opp;
    cout<<"enter a :: ";
    cin >> a;
    cout<<"\nenter b :: ";
    cin >> b;
    cout<<"\nEnter Operater :: ";
    cin >> opp;
    switch (opp)
    {
    case '+':
        cout << "Addition is "<<(a+b);
        break;
    case '-':
        cout << "Baadbaaki is "<<(a-b);
        break;
    case '*':
        cout << "gunakaar is "<<(a*b);
        break;
    case '/':
        cout << "bhagakar is "<<(a/b);
        break;
    case '%':
        cout << "ses is "<<(a%b);
        break;
    
    default:
        cout << "operator sarkho nakh";
        break;
    }
    cout<<"\nnavro thayo hoy to kene aaje ketla mo divas chhe week no :: ";
    cin >> day;
    switch (day)
    {
    case 1:
        cout << "oo somvaar chhe aaje" << endl;
        break;
    case 2:
        cout << "oo mangadvaar chhe aaje" << endl;
        break;
    case 3:
        cout << "oo buddhvaar chhe aaje" << endl;
        break;
    case 4:
        cout << "oo guruvaar chhe aaje" << endl;
        break;
    case 5:
        cout << "oo sukravaar chhe aaje" << endl;
        break;
    case 6:
        cout << "oo sanivaar chhe aaje" << endl;
        break;
    case 7:
        cout << "oo ravivaar chhe aaje" << endl;
        break;
    default:
        cout<< "1 thi 7 ni vachhe j hoy" << endl;
        break;
    }
}