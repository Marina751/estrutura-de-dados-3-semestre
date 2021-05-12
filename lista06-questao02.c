#include <stdio.h>

struct celula {
    int valor;
    int anterior;
    int proximo;
};

int main()
{
    int N, k, m;

    while (1) {
        struct celula aplicantes[21];
        int i, j1, j2;
        int faltam;

        scanf("%d%d%d", &N, &k, &m);

        if (!(N || k || m))
            break;

        for (i = 1; i <= N; ++i) {
            aplicantes[i].valor = i;
            aplicantes[i].anterior = (i == 1) ? N : i - 1;
            aplicantes[i].proximo = (i == N) ? 1 : i + 1;
        }
        aplicantes[0].proximo = 1;
        aplicantes[N + 1].anterior = N;

        faltam = N;
        j1 = 0;
        j2 = N + 1;

        while (1) {
            for (i = 0; i < k; ++i)
                j1 = aplicantes[j1].proximo;
            for (i = 0; i < m; ++i)
                j2 = aplicantes[j2].anterior;

            printf("%3d", aplicantes[j1].valor);
            --faltam;
            if (j1 != j2) {
                printf("%3d", aplicantes[j2].valor);
                --faltam;
            }

            if (aplicantes[j1].anterior == j2 || aplicantes[j1].proximo == j2) {
                if (aplicantes[j1].anterior == j2) {
                    aplicantes[j1].anterior = aplicantes[j2].anterior;
                    aplicantes[j2].proximo = aplicantes[j1].proximo;
                }
                if (aplicantes[j1].proximo == j2) {
                    aplicantes[j1].proximo = aplicantes[j2].proximo;
                    aplicantes[j2].anterior = aplicantes[j1].anterior;
                }
            }

            aplicantes[aplicantes[j1].anterior].proximo = aplicantes[j1].proximo;
            aplicantes[aplicantes[j1].proximo].anterior = aplicantes[j1].anterior;
            if (j1 != j2) {
                aplicantes[aplicantes[j2].anterior].proximo = aplicantes[j2].proximo;
                aplicantes[aplicantes[j2].proximo].anterior = aplicantes[j2].anterior;
            }

            if (faltam > 0)
                putchar(',');
            else {
                putchar('\n');
                break;
            }
        }
    }

    return 0;
}