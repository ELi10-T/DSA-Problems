// This code has the basic operations for the linkedList.
#include <bits/stdc++.h>

class Node
{
public:
    int data;
    Node *next_ptr;
    Node(int d) {
        this->data = d;
        this->next_ptr = NULL;
    };
};

int LengthOfLL(Node *head);
Node* ExampleLinkedList(int len);
void PrintLL(Node *head);
Node* MiddleLinkedList(Node* head);
Node* ReverseLinkedList(Node* head);
