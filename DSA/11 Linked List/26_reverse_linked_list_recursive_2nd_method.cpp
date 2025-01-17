#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node(int d)
    {
        data = d;
        next = NULL;
    }
};

void print(node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout<<endl;
}

node*reverseList(node*curr,node*prev){
    if (curr==NULL)
    {
        return prev;
    }
    node*next=curr->next;
    curr->next=prev;
    return reverseList(next,curr);
}

int main()
{
    node *head = new node(10);
    head->next = new node(20);
    head->next->next = new node(30);
    head->next->next->next = new node(40);
    head->next->next->next->next = new node(50);
    head->next->next->next->next->next = new node(60);
    print(head);
    head=reverseList(head,NULL);
    print(head);
    return 0;
}