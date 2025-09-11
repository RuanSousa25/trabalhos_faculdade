#include <stdio.h>
#include <string.h>
int main(){
    // Variáveis para a carta 01
    char estado1, codigo1[5], cidade1[50];
    int populacao1, pontos_turisticos1;
    float area1, pib1, densidade_populacional1, pib_per_capita1, super_poder1;

    // Variáveis para a carta 02
    char estado2, codigo2[5], cidade2[50];
    int populacao2, pontos_turisticos2;
    float area2, pib2, densidade_populacional2, pib_per_capita2,  super_poder2;

    // Entrada da carta 01
    printf("Informe o estado da sua carta 01\nAtenção para os valores aceitos: (caracteres de A a H).\nEstado: ");
    scanf("%c", &estado1);
    getchar();

    printf("\nInforme o código de sua carta 01\nAtenção para os valores aceitos: o código deve iniciar com o caractere do estado e terminar com um número entre 01 e 04.\nCódigo: ");
    scanf("%s", codigo1);
    getchar();

    printf("\nInforme o nome da cidade de sua carta 01\nAtenção para os valores aceitos: Qualquer conjunto de até 50 caracteres\nNome da Cidade: ");
    fgets(cidade1, 50, stdin);
    cidade1[strcspn(cidade1, "\n")] = 0;

    printf("\nInforme a população de sua carta 01\nAtenção para os valores aceitos: qualquer número inteiro.\nPopulação: ");
    scanf("%d", &populacao1);
    getchar();

    printf("\nInforme a área de sua carta 01\nAtenção para os valores aceitos: qualquer número decimal.\nÁrea (km²): ");
    scanf("%f", &area1);
    getchar();

    printf("\nInforme o PIB de sua carta 01\nAtenção para os valores aceitos: qualquer número decimal.\nPIB (bilhões de reais): ");
    scanf("%f", &pib1);
    getchar();

    printf("\nInforme o número de pontos turísticos de sua carta 01\nAtenção para os valores aceitos: qualquer número inteiro.\nPontos Turísticos: ");
    scanf("%d", &pontos_turisticos1);
    getchar();

    // Processamento de dados carta 01
    densidade_populacional1 = (float) populacao1 / area1;
    pib_per_capita1 = (float) pib1 * 1000000000 / populacao1;
    super_poder1 = populacao1 + area1 + pib1 + pontos_turisticos1 + pib_per_capita1 - densidade_populacional1;

    // Saída da carta 01
    printf("\nCarta 1:");
    printf("\nEstado: %c", estado1);
    printf("\nCódigo: %s", codigo1);
    printf("\nNome da Cidade: %s",cidade1);
    printf("\nPopulação: %d", populacao1);
    printf("\nÁrea: %.2f km²", area1);
    printf("\nPIB: %.2f bilhões de reais", pib1);
    printf("\nNúmero de pontos turísticos: %d", pontos_turisticos1);
    printf("\nDensidade Populacional: %.2f hab/km²", densidade_populacional1);
    printf("\nPIB per Capita: %.2f reais\n", pib_per_capita1);

    // Entrada da carta 02
    printf("\nInforme o estado da sua carta 02\nAtenção para os valores aceitos: (caracteres de A a H).\nEstado: ");
    scanf("%c", &estado2);
    getchar();

    printf("\nInforme o código de sua carta 02\nAtenção para os valores aceitos: o código deve iniciar com o caractere do estado e terminar com um número entre 01 e 04.\nCódigo: ");
    scanf("%s", codigo2);
    getchar();
    
    printf("\nInforme o nome da cidade de sua carta 02\nAtenção para os valores aceitos: Qualquer conjunto de até 50 caracteres\nNome da Cidade: ");
    fgets(cidade2, 50, stdin);
    cidade2[strcspn(cidade2, "\n")] = 0;

    printf("\nInforme a população de sua carta 02\nAtenção para os valores aceitos: qualquer número inteiro.\nPopulação: ");
    scanf("%d", &populacao2);
    getchar();

    printf("\nInforme a área de sua carta 02\nAtenção para os valores aceitos: qualquer número decimal.\nÁrea (km²): ");
    scanf("%f", &area2);
    getchar();

    printf("\nInforme o PIB de sua carta 02\nAtenção para os valores aceitos: qualquer número decimal.\nPIB (bilhões de reais): ");
    scanf("%f", &pib2);
    getchar();

    printf("\nInforme o número de pontos turísticos de sua carta 02\nAtenção para os valores aceitos: qualquer número inteiro.\nPontos Turísticos: ");
    scanf("%d", &pontos_turisticos2);
    getchar();

    // Processamento de dados carta 01
    densidade_populacional2 = (float) populacao2 / area2;
    pib_per_capita2 = (float) pib2 * 1000000000 / populacao2;
    super_poder2 = populacao2 + area2 + pib2 + pontos_turisticos2 + pib_per_capita2 - densidade_populacional2;

    // Saída da carta 02
    printf("\nCarta 2:");
    printf("\nEstado: %c", estado2);
    printf("\nCódigo: %s", codigo2);
    printf("\nNome da Cidade: %s",cidade2);
    printf("\nPopulação: %d", populacao2);
    printf("\nÁrea: %.2f km²", area2);
    printf("\nPIB: %.2f bilhões de reais", pib2);
    printf("\nNúmero de pontos turísticos: %d", pontos_turisticos2);
    printf("\nDensidade Populacional: %.2f hab/km²", densidade_populacional2);
    printf("\nPIB per Capita: %.2f reais\n", pib_per_capita2);


    // Decide a carta ganhadora
    printf("Comparação de Cartas:\n");
    printf("População: Carta %d venceu (%d)\n", 2 - (populacao1 > populacao2), populacao1 > populacao2);
    printf("Área: Carta %d venceu (%d)\n", 2 - (area1 > area2), area1 > area2);
    printf("PIB: Carta %d venceu (%d)\n", 2 - (pib1 > pib2), pib1 > pib2);
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", 2 - (pontos_turisticos1 > pontos_turisticos2), pontos_turisticos1 > pontos_turisticos2);
    printf("Densidade Populacional: Carta %d venceu (%d)\n", 2 - (densidade_populacional1 < densidade_populacional2), densidade_populacional1 < densidade_populacional2);
    printf("PIB per Capita: Carta %d venceu (%d)\n", 2 - (pib_per_capita1 > pib_per_capita2), pib_per_capita1 > pib_per_capita2);
    printf("Super Poder: Carta %d venceu (%d)\n", 2 - (super_poder1 > super_poder2), super_poder1 > super_poder2);

    return 0;
}