#include <stdio.h>
#include <stdlib.h>

int main() {

    int linhas, colunas, i, j;

    printf("Digite o n�mero de linhas: ");
    scanf("%d", &linhas);
    printf("Digite o n�mero de colunas: ");
    scanf("%d", &colunas);

    int **matriz;

    //alocando as linhas
    matriz = (int **) malloc(linhas * sizeof(int *));

    //alocando mem�ria para as colunas de cada linha
    for(i = 0; i < linhas; i++) {
        matriz[i] = (int *) malloc(colunas * sizeof(int));
    }

    for(i = 0; i < linhas; i++) {
        for(j = 0; j < colunas; j++) {
            matriz[i][j] = i;q
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    free(matriz);

    return 0;
}
