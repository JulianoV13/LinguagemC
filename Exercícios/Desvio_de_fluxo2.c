#include <stdio.h>
#include <stdlib.h>

void main(){

    int cargo;
    float salatual, reajuste;

    printf("Informe o cargo de funcionario:"); // pedi pro usuario escrever
    scanf("%d", &cargo); // pega o digido do usuario

    printf("Informe o salario atual:"); // pedi pro usuario escreve o salario
    scanf("%f", &salatual); // pefa o salario digitado

    if(cargo == 1){
    reajuste = (salatual * 7) / 100;
    }
    else if(cargo == 2){
        reajuste = (salatual * 9) / 100;
    }
    else if(cargo == 3){
        reajuste = (salatual * 5) / 100;
    }
    else{
        reajuste = (salatual * 12) / 100;
    }

    printf("O reajuste e: %f", reajuste);
    printf("O novo salario e: %f", salatual + reajuste);

}