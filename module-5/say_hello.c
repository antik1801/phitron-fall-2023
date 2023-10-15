#include <stdio.h>
#include <string.h>

int main() {
    char S[100];
    fgets(S, sizeof(S), stdin);
    printf("Hello, %s", S);
    return 0;
}

/*
A. Say Hello With C++
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output


Given a name S. Print "Hello, (name)" without parentheses.

Input
Only one line containing a string S.

Output
Print "Hello, " without quotes, then print name.

Example
input
programmer
output
Hello, programmer
*/