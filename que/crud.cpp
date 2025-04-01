#include <bits/stdc++.h>
using namespace std;
int que[100];
void pushQue(int &rear)
{
    int val;
    cout << "Enter Value :: ";
    cin >> val;
    ::que[rear + 1] = val;
    rear++;
}
void popQue(int &front)
{
    ::que[front + 1] = 0;
    front++;
}
void display(int &front, int &rear)
{
    for (int i = front + 1; i < rear + 1; i++)
    {
        cout << ::que[i] << " ";
    }
    cout << endl;
}
void isEmpty(int &front, int &rear)
{
    if (front == rear)
    {
        cout << "Que is Empty" << endl;
    }
}
void isFull(int &rear)
{
    if (rear >= 100)
    {
        cout << "que is full" << endl;
    }
    else
    {
        cout << "picture abhi baaki he" << endl;
    }
}
int main()
{
    int front = -1, rear = -1;
    int chooise = 0;
    do
    {
        cout << "Enter 1 for Push \n Enter 2 for Pop \n Enter 3 for Display \n Enter 4 for Peek \n Enter 5 for isEmpty \n Enter 6 for isFull \n Enter 0 for exit\n";
        cout << "Enter Choise:: ";
        cin >> chooise;
        switch (chooise)
        {
        case 1:
            pushQue(rear);
            break;
        case 2:
            popQue(front);
            break;
        case 3:
            display(front, rear);
            break;
        // case 4:
        //     peek(top);
        //     break;
        case 5:
            isEmpty(top);
            break;
        
            
        default:
            cout << "Enter valid Input";
            break;
        }
        cout << endl;
    } while (chooise != 0);
}