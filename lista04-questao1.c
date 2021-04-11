#include <stdio.h>
#include <stdlib.h>

typedef struct box{
    char conteudo;
    struct box *proximo;
}NovaBox;

NovaBox* inserir_letra(NovaBox* catalogo, char conteudo){
    NovaBox* novo = (NovaBox*)malloc(sizeof(NovaBox));
    novo->conteudo = conteudo;
    novo->proximo = catalogo;
    return novo;
}

NovaBox* tirar_letra(NovaBox*catalogo, char conteudo){
    NovaBox *p, *anterior, excluido;
    anterior = catalogo;
    if(anterior->conteudo == conteudo){
        p = anterior->proximo;
        free(anterior);
        return p;
    }
    for(p = anterior->proximo; p != NULL; p = p->proximo){
        if(p->conteudo == conteudo){
            anterior->proximo = p->proximo;
            free(p);
            return catalogo;
        }
        anterior = anterior->proximo;
    }
    return catalogo;
}

NovaBox* tirar_primeira_letra(NovaBox*catalogo){
    NovaBox*excluido;
    excluido = catalogo;
    catalogo = catalogo->proximo;
    free(excluido);
    return catalogo;
}

void inserir_letra_no_final(NovaBox *catalogo, char conteudo){
    NovaBox *p = catalogo;
    for(p = catalogo; p->proximo != NULL; p = p->proximo){
    }
    p->proximo = (NovaBox*)malloc(sizeof(NovaBox));
    p->proximo->proximo = NULL;
    p->proximo->conteudo = conteudo;
}

void inserir_letra_entre_duas(NovaBox*catalogo, char primeiro, char proximo, char conteudo){
    NovaBox*novo;
    NovaBox *p = catalogo;
    for(p = catalogo; p != NULL; p = p->proximo){
        if(p->proximo == NULL)
            break;
        if(p->conteudo == primeiro && p->proximo->conteudo == proximo)
        {
            novo = (NovaBox*)malloc(sizeof(NovaBox));
            novo->proximo = p->proximo;
            novo->conteudo = conteudo;
            p->proximo = novo;
        }
    }
}

void box_FazerCatalogo(NovaBox* catalogo){
    NovaBox *p;
    printf("\n\n-----------Inserindo Novos Elementos-----------\n\n");
    for(p = catalogo; p != NULL; p = p->proximo){
        printf("Conteudo: %c\n", p->conteudo);
    }
}

void tirar_ultima_letra(NovaBox *catalogo){
    NovaBox *p = catalogo;
    NovaBox *anterior;
    for(p = catalogo; p->proximo != NULL; p = p->proximo){
        anterior = p;
    }
    anterior->proximo = NULL;
    free(p);
}

void retirar_letra(NovaBox*catalogo, char conteudo){
    NovaBox*anterior;
    NovaBox *p;
    anterior = catalogo;
    for(p = anterior->proximo; p != NULL; p = p->proximo){
        if(anterior == NULL)
            break;
        if(p->conteudo == conteudo)
        {
            anterior->proximo = p->proximo;
            free(p);
        }
    }
}

int main(){
    char letra;
    NovaBox *catalogo = NULL;
    catalogo = inserir_letra(catalogo, 'c');

    //1 - Insira um elemento contendo a letra A no final da lista.
    inserir_letra_no_final(catalogo, 'A');
    box_FazerCatalogo(catalogo);

    //2 - Insira um elemento contendo a letra B no inicio da lista.
    catalogo = inserir_letra(catalogo, 'B');
    box_FazerCatalogo(catalogo);

    //3 - Insira um elemento contendo a letra C no final da lista.
    inserir_letra_no_final(catalogo, 'C');
    box_FazerCatalogo(catalogo);

    //4 - Insira um elemento contendo a letra D no final da lista.
    inserir_letra_no_final(catalogo, 'D');
    box_FazerCatalogo(catalogo);

    //5 - Insira um elemento contendo a letra E entre os elementos de conteúdo A e C.
    inserir_letra_entre_duas(catalogo, 'A', 'C', 'E');
    box_FazerCatalogo(catalogo);

    //6 - Insira um elemento contendo a letra F no final da lista.
    inserir_letra_no_final(catalogo, 'F');
    box_FazerCatalogo(catalogo);

    //7 - Insira um elemento contendo a letra G no inicio da lista.
    catalogo = inserir_letra(catalogo, 'G');
    box_FazerCatalogo(catalogo);

    //8 - Exclua o último elemento.
    tirar_ultima_letra(catalogo);
    catalogo = tirar_primeira_letra(catalogo);
    box_FazerCatalogo(catalogo);

    //10 - Insira um elemento contendo a letra H entre os elementos de conteúdo A e E.
    inserir_letra_entre_duas(catalogo, 'A', 'E', 'H');
    box_FazerCatalogo(catalogo);

    //11 - Exclua o elemento de conteúdo A.
    catalogo = tirar_letra(catalogo, 'A');
    box_FazerCatalogo(catalogo);

    //12 - Insira um elemento contendo a letra I entre os elementos de conteúdo E e D.
    inserir_letra_entre_duas(catalogo, 'E', 'D', 'I');
    box_FazerCatalogo(catalogo);

    //13 - Insira um elemento contendo a letra J no final da lista.
    inserir_letra_no_final(catalogo, 'J');
    box_FazerCatalogo(catalogo);

   //14 - Insira um elemento contendo a letra K entre os elementos de conteúdo B e H.
    inserir_letra_entre_duas(catalogo, 'B', 'H', 'K');
    box_FazerCatalogo(catalogo);

    //15 - Exclua o elemento de conteúdo D, K e I.
    catalogo = tirar_letra(catalogo, 'D');
    catalogo = tirar_letra(catalogo, 'K');
    catalogo = tirar_letra(catalogo, 'I');
    box_FazerCatalogo(catalogo);

    //16 - Exclua o elemento de conteúdo B
    catalogo = tirar_letra(catalogo, 'B');
    box_FazerCatalogo(catalogo);

    //17 - Insira um elemento contendo a letra L no final da lista.
    inserir_letra_no_final(catalogo, 'L');
    box_FazerCatalogo(catalogo);





    box_FazerCatalogo(catalogo);

    return 0;
}