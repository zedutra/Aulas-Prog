#include <stdio.h>
#include <math.h>

int main()
{
    int index;
    int powered;
    for(index=1; index<=20; index++)
    {
        powered = pow(index, 2);
        printf("%d\n", powered);
    }
    return 0;
}