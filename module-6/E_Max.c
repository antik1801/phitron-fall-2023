#include<stdio.h>
int main()
{
    int n,a;
    int max = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &a);
        if (a >= max)
        {
            max = a;
        }
        
    }
    printf("%d\n", max);
    
    return 0;
}

/*
Given a number N, and N numbers, find maximum number in these N numbers.

Input
First line contains a number N (1 ≤ N ≤ 103).

Second line contains N numbers Xi (0 ≤ Xi ≤ 109).

Output
Print the maximum number.

Example
inputCopy
5
1 8 5 7 5
outputCopy
8


*/