#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *nxt;
    Node(int val)
    {
        data = val;
        nxt = NULL;
    }
};
class LinkedList
{
private:
    Node *HEAD;

public:
    LinkedList()
    {
        HEAD = nullptr;
    }
    void insert(int val, int pos)
    {
        Node *newNode = new Node(val);
        if (pos == 1)
        {
            newNode->nxt = HEAD;
            HEAD = newNode;
            return;
        }
        Node *temp = HEAD;
        for (int i = 1; i < pos - 1 && temp != NULL; i++)
        {
            temp = temp->nxt;
        }

        if (temp == nullptr)
        {
            cout << "Invalid position!" << endl;
            delete newNode;
            return;
        }
        newNode->nxt = temp->nxt;
        temp->nxt = newNode;
    }
    void display()
    {
        if (HEAD == nullptr)
        {
            cout << "List is empty!" << endl;
            return;
        }

        Node *temp = HEAD;
        while (temp != nullptr)
        {
            cout << temp->data << " -> ";
            temp = temp->nxt;
        }
        cout << "NULL" << endl;
    }
};
int main()
{
    LinkedList list;

    // Create
    list.insert(10, 1); 
    list.insert(20, 2); 
    list.insert(30, 3); 
    list.insert(40, 2); 

    cout << "Linked List after insertions: ";
    list.display();
}