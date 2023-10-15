#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int array1[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array1[i]);
    }
    int m;
    scanf("%d", &m);
    int array2[m];
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &array2[i]);
    }
    int ans[m + n];
    for (int i = 0; i < n; i++)
    {
        ans[i] = array1[i];
    }

    int i = n;
    for (int j = 0; j < m; j++)
    {
        ans[i] = array2[j];
        i++;
    }
    for (int i = 0; i < m + n; i++)
    {
        printf("%d ", ans[i]);
    }

    return 0;
}