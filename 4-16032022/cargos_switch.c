/* programa para exibir o salario do
 cargo de acordo com a escolha do usuario*/

#include <stdio.h>


int main(){

    int opcao = 0;

    //comando para limpar a tela
    system("clear");//clear screen(limpar tela)
    printf("################################");
    printf("\n# Programa para exibir salário #\n");
    printf("################################\n");
    printf("\nEscolha um dos cargos abaixo digitando o número\n");
    printf("#########################");
    printf("\n|\t1 - Diretor\t|\n|\t2 - Gerente3\t|\n|\t3- Analista\t|\n|\t4- Assistente\t|\n|\t5 Auxiliar\t|");
    printf("\n#########################");

    scanf("%d",&opcao);
    switch (opcao){

        case 1:
            printf("o salario de Diretor e: R$15.000,00");
        break;

        case 2:
            printf("o salario de Gerente e: R$12.000,00");
        break;

        case 3:
            printf("o salario de Analista e: R$8.000,00");
        break;

        case 4:
            printf("o salario de assistente e: R$4.000,00");
        break;

        case 5:
            printf("o salario de Auxiliar e: R$2.000,00");
        break;

        default:
            printf("nao há salario");
        break;
    }
    return 0;
}