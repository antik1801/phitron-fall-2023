#include<stdio.h>
int main()
{
    int a,b;
    char str[20];
    scanf("%d %d", &a, &b);
    scanf("%s", &str);
    if (str[a] == '-')
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
    
    return 0;
}