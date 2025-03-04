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

class c : public a
{
public:
    void helloc()
    {
        cout << "Hello from C class :)" << endl;
    }
};

int main()
{
    b objB;
    c objC;

    cout << "Calling functions using Object of B:" << endl;
    objB.helloa();
    objB.hellob();

    cout << "\nCalling functions using Object of C:" << endl;
    objC.helloa();
    objC.helloc();

    return 0;
}
