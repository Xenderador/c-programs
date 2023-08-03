#include <stdio.h>
#include <stdlib.h>
int G[10][10], visited[10], n;

void DFS(int i)
{
    int j;
    printf("\n%d", i);
    visited[i] = 1;
    for (j = 0; j < n; j++)
    {
        if (!visited[j] && G[i][j])
        {
            DFS(j);
        }
    }
}

int main()
{
    int i, j;
    printf("\nEnter the vertices:");
    scanf("%d", &n);
    printf("\nEnter adjacency matrix:");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &G[i][j]);
        }
    }
    for (i = 0; i < n; i++)
    {
        visited[i] = 0;
    }
    DFS(1);
    int count = 0;
    for (i = 0; i < n; i++)
    {
        if (visited[i] != 0)
        {
            count++;
        }
    }
    if (count == n)
    {
        printf("\n DFS is possible");
    }
    else
    {
        printf("\n DFS is not possible");
    }
    return 0;
}