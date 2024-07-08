class QuickUnion{
    int* arr;
    int* size;
    int n;
    public:
    QuickUnion(int N)
    {
        n=N;
        arr=new int[n];
        size=new int[n];
        for(int i=0;i<n;i++)
        {
            arr[i]=i;
            size[i]=1;
        }
    }

    ~QuickUnion()
    {   
        delete[] arr;
        delete[] size;
    }
    int parent(int ele)
    {
        while(ele!=arr[ele])
        {   
            ele=arr[arr[ele]];
            ele=arr[ele];
        }
        
        return ele;
    }
    bool find(int p,int q)
    {
        return parent(p)==parent(q);
    }

    void union_(int p,int q)
    {
        int parentP=arr[p];
        int parentQ=arr[q];
        if(parentP==parentQ)return;
        if(size[parentP]<size[parentQ])
        {
            arr[parentP]=parentQ;
            size[parentP]+=1;
        }
        else{
            arr[parentQ]=parentP;
            size[parentQ]+=1;
        }
    }

};