#include <bits/stdc++.h>
#include <cstdlib>
#include "basic_operations_LL.h"
using namespace std;

int LengthOfLL(Node *head)
{
    int count = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        count++;
        temp = temp->next_ptr;
    }
    return count;
}

Node* ExampleLinkedList(int len) {
    Node *head = new Node(1);
    cout<<1<<" ";
    Node *temp = head;
    for(int i=1;i<len;i++){
        temp -> next_ptr = new Node(rand()%10);
        temp = temp->next_ptr;
        cout<<temp->data<<" ";
    }
    cout<<"\n";
    return head;
}

void PrintLL(Node* head) {
    while(head != NULL) {
        cout<<head->data<<" ";
        head = head->next_ptr;
    }
    cout<<"\n";
}