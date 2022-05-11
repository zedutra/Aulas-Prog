#include <stdio.h>

int main()
{
    int i, valora[10], valorb[10];
    for(i=0; i<10; i++)
    {
        scanf("%d", &valora[i]);
        
    }

    for(i=0; i<10; i++)
    {
        scanf("%d", &valorb[i]);
        
    }

    for(i=0; i<10; i++)
    {
        printf("%d|%d|", valora[i], valorb[i]);
    }
    printf("\n");

    return 0;
}