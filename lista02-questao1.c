/*A seção de controle de produção de uma fábrica mantém um arquivo de registros de
produção por funcionários. Cada registro contém o nome do funcionário (como uma
cadeia de 35 caracteres), o sexo do funcionário (M- masculino ou F- feminino) e o
número de peças produzidas pelo funcionário.
Escrever um programa que calcule de escreva:
- A quantidade de peças produzidas pelos funcionários do sexo masculino e
feminino;
- O nome do(a) funcionário(a) com a maior produção registrada (obs. não
haverá empates).*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    struct registro
    {
        char nome[35];
        int sexo;
        int pecas;
    };
    struct registro funcionario[2];
    
    int mulheres=0;
    int homens=0;
    char *funcionarioTop;
    int pecasMulheres, pecasHomens;
    int a=0, *maior=0, menor=0, auxiliar;
    

    printf("\n\n\n---------- REGISTRO DE FUNCIONARIOS ----------\n\n");
    for (int i=0, j=1; i<2, j<3; i++, j++){
        printf("Nome funcionario(a) %d: ", j);
        fflush(stdin);
        fgets(funcionario[i].nome, 35, stdin);
        printf("Sexo funcionario(a) %d (Feminino=1 OU Masculino=0): ", j);
        scanf(" %d", &funcionario[i].sexo);
        printf("Pecas produzidas pelo(a) funcionario(a) %d: ", j);
        scanf(" %d", &funcionario[i].pecas);
        printf("\n");
    }
    //contador de funcionarios e maior producao
    for(int i=0;i<2;i++){
        if(funcionario[i].sexo==1){
            mulheres+=1;
        } else if(funcionario[i].sexo==0){
            homens+=1;
        } else if(funcionario[i].pecas > maior){
            auxiliar = funcionario[i].nome;
            funcionarioTop = auxiliar;
        } else if(funcionario[i].pecas<menor){
            menor = funcionario[i].pecas;
        };
    }
    

    printf("\n\n\n---------- PECAS PRODUZIDAS ----------\n\n");
    for (int i=0, j=1; i<2, j<3; i++, j++){
        printf("Nome funcionario(a) %d: %s", j, funcionario[i].nome);
        printf("Pecas produzidas pelo(a) funcionario(a) %d: %d\n\n", j, funcionario[i].pecas);
    }
    printf("Numero de funcionarias: %d\n", mulheres);
    printf("Numero de funcionarios: %d\n", homens);
    printf("A maior producao foi de %d, do funcionario %s\n\n", maior, funcionarioTop);
    system("pause");
    return 0;
}