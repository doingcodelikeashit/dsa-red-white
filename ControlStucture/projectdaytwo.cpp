#include<bits/stdc++.h>
using namespace std;
int main(){
    float userInput,bill=0,tax;
    cout << "Enter Units:: ";
    cin >> userInput;
    float ifFirstCon = 25,ifSecoundCon = 150; 
    if (userInput <= 50)
    {
        bill = userInput * 0.50;
    }
    if (userInput > 50 && userInput <= 150)
    {
        bill = 25 + ((userInput-50)*0.75);
    }
    if (userInput > 150 && userInput <= 250)
    {
        bill = 100 + ((userInput-150)*1.20);
    }
    if (userInput > 250 )
    {
        bill = 220 + ((userInput-250)*1.50);
    }
    cout<< " \n your bill is (without TAX):: " << bill << endl;
    tax=(bill*20)/100;
    cout<< " \n your Total is :: " << (bill+tax) << endl;
}