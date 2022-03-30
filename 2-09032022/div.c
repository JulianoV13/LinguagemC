# include <stdio.h>

int main(){

    int n1,n2, divisao, resto;

    printf("digite o valor:");
    scanf("%d",&n1);

    printf ("digite o segundo valor:");
    scanf ("%d",&n2);

    divisao = n1/n2;
    resto = n1%n2;

 printf("resultado da divisao:%d\no resto e: %d",divisao, resto);
}