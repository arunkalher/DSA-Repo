```C++
class Node{
    
    public:
    int data;
    Node* next;
    Node(){data=0;next=nullptr;};
    Node(int val){data=val;next=nullptr;}
    Node(int val,Node* &nextt){data=val;next=nextt;}
};

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


class Stack{
    int* arr;
    int size;
    int capacity;
    public:
    Stack()
    {
        size=0;
        capacity=1;
        arr=new int[capacity];
    }
    ~Stack()
    {
        delete arr;
    }
    bool isEmpty(){return size==0;}

    int Size(){return size;}
    void push(int ele)
    {
        if(size==capacity)
        {
            capacity=capacity*2;
            int* newarr=new int[capacity];
            for(int i=0;i<size;i++)
            newarr[i]=arr[i];
            int* temp=arr;
            arr=newarr;
            delete temp;
        }
        
        arr[size++]=ele;
        

    }

    void pop()
    {
        if(size==0)return;
        size-=1;
        if(size==capacity/4)
        {
            capacity=capacity/2;
            int* newarr=new int[capacity];
            for(int i=0;i<size;i++)
            newarr[i]=arr[i];
            int* temp=arr;
            arr=newarr;
            delete temp;
        }

    }

    int top()
    {
        if(size==0)
        throw 404;
        return arr[size-1];
    }
};

void PrintStack(Stack &st)
{
    while(!st.isEmpty())
    {
        std::cout<<st.top()<<"\n";
        st.pop();
    }
}
int main()
{
    Stack st;
    std::cout<<st.isEmpty()<<"\n";
    st.push(1);
    std::cout<<st.isEmpty()<<"\n";
    st.push(2);
    st.pop();
    st.pop();
    st.pop();
    std::cout<<st.isEmpty()<<"\n";
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    PrintStack(st);
}

// operation time is less in ll
// total cost for n pushs -> less in array ( amortized )
```