/*Considerando a necessidade de desenvolver uma agenda que contenha os campos:
nome, endereço, telefone e um campo situação (L – Livre; X – Ocupado e * -
Apagado); defina a estrutura de registro apropriado em C.*/
#include<stdio.h>
#include<stdlib.h>

int main(){
    struct agenda
    {
        char nome[35];
        char endereco[100];
        char telefone[20];
        char situacao[3];
    };
    struct agenda amigos[2];
    
    printf("\n\n\n---------- CADASTRO NA AGENDA ----------\n\n");
    for (int i=0, j=1; i<2, j<3; i++, j++){
        
        printf("Nome do contato %d: ", j);
        fflush(stdin);
        fgets(amigos[i].nome, 35, stdin);
        printf("Endereco do contato %d: ", j);
        fflush(stdin);
        fgets(amigos[i].endereco, 100, stdin);
        printf("Telefone do contato %d: ", j);
        fflush(stdin);
        fgets(amigos[i].telefone, 20, stdin);
        printf("Situacao do contato %d (L = Livre; X = Ocupado ou * = Apagado): ", j);
        fflush(stdin);
        fgets(amigos[i].situacao, 3, stdin);
        printf("\n");
    }
    
    printf("---------- DADOS DOS MEUS CONTATOS ----------\n\n");
    for(int i=0, j=1; i<2, j<3; i++, j++){
        printf("Nome do contato %d:  %s", j, amigos[i].nome);
        printf("Endereco do contato %d: %s", j, amigos[i].endereco);
        printf("Telefone do contato %d: %s", j, amigos[i].telefone);
        printf("Situacao do contato %d:  %s\n\n", j, amigos[i].situacao);
    }
    system("pause");
    return 0;
}