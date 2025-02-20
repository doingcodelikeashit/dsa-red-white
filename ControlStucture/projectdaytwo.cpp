#include<bits/stdc++.h>
using namespace std;
int main(){
    float userInput,bill=0;
    cout << "Enter Units:: ";
    cin >> userInput;
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
    cout<< " \n your Total is :: " << (float)(bill*1.20) << endl;
}