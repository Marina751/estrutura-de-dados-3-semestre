#include<stdio.h>
#include<stdlib.h>
/* Implementar em uma linguagem de programação os algoritmos de ordenação
abaixo. Obs: Elaborar um menu com as opções para cada algoritmo. Considerar
uma entrada de n= 10 elementos.*/

//bubble sort
int main(){
    int vetor[19];
    int i, j, x;
    
    for(i=0;i<10;i++){
        printf("Digite um numero: ");
        scanf("%d", &vetor[i]);
    }
    printf("\n");


    for(i=0;i<10;i++){
        printf("Numero digitado: %d", vetor[i]);
        printf("\n");
    }
    printf("\n");


    //para ordenar n elementos, bastam n-1 fases com n-1 ordenaçoes cada
    for(i=0;i<10;i++){
        for(j=0;j<9;j++){
            if(vetor[j]>vetor[j+1]){
                x = vetor[j];
                vetor[j] = vetor[j+1];
                vetor[j+1] = x;
            }
        }
    }

    for(i=0;i<10;i++){
        printf("Nova ordme vetor: %d", vetor[i]);
        printf("\n");
    }

    system("pause");
    return 0;
}