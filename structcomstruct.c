#include <stdio.h>
#include <string.h>

typedef struct Data{
    int dia;
    int mes;
    int ano;
}Data;


typedef struct Aluno {
    int id;
    Data nascimento;
}Aluno;

int main() {
    //criando um aluno
    Aluno aluno1;

    aluno1.id = 15;
    aluno1.nascimento.dia = 20;
    aluno1.nascimento.mes = 9;
    aluno1.nascimento.ano = 2001;

    printf("Aluno de id: %d\nNascido em: %d/%d/%d", aluno1.id,
           aluno1.nascimento.dia,
           aluno1.nascimento.mes,
           aluno1.nascimento.ano);


    return 0;
}

