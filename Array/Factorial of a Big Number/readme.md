```C++
// can use LL or vector

void multiply(vector<int> &arr,int k)
{   
    int carry=0;
    for(int i=0;i<arr.size();i++)
    {
        int num=arr[i]*k + carry;
        arr[i]=num%10;
      
        carry=num/10;
    }
    while(carry)
    {
        arr.push_back(carry%10);
        carry=carry/10;
    }
    
}

vector<int> factorial(int N){
        
        if (N==0)
        return {1};
        vector<int> ans={1};
        for(int i=2;i<=N;i++)
        multiply(ans,i);
        reverse(ans.begin(),ans.end());
        return ans;
        
    }
```