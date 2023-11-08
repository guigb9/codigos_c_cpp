#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, "");
    printf("Olá\n");

    int a = 5;
    printf("%d ", a);
    scanf("%d", &a);
    printf("O valor de a mudou para %d\n", a);

    float b = 5.5;
    printf("O valor de b é = %f\n", b);
    scanf("%f", &b);
    printf("O valor de b mudou para %f\n", b);

    //antes de ler variáveis char precisa limpar o buffer
    char letra = 't';
    fflush(stdin);
    printf("O valor de c é = %c\n", letra);
    scanf("%c", &letra);
    printf("O valor de c mudou para %c\n", letra);

}
