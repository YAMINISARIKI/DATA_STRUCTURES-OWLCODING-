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

Node* deleteathead(Node* head)
{
    // if(head==nullptr)return NULL;
    Node* temp = head;
    head = head->next;
    delete(temp);
    
    return head;
}
void deleteatend(Node* head)
{
    if(head==nullptr)return;
    Node* temp = head;
    while(temp->next->next!=nullptr)
    {
        temp = temp->next;
    }
    Node* temp1 = temp->next;
    delete(temp1);
    temp->next=nullptr;
}
void deleteatposition(Node* head,int position1)
{
    int c = 0;
    Node* temp = head;
    while(c<position1-1)
    {
        c++;
        temp = temp->next;
    }
    Node* temp1 = temp->next;
    temp->next = temp->next->next;
    delete(temp1);
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
    vector<int>v = {1,2,3,4,5,6,7};
    Node* head = new Node(v[0]);
    Node* temp = head;
    for(int i=1;i<v.size();i++)
    {
        temp->next = new Node(v[i]);
        temp = temp->next;
    }
    cout<<"Initial linkedlist : ";
    print(head);
    cout<<endl;
    head = deleteathead(head);
    cout<<"After deletion at head : ";
    print(head);
    cout<<endl;
    deleteatend(head);
    cout<<"After deletion at end : ";
    print(head);
    cout<<endl;
    int position1 = 3;
    deleteatposition(head,position1);
    cout<<"After deletion at position : ";
    print(head);
}
