```C++

int firstZero(vector<int> &row,int end)
    {
        int ans=-1;
        int start=0;
        if(row[start]==1)
        return 0;
        start=1;
        while(start<=end)
        {   
            int mid=start+(end-start)/2;
            
            if(row[mid]==1 && row[mid-1]==0)
            return mid;
            
            if(row[mid]==1)
            end=mid-1;
            
            else
            start=mid+1;
        }
        return -1;
    }
    int rowWithMax1s(vector<vector<int> > arr) {
        int ans=-1;
        int roww=-1;
        int col=arr[0].size();
        for(int row=0;row<arr.size();row++)
        {
            if(arr[row][col-1]==0)
            continue;
            else
            {
                int index=firstZero(arr[row],col-1);
                
                if(index!=-1)
                {
                    int len=col-index;
                    if(len>ans)
                    {
                        ans=len;
                        roww=row;
                    }
                }
            }
        }
        return roww;
    }

```