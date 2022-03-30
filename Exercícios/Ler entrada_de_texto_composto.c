#include <stdio.h>
#include <stdlib.h>

void main(){

    char produto[30];

    printf("Informe o nome do produto: \n");
    scanf("\n%[^\n]s", &produto);

    printf("produto: %s \n", produto);

}