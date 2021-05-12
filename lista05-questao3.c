#include <stdio.h>
#include<stdlib.h>

int main(){
    char linha[1001];
    int esquerda;
    int direita;
    int n;
    int i;
    int j;
    scanf("%d",&n);
    for(i = 0; i < n; i++){
        scanf("%s",&linha);
        direita = 0;
        j = 0;
        esquerda = 0;
        direita = 0;
        while(1==1){
            if(linha[j] == '\0') break;
            if(linha[j] == '<') esquerda++;
            if(linha[j] == '>'){
                if(esquerda > 0){
                    direita++;
                    esquerda--;
                }
            }
            j++;
        }
        printf("%d\n", direita);
    }
    return 0;
}