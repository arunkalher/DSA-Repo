```C++
#include<iostream>
#include<vector>
#include<queue>
using namespace std;
typedef vector<int> Vector;
// equal pos and neg
Vector alternateEqualPosAndNeg(int* arr,int N)
{
    int pos=0;
    int neg=1;
    vector<int> ans(N,0);

    for(int i=0;i<N;i++)
    {
        if(arr[i]>0)
        {ans[pos]=arr[i];
        pos+=2;
        }
        else{
            ans[neg]=arr[i];
            neg+=2;
        }

    }
    return ans;
}
// unequal no
void alternateEqualPosAndNeg2(int* arr,int N)
{
    Vector pos,neg;
    for(int i=0;i<N;i++)
    {   
        if(arr[i]>0)
        pos.push_back(arr[i]);
        else
        neg.push_back(arr[i]);
    }
    int i=0,j=0,index=0;
    for(;index<N && i<pos.size() && j<neg.size();index++)
    {
        if(index%2)
        arr[index]=neg[j++];
        else
        arr[index]=pos[i++];
    }
       
        while(i<pos.size())
        {
            arr[index++]=pos[i++];
        }
    

    
        while(j<neg.size())
        {
            arr[index++]=neg[j++];
        }
    
    
}
int main()
{   
//    int arr[8]={1,3,4,5,-4,-4,-6,-8};
//    Vector ans=alternateEqualPosAndNeg(arr,8);
   int arr[8]={-1,3,4,-5,-4,-4,-6,8};
   alternateEqualPosAndNeg2(arr,8);
   for(int i=0;i<8;i++)
   cout<<arr[i]<<" ";
}



```