#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int s;
        scanf("%d", &s);
        char c[s + 1];
        scanf("%s", &c);
        int t = 0, p = 0;
        for (int i = 0; i < s; i++)
        {
            if (c[i] == 'T')
            {
                t++;
            }
            else
                p++;
        }
        if (t == p)
        {
            printf("Draw\n");
        }
        else if (t > p)
        {
            printf("Tiger\n");
        }
        else
        {
            printf("Pathaan\n");
        }
    }

    return 0;
}