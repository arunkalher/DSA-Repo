<!-- The Floyd Warshall Algorithm is an all pair shortest path algorithm unlike Dijkstra and Bellman Ford which are single source shortest path algorithms. This algorithm works for both the directed and undirected weighted graphs. But, it does not work for the graphs with negative cycles (where the sum of the edges in a cycle is negative). It follows Dynamic Programming approach to check every possible path going via every possible node in order to calculate shortest distance between every pair of nodes. -->
```C++

#include<iostream>
#include<vector>
#define inf 1000000
void FloydWarshall(int (*graph)[5])
{
    for(int medium=0;medium<5;medium++)
    {
        for(int src=0;src<5;src++)
        {
            for(int des=0;des<5;des++)
            {
                if(graph[src][medium]!=inf && graph[medium][des] !=inf && graph[src][medium]+graph[medium][des]<graph[src][des])
                graph[src][des]=graph[src][medium]+graph[medium][des];
            }
        }
    }
}
int main()
{   
    int Nodes=5; //0-4
    int graph[5][5]={{0,4,inf,5,inf},
                            {inf,0,1,inf,6},
                            {2,inf,0,3,inf},
                            {inf,inf,1,0,2},
                            {1,inf,inf,4,0}};
    FloydWarshall(graph);
    for(int r=0;r<5;r++)
    {
        {
        for(int c=0;c<5;c++)
        std::cout<<graph[r][c]<<" ";
    }
        std::cout<<"\n";
    }
    
}




```

## TC: V* V *V
