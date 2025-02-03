#include<bits/stdc++.h>
using namespace std;
int main(){
    int langOpp,flag;
    cout<<"Hindi k liye 1 dabaye \n for inglish press both :) \n gujrati mate tidi \n";
    cin >> langOpp;
    switch (langOpp)
    {
    case 1:
        cout<< "apne recharch ki details dekhne k liye aek dabaye \n apne baabu k last 5 sms read kane krne k liye dono dabaye :) \n apne babu ke recharge k liye offer dekhne k liye tin0 dabaye :0" << endl;
        cin>>flag;
        switch (flag)
        {
        case 1:
            cout << "nahi degi , recharge karva pehele" << endl;
            break;
        case 2:
            cout << "baby, i love you, i'll never leave you,chala ja **** , abba nahi mmanenge .." << endl;
            break;
        case 3:
            cout << "pehle girl friend pata baad me recharge karvana" << endl;
            break;
        default:
            cout << "nikal" << endl;
            break;
        }
        break;
    case 2:
        cout<< "for account balance press 1 \n if you wanna get your gf's five last sms press 2 :) \n for you girlfriends recharge press 3 :0" << endl;
        cin>>flag;
        switch (flag)
        {
        case 1:
            cout << "you are poor" << endl;
            break;
        case 2:
            cout << "baby, i love you, i'll never leave you, i've got my eye on you , say yes to heaven" << endl;
            break;
        case 3:
            cout << "you dont have gf :)" << endl;
            break;
        default:
            cout << "leave" << endl;
            break;
        }
        break;
    case 3:
        cout<< " khata ni dhanrasi melavava mate aek dabav \n  tari bairi na chhella 5 sandes melavava mate bai dabav \n tari bairi u recharge karvu hoy to tran dabav" << endl;
        cin>>flag;
        switch (flag)
        {
        case 1:
            cout << "lukkhes chho tu , loan puri kar pela" << endl;
            break;
        case 2:
            cout << "baby, i love you, i'll never leave you, veti no tha veti no , pappa nai maane" << endl;
            break;
        case 3:
            cout << "tane kaam wadi pan bhav nathi aapti , bairi nu recharge kya thi karavis" << endl;
            break;
        default:
            cout << "bhagto tha" << endl;
            break;
        }
        break;
    default:
        cout<< "hamko aapki taraf se koi pratikiya malum nahi huii , byyyyy";
        break;
    }
}