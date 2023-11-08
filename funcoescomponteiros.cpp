#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <iostream>
#include <string>
//necessário para usar o cout
using namespace std;

int retornaComMaisDez(int numero) {
    return numero + 10;
}

void aumentaDez(int *numero) {
    *numero += 10;
}


int main() {

    int a = 5;

    cout << a << "\n";


    //a = retornaComMaisDez(a);

    aumentaDez(&a);


    cout << a << "\n";

    return 0;
}
