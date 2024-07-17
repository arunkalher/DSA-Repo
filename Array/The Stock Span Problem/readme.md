```C++
vector <int> calculateSpan(int arr[], int n)
    {
      vector<int> ans(n,1);
      stack<int> st;
      for(int curr=0;curr<n;curr++)
      {
          while(!st.empty() && arr[st.top()]<=arr[curr])
          st.pop();
          
          if(!st.empty())
          ans[curr]=curr-st.top();
          else
          ans[curr]=curr+1;
          
          st.push(curr);
      }
         return ans;
      
    }

```