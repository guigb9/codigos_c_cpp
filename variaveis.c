#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, "");
    printf("Olá");

    int a = 5;
    printf("%d ", a);
    scanf("%d", &a);
    printf("O valor de a mudou para %d", a);

}