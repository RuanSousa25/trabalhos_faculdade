#include <stdio.h>
#include <string.h>
int main(){
    // Variáveis para a carta 01
    char estado1 = 'A', codigo1[5] = "A01", cidade1[50] = "São Paulo";
    int populacao1 = 12345, pontos_turisticos1 = 50;
    float area1 = 1232.23, pib1 = 500.23, densidade_populacional1, pib_per_capita1, super_poder1;

    // Variáveis para a carta 02
    char estado2 = 'B', codigo2[5] = "B03", cidade2[50] = "Rio de Janeiro";
    int populacao2 = 930, pontos_turisticos2 = 20;
    float area2 = 992.3, pib2 = 483.44, densidade_populacional2, pib_per_capita2,  super_poder2;

    // Variáveis para comparação
    //
    short atributo_comparado;

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
    printf("\nComparação de cartas (Atributo: População):\n\n");
    printf("Carta 1 - %s: %d\n", cidade1, populacao1);
    printf("Carta 2 - %s: %d\n", cidade2, populacao2);
    if(populacao1 > populacao2){
        printf("Resultado: Carta 1 (%s) venceu!", cidade1);
    };
    if(populacao1 < populacao2){
        printf("Resultado: Carta 2 (%s) venceu!", cidade2);
    };
    if(populacao1 == populacao2){
        printf("Resultado: Empate!");
    };

    return 0;
}