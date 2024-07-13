
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