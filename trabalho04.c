// Importando bibliotecas
#include <stdio.h>
#include <string.h>

int main(){
    // Declarando variáveis
    int cont = 0;
    int index1;
    int index2;
    int letras[62] = {0};
    char fim[5] = {'F','I','M','\n','\0'};
    char limite[1002];
    char quantidade[62] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','0','1','2','3','4','5','6','7','8','9'};

    while(strcmp(limite,fim) != 0){
        fgets(limite, 1002, stdin);
        if(strcmp(limite, fim) == 0){
            break;
        }
        // Contando quantidade de letras
        for(index1=0; index1<strlen(limite); index1++){
            switch (limite[index1]){
                case 'A':
                    letras[0]++;
                    cont++;
                    break;
                case 'B':
                    letras[1]++;
                    cont++;
                    break;
                case 'C':
                    letras[2]++;
                    cont++;
                    break;
                case 'D':
                    letras[3]++;
                    cont++;
                    break;
                case 'E':
                    letras[4]++;
                    cont++;
                    break;
                case 'F':
                    letras[5]++;
                    cont++;
                    break;
                case 'G':
                    letras[6]++;
                    cont++;
                    break;
                case 'H':
                    letras[7]++;
                    cont++;
                    break;
                case 'I':
                    letras[8]++;
                    cont++;
                    break;
                case 'J':
                    letras[9]++;
                    cont++;
                    break;
                case 'K':
                    letras[10]++;
                    cont++;
                    break;
                case 'L':
                    letras[11]++;
                    cont++;
                    break;
                case 'M':
                    letras[12]++;
                    cont++;
                    break;
                case 'N':
                    letras[13]++;
                    cont++;
                    break;
                case 'O':
                    letras[14]++;
                    cont++;
                    break;
                case 'P':
                    letras[15]++;
                    cont++;
                    break;
                case 'Q':
                    letras[16]++;
                    cont++;
                    break;
                case 'R':
                    letras[17]++;
                    cont++;
                    break;
                case 'S':
                    letras[18]++;
                    cont++;
                    break;
                case 'T':
                    letras[19]++;
                    cont++;
                    break;
                case 'U':
                    letras[20]++;
                    cont++;
                    break;
                case 'V':
                    letras[21]++;
                    cont++;
                    break;
                case 'W':
                    letras[22]++;
                    cont++;
                    break;
                case 'X':
                    letras[23]++;
                    cont++;
                    break;
                case 'Y':
                    letras[24]++;
                    cont++;
                    break;
                case 'Z':
                    letras[25]++;
                    cont++;
                    break;
                case 'a':
                    letras[26]++;
                    cont++;
                    break;
                case 'b':
                    letras[27]++;
                    cont++;
                    break;
                case 'c':
                    letras[28]++;
                    cont++;
                    break;
                case 'd':
                    letras[29]++;
                    cont++;
                    break;
                case 'e':
                    letras[30]++;
                    cont++;
                    break;
                case 'f':
                    letras[31]++;
                    cont++;
                    break;
                case 'g':
                    letras[32]++;
                    cont++;
                    break;
                case 'h':
                    letras[33]++;
                    cont++;
                    break;
                case 'i':
                    letras[34]++;
                    cont++;
                    break;
                case 'j':
                    letras[35]++;
                    cont++;
                    break;
                case 'k':
                    letras[36]++;
                    cont++;
                    break;
                case 'l':
                    letras[37]++;
                    cont++;
                    break;
                case 'm':
                    letras[38]++;
                    cont++;
                    break;
                case 'n':
                    letras[39]++;
                    cont++;
                    break;
                case 'o':
                    letras[40]++;
                    cont++;
                    break;
                case 'p':
                    letras[41]++;
                    cont++;
                    break;
                case 'q':
                    letras[42]++;
                    cont++;
                    break;
                case 'r':
                    letras[43]++;
                    cont++;
                    break;
                case 's':
                    letras[44]++;
                    cont++;
                    break;
                case 't':
                    letras[45]++;
                    cont++;
                    break;
                case 'u':
                    letras[46]++;
                    cont++;
                    break;
                case 'v':
                    letras[47]++;
                    cont++;
                    break;
                case 'w':
                    letras[48]++;
                    cont++;
                    break;
                case 'x':
                    letras[49]++;
                    cont++;
                    break;
                case 'y':
                    letras[50]++;
                    cont++;
                    break;
                case 'z':
                    letras[51]++;
                    cont++;
                    break;
                case '0':
                    letras[52]++;
                    cont++;
                    break;
                case '1':
                    letras[53]++;
                    cont++;
                    break;
                case '2':
                    letras[54]++;
                    cont++;
                    break;
                case '3':
                    letras[55]++;
                    cont++;
                    break;
                case '4':
                    letras[56]++;
                    cont++;
                    break;
                case '5':
                    letras[57]++;
                    cont++;
                    break;
                case '6':
                    letras[58]++;
                    cont++;
                    break;
                case '7':
                    letras[59]++;
                    cont++;
                    break;
                case '8':
                    letras[60]++;
                    cont++;
                    break;
                case '9':
                    letras[61]++;
                    cont++;
                    break;
                default:
                    break;
            }
        }
    }
        // Exibindo caracteres maiusculos

        printf("Caracteres Maiusculos:\n");

        for(index1=0; index1<26; index1++){ 
            float qntdLetras = letras[index1];
            qntdLetras = qntdLetras/cont;
            printf("%c: ",quantidade[index1]);

            for(index2=0; index2<letras[index1]; index2++){
                printf("*");
            }
            
            printf(" (%d - %.2f)\n", letras[index1], qntdLetras);
        }

        printf("\n");

        // Exibindo caracteres minusculos
        printf("Caracteres Minusculos:\n");          
        for(index1=26; index1<52; index1++){ 
            float qntdLetras = letras[index1];
            qntdLetras = qntdLetras/cont;
            printf("%c: ",quantidade[index1]);

            for(index2=0; index2<letras[index1]; index2++){
                printf("*");
            }

            printf(" (%d - %.2f)\n", letras[index1], qntdLetras);
        }
        printf("\n");

        // Exibindo caracteres tipo digitos
        printf("Digitos:\n");           
        for(index1=52; index1<62; index1++){ 
            float qntdLetras = letras[index1];
            qntdLetras = qntdLetras/cont;
            printf("%c: ",quantidade[index1]);

            for(index2=0; index2<letras[index1]; index2++){
                printf("*");
            }

            printf(" (%d - %.2f)\n", letras[index1], qntdLetras);
        }

    return 0;
}
