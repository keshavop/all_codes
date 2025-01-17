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
    cout << endl;
}

void findNthNode(node*head,int n){
    if (head==NULL)
    {
        return;
    }
    node*first=head;
    for (int i = 0; i < n; i++)
    {
        if (first==NULL)
        {
            return;
        }
        first=first->next;
    }
    node*second=head;
    while (first!=NULL)
    {
        second=second->next;
        first=first->next;
    }
    cout<<second->data;
}

int main()
{
    node *head = new node(10);
    head->next = new node(20);
    head->next->next = new node(30);
    head->next->next->next = new node(40);
    head->next->next->next ->next= new node(50);
    head->next->next->next ->next->next= new node(60);
    print(head);
    findNthNode(head,5);
    return 0;
}