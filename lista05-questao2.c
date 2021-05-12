#include <stdio.h>

int main(){
    char linhas[1001];
    int i;
    int esquerda;
    int direita;

    while(scanf("%s",&linhas) != EOF){
       esquerda = 0;
       direita = 0;
       for(i = 0; linhas[i] != '\0'; i++){
             if(linhas[i] == '(') esquerda++;
             else if (linhas[i] == ')'){
                  direita++;
                  if(esquerda > 0){
                         esquerda--;
                         direita--;
                  }
             }
       }
       if(esquerda == 0 && direita == 0) printf("correct\n");
       else printf("incorrect\n");
    }
    return 0;
}