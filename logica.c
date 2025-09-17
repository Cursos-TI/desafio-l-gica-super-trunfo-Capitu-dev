#include <stdio.h>

int main() {
    char Estado1[] = "SP", Estado2[] = "RJ";
    char CodigoCarta1[] = "A01", CodigoCarta2[] = "A02";
    char Cidade1[] = "Sao Paulo", Cidade2[] = "Rio de Janeiro";

    long int Populacao1 = 12300000, Populacao2 = 6000000; // sem pontos de milhar
    float Area1 = 153250.0, Area2 = 120250.0;
    float PIB1 = 533.8, PIB2 = 256.4;
    int PontosTuristicos1 = 100, PontosTuristicos2 = 50;
    float densidade1, densidade2, pibPerCapita1, pibPerCapita2;

    // Cálculos
    densidade1 = Populacao1 / Area1;
    pibPerCapita1 = PIB1 / Populacao1;

    densidade2 = Populacao2 / Area2;
    pibPerCapita2 = PIB2 / Populacao2;

    // Resultados
    printf("\n=== Carta 1 ===\n");
    printf("Estado: %s\n", Estado1);
    printf("Codigo: %s\n", CodigoCarta1);
    printf("Cidade: %s\n", Cidade1);
    printf("Populacao: %ld\n", Populacao1);
    printf("Area: %.2f\n", Area1);
    printf("PIB: %.2f\n", PIB1);
    printf("Pontos Turisticos: %d\n", PontosTuristicos1);

    printf("\n=== Carta 2 ===\n");
    printf("Estado: %s\n", Estado2);
    printf("Codigo: %s\n", CodigoCarta2);
    printf("Cidade: %s\n", Cidade2);
    printf("Populacao: %ld\n", Populacao2);
    printf("Area: %.2f\n", Area2);
    printf("PIB: %.2f\n", PIB2);
    printf("Pontos Turisticos: %d\n", PontosTuristicos2);

    printf("\nDensidade populacional 1: %.2f\n", densidade1);
    printf("PIB per capita 1: %.8f\n", pibPerCapita1); // vai ser um número bem pequeno
    printf("Densidade populacional 2: %.2f\n", densidade2);
    printf("PIB per capita 2: %.8f\n", pibPerCapita2);

    // Comparações
    if (Populacao1 > Populacao2) {
        printf("\nCarta 1 venceu na populacao!\n");
    } else {
        printf("\nCarta 1 perdeu na populacao!\n");
    }

    if (densidade1 < densidade2) {
        printf("Carta 1 venceu na densidade!\n");
    } else {
        printf("Carta 1 perdeu na densidade!\n");
    }

    return 0;
}