#include <stdio.h>

int main() {
    // --- DADOS DA CARTA 1: BRASIL ---
    char codigo1[] = "A01";
    char nome1[] = "Brasilia";
    unsigned long int populacao1 = 2817000;
    float area1 = 5802.0;
    float pib1 = 265.8; 
    int pontos1 = 15;
    
    float densidade1 = (float)populacao1 / area1;
    float pibCapita1 = (pib1 * 1000000000) / populacao1;
    
    // Super Poder: Soma de todas as propriedades (Densidade entra invertida)
    float superPoder1 = (float)populacao1 + area1 + pib1 + (float)pontos1 + pibCapita1 + (1.0f / densidade1);

    // --- DADOS DA CARTA 2: JAPÃO ---
    char codigo2[] = "B02";
    char nome2[] = "Toquio";
    unsigned long int populacao2 = 13960000;
    float area2 = 2194.0;
    float pib2 = 5100.0;
    int pontos2 = 45;
    
    float densidade2 = (float)populacao2 / area2;
    float pibCapita2 = (pib2 * 1000000000) / populacao2;
    
    float superPoder2 = (float)populacao2 + area2 + pib2 + (float)pontos2 + pibCapita2 + (1.0f / densidade2);

    // --- COMPARAÇÃO DAS CARTAS ---

    printf("============================================\n");
    printf("       SUPER TRUNFO - NÍVEL MESTRE          \n");
    printf("        %s vs %s            \n", nome1, nome2);
    printf("============================================\n\n");

    printf("RESULTADO DAS COMPARAÇÕES (1 = Carta 1 vence, 0 = Carta 2 vence):\n\n");

    // Comparação de cada atributo usando operadores relacionais
    printf("População: %d\n", populacao1 > populacao2);
    printf("Área: %d\n", area1 > area2);
    printf("PIB: %d\n", pib1 > pib2);
    printf("Pontos Turísticos: %d\n", pontos1 > pontos2);
    
    // Regra Mestre: Na Densidade, o MENOR valor vence!
    printf("Densidade Populacional: %d\n", densidade1 < densidade2);
    
    printf("PIB per Capita: %d\n", pibCapita1 > pibCapita2);
    printf("Super Poder: %d\n", superPoder1 > superPoder2);

    printf("\n--------------------------------------------\n");
    printf("Fim do Duelo!\n");

    return 0;
}