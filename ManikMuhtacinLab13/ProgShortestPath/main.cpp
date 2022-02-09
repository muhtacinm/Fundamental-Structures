#include <iostream>
#include <limits.h>

#define N 7


using namespace std;
int get_minDist(int dist[], bool spt[])
{

    int min = INT_MAX, minIndex;
    for (int i = 0; i < N; i++)
        if (spt[i] == false && dist[i] <= min)
            min = dist[i], minIndex = i;
    return minIndex;
}

void display(int d[])
{
    cout << "Vertex   Distance from Source\n";
    for (int i = 0; i < N; i++)
        cout << i << "\t\t" << d[i] << endl;
}

void dijkstra(int Graph[N][N], int source)
{
    int distances[N];
    bool shpatharr[N];
    for (int i = 0; i < N; i++)
        distances[i] = INT_MAX, shpatharr[i] = false;
    distances[source] = 0;

    for (int i = 0; i < N -1 ; i++)
    {
        int d = get_minDist(distances, shpatharr);
        shpatharr[d] = true;
        for (int j = 0; j < N; j++)
            if (!shpatharr[j] && Graph[d][j] && distances[d] != INT_MAX && distances[d]
                + Graph[d][j] < distances[j])
                distances[j] = distances[d] + Graph[d][j];
    }
    display(distances);
}



int main()
{
    //adjacent matrix to define the graph
    int Graph [N][N] =
    { { 0, 3, 4, 0, 0, 0, 2 },
    { 0, 0, 0, 2, 7, 5, 0 },
    { 0, 6, 0, 1, 0, 0, 4 },
    { 0, 0, 0, 0, 6, 1, 0 },
    { 0, 0, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 8, 0, 0 },
    { 0, 0, 0, 3, 0, 4, 0 },
    };
    dijkstra(Graph, 0);
    return 0;
}
