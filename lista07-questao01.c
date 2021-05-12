#include <stdio.h>

struct criancas {
    char nome[30];
    int valor;
    int anterior, proximo;
};

int main()
{
    while (1) {
        int N, i, j;
        struct criancas crianca[100];

        scanf("%d", &N);
        if (!N)
            break;

        for (i = 0; i < N; ++i) {
            scanf("%s%d", crianca[i].nome, &crianca[i].valor);

            crianca[i].anterior = ((i - 1) % N + N) % N;
            crianca[i].proximo = (i + 1) % N;
        }

        i = 0;
        while (N > 1) {
            int valor = crianca[i].valor;

            if (valor % 2) {
                for (j = 0; j < valor; ++j)
                    i = crianca[i].proximo;
            } else {
                for (j = 0; j < valor; ++j)
                    i = crianca[i].anterior;
            }

            crianca[crianca[i].anterior].proximo = crianca[i].proximo;
            crianca[crianca[i].proximo].anterior = crianca[i].anterior;

            --N;
        }
        i = crianca[i].proximo;

        printf("Vencedor(a): %s\n", crianca[i].nome);
    }

    return 0;
}