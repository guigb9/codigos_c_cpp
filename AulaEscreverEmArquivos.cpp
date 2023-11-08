#include <stdio.h>
#include <string.h>
#include <fstream>

using namespace std;

int main () {
    //cria o arquivo de saida
    ofstream outfile;
    //abre o arquivo ou cria caso ele nao exista
    outfile.open("Texto.txt", std::ios_base::app);

    outfile << "Cinza";

    outfile.close();

    return 0;
}
