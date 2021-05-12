#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define MAX 1000

typedef struct{int catalogo[MAX]; int cima;}Pilha;
void push(Pilha *, int);
void pop(Pilha *);

int main(){	
	
	int container_fora;
    int container_trem; 
    int container_dentro;
    int problema_encontrado; 
    int i; 
    int nenhum; 
	
    Pilha p;
	
	while(scanf("%d", &container_trem) && container_trem){
	while(1){			
		p.cima = -1;
		for(i=0, container_dentro=1, problema_encontrado=0, nenhum=0;
         i<container_trem && !problema_encontrado && !nenhum; 
         i++)
         {
			scanf("%d", &container_fora);
			if(!container_fora){
			nenhum=1;
			break;
			}
			while(1){
				if(container_fora == container_dentro){
				container_dentro++;
				break;
				}
                else if(container_fora > container_dentro){
				push(&p, container_dentro);
				container_dentro++;
				}
                else{
					if(p.catalogo[p.cima] == container_fora)
					pop(&p);
				    else{
						problema_encontrado=1;
						for(;i<container_trem-1;i++)
							scanf("%d", &container_fora);
							}								
						break;
					}
				}				
			}
			if(!nenhum)
				if(!problema_encontrado)
					printf("Yes\n");
				else
					printf("No\n");
			else
				break;
		}
		printf("\n");
	}
	return 0;
}

void push(Pilha *p, int id){
	p->catalogo[++p->cima] = id;
}
void pop(Pilha *p){
	p->cima--;
}