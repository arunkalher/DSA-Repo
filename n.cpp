#include<iostream>

template <typename T> class Node{
    public:
    T data;
    Node* next;
    

};
int main()
{
    Node<int>* n1=new Node<int>;
    n1->data=1;
    std::cout<<n1->data;


}