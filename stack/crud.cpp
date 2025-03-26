#include <bits/stdc++.h>
using namespace std;
int stack[100];
void pushStack(int &top)
{
    int val;
    cout << "Enter Value :: ";
    cin >> val;
    ::stack[top + 1] = val;
    top++;
}
void pop(int &top)
{
    if (top == -1)
    {
        cout << "stack empty chhe" << endl;
    }
    else
    {
        ::stack[top] = 0;
        top--;
    }
}
void display(int &top)
{
    if (top == -1)
    {
        cout << "stack empty chhe" << endl;
    }
    else
    {
        for (int i = 0; i < top + 1; i++)
        {
            cout << " " << ::stack[i];
        }
        cout << endl;
    }
}
void peek(int &top)
{
    if (top == -1)
    {
        cout << "stack empty chhe" << endl;
    }
    else
    {
        cout << ::stack[top + 1] << endl;
    }
}
void isEmpty(int &top)
{
    if (top == -1)
    {
        cout << "stack is empty" << endl;
    }
    else
    {
        cout << "stack is not empty" << endl;
    }
}
int main()
{
    int top = -1;
    int chooise = 0;
    do
    {
        cout << "Enter 1 for Push \n Enter 2 for Pop \n Enter 3 for Display \n Enter 4 for Peek \n Enter 5 for isEmpty \n Enter 6 for isFull \n Enter 0 for exit\n";
        cout << "Enter Choise:: ";
        cin >> chooise;
        switch (chooise)
        {
        case 1:
            pushStack(top);
            break;
        case 2:
            pop(top);
            break;
        case 3:
            display(top);
            break;
        case 4:
            peek(top);
            break;
        case 5:
            isEmpty(top);
            break;
        case 6:
            isFull(top);
            break;
        default:
            cout << "Enter valid Input";
            break;
        }
        cout << endl;
    } while (chooise != 0);
}