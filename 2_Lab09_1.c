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
        // ������ ���� �̾��� �ֱ⿡ ����� ī��Ʈ
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
        // ���� ���� i��尡 �̾��� �����鼭 i��带 �湮�� ���� ���� ���
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
