class Node{
    
    public:
    int data;
    Node* next;
    Node(){data=0;next=nullptr;};
    Node(int val){data=val;next=nullptr;}
    Node(int val,Node* &nextt){data=val;next=nextt;}
};

