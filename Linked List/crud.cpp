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
    void insertAtBeginning(int val)
    {
        Node *newNode = new Node(val);
        newNode->nxt = HEAD;
        HEAD = newNode;
    }
    void insertAtEnd(int val)
    {
        Node *newNode = new Node(val);
        if (HEAD == nullptr)
        {
            HEAD = newNode;
            return;
        }
        Node *temp = HEAD;
        while (temp->nxt != nullptr)
        {
            temp = temp->nxt;
        }
        temp->nxt = newNode;
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
    void update(int val, int pos)
    {
        Node *temp = HEAD;
        for (int i = 1; i < pos && temp != NULL; i++)
        {
            temp = temp->nxt;
        }
        if (temp == nullptr)
        {
            cout << "Invalid position!" << endl;
            return;
        }
        temp->data = val;
    }
    void deleteFirst()
    {
        Node *temp = HEAD;
        HEAD = HEAD->nxt;
        delete temp;
        return;
    }
    void deleteNode(int pos)
    {
        if (HEAD == nullptr)
        {
            cout << "List is empty!" << endl;
            return;
        }
        if (pos == 1)
        {
            Node *temp = HEAD;
            HEAD = HEAD->nxt;
            delete temp;
            return;
        }
        Node *temp = HEAD;
        Node *prev = nullptr;
        for (int i = 1; i < pos && temp != NULL; i++)
        {
            prev = temp;
            temp = temp->nxt;
        }
        if (temp == nullptr)
        {
            cout << "Invalid position!" << endl;
            return;
        }
        prev->nxt = temp->nxt;
        delete temp;
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

    list.update(25, 2);
    cout << "Linked List after update at position 2: ";
    list.display();

    list.deleteNode(3);
    cout << "Linked List after deletion at position 3: ";
    list.display();

    list.deleteFirst();
    list.display();
}