#include<stdio.h>
int main()
{
    int num;
    scanf("%d", &num);
    int first = num % 10;
    int second = num / 10;
    if (first%second == 0 || second%first == 0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    
    
    return 0;
}