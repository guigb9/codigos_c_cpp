#include <stdio.h>
#include <string>
#include <iostream>
#include <new>

using namespace std;

struct fruta {
    string cor;
    string nome;
};


int main () {
    //criando um ponteiro para o struct criado

    fruta *primeiraFruta = new fruta;

    //modificando valores
    primeiraFruta->cor = "Amarela";

    primeiraFruta->nome = "Banana";

    cout << "Fruta: " << primeiraFruta->nome << " Cor: " << primeiraFruta->cor;


    fruta *ponteiroListaDeFrutas = new fruta[2];

    ponteiroListaDeFrutas[0].cor = "Vermelho";
    ponteiroListaDeFrutas[0].nome = "Maça";
    ponteiroListaDeFrutas[0].cor = "Verde";
    ponteiroListaDeFrutas[0].nome = "Kiwi";

    int cont;

    for(cont = 0; cont < 2; cont++) {
        cout << "Fruta: " << ponteiroListaDeFrutas[cont].nome << " Cor: " << ponteiroListaDeFrutas[cont].cor;
    }

    return 0;
}
