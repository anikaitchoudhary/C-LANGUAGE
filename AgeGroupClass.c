#include <stdio.h>

int main() 
{
    int A;
    scanf("%d", &A);
    (A>=0&&A<=12)?printf("Child", A):
    (A>=13&&A<=19)?printf("Teen", A):
    (A>=20&&A<=59)?printf("Adult", A):
    (A>=60)?printf("Senior Citizen", A):printf("Invalid");
}
