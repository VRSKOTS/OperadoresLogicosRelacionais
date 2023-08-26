#include<stdio.h>

main(){
    float media, frequencia;

    printf("Digite a media");
    scanf("%f",&media);
    
    printf("Digite a frequencia");
    scanf("%f",&frequencia);

    if(media >= 7 && frequencia >= 75){
        printf("Aprovado");
    }else if(media >= 7 && frequencia < 75){
         printf("Reprovado por falta");
    }else if((media >= 4 && media < 7) && frequencia > 75){
        printf("Recuperacao");
    }else if((media >= 4 && media < 7) && frequencia < 75){
         printf("Reprovado por falta");
    }else if(media < 4){
        printf("Reprovado");
    }

}