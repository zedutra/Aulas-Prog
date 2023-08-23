/* 
Jose Vitor Dutra 187174
Lucas Saad 200881
*/
#include <stdio.h>

int main(){
    int d, m, a;

    printf("Insira sua data de nascimento no formato dd-mm-aaaa: \n");
    scanf("%d-%d-%d", &d,&m,&a);

    if(m == 1){
        if(d<21){
            printf("Capricornio \n");
        } else {
            printf("Aquario \n");
        }
        
    } else if (m == 2){
        if(d<21){
            printf("Aquario \n");
        } else {
            printf("Peixes \n");
        }
        
    } else if (m == 3){
        if(d<21){
            printf("Peixes \n");
        } else {
            printf("Aries \n");
        }
        
    } else if (m == 4){
        if(d<21){
            printf("Aries \n");
        } else {
            printf("Touro \n");
        }
        
    } else if (m == 5){
        if(d<21){
            printf("Touro \n");
        } else {
            printf("Gemeos \n");
        }
        
    } else if (m == 6){
        if(d<21){
            printf("Gemeos \n");
        } else {
            printf("Cancer \n");
        }
        
    } else if (m == 7){
        if(d<21){
            printf("Cancer \n");
        } else {
            printf("Leao \n");
        }
        
    } else if (m == 8){
        if(d<21){
            printf("Leao \n");
        } else {
            printf("Virgem \n");
        }
        
    } else if (m == 9){
        if(d<21){
            printf("Virgem \n");
        } else {
            printf("Libra \n");
        }
        
    } else if (m == 10){
        if(d<21){
            printf("Libra \n");
        } else {
            printf("Escorpiao \n");
        }
        
    } else if (m == 11){
        if(d<21){
            printf("Escorpiao \n");
        } else {
            printf("Sagitario \n");
        }
        
    } else if (m == 12){
        if(d<21){
            printf("Sagitario \n");
        } else {
            printf("Capricornio \n");
        }
        
    } 
}