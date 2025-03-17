#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
};
int main()
{
    Node *HEAD = new Node();
    HEAD->data = 10;
    HEAD->next = NULL;

    Node *n2 = new Node();
    n2->data = 20;
    n2->next = NULL;
    HEAD->next = n2;

    Node *n3 = new Node();
    n3->data = 30;
    n3->next = NULL;
    n2->next = n3;

    Node *ptr;
    ptr = HEAD;

    while (ptr != NULL)
    {
        cout << ptr->data << " " << ptr->next << endl;
        ptr = ptr->next;
    }
}