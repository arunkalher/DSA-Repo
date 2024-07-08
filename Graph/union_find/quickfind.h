class quickFind{
    int* arr;
    int n;
    public:
    quickFind(int N){
        n=N;
        arr=new int[N];
        for(int i=0;i<N;i++)
        arr[i]=i;
    }
    ~quickFind()
    {
        delete[] arr;
    }
    bool find(int p,int q){return arr[p]==arr[q];}

    void union_(int p,int q)
    {
        int P=arr[p];
        int Q=arr[q];
        for(int i=0;i<n;i++)
        {
            if(arr[i]==P)
            arr[i]=Q;
        }
    }



};

// TC- union - O(N),find - O(1)