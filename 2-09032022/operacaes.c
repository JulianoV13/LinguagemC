#include <stdio.h>

int main(){

    int opcao;
   
   printf("Escolha um opcao...\n\n1_Adicao\n2_Subtraçao\n3_Multiplicaçao\n4_divisao");
   scanf("%i",&opcao);
    
    float num1, num2, resultado1, resultado2, resultado3, resultado4;
    printf("informe o primeiro numero: \n", num1);
    scanf("%f", &num1);

    printf("informe o segundo numero: \n", num2);
    scanf("%f", &num2);

    resultado1 = num1 + num2;
    resultado2 = num1 - num2;
    resultado3 = num1 * num2;
    resultado4 = num1 / num2;

    
switch (opcao)
    {
    case 1:
        printf("A adicao entre os dois valores e: %f", num1,num2);
        break;
    case 2:
        printf("A subtracao entre os dois valores e: %f", num1,num2);
        break;
    case 3:
        printf("A Multiplicaçao entre os dois valores e: %f", num1,num2);
        break;
    case 4:
        printf("A  Divisao subtracao entre os dois valores e: %f", num1,num2);
        break;

    default:
        printf("A opcao escolhida nao e valida");





    }
}