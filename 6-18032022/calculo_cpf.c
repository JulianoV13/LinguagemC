/*programa oara calcular cpf do usuário
quando o cpf for inserido, pegamos os
9 primeiro digito e passsamos para
o calculo. E utilizado um numero por vez
do cpf multiplicando pelo peso partindo
de 10 e indo ate 2.
os 9 primeiro mais o digito encontrado
e multiplicamos pelo peso a partir de 11. soma se os valores encontrados e 
dividimos por 11. se o resto da divisao
for menor que 2, entao o digito sera
0; caso contrario o resto sera subtraido por 11*/

#include <stdio.h>


int main(){

    char cpf [11];
    int peso10 = 10;
    int peso11 = 11;
    int total = 0;
    int resto = 0;

    system("clear");
    printf("Digite o seu CPF sem o traço: \n"); // ele escreve na tela do usuario
    scanf("%s", cpf); //pega o digito do usuario 


/*converter todos os caracterres do cpf
para numero. para isso devemos criar um conjunto de numero em tipo int e 
realizando a conversão usando for*/
int icpf[11];
for(int x =0 ; x<= 10 ; x++){
    icpf[x] = cpf[x] - 48;
}

for(int i =0; i <= 8; i++){
    total+= icpf[i]*peso10;
    peso10--;
    
}
    resto = total % 11;
    /*se o resto da divisao for menor que 2 entao
    primeiro digito de verificaçao sera 0(zero)*/
    
    if(resto < 2){
        icpf[9]=0;
    }

    else{
        icpf[9] = 11 - resto;
    }

    // agora o total é o resto deles sao limpos
    total = 0;
    resto = 0;

    for(int i =0; i <= 9; i++){
    total += icpf[i]*peso11;
    peso11--;
    }
    
    resto = total % 11;

    if(resto < 2){
        icpf[10] = 0;
    }

    else{
        icpf[10] = 11-resto;
    }

    for(int i = 0 ; i <= 10 ; i++){
        printf("%d",icpf[i]);
    }


    return 0;
}