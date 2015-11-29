
#include<iostream>
using namespace std;
struct node
{
    int data;
    node* next;
};
node* head;
void insert(int n)
{
    node* temp=new node();
    temp->data=n;
    temp->next=NULL;
    temp->next=head;
    head=temp;
}
void print()
{
    node* current=new node();
    current=head;
    while(current->next!=NULL)
    {
        cout<<current->data;
        current=current->next;
    }
    cout<<current->data;
}
int main()
{
    int n;
    cin>>n;
    while(n!=0)
    {
        insert(n);
        cin>>n;
    }
    print();
}
