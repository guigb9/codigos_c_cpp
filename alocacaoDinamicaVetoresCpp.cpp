#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <iostream>
#include <string>
#include <new>
//necessário para usar o cout
using namespace std;


int main() {
    int tamanho, contador;

    cout << "Digite o tamanho: ";

    scanf("%d", &tamanho);

    //criando um ponteiro que recebe o novo vetor vazio

    int *vetor = new int[tamanho];

    for(contador = 0; contador < tamanho; contador++) {
        cout << "Digite um valor para vetor[" << contador << "] ";
        scanf("%d", &vetor[contador]);
    }

    for(contador = 0; contador <  tamanho; contador++) {
        cout << "vetor[" << contador << "] = " << vetor[contador] << "\n";
    }

    return 0;
}
