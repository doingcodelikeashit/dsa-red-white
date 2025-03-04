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

class d : public b, public c
{
public:
    void hellod()
    {
        cout << "Hello from D class :)" << endl;
    }
};

int main()
{
    d objD;

    objD.hellod();

    // objD.helloa();  // ambiguity
    objD.b::helloa(); // Resolving ambiguity
    objD.hellob();
    objD.helloc();
}
