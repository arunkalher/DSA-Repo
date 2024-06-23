### Given a weighted graph and a source vertex in the graph, find the shortest paths from the source to all the other vertices in the given graph.

```C++

#include<iostream>
#include<vector>
#include<utility>
#include<queue>

typedef std::pair<int,int> Pair;
typedef std::vector<Pair> Vector;
class comp
{   public:
    bool operator()(Pair &p1,Pair &p2)
    {
        return p1.second>p2.second;
    }
};

typedef std::priority_queue<Pair,Vector,comp> PQ;

void Dijkstra(Vector* graph,std::vector<bool> &visited,int src, int des, std::vector<int> &path,std::vector<int> &distance)
{
    PQ pq;
    pq.push({src,0});
    int prev=-1;
    distance[src]=0;
    path[src]=-1;
    while(!pq.empty())
    {
        Pair front=pq.top();
        int currVertex=front.first;
        pq.pop();
        if(visited[currVertex])
        continue;
        visited[currVertex]=true;
     
        
        
        if(currVertex==des)
        return;
        for(auto nextEdge:graph[currVertex])
        {   
            int nextVertex=nextEdge.first;
            int edgeWeight=nextEdge.second;
            if(!visited[nextVertex] && distance[nextVertex]>distance[currVertex]+edgeWeight)
            {   
                path[nextVertex]=currVertex;
                distance[nextVertex]=distance[currVertex]+edgeWeight;
                pq.push(nextEdge);
            }

        }

        

    }

}

int main()
{   
   
    int Nodes=5;
    int Vertices=Nodes+1;
    
    Vector graph[Vertices];

    graph[0].push_back({1,5}); // tuple - destination,weight

    graph[0].push_back({2,1});
    graph[1].push_back({2,2});
    graph[2].push_back({1,3});
    graph[3].push_back({2,3});
    graph[1].push_back({4,20});
    graph[1].push_back({3,3});

    graph[2].push_back({4,12});
    graph[3].push_back({4,2});
    graph[4].push_back({5,1});
    graph[3].push_back({5,6});

    std::vector<bool> visited (Vertices,false);
    std::vector<int> distance (Vertices,1e6);
    std::vector<int> path (Vertices,0); // answer path
    int src=0;
    int destination=4;
    Dijkstra(graph,visited,src,destination,path,distance);

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


```

## TC: E+Vlog(E)
## SC: N-visited,N-distance,N-prev Vertex,N- answer