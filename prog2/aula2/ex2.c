#include <stdio.h>
#include <string.h>

int main(){
    int letrasIguais=0, i, j, tam1, tam2;
    char palavra1[50], palavra2[50];
    
    printf("Digite a primeira palavra: ");
    fgets(palavra1, 50, stdin);
    printf("Digite a segunda palavra: ");
    fgets(palavra2, 50, stdin);
    
    tam1 = strlen(palavra1);
    tam2 = strlen(palavra2);

    if(tam1 == tam2){
        for(i = 0; i < tam1; i++){
            for(j = 0; j < tam2; j++){
                if(palavra1[i] == palavra2[j]){
                    letrasIguais++;
                    palavra2[j] = 0;
                }
            }
        }
        if(letrasIguais == tam1){
            printf("As palavras são anagramas.");
        } else {
            printf("Nao eh um anagrama.");
        }
    } else {
        printf("Nao eh um anagrama.");
    }
    
    return 0;
}