/*programa pede ao usuário que digite
o seu nome. Ao fazer sera alocado
na variavel some*/

#include <stdio.h>

int main(){

    char nome[30];

    printf("digite seu nome e tecle enter:\n");
    scanf("%s", nome); // o scanf("%s") ele esta pegando o nome com todo caracteres

    printf("seu nome e: %s\n", nome); // 

    return 0;
}