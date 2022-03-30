#include <stdio.h>

int main(){

    char cargo[15];

    printf("digite seu cargo tecle enter:");
    scanf("%s",cargo);

    if(strcmp(cargo, "diretor")==0){
        printf("o salario de diretor: 15.000");
    }

    else if(strcmp(cargo, "gerente")==0){
        printf("o salario de gerente: 12.000");
    }

    else if(strcmp(cargo, "analista")==0){
        printf("o salario de analista: 8.000");
    }

    else if(strcmp(cargo, "assistente")==0){
        printf("salario de assistente: 4.000");
    }
    else if(strcmp(cargo, "auxilia")==0){
        printf("o salario de auxilia: 4.000");
    }
    else{
        printf("nao há salario");
    }

    return 0;

}