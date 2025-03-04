#include <iostream>
using namespace std;
class a
{
public:
    void helloa()
    {
        cout << "Hello from A class :)" << endl;
    }
};
class b : public a
{
public:
    void hellob()
    {
        cout << "Hello from B class :)" << endl;
    }
};
int main()
{
    b obj;
    obj.hellob();
    obj.helloa();
}