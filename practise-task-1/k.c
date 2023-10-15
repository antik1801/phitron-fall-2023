#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d %d", &a, &b, &c);
     // minimum
     if (a<=b && a<=c)
    {
        printf("%d ", a);
    }
    else if (b<=a && b<=c)
    {
        printf("%d ", b);
    }
    else
    {
        printf("%d ", c);
    }
    // maximum
    if (a>=b && a>=c)
    {
        printf("%d\n", a);
    }
    else if (b>=a && b>=c)
    {
        printf("%d\n", b);
    }
    else
    {
        printf("%d\n", c);
    }
   
    
    
    return 0;
}

/**
 Given 3 numbers A, B and C, Print the minimum and the maximum numbers.

Input
Only one line containing 3 numbers A, B and C ( - 105 ≤ A, B, C ≤ 105)

Output
Print the minimum number followed by a single space then print the maximum number.

Examples
inputCopy
1 2 3
outputCopy
1 3
inputCopy
-1 -2 -3
outputCopy
-3 -1
inputCopy
10 20 -5
outputCopy
-5 20
*/