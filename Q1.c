#include <stdio.h>

int main(void)
{
    int m, n, change = 0;
    int martrix[100][100];
    scanf("%d%d", &m, &n);
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &martrix[i][j]);
        }
    }
    for (int i = 1; i < m - 1; i++)
    {
        for (int j = 1; j < n - 1; j++)
        {
            if (martrix[i][j] > martrix[i][j + 1] && martrix[i][j] > martrix[i][j - 1] && martrix[i][j] > martrix[i - 1][j] && martrix[i][j] > martrix[i + 1][j])
            {
                printf("%d %d %d\n", martrix[i][j], i + 1, j + 1);
                change += 1;
            }
        }
    }
    if (change == 0)
    {
        printf("None %d %d", m, n);
    }
}
