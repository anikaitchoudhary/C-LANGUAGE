#include <stdio.h>

int main() {
    int D, ch;
    scanf("%d",&ch);
    if(ch==1)
        printf("The 1st Day of the week is Monday");
    else if(ch==2)
        printf("The 2nd Day of the week is Tuesday");
    else if(ch==3)
        printf("The 3rd Day of the week is Wednesday");
    else if(ch==4)
        printf("The 4th Day of the week is Thursday");
    else if(ch==5)
        printf("The 5th Day of the week is Friday");
    else if(ch==6)
        printf("The 6th Day of the week is Saturday");
    else if(ch==7)
        printf("The 7th Day of the week is Sunday");
    else
        printf("invalid Value");
    return 0;
}