#include <stdio.h>
#include <stdlib.h>
#include <new>
#include <stdbool.h>
#include <iostream>
#include <string>
//necessário para usar o cout
using namespace std;

int main() {

    int linhas, colunas, i, j;

    printf("Digite o número de linhas: ");
    scanf("%d", &linhas);
    printf("Digite o número de colunas: ");
    scanf("%d", &colunas);

    int **matriz;

    //alocando as linhas
    matriz = (int **) new int[linhas];

    //alocando memória para as colunas de cada linha
    for(i = 0; i < linhas; i++) {
        matriz[i] = (int *) new int[colunas];
    }

    for(i = 0; i < linhas; i++) {
        for(j = 0; j < colunas; j++) {
            matriz[i][j] = i;
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    free(matriz);

    return 0;
}
