#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
typedef vector<int> Vector;


Vector Common(int* A,int* B,int* C,int n1,int n2,int n3)
{
    Vector ans;
   unordered_map<int,int> m;
   for(int i=0;i<n1;i++)
   m[A[i]]=1;
   for(int i=0;i<n2;i++)
   {
    if(m.find(B[i])!=m.end() && m[B[i]]==1)
    m[B[i]]=2;
   
   }
   for(int i=0;i<n3;i++)
   {
    if(m.find(C[i])!=m.end() && m[C[i]]==2)
    m[C[i]]=3;
   }
  
   for(int i=0;i<n1;i++)
   if(m[A[i]]==3)
   {
    ans.push_back(A[i]);
    m[A[i]]=-1;
   }
   
return ans;

}
int main()
{   


//    int arr[8]={1,3,4,5,-4,-4,-6,-8};
//    Vector ans=alternateEqualPosAndNeg(arr,8);

   int A[6]={1,5 ,10 ,20, 40, 80};
   int B[5]={6, 7 ,20, 80, 100};
   int C[8]={3 ,4 ,15 ,20 ,30 ,70 ,80 ,120};
   Vector common=Common(A,B,C,6,5,8);
   for(auto j:common)
   cout<<j<<" ";
}

