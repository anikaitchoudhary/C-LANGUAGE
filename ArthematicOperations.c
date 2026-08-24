#include <stdio.h>
int main()
{
    int x1, y1;
    int S, D, P, DIV, MOD_DIV;
    printf("Enter Two Numbers\n");
    scanf("%d%d", &x1, &y1);
    S = x1 + y1;
    D = x1 - y1;
    P = x1 * y1;
    DIV = x1 / y1;
    MOD_DIV = x1 % y1;
    printf("\nSUBTRACTION=%d\nSUM=%d\nPRODUCT=%d\nDIVISION=%d\nMODULUS DIVISION=%d",
           D, S, P, DIV, MOD_DIV);
    return 0;
}
