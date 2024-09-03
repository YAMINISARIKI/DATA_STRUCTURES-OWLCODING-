#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* next;
    Node(int data1)
    {
        data = data1;
        next = nullptr;
    }
};
Node* insertathead(Node* element,Node* head)
{
    // Node* temp = head;
    element->next = head;
    head = element;
    
    return element;
}
void insertatend(Node* element1,Node* head)
{
    Node* temp = head;
    while(temp->next!=nullptr)
    {
        temp = temp->next;
    }
    temp->next = element1;
    // return element1;
}

void print(Node* head)
{
    Node* temp = head;
    if(head==nullptr)
    {
        return;
    }
    while(temp!=nullptr)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}
int main()
{
    int n;
    cin>>n;
    vector<int>v={2,4,6,8,10};
    Node* head = new Node(v[0]);
    Node* temp = head;
    for(int i=1;i<v.size();i++)
    {
        temp->next = new Node(v[i]);
        temp = temp->next;
    }
    // print(head);
    Node* element = new Node(0);
    head = insertathead(element,head);
    Node* element1 = new Node(11);
    insertatend(element1,head);
    print(head);
}
