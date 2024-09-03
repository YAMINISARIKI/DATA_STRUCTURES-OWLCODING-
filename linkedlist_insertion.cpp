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
Node* insertathead(Node* head,Node* ele)
{
    ele->next = head;
    head = ele;
    return ele;
}
void insertatend(Node* head,Node* ele1)
{
    if(head==nullptr)return;
    Node* temp = head;
    while(temp->next!=nullptr)
    {
        temp = temp->next;
    }
    temp->next = ele1;
}
void insertatposition(Node* head,Node* ele2,int position)
{
    if(head==nullptr)return;
    Node* temp = head;
    int c=0;
    while(c<position-1)
    {
        temp = temp->next;
        c++;
    }
    ele2->next = temp->next;
    temp->next = ele2;
}
void print(Node* head)
{
    if(head==nullptr)
    {
        return;
    }
    Node* temp = head;
    while(temp!=nullptr)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

int main()
{
    vector<int>v = {1,2,3,4,5};
    Node* head = new Node(v[0]);
    Node* temp = head;
    for(int i=1;i<v.size();i++)
    {
        temp->next = new Node(v[i]);
        temp = temp->next;
    }
    Node* ele = new Node(0);
    head = insertathead(head,ele);
    Node* ele1 = new Node(6);
    insertatend(head,ele1);
    Node* ele2 = new Node(69);
    int position = 3;
    insertatposition(head,ele2,position);
    print(head);
}
