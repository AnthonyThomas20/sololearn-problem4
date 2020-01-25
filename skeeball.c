#include <stdio.h>

int main()
{
    int points,cost;
    float res;
    scanf("%d",&points);
    scanf("%d",&cost);
    res=(float)points/12.0;
    if((int)res>=cost)
    {
        printf("Buy it!");
    }
    else
    {
        printf("Try again");
    }

    return 0;
}
