#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, "");
    printf("Ol�\n");

    int a = 5;
    printf("%d ", a);
    scanf("%d", &a);
    printf("O valor de a mudou para %d\n", a);

    float b = 5.5;
    printf("O valor de b � = %f\n", b);
    scanf("%f", &b);
    printf("O valor de b mudou para %f\n", b);

    //antes de ler vari�veis char precisa limpar o buffer
    char letra = 't';
    fflush(stdin);
    printf("O valor de c � = %c\n", letra);
    scanf("%c", &letra);
    printf("O valor de c mudou para %c\n", letra);

}
