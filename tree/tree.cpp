#include <bits/stdc++.h>
using namespace std;
class tree
{
public:
    int *pre;
    int data;
    int *post;
} int main()
{
    tree root = new tree;
    root->pre = NULL;
    root->data = 10;
    root->post = NULL;

    tree b = new tree;
    b->pre = NULL;
    b->data = 10;
    b->post = NULL;

    root->pre = *b;

    
}
