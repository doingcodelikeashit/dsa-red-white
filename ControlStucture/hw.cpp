#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c,d,e;
    cout<<"enter a,b,c,d,e :: ";
    cin >> a >> b >> c >> d >> e;
    if (a < b)
    {
        if (a<c)
        {
            if (a<d)
            {
                if (a<e)
                {
                    cout << "a is min";
                }
                else
                {
                    cout<<"e is min";
                }
            }
            else{
                if (d < e){
                    cout<<"d is min";
                }
                else{
                    cout << "e is min";
                }

            }
        }
        else{
            if(c<d){
                if (c<e)
                {
                    cout<<"c is min";
                }
                else{
                    cout<<"e is min";
                }
            }else{
                if (d<e)
                {
                    cout<<"d is min";
                }
                else{
                    cout<<"e is min";
                }
            }
        }
    }
    else{
        if (b<c)
        {
            if(b<d){
                if (b<e)
                {
                    cout<< " b is min";
                }
                else{
                    cout << "e is min";
                }
            }else{
                if (d < e)
                {
                    cout << "d is min";
                }
                else{
                    cout<< "e is min";
                }
            }
        }
        else
        {
            if (c<d)
            {
                if (c<e)
                {
                    cout<<"c is min";
                }
                else{
                    cout<<"e is min";
                }
            }
            else{
                if (d<e)
                {
                    cout<<"d is min";
                }
                else{
                    cout<<"e is min";
                }
            }
        }
    }
}