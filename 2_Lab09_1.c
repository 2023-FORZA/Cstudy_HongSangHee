#include <stdio.h>
#include <stdlib.h>

int m, t, ** c, * visited, result = 0;

void    init(void)
{
    int n1, n2;
    c = (int**)malloc(sizeof(int*) * m);
    visited = (int*)malloc(sizeof(int) * m);
    for (int i = 0; i < m; i++)
        c[i] = (int*)malloc(sizeof(int) * m);
    for (int i = 0; i < m; i++)
    {
        visited[i] = 0;
        for (int j = 0; j < m; j++)
            c[i][j] = 0;
    }
    for (int i = 0; i < t; i++)
    {
        scanf("%d %d", &n1, &n2);
        // 노드들이 서로 이어져 있기에 양방향 카운트
        c[n1][n2] = 1;
        c[n2][n1] = 1;
    }
}

void    free_vis_c(void)
{
    for (int i = 0; i < m; i++)
        free(c[i]);
    free(c);
    free(visited);
}

void    dfs(int cur)
{
    for (int i = 1; i < m; i++)
    {
        // 현재 노드와 i노드가 이어져 있으면서 i노드를 방문한 적이 없는 경우
        if (!visited[i] && c[cur][i])
        {
            visited[cur] = 1;
            visited[i] = 1;
            result++;
            dfs(i);
        }
    }
}

int main(void)
{
    scanf("%d %d", &m, &t);
    m++;
    init();
    visited[1] = 1;
    dfs(1);
    printf("%d\n", result);
    free_vis_c();
    return (0);
}
