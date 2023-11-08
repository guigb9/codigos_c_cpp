#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <iostream>
#include <string>
//necessário para usar o cout
using namespace std;

void imprimeVetor(int *vetor, int tamanho) {

    for(int i = 0; i < tamanho; i++) {
        cout << vetor[i] << "\n";
    }
}

void modificaVetor(int *vetor, int tamanho) {

    for(int i = 0; i < tamanho; i++) {
        vetor[i] = vetor[i] + 1;
    }
}




int main() {

    int vetor[3] = {1, 2, 3};

    imprimeVetor(vetor, sizeof(vetor)/sizeof(vetor[0]));

    modificaVetor(vetor, sizeof(vetor)/sizeof(vetor[0]));

    imprimeVetor(vetor, sizeof(vetor)/sizeof(vetor[0]));

    return 0;

}
