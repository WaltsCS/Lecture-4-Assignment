#include<stdio.h>
#define V 7

void init(int arr[][V])
{
    int i,j;
    for(i = 0; i < V; i++)
        for(j = 0; j < V; j++)
            arr[i][j] = 0;
}


void addEdge(int arr[][V],int src, int dest)
{
     arr[src][dest] = 1;
}

void printroad_networks(int arr[][V])
{
     int i, j;

     for(i = 0; i < V; i++)
     {
         for(j = 0; j < V; j++)
         {
             printf("%d ", arr[i][j]);
         }
         printf("\n");
     }
}

int main()
{
    int road_networks[V][V];

    init(road_networks);
    addEdge(road_networks,0,0);
    addEdge(road_networks,0,1);
    addEdge(road_networks,0,5);
    addEdge(road_networks,1,0);
    addEdge(road_networks,1,1);
    addEdge(road_networks,1,2);
    addEdge(road_networks,2,1);
    addEdge(road_networks,2,2);
    addEdge(road_networks,2,4);
    addEdge(road_networks,2,5);
    addEdge(road_networks,3,3);
    addEdge(road_networks,3,4);
    addEdge(road_networks,4,3);
    addEdge(road_networks,4,4);
    addEdge(road_networks,5,0);
    addEdge(road_networks,5,2);
    addEdge(road_networks,5,5);
    addEdge(road_networks,6,0);
    addEdge(road_networks,6,3);
    addEdge(road_networks,6,6);
    addEdge(road_networks,7,5);
    addEdge(road_networks,7,7);


    printroad_networks(road_networks);

    return 0;
}
