#include <stdio.h>

int main() {
    // --- DADOS DA CARTA 1: BRASIL ---
    char estado1 = 'A';
    char codigo1[] = "A01";
    char nomeCidade1[] = "Brasilia";
    unsigned long int populacao1 = 2817000;
    float area1 = 5802.0;
    float pib1 = 265.8; // em bilhões
    int pontosTuristicos1 = 15;

    // Cálculos Carta 1
    float densidade1 = (float)populacao1 / area1;
    float pibPerCapita1 = (pib1 * 1000000000) / populacao1;

    // --- DADOS DA CARTA 2: JAPÃO ---
    char estado2 = 'B';
    char codigo2[] = "B02";
    char nomeCidade2[] = "Toquio";
    unsigned long int populacao2 = 13960000;
    float area2 = 2194.0;
    float pib2 = 5100.0; // em bilhões
    int pontosTuristicos2 = 45;

    // Cálculos Carta 2
    float densidade2 = (float)populacao2 / area2;
    float pibPerCapita2 = (pib2 * 1000000000) / populacao2;

    // --- EXIBIÇÃO DOS DADOS ---

    printf("============================================\n");
    printf("      SUPER TRUNFO - NÍVEL AVENTUREIRO      \n");
    printf("============================================\n");

    // Exibição Brasil
    printf("Carta 1:\n");
    printf("Estado: %c | Código: %s\n", estado1, codigo1);
    printf("Cidade: %s\n", nomeCidade1);
    printf("População: %lu hab\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: R$ %.2f\n", pibPerCapita1);

    printf("\n--------------------------------------------\n");

    // Exibição Japão
    printf("Carta 2:\n");
    printf("Estado: %c | Código: %s\n", estado2, codigo2);
    printf("Cidade: %s\n", nomeCidade2);
    printf("População: %lu hab\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: R$ %.2f\n", pibPerCapita2);

    return 0;
}