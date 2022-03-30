#include <stdio.h>
#include <stdlib.h>

void main(){

    int destino, trecho;

    printf("Informe o destino conforme tabela a seguir: \n");
    printf("1-Regiao norte \t 3-Regiao Centro-oeste \n");
    printf("2-Regiao Nordeste \t 4-Regiao sul \n");

    scanf("%d", &destino);

    printf("Informe o trecho: <1-IDA ou 2-IDA E volta>");
    scanf("%d", &trecho);

    if(destino == 1){
        if(trecho == 1)
        printf("Regiao norte[IDA] = 500,00");
        else
        printf("Regiao norte[IDA E volta] = 900,00");
    }
    else if(destino == 2){
        if(trecho == 1)
        printf("Regiao nordeste[IDA] = 350,00");
        else
        printf("Regiao nordeste[IDA E volta] = 600,00");
    }
    else{
        if(trecho == 1)
        printf("Regiao sul[IDA] = 300,00");
        else
        printf("Regiao sul[IDA E volta] = 550,00");
    }
    
}