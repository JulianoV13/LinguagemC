/*programa para manter a tela sempre ativa. caso o usuário digite 9,
entao a tela sera liberada*/

#include <stdio.h>

int main(){

    int op = 0;

    printf("Digite um número para sair e tecle Enter\n");
    scanf("%d", &op);
    while(op != 9){
        system("clear");
        printf("\n Você errou .....  !!! :p");

        printf("Tenta outra vez e tecle Enter:\n");
        scanf("%d", &op);

    }
    


    return 0;
}