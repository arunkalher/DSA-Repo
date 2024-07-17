```C++
vector<int> spirallyTraverse(vector<vector<int> > arr, int R, int C) 
    {   
        vector<int> ans;
       int colStart=0, colEnd=C-1,frontRow=0,endRow=R-1;
       int rowStart=1,rowEnd=R-1,endCol=C-1,frontCol=0;
       int index=0;
       while(index<R*C)
       {
           for(int i=colStart;i<=colEnd  && index<R*C;i++)
           {   
            ans.push_back(arr[frontRow][i]);
            index++;
            
           }
           frontRow++;
            colEnd--;
           for(int i=rowStart;i<=rowEnd  && index<R*C;i++)
           {
              ans.push_back(arr[i][endCol]);
            
               index++;
               
           }
           endCol--;
           rowEnd--;
           for(int i=colEnd;i>=colStart  && index<R*C;i--)
           {
            ans.push_back(arr[endRow][i]);
          
            index++;
            
           }
           endRow--;
           colStart++;
           
           for(int i=rowEnd;i>=rowStart && index<R*C;i--)
           {
              
             ans.push_back(arr[i][frontCol]);
         
               
               index++;
               
           }
          frontCol++;
           rowStart++;
           
          
       }
       return ans;
       
       
    }
    vector<int> spirallyTraverse(vector<vector<int> > arr, int R, int C) 
    {
        int r[4]={0,1,0,-1};
        int c[4]={1,0,-1,0};
        int row=0,col=0;
        int curr=0;
        vector<int> ans;
        vector<vector<bool> > visited (R,vector<bool> (C,false));
        for(int i=0;i<R*C;i++)
        {   
            ans.push_back(arr[row][col]);
            visited[row][col]=true;
            int newR=row+r[curr];
            int newC=col+c[curr];
            if(newR<0 || newR>=R || newC <0 || newC>=C || visited[newR][newC])
            {
                curr=(curr+1)%4;
                row=row+r[curr];
                col=col+c[curr];
            }
            else{
                row=newR;
                col=newC;
            }
            
        }
        return ans;
        
    }
```