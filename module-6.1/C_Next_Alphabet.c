#include<stdio.h>
int main()
{
    char a;
    scanf("%c", &a);
    if (a == 122)
    {
        a= 96;
    }
    
    printf("%c", a+1);
    return 0;
}

/*
Given a lowercase alphabet character. You have to print the next character in the alphabet.

Input
Only one line containing a lowercase English letter C
.

Output
Print the next letter to C
 in the alphabet.

Example
input
a
output
b
Note
The next letter to z is a.
*/