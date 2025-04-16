#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;
    Node(int val) : data(val), left(nullptr), right(nullptr) {}
};
void insert(Node *&node, int val)
{
    if (!node)
    {
        node = new Node(val);
        return;
    }
    if (val < node->data)
        insert(node->left, val);
    else
        insert(node->right, val);
}

void inorder(Node *node)
{
    if (!node)
        return;
    inorder(node->left);
    cout << node->data << " ";
    inorder(node->right);
}

Node *search(Node *node, int val)
{
    if (!node || node->data == val)
        return node;
    if (val < node->data)
        return search(node->left, val);
    return search(node->right, val);
}

Node *findMin(Node *node)
{
    while (node && node->left)
        node = node->left;
    return node;
}

void remove(Node *&node, int val)
{
    if (!node)
        return;
    if (val < node->data)
        remove(node->left, val);
    else if (val > node->data)
        remove(node->right, val);
    else
    {
        if (!node->left && !node->right)
        {
            delete node;
            node = nullptr;
        }
        else if (!node->left)
        {
            Node *temp = node;
            node = node->right;
            delete temp;
        }
        else if (!node->right)
        {
            Node *temp = node;
            node = node->left;
            delete temp;
        }
        else
        {
            Node *temp = findMin(node->right);
            node->data = temp->data;
            remove(node->right, temp->data);
        }
    }
}

void update(Node *&node, int oldVal, int newVal)
{
    remove(node, oldVal);
    insert(node, newVal);
}

int main()
{
    Node *root = nullptr;
    insert(root, 50);
    insert(root, 30);
    insert(root, 70);
    insert(root, 20);
    insert(root, 40);
    insert(root, 60);
    insert(root, 80);

    inorder(root);
    cout << endl;

    update(root, 30, 35);
    inorder(root);
    cout << endl;

    remove(root, 50);
    inorder(root);
    cout << endl;

    if (search(root, 35))
        cout << "Found" << endl;
    else
        cout << "Not Found" << endl;

    if (search(root, 30))
        cout << "Found" << endl;
    else
        cout << "Not Found" << endl;

    return 0;
}
