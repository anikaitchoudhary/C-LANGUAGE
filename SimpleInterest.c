//Simple Interest
#include <stdio.h>

int main() 
{
    float P, T, R;
    scanf("%f%f%f",&P, &T, &R);
    printf("%.2f",(P*T*R)/100);    
    return 0;
}