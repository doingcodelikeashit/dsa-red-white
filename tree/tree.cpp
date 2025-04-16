#include <bits/stdc++.h>
using namespace std;
class tree
{
public:
    tree *pre;
    int data;
    tree *post;
};
void pre(tree *root){
    if (root == NULL)
    {
        return;
    }
    
}
int main()
{
    tree *root = new tree();
    root->pre = NULL;
    root->data = 10;
    root->post = NULL;

    tree *b = new tree();
    b->pre = NULL;
    b->data = 20;
    b->post = NULL;

    root->pre = b;

    tree *d = new tree();
    d->pre = NULL;
    d->data = 30;
    d->post = NULL;

    b->pre = d;

    tree *c = new tree();
    c->pre = NULL;
    c->data = 40;
    c->post = NULL;

    root->post = c;

    tree *e = new tree();
    e->pre = NULL;
    e->data = 50;
    e->post = NULL;

    c->pre = e;

    tree *f = new tree();
    f->pre = NULL;
    f->data = 20;
    f->post = NULL;

    c->post = f;

    // tree *current = root;
    // cout << current->data << " "; // 10

    // while (current->pre != NULL || current->post != NULL)
    // {
    //     current = current->pre;
    //     cout << current->data << " ";
    //     if (current->pre == NULL && current->post == NULL)
    //     {
    //         current = root->post;
    //         while (current->pre != NULL || current->post != NULL)
    //         {
    //             cout << current->data << " ";
    //             current = current->pre;
    //         }

    //         break;
    //     }
    // }

    // // current = root->post;
    // // cout << current->data << " "; // 40

    // // current = current->pre;
    // // cout << current->data << " "; // 50

    // // current = root->post->post;
    // // cout << current->data << " "; // 20
}