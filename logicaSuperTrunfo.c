#include <stdio.h>

// Programa para comparar duas cartas do Super Trunfo com base em um atributo fixo.

int main() {
    // Declaração das variáveis da Carta 1
    char estado1[3]; 
    char codigo1[5];
    char cidade1[50];
    int populacao1, pontos_turisticos1;
    float area1, PIB1;

    // Declaração das variáveis da Carta 2
    char estado2[3];
    char codigo2[5];
    char cidade2[50];
    int populacao2, pontos_turisticos2;
    float area2, PIB2;

    // Cadastro da Carta 1
    printf("\n *** Cadastro da Carta 1: ***\n");
    printf("Estado (sigla): ");
    scanf("%s", estado1);
    printf("Código: ");
    scanf("%s", codigo1);
    printf("Cidade: ");
    scanf(" %[^\n]", cidade1);
    printf("População: ");
    scanf("%d", &populacao1);
    printf("Área: ");
    scanf("%f", &area1);
    printf("PIB: ");
    scanf("%f", &PIB1);
    printf("Pontos turísticos: ");
    scanf("%d", &pontos_turisticos1);

    // Cadastro da Carta 2
    printf("\n *** Cadastro da Carta 2: ***\n");
    printf("Estado (sigla): ");
    scanf("%s", estado2);
    printf("Código: ");
    scanf("%s", codigo2);
    printf("Cidade: ");
    scanf(" %[^\n]", cidade2);
    printf("População: ");
    scanf("%d", &populacao2);
    printf("Área: ");
    scanf("%f", &area2);
    printf("PIB: ");
    scanf("%f", &PIB2);
    printf("Pontos turísticos: ");
    scanf("%d", &pontos_turisticos2);

    // Cálculo da Densidade Populacional e PIB per capita
    float densidade1 = populacao1 / area1;
    float percapita1 = PIB1 / populacao1;

    float densidade2 = populacao2 / area2;
    float percapita2 = PIB2 / populacao2;

    // Exibição dos dados
    printf("\n--- Dados da Carta 1 ---\n");
    printf("Cidade: %s (%s)\n", cidade1, estado1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f\n", area1);
    printf("PIB: %.2f\n", PIB1);
    printf("Densidade Populacional: %.2f\n", densidade1);
    printf("PIB per capita: %.2f\n", percapita1);

    printf("\n--- Dados da Carta 2 ---\n");
    printf("Cidade: %s (%s)\n", cidade2, estado2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f\n", area2);
    printf("PIB: %.2f\n", PIB2);
    printf("Densidade Populacional: %.2f\n", densidade2);
    printf("PIB per capita: %.2f\n", percapita2);

    // Escolha do atributo para comparar
    // Neste exemplo, vamos comparar o PIB
    printf("\n--- Comparação de Cartas (Atributo: PIB) ---\n");

    printf("%s: %.2f\n", cidade1, PIB1);
    printf("%s: %.2f\n", cidade2, PIB2);

    // Comparação usando if-else
    if (PIB1 > PIB2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
    } else if (PIB2 > PIB1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    } else {
        printf("Resultado: Empate!\n");
    }

    return 0;
}
