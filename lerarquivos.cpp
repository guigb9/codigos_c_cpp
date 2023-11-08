#include <stdio.h>
#include <stdlib.h>
#include <fstream>
#include <string>
#include <iostream>

using namespace std;

int main () {

    //Cursor que ira percorer cada letra do arquivo

    int c;

    //Arquivo a ser lido
    FILE *file;

    //Abre o arquivo no diretório escolhido

    file = fopen("Texto.txt", "r");


    if(file) {
        int cont = 0;

        //vai até o fim do arquivo
        fseek(file, 0, SEEK_END);

        // Obtenha a posição atual, que é o tamanho do arquivo
        int fileSize = ftell(file);

        // Volte ao início do arquivo
        fseek(file, 0, SEEK_SET);

        char conteudoTexto[fileSize];
        //enquanto c não for diferente do fim do arquivo END OF FILE (EOF)
        while((c = getc(file)) != EOF) {
            conteudoTexto[cont] = c;
            //convertendo codigo asc para caractere
            printf("%c", c);
            cont++;
        }

        for(int i = 0; i < fileSize; i++) {
            printf("\ncaractere lido: %c", conteudoTexto[i]);
        }

        fclose(file);
    }

    return 0;
}
