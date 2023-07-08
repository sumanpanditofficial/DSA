#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int AddBinary(char a[20], char b[20])
{
    int a = strlen(a);
    int b = strlen(b);
    printf("%d----%d", a, b);
    return a;
}

int main()
{
    char s[20], ss[20];
    scanf("%s", s);
    printf("\n");
    scanf("%s", ss);
    printf("\n");

    return 0;
}