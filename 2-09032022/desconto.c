#include <stdio.h>

int main(){
    
    float valor,/*valor do produto,*/ valorfinal, desc,/*valor final total*/ desconto;/* o usuario coloca o desconto*/

    printf("digite o valor"); // coloca escreve na tela
    scanf("%f", &valor); // capitura valor digitado

    printf ("digite o valor do desconto");  // coloca escreve na tela
    scanf("%f", &desc); // capitura valor digitado

    /*O vendendor ira entra com o valor da taxa e em seguida
    nosso programa divide por 100 para obter o valor em
    o programa vai calcular e teremos o resultado 0.05 que 
    representa*/
    desc=desc/100;

    desconto = desc * valor;
    valorfinal = valor - desconto;

    printf("o seu valor é %f\n o desconto do produto é %f\n valor final e %f",valor, desconto, valorfinal);




    return 0;
}