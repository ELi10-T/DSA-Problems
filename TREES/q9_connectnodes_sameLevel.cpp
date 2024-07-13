// Question : Connect the nodes on the same level in O(1)
// Solution : Use something similar to level order traversal and set the nextRight

#include <bits/stdc++.h>
using namespace std;

class tree
{
public:
    int data;
    tree *left;
    tree *right;
    tree *nextRight;

    /* Constructor that allocates a new node with the
    given data and NULL left and right pointers. */
    tree(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
        this->nextRight = NULL;
    }
};

tree *getNextRight(tree *head)
{
    tree *temp = head->nextRight;

    while (!temp)
    {
        if (temp->left)
        {
            return temp->left;
        }
        if (temp->right)
        {
            return temp->right;
        }
        temp = temp->nextRight;
    }

    return NULL;
}

void connectNodes(tree *root)
{

    tree *p = root;
    p->nextRight = NULL;

    while (p)
    {
        tree *q = p;
        while (q != NULL)
        {
            if (q->left)
            {
                if (q->right)
                {
                    q->left->nextRight = q->right;
                }
                else
                {
                    q->left->nextRight = getNextRight(q);
                }
            }
            if (q->right)
            {
                q->right->nextRight = getNextRight(q);
            }
        }
    }

    if(p->left) {
        p = p->left;
    } else if(p->right) {
        p = p->right;
    } else {
        p = p->nextRight;
    }
}

int main()
{
}