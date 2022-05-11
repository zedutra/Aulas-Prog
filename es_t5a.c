#include <stdio.h>

int main()
{
    float notas[20];
    float busca;
    int i, diferentes;

    for (i = 0; i < 20; i++)
    {
        scanf("%f", &notas[i]);
    }

    while (busca >= 0)
    {
        scanf("%f", &busca);
        diferentes = 0;
        for (i = 0; i < 20; i++)
        {
            if(busca < 0)
            {
                break;
            }
            if (busca == notas[i])
            {
                printf("existe\n");
                break;
            } 
            else 
            {
                diferentes++;
                if(diferentes == 20)
                {
                    printf("nao existe\n");
                }
            }       
        }
    }

    return 0;
}