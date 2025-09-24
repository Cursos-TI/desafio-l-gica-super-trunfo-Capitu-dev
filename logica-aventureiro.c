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

    int opção;

        printf("\n==== SUPER TRUNFO ====\n");
        printf("Comparar %s x %s\n", Estado1, Estado2);
        printf("Escolha um atributo:\n");
        printf("1 - Populacao\n");
        printf("2 - Area\n");
        printf("3 - PIB\n");
        printf("4 - Pontos Turisticos\n");
        printf("5 - Densidade Demografica\n");
        printf("0 - Sair\n");
        printf("Opcao: ");
        scanf("%d", &opção);


    switch (opção) {
    printf("\nComparando Populacao:\n");
    
    case 1:
        if (Populacao1 > Populacao2) {
        printf("Vencedor: %s\n", Estado1);
        } else if (Populacao2 > Populacao1) {
        printf("Vencedor: %s\n", Estado2);
        } else {
        printf("Empate!\n");
        }
        break;

        case 2: 
        printf("\nComparando Area:\n");
        if (Area1 > Area2) {
        printf("Vencedor: %s\n", Estado1);
        } else if (Area2 > Area1) {
        printf("Vencedor: %s\n", Estado2);
        } else {
        printf("Empate!\n");
        }
        break;

        case 3: 
        printf("\nComparando PIB:\n");
        if (PIB1 > PIB2) {
        printf("Vencedor: %s\n", Estado1);
        } else if (PIB2 > PIB1) {
        printf("Vencedor: %s\n", Estado2);
        } else {
        printf("Empate!\n");
        }
        break;

        case 4: 
        printf("\nComparando Pontos Turisticos:\n");

        if (PontosTuristicos1 > PontosTuristicos2) {
        printf("Vencedor: %s\n", Estado1);
        } else if (PontosTuristicos2 > PontosTuristicos1) {
        printf("Vencedor: %s\n", Estado2);
        } else {
        printf("Empate!\n");
        }
        break;

        case 5: 
        printf("\nComparando Densidade Demografica:\n");
        printf("%s: %.2f hab/km2\n", Estado1, densidade1);
        printf("%s: %.2f hab/km2\n", Estado2, densidade2);

        if (densidade1 < densidade2) { 
        printf("Vencedor: %s\n", Estado1);
        } else if (densidade2 < densidade1) {
        printf("Vencedor: %s\n", Estado2);
        } else {
        printf("Empate!\n");
        }
        break;

        case 0:
        printf("\nSaindo do jogo... Até mais!\n");
        break;

        default:
        printf("\nOpcao invalida! Tente novamente.\n");

        return 0;

        }
    }