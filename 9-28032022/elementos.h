/*este arquivo foi nomeado com a extensão .h (header->cabeçalho "biblioteca")
assim podemos criar algumas funçoes e/ou estrutura compartilhada sendo possivel
ser utilizada por diverso programas todas as veze que biblioteca for usada
e importante realizar a sua icnlusão no codigo que ira utiliza-la.*/

#include <stdio.h>
#include <stdlib.h>

void separador(){
    printf("\n");
    for(int i = 0; i <= 100 ; i++){
        printf("#");
    }
    printf("\n");
}
void quebrarlinha(int qtdvezes){
    for(int i = 1 ; i <= qtdvezes ; i++){
        printf("\n");
    }
}