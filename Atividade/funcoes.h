#include <stdio.h>
#include <stdlib.h>
#include "cursos.h"
#include "unidade_senac.h"

void gravar(){

    FILE *arquivo;
    //A função fopen e reponsável por criar um arquivo
    //O arquivo fica disponivel em memoria

    //Verifica se o arquivo existe
    //exebir a mensagem

    arquivo = fopen("dados.txt","w");

    if(arquivo==NULL){
        printf("arquivo não foi encontrado");
        exit(1); //encerrar o programa
    }

    cursos cur, *pcur;
    unidade uni, *puni;

    pcur = &cur;
    puni = &uni;

    //todo print falando sobre os cursos

    printf("Digite o nome do curso\n");
    fgets(pcur->nome,30,stdin);

    printf("Digite o descrição do curso\n");
    fgets(pcur->descricao,100,stdin);

    printf("Digite o cargohorario do curso\n");
    fgets(pcur->cargohorario,30,stdin);

    printf("Digite o datainico do curso\n");
    fgets(pcur->datainico,10,stdin);

    printf("Digite o datatermino do curso\n");
    fgets(pcur->datatermino,10,stdin);

    printf("Digite o preco do curso\n");
    fgets(pcur->preco,20,stdin);

    
    //unidade
    printf("Digite o nomeunidade do curso\n");
    fgets(puni->nomeunidade,20,stdin);

    printf("Digite o localizacao do curso\n");
    fgets(puni->localizacao,20,stdin);

    printf("Digite o horariofunc do curso\n");
    fgets(puni->horariofunc,20,stdin);

    printf("Digite o telefone do curso\n");
    fgets(puni->telefone,20,stdin);

    fprintf(arquivo,pcur->nome);
    fprintf(arquivo,pcur->descricao);
    fprintf(arquivo,pcur->cargohorario);
    fprintf(arquivo,pcur->datainico);
    fprintf(arquivo,pcur->datatermino);
    fprintf(arquivo,pcur->preco);

    //unidade

    fprintf(arquivo,puni->nomeunidade);
    fprintf(arquivo,puni->localizacao);
    fprintf(arquivo,puni->horariofunc);
    fprintf(arquivo,puni->telefone);

    //tira o arquivo da memoria. Fechando o arquivo
    fclose(arquivo);








    

}