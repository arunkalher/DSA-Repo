### Given a weighted graph and a source vertex in the graph, find the shortest paths from the source to all the other vertices in the given graph ( with negative weight)

```C++

#include<iostream>
#include<vector>
#include<utility>
#include<queue>



struct edge{
    public:
    int src;
    int des;
    int weight;
   
    edge(int s,int d,int w)
    {
        src=s;
        des=d;
        weight=w;
    }
};

int BellmanFord(int Nodes,std::vector<edge>& Edges,int src, std::vector<int> &path,std::vector<int> &distance)
{
    distance[src]=0;
    path[src]=-1;
    for(int node=0;node<Nodes-1;node++)
    {
        for(int edgeNo=0;edgeNo<Edges.size();edgeNo++)
        {
            edge Edge=Edges[edgeNo];
            int src=Edge.src;
            int des=Edge.des;
            int weight=Edge.weight;
            if(distance[src]+weight<distance[des])
            {
                distance[des]=distance[src]+weight;
                path[des]=src;
            }


        }


    }

     for(int edgeNo=0;edgeNo<Edges.size();edgeNo++)
        {
            edge Edge=Edges[edgeNo];
            int src=Edge.src;
            int des=Edge.des;
            int weight=Edge.weight;
            if(distance[src]+weight<distance[des])
            {
                //negative cycle existes
                return -1;
            }


        }

    return 0;
}

int main()
{   
   
    int Nodes=5;

    std::vector<edge> Edges;
    //negative cycle
    // Edges.push_back(edge(0,1,5));
    // Edges.push_back(edge(1,2,1));
    // Edges.push_back(edge(1,3,2));
    // Edges.push_back(edge(2,4,1));
    // Edges.push_back(edge(4,3,-1));
    // Edges.push_back(edge(3,5,2));
    // Edges.push_back(edge(5,4,-3));
   
    //no negative cycle
    Edges.push_back(edge(0,1,-1));
    Edges.push_back(edge(0,2,4));
    Edges.push_back(edge(1,2,3));
    Edges.push_back(edge(1,3,2));
    Edges.push_back(edge(3,1,1));
    Edges.push_back(edge(3,2,5));
    Edges.push_back(edge(1,4,2));
    Edges.push_back(edge(4,3,-3));
   
    std::vector<int> distance (Nodes,1e6);
    std::vector<int> path (Nodes,0); // answer path
    int src=0;
    int destination=2;
    int exit_code=BellmanFord(Nodes,Edges,src,path,distance);
    if(!exit_code)
    {
        int curr=path[destination];
    
        std::vector<int> answerPath;
        answerPath.push_back(destination);
        while(curr!=-1)
        {
            answerPath.push_back(curr);
            curr=path[curr];
        }
   
    
    for(int index=answerPath.size()-1;index>=0;index--)
    std::cout<<answerPath[index]<<" "; 

    }
    else{
        std::cout<<"cycle exists";
    }
    
    
   
}


```

## TC: V*E
## SC: N-distance,N-prev Vertex,N-answer