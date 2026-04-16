#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: Exibição de dados de 2 países diferentes com valores pré-definidos

int main() {
    // --- CARTA 1: BRASIL ---
    char estado1 = 'A';
    char codigo1[] = "A01";
    char nomeCidade1[] = "Brasilia";
    int populacao1 = 2817000;
    float area1 = 5802.0;
    float pib1 = 265.8; // em bilhões
    int pontosTuristicos1 = 15;

    // --- CARTA 2: JAPÃO ---
    char estado2 = 'B';
    char codigo2[] = "B02";
    char nomeCidade2[] = "Toquio";
    int populacao2 = 13960000;
    float area2 = 2194.0;
    float pib2 = 5100.0; // em bilhões
    int pontosTuristicos2 = 45;

    // --- EXIBIÇÃO DOS DADOS ---

    printf("=============================\n");
    printf("      CARTAS DO DESAFIO      \n");
    printf("=============================\n");

    // Exibição Brasil
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", nomeCidade1);
    printf("População: %d habitantes\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Pontos Turísticos: %d\n", pontosTuristicos1);

    printf("\n-----------------------------\n");

    // Exibição Japão
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", nomeCidade2);
    printf("População: %d habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Pontos Turísticos: %d\n", pontosTuristicos2);

    return 0;
}
