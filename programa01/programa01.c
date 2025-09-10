#include <stdio.h>
#include <string.h>

int main(){
    char nome[100];
    printf("Digite seu nome: ");
    fgets(nome, 100, stdin);
    nome[strcspn(nome, "\n")];
    printf("Seu nome é %s", nome);
    return 0;
}
