```C++

#include<iostream>
#include<vector>
typedef std::vector<int> Vector;
void DFS(Vector* graph,int Vertices, bool* visited,int CurrVertex,int componentNo,int* components)
{
    if(visited[CurrVertex])
    return;
    components[CurrVertex]=componentNo;
    std::cout<<CurrVertex<<" ";
    visited[CurrVertex]=true;
    for(auto Vertex:graph[CurrVertex])
    {   
        if(!visited[Vertex])
        DFS(graph,Vertices,visited,Vertex,componentNo,components);
    }
}
int main()
{   
    int startVertex=1;
    int Nodes=10;
    int Vertices=Nodes+1;
    int noOfComponents=0;

    // intialise with component no zero
    int Components[Vertices]={0};
    Vector graph[Vertices];

    int componentNo=0;
    // first component
    // 7 nodes
    graph[1].push_back(8);
    graph[1].push_back(5);
    graph[8].push_back(3);
    graph[3].push_back(4);
    graph[5].push_back(6);
    graph[6].push_back(7);


    // second component
    // 3 nodes
    graph[2].push_back(9);
    graph[9].push_back(10);

    bool visited[Vertices]={false};
    for(int vertex=startVertex;vertex<=Nodes;vertex++)
    {   
        
        if(!visited[vertex])
        {   
            componentNo+=1;
            DFS(graph,Vertices,visited,vertex,componentNo,Components);
        }
        
    }
    noOfComponents=componentNo;

    std::cout<<"\nComponents: ";
    for(auto ele:Components)
    {
        std::cout<<ele;
    }

   
}
#### Time Complexity: O(V+E)
#### Auxiliary space:2*O(V)  ( Except Graph )
```






