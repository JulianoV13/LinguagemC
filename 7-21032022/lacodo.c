/*programa para apresentar numero
pares entre 0 e 50. Vamos usar a estrutura
while*/

#include <stdio.h>

int main(){

    int i =0;

    do{
        if(i%2==0){
            printf("o número %d e par\n",i);
        }
        i++;

    }while (i<=50);
    
    return 0;
}