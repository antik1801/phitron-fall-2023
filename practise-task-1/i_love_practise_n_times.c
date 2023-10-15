#include <stdio.h>

int main() {
    //code
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        /* code */
        if (i == n-1)
        {
            /* code */
            printf("I Love Practice");
            break;
        }
        printf("I Love Practice\n");
    }
    
    return 0;
}