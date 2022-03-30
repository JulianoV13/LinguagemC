/*programa para trabalha com funções. vamos usar funções com
retorno , sem retorno, com argumentos(parâmetros), sem argumentos*/

#include <stdio.h>
#include <stdlib.h>

void separadorHT(){
    printf("\n");
    for(int i = 0; i <= 50; i++){
        printf("#");
    }
        printf("\n");

}
void separadorLinha(){
    printf("\n");
    for(int i = 0; i <= 50; i++){
        printf("_");
    }
    printf("\n");
}
void pularlinha(int qtdvezes){
    for(int i = 1; i <= qtdvezes; i++){
        printf("\n");
    }
}
char* comparar(int v1,int v2){
    if(v1 > v2){
        return"O primeiro numero e maior que o segundo";
    }
    else if(v1==v2){
        return"esse numero sao igual";
    }
    else{
        return"O segundo numero e maior que o primeiro";
    }
   
}


void main(){

    int n1,n2;
    
    system("clear"); // limpar a tela do terminal
    //chamando a funçâo separadorHT
    separadorHT();
    printf("\n\t\tPrograma que exibi mensagem\n");
    //chamando a função separadorLinha
    separadorLinha();
    pularlinha(2);

    printf("digite um numero:\n");
    scanf("%d",&n1);
    printf("Digite outro numero:\n");
    scanf("%d",&n2);

    pularlinha(1);

    printf(comparar(n1,n2));

    pularlinha(2);

    

}