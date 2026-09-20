#include <stdio.h>

int main() {
    int A, B, C;
    scanf("%d%d%d",&A, &B, &C);
    (A+B>C)?printf("%d",A + B + C):printf("-1");
    return 0;
}