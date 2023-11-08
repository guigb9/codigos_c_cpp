#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int* alocaVetor(int tamanho) {
    //� criado um ponteiro auxiliar
    int *aux;

    //alocacao din�mica de mem�ria
    //size of tamanho de bytes que o tipo int ocupa
    //(int *) for�a a transforma��o do tamanho em um ponteiro
    aux = (int*) malloc(tamanho * sizeof(int));

    //retorna um ponteiro que aponta para a primeira posi��o de mem�ria do vetor alocado
    return aux;
}

int main() {
    setlocale(LC_ALL, "");

    int *vetor, tamanho, contador;

    printf("Digite um tamanho para o vetor: ");

    scanf("%d", &tamanho);

    vetor = alocaVetor(tamanho);


    for (contador = 0; contador < tamanho; contador++) {
        printf("Digite um Valor para a posi��o %d do vetor: ", contador);
        int valorDigitado;
        scanf("%d", &vetor[contador]);
    }

    for(contador = 0; contador < tamanho; contador++) {
        printf("vetor[%d] = [%d]\n", contador, vetor[contador]);
    }

    //ponteiro recebe o endere�o de mem�ria que foi alocado para o vetor

    vetor = alocaVetor(tamanho);

    //limpa a aloca��o din�mica
    free(vetor);


    return 0;
}
