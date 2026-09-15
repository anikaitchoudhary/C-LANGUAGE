//Marks And Percentage
#include <stdio.h>

int main() 
{
    float M1, M2, M3, M4, M5;
    scanf("%f%f%f%f%f",&M1, &M2, &M3, &M4, &M5);
    printf("Total Marks = %.f\nPercentage = %.2f", M1+M2+M3+M4+M5,(M1+M2+M3+M4+M5)*100/500);
    return 0;
}