#include<stdio.h>
#include<stdlib.h>

/*Elabore um algoritmo que armazene 30 valores inteiros num vetor; segundo a
seguinte lei de formação: Se o índice do vetor for par, o valor digitado deverá ser
multiplicado por 2, caso contrário por 5. A seguir efetue uma pesquisa binária no
vetor.*/
void buscabinaria(int vetor[], int n, int elemento){
    int i, inicio, meio, fim;
    inicio=0;
    fim=n-1;

    while(inicio<=fim){
        meio=(inicio+fim)/2;
        if(elemento<vetor[meio]){
            fim=meio-1;
        } else if(elemento<vetor[meio]){
            inicio=meio+1;
        } else {
            return meio;
        } return -1;
    }
}
int main(){
    int vetor[30];
    int vetorFinal[30];
    int i, n;
    int busca;

    /*for(i=0; i<6; ++i){
        printf("Digite o valor para o indice %d: ", i);
        scanf("%d", &vetor[i]);
    }*/

    for(i=0, n=1; i<30, n<=30; i++, n++){
        vetor[i]=n;
    }

    for(int i=0; i<30; i++){
        printf("No indice %d se encontra o elementro %d\n", i, vetor[i]);
    }
    
    for(i=0, n=1; i<30, n<=30; i++, n++){
        if(i==0){
           vetor[i]=(n*5); 
        } else if (i%2>=1){
            vetor[i]=(n*5);
        } else if(i%2==0){
            vetor[i]=(n*2);
        }
    }


    printf("\n");
    for(int i=0; i<30; i++){
        printf("No indice %d o elemento se torna %d\n", i, vetor[i]);
    }

    printf("Digite um elemento a ser procurado: ");
    scanf("%d", &busca);
    
    buscabinaria(30, 30, busca);

    if (buscabinaria == 1) {
        printf("O elemento foi encontrado");
    } else{
        printf("O elemento não foi encontrado");
    }

    system("pause");
    return 0;
}