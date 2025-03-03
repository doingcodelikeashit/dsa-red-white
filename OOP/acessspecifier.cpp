#include<bits/stdc++.h>
using namespace std;
class Student{
    private:
        int id;
    public:
        int number;
        void setter(int id,int number){
            this->id=id;
            this->number=number;
        }
        void getter(){
            cout<<" "<<this->id<<" -> "<<this->number<<endl;
        }
};
int main(){
    Student obj;
    obj.setter(1,2006);
    obj.getter();
}