#include<iostream>
#include<vector>
#include<queue>
#include<utility>
#include"quickunion.h"
int main(int N,char* s[])
{   
    QuickUnion Forest(10);
    Forest.union_(0,5);
    Forest.union_(6,5);
    Forest.union_(6,1);
    Forest.union_(7,1);
    Forest.union_(3,8);
    Forest.union_(3,4);
    Forest.union_(4,8);
    std::cout<<Forest.find(2,7);
    std::cout<<Forest.find(0,7);


}