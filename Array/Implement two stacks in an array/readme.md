```C++

class twoStacks {
    
  public:
    int * arr;
    int start1;
    int start2;
    twoStacks() {
        arr=new int[200];
        start1=-1;
        start2=99;
    }
    ~twoStacks()
    {
        delete[] arr;
    }

    // Function to push an integer into the stack1.
    void push1(int x) {arr[++start1]=x;}

    // Function to push an integer into the stack2.
    void push2(int x) {arr[++start2]=x;}

    // Function to remove an element from top of the stack1.
    int pop1() {
        if(start1==-1)
        return -1;
        return arr[start1--];
    }

    // Function to remove an element from top of the stack2.
    int pop2() {
        if(start2==99)
        return -1;
        return arr[start2--];
        
    }
};
```