#include <stdio.h>

int main(){

    int distacia, tempo, resultado;

    printf("digite a distacia:");
    scanf("%d",&distacia);

    printf("entre com o tempo gato:");
    scanf("%d",&tempo);

    resultado = distacia/tempo;

    printf("\nA valociade media foi: %d\n",resultado);

    return 0;

}