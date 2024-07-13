#include"array_stack.h"
#include<iostream>

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