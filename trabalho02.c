#include <stdio.h>

int main()
{
    int casos, i, i2, a = 0, b = 0, c = 0, d = 0, e = 0, f = 0, a2 = 0, b2 = 0, c2 = 0, d2 = 0, e2 = 0, f2 = 0;
    char dna1[12], dna2[12];

    scanf("%d", &casos);

    for (i = 0; i < casos; i++)
    {
        scanf("%s", &dna1);
        scanf("%s", &dna2);

        for (i2 = 0; i2 < 12; i2++)
        {
            switch (dna1[i2])
            {
                case 'A':
                    a = a + 1;
                    break;
                case 'B':
                    b = b + 1;
                    break;
                case 'C':
                    c = c + 1;
                    break;
                case 'D':
                    d = d + 1;
                    break;
                case 'E':
                    e = e + 1;
                    break;
                case 'F':
                    f = f + 1;
                    break;
                default:
                    break;
            }

            switch (dna2[i2])
            {
                case 'A':
                    a2 = a2 + 1;
                    break;
                case 'B':
                    b2 = b2 + 1;
                    break;
                case 'C':
                    c2 = c2 + 1;
                    break;
                case 'D':
                    d2 = d2 + 1;
                    break;
                case 'E':
                    e2 = e2 + 1;
                    break;
                case 'F':
                    f2 = f2 + 1;
                    break;
                default:
                    break;
            }
        }
        // printf("A: %d e A2: %d\n", a, a2);
        // printf("B: %d e B2: %d\n", b, b2);
        // printf("C: %d e C2: %d\n", c, c2);
        // printf("D: %d e D2: %d\n", d, d2);
        // printf("E: %d e E2: %d\n", e, e2);
        // printf("F: %d e F2: %d\n", f, f2);
        if ( a == a2 && b == b2 && c == c2 && d == d2 && e == e2 && f == f2)
        {
            printf("Caracteristicas Iguais\n");
        }
        else
        {
            printf("Caracteristicas Diferentes\n");
        }
        a = 0, b = 0, c = 0, d = 0, e = 0, f = 0, a2 = 0, b2 = 0, c2 = 0, d2 = 0, e2 = 0, f2 = 0;
    }
    
    return 0;
}