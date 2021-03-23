#include<stdio.h>
#include<stdlib.h>
/*Suponha que existam 02 vetores A e B do tipo inteiro com 25 elementos inteiros
cada. Elabore um algoritmo que construa um vetor C a partir da junção de A e B. A
seguir efetue uma pesquisa sequencial no vetor no vetor C.*/
void juncao(int vetor[]){}

int main(){
    int i, j;
    int vetorA[25];
    int vetorB[25];
    int vetorC[50];
    int buscar;
    int pesquisa=0;
    int n=50;
    int resposta[n];
    
    for (int i=0, j=1; i<25, j<=25; i++, j++){
        vetorA[i]=j;
        printf("%d pertence ao vetor A\n", vetorA[i]);
    }
    printf("\n");
    for (int i=0, j=26; i<25, j<=50; i++, j++){
        vetorB[i] = j;
        printf("%d pertence ao vetor B\n", vetorB[i]);
    }
    printf("\n");
    // prencher vetorC com vetorA
    for(int i=0; i<25; i++){
        vetorC[i] = vetorA[i];
        printf("%d agora pertence ao vetor C\n", vetorC[i]);
    }
    //prencher vetorC com o vetorB
    for(int i=25, j=0; i<50, j<25; i++, j++){
        vetorC[i] = vetorB[j];
        printf("%d agora pertence ao vetor C\n", vetorC[i]);
    }
    printf("\n");
    printf("Informe um numero que quer buscar no vetor C:\n");
    scanf("%d", &buscar);

    for(int i=0; i<=n; i++){
        if(vetorC[i]==buscar){
            resposta[pesquisa] = i;
            pesquisa++;
        }
    }
    if(pesquisa>0){
        for(int i=0; i<=pesquisa; i++){
            printf("O numero foi encontrado na posicao %d\n do vetor C", resposta[i]);
            break;
        }
    } else {
        printf("Numero nao encontrado\n");
    }
    system("pause");
    return 0;
}