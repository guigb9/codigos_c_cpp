#include <stdio.h>
#include <string.h>

struct palavra{;
  int ordem;
  char letra;
  char texto[255];
};

int main() {
    struct palavra primeiraPalavra;

    primeiraPalavra.ordem = 0;
    primeiraPalavra.letra = 'c';
    strcpy(primeiraPalavra.texto, "cachorro");

    printf("Ordem: %d, PrimeiraLetra: %c, Palavra: %s\n",
           primeiraPalavra.ordem,
           primeiraPalavra.letra,
           primeiraPalavra.texto);

           //fazendo uma lista de structs
           struct palavra listaDePalavras[3];

           listaDePalavras[0].ordem = 0;
           listaDePalavras[1].ordem = 1;
           listaDePalavras[2].ordem = 2;
           listaDePalavras[0].letra = 'c';
           listaDePalavras[1].letra = 'd';
           listaDePalavras[2].letra = 'e';
           strcpy(listaDePalavras[0].texto, "cachorro");
           strcpy(listaDePalavras[1].texto, "dahora");
           strcpy(listaDePalavras[2].texto, "elefante");

           int cont;

           for(cont = 0; cont < 3; cont++) {
                printf("Ordem: %d, PrimeiraLetra: %c, Palavra: %s\n",
                listaDePalavras[cont].ordem,
                listaDePalavras[cont].letra,
                listaDePalavras[cont].texto);
           }

    return 0;
}
