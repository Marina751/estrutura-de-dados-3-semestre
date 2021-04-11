/*Codifique um programa para solicitar 5 números, via teclado, 
e exibi-los na ordem inversa àquela em que foram fornecidos. */
/*#include<stdio.h>
int main (){
    int vetor[5]={0};
    for(int i=0; i<5; i++){
        printf("Digite o numero: ");
        scanf("%d", &vetor[i]);
    }
    printf("\n");

    for(int i=0; i<5; i++){
        printf("Voce digitou, em ordem de digitacao: %d\n", vetor[i]);
    }
    printf("\n");

    for(int i=4; i>=0; i--){
        printf("Voce digitou, em ordem inversa de digitacao: %d\n", vetor[i]);
    }
    return 0;
}*/

#include <stdio.h> 
void main(void) { 
 char n[21]; 
 printf("Qual o seu nome? "); 
 gets(n); 
 printf("Ola, %s!",n); 
}