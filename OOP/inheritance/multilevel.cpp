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
class c : public b
{
public:
    void helloc()
    {
        cout << "Hello from C class :)" << endl;
    }
};
int main()
{
    c obj;
    obj.helloc();
    obj.hellob();
    obj.helloa();
}