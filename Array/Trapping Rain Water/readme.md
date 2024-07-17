```C++
void calcforLeft(int* arr,vector<int> &left)
    {
        int n=left.size();
        stack<int> st;
        // stack will store indices
        //itearte from left
        // if ele in stack <= curr-> pop it
        for(int i=0;i<n;i++)
        {
            while(!st.empty() && arr[st.top()]<=arr[i])
            st.pop();
            
            if(!st.empty())
            {
                left[i]=st.top();
                
            }
            else{
                st.push(i);
            }
            
            
            
        }
    }
    void calcforRight(int* arr,vector<int> &left)
    {
        int n=left.size();
        stack<int> st;
        // stack will store indices
        //itearte from right
        // if ele in stack >= curr-> pop it
        for(int i=n-1;i>=0;i--)
        {
            while(!st.empty() && arr[st.top()]<=arr[i])
            st.pop();
            
            if(!st.empty())
            {
                left[i]=st.top();
                
            }
            else{
                st.push(i);
            }
            
            
            
        }
    }
    long long trappingWater(int arr[], int n){
        // need to find both sides greater to indices
        // let's find -> use stack
        vector<int> left(n,-1); // for left side
        vector<int> right(n,-1);
        calcforLeft(arr,left);
        calcforRight(arr,right);
        long long ans=0;
        for(int i=0;i<n;i++)
        {
            if(left[i]!=-1 && right[i]!=-1)
            ans+=long(min(arr[left[i]],arr[right[i]]))-arr[i];
            
        }
        
        return ans;
        
       
        
    }
```