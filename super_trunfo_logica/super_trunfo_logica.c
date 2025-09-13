#include <stdio.h>
#include <string.h>
int main(){
    // Variáveis para a carta 01
    char pais1[50] = "Brasil";
    int populacao1 = 12345, pontos_turisticos1 = 50;
    float area1 = 1232.23, pib1 = 500.23, densidade_populacional1;

    // Variáveis para a carta 02
    char pais2[50] = "China";
    int populacao2 = 930, pontos_turisticos2 = 20;
    float area2 = 9900002.3, pib2 = 483.44, densidade_populacional2;

    // Variáveis para comparação
    char atributo1[50], atributo2[50];
    int opcao1, opcao2;
    float resultado = 0;

    // Processamento de dados carta 01
    densidade_populacional1 = (float) populacao1 / area1;

    // Saída da carta 01
    printf("\nCarta 1:");
    printf("\nPais: %s", pais1);
    printf("\nPopulação: %d", populacao1);
    printf("\nÁrea: %.2f km²", area1);
    printf("\nPIB: %.2f bilhões de reais", pib1);
    printf("\nNúmero de pontos turísticos: %d", pontos_turisticos1);
    printf("\nDensidade Populacional: %.2f hab/km²", densidade_populacional1);

    // Processamento de dados carta 01
    densidade_populacional2 = (float) populacao2 / area2;

    // Saída da carta 02
    printf("\nCarta 2:");
    printf("\nPais: %s", pais2);
    printf("\nPopulação: %d", populacao2);
    printf("\nÁrea: %.2f km²", area2);
    printf("\nPIB: %.2f bilhões de reais", pib2);
    printf("\nNúmero de pontos turísticos: %d", pontos_turisticos2);
    printf("\nDensidade Populacional: %.2f hab/km²\n", densidade_populacional2);

    printf("\nSelecione o primeiro atributo a ser comparado:");
    printf("\n1. População.");
    printf("\n2. Área.");
    printf("\n3. PIB.");
    printf("\n4. Pontos Turísticos.");
    printf("\n5. Densidade Populacional.");
    printf("\nEscolha uma opção:");
    scanf("%d", &opcao1);

    printf("\nSelecione o segundo atributo a ser comparado:");
    opcao1 != 1 ? printf("\n1. População.") : printf("\n1. População. <- Já escolhido");
    opcao1 != 2 ? printf("\n2. Área.") : printf("\n2. Área. <- Já escolhido");
    opcao1 != 3 ? printf("\n3. PIB.") : printf("\n3. PIB. <- Já escolhido");
    opcao1 != 4 ? printf("\n4. Pontos Turísticos.") : printf("\n4. Pontos Turísticos. <- Já escolhido");
    opcao1 != 5 ? printf("\n5. Densidade Populacional.") : printf("\n5. Densidade Populacional. <- Já escolhido");
    printf("\nEscolha uma opção:");
    scanf("%d", &opcao2);

    if(opcao1 == opcao2){
        printf("Não é permitido selecionar o mesmo atributo duas vezes.");
        return 0;
    };

    // Decide a carta ganhadora
    switch (opcao1)
    {
    case 1:
        strcpy(atributo1, "População");
        resultado += populacao1 - populacao2;
        break;
    case 2:
        strcpy(atributo1, "Área");
        resultado += area1 - area2;
        break;
    case 3:
        strcpy(atributo1, "PIB");
        resultado += pib1 - pib2;
        break;
    case 4:
        strcpy(atributo1, "Pontos Turísticos");
        resultado += pontos_turisticos1 - pontos_turisticos2;
        break;
    case 5:
        strcpy(atributo1, "Densidade Populacional");
        resultado += densidade_populacional2 - densidade_populacional1;
        break;
    default:
        printf("Opção 1 inválida. Encerrando comparação...");
        break;
    }
    switch (opcao2)
    {
    case 1:
        strcpy(atributo2, "População");
        resultado += populacao1 - populacao2;
        break;
    case 2:
        strcpy(atributo2, "Área");
        resultado += area1 - area2;
        break;
    case 3:
        strcpy(atributo2, "PIB");
        resultado += pib1 - pib2;
        break;
    case 4:
        strcpy(atributo2, "Pontos Turísticos");
        resultado += pontos_turisticos1 - pontos_turisticos2;
        break;
    case 5:
        strcpy(atributo2, "Densidade Populacional");
        resultado += densidade_populacional2 - densidade_populacional1;
        break;
    default:
        printf("Opção 2 inválida. Encerrando comparação...");
        break;
    }

    printf("\nComparação de cartas (Atributos: %s, %s):\n\n", atributo1, atributo2);
    printf("Carta 1 - %s\n", pais1);
    printf("Carta 2 - %s\n", pais2);
    if(resultado > 0){
        printf("Resultado: Carta 1 (%s) venceu! Pontuação: %.2f", pais1, resultado);
    } else if(resultado < 0){
        printf("Resultado: Carta 2 (%s) venceu! Pontuação: %.2f", pais2, 0-resultado);
    }else{
        printf("Resultado: Empate!");
    };


    return 0;
}