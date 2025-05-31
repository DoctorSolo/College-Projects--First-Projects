#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Cadastro{
char Nome[100];
int idade;
};

int main()
{
    int loop = 0;
    char nome[100];
    struct Cadastro dados;
    printf("Informe os dados, ou novo espaço para parar: ");

    do{
        printf("Nome: ");   fgets(%g,nome);
        if (nome == "\n"){
            loop = loop + 1;
        }
    }while (loop == 0);

    return 0;
}
