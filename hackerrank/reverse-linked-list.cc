#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node *next;
};

Node *newNode(int key)
{
    Node *temp = new Node;
    temp->data = key;
    temp->next = NULL;
    return temp;
}

void printlist(Node *head)
{
    while(head != NULL)
    {
        cout<<head->data<<endl;
        head = head->next;
    }
}
void reverselist(Node *curr, Node *prev, Node **head);

void rev(Node **head)
{
    if(!head)
        return;
    reverselist(*head, NULL, head);
}

void reverselist(Node *curr, Node *prev, Node **head)
{
    if(!curr->next)
    {
        *head = curr;
        curr->next = prev;
        return;
    }
    Node *next = curr->next;
    curr->next = prev;
    reverselist(next, curr, head);
}

int main()
{
    Node *head1 = newNode(5);
    head1->next = newNode(24);
    head1->next->next = newNode(15);
    printlist(head1);
    rev(&head1);
    printlist(head1);



}
