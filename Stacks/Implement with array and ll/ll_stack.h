#include"Node.h"
#include<stdexcept>
class Stack{
    Node* head=nullptr;
    int Size=0;
    public:
    bool isEmpty ()const{return Size==0;}
    bool size() const{return Size;}
    void push(int data)
    {   
        Node* node=new Node(data);
        node->next=head;
        head=node;
        Size++;
    }
    void pop()
    {
        if(Size==0)return;
        Node* temp=head;
        head=head->next;
        delete temp;
        Size--;

    }
    int top()
    {
        if(Size==0)
        throw 404;  //throw exception
        return head->data;
    }


};