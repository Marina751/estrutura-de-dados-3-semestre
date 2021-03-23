#include<stdio.h>
#include<stdlib.h>

/*A seção de controle de produção de uma fábrica mantém um arquivo de regs de
produção por funcionários. Cada reg contém o nome do funcionário (como uma
cadeia de 35 caracteres), o sexo do funcionário (M- masculino ou F- feminino) e o
número de peças produzidas pelo funcionário.
Escrever um programa que calcule de escreva:
1) A quantidade de peças produzidas pelos funcionários do sexo masculino e
feminino;
2) O nome do(a) funcionário(a) com a maior produção registrada (obs. não
haverá empates).*/

int main(){
    struct regfuncio // tipo de dado
    {
        char nome[35];
        int sexo[2];
        int pecasProduzidas;
    }; // definição de struct

    struct regfuncio funcionario;
    printf("");


}