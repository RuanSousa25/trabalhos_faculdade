#include <stdio.h>
#include <string.h>

int main(){
    int matricula, idade;
    float altura;
    char nome[50];

    printf("Digite seu nome: ");
    fgets(nome, 50, stdin);
    nome[strcspn(nome, "\n")];

    printf("Digite sua matricula: ");
    scanf("%d", &matricula);

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Digite sua altura: ");
    scanf("%f", &altura);

    printf("O aluno %d (%s) tem %d anos e mede %fm de altura", matricula, nome, idade, altura);
}