#include <stdio.h>
#include <stdbool.h>
#include <limits.h>

#define NUM_VERTICES 8

int minDistance(int dist[], bool sptSet[]) {
    int min = INT_MAX, min_index;
    for (int v = 0; v < NUM_VERTICES; v++)
        if (!sptSet[v] && dist[v] <= min)
            min = dist[v], min_index = v;
    return min_index;
}

void shortestpath(int road_networks[NUM_VERTICES][NUM_VERTICES], int src) {
    int dist[NUM_VERTICES];
    bool sptSet[NUM_VERTICES];

    for (int i = 0; i < NUM_VERTICES; i++)
        dist[i] = INT_MAX, sptSet[i] = false;
    dist[src] = 0;

    for (int count = 0; count < NUM_VERTICES - 1; count++) {
        int u = minDistance(dist, sptSet);
        sptSet[u] = true;
        for (int v = 0; v < NUM_VERTICES; v++)
            if (!sptSet[v] && road_networks[u][v] && dist[u] != INT_MAX
                && dist[u] + road_networks[u][v] < dist[v])
                dist[v] = dist[u] + road_networks[u][v];
    }

    
    printf("Nearest charging station for point %c: ", src + 'a');
    if (dist['c' - 'a'] < dist['d' - 'a'])
        printf("c\n");
    else
        printf("d\n");
}

int main() {
    int road_networks[NUM_VERTICES][NUM_VERTICES] = {
        {1, 1, 0, 0, 0, 1, 0, 0},
        {1, 1, 1, 0, 0, 0, 0, 0},
        {0, 1, 1, 0, 1, 1, 0, 0},
        {0, 0, 0, 1, 1, 0, 0, 0},
        {0, 0, 0, 1, 1, 0, 0, 0},
        {1, 0, 1, 0, 0, 1, 0, 0},
        {1, 0, 0, 1, 0, 0, 1, 0},
        {0, 0, 0, 0, 0, 1, 0, 1}
    };

    char src;
    printf("Which point are you located? a, b, c, d, e, f, g, h \n");
    scanf(" %c", &src);
    shortestpath(road_networks, src - 'a');

    return 0;
}
