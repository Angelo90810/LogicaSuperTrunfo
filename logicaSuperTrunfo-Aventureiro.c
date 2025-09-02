#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Declaração das variáveis da carta 1
    char estado1;
    char codigo1[4];  // Ex: A01 -> 3 caracteres + '\0'
    char nomeCidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    // Declaração das variáveis da carta 2
    char estado2;
    char codigo2[4];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    // Entrada de dados da Carta 1
    printf("=== Cadastro da Carta 1 ===\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Código da Carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade1); // Lê até a quebra de linha

    printf("População: ");
    scanf("%d", &populacao1);

    printf("Área (em km²): ");
    scanf("%f", &area1);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // Entrada de dados da Carta 2
    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Código da Carta (ex: B02): ");
    scanf("%s", codigo2);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade2);

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Área (em km²): ");
    scanf("%f", &area2);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Declaração de Variaveis após a entrada de dados(Calculos)

    // Calculo Carta 1
    float densidadePopulacional1 = populacao1 / area1;
    float pibPerCapita1 = pib1 / populacao1;

    // Calculo Carta 2
    float densidadePopulacional2 = populacao2 / area2;
    float pibPerCapita2 = pib2 / populacao2;

    // Exibição das Cartas Cadastradas
    printf("\n=== Carta 1 ===\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f\n", densidadePopulacional1);
    printf("PIB per capita: %.2f\n", pibPerCapita1);

    printf("\n=== Carta 2 ===\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f\n", densidadePopulacional2);
    printf("PIB per capita: %.2f\n", pibPerCapita2);

    // Menu Interativos
    int opcao;

    printf("Atributos para comparação: \n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade Demográfica\n");
    printf("Escolha um atributo para comparação: ");
    scanf("%d", &opcao);

    if (opcao == 1) {
        printf("Atríbuto Selecionado: População\n");
    } else if (opcao == 2) {
        printf("Atríbuto Selecionado: Área\n");
    } else if (opcao == 3) {
        printf("Atríbuto Selecionado: PIB\n");
    } else if (opcao == 4) {
        printf("Atríbuto Selecionado: Pontos Turísticos\n");
    } else if (opcao == 5) {
        printf("Atríbuto Selecionado: Densidade Demográfica\n");
    } else {
        printf("Opção Invalida.\n");
        return 0;
    }
    
    // Interações do Menu
    switch (opcao)
    {
    case 1:
        if (populacao1 != populacao2) {
            printf("Carta %s - %s: População: %d \n", codigo1, nomeCidade1, populacao1);
            printf("Carta %s - %s: População: %d \n", codigo2, nomeCidade2, populacao2);
        }
        if (populacao1 == populacao2) {
            printf("Empate!");
        } else if (populacao1 > populacao2) {
            printf("Resultado: Carta %s (%s) venceu!\n", codigo1, nomeCidade1);
        } else {
            printf("Resultado: Carta %s (%s) venceu!\n", codigo2, nomeCidade2);
        }
        break;
    case 2:
        if (area1 != area2) {
            printf("Carta %s - %s: População: %.2f \n", codigo1, nomeCidade1, area1);
            printf("Carta %s - %s: População: %.2f \n", codigo2, nomeCidade2, area2);
        }
        if (area1 == area2) {
            printf("Empate!");
        } else if  (area1 > area2) {
            printf("Resultado: Carta %s (%s) venceu!\n", codigo1, nomeCidade1);
        } else {
            printf("Resultado: Carta %s (%s) venceu!\n", codigo2, nomeCidade2);
        }
        break;
    case 3:
        if (pib1 != pib2) {
            printf("Carta %s - %s: População: %.2f \n", codigo1, nomeCidade1, pib1);
            printf("Carta %s - %s: População: %.2f \n", codigo2, nomeCidade2, pib2);
        }
        if (pib1 == pib2) {
            printf("Empate!");
        } else if  (pib1 > pib2) {
            printf("Resultado: Carta %s (%s) venceu!\n", codigo1, nomeCidade1);
        } else {
            printf("Resultado: Carta %s (%s) venceu!\n", codigo2, nomeCidade2);
        }
        break;
    case 4:
        if (pontosTuristicos1 != pontosTuristicos2) {
            printf("Carta %s - %s: População: %d \n", codigo1, nomeCidade1, pontosTuristicos1);
            printf("Carta %s - %s: População: %d \n", codigo2, nomeCidade2, pontosTuristicos2);
        }
        if (pontosTuristicos1 == pontosTuristicos2) {
            printf("Empate!");
        } else if  (pontosTuristicos1 > pontosTuristicos2) {
            printf("Resultado: Carta %s (%s) venceu!\n", codigo1, nomeCidade1);
        } else {
            printf("Resultado: Carta %s (%s) venceu!\n", codigo2, nomeCidade2);
        }
        break;
    case 5:
        if (densidadePopulacional1 != densidadePopulacional2) {
            printf("Carta %s - %s: População: %.2f \n", codigo1, nomeCidade1, densidadePopulacional1);
            printf("Carta %s - %s: População: %.2f \n", codigo2, nomeCidade2, densidadePopulacional2);
        }
        if (densidadePopulacional1 == densidadePopulacional2) {
            printf("Empate!");
        } else if  (densidadePopulacional1 < densidadePopulacional2) {
            printf("Resultado: Carta %s (%s) venceu!\n", codigo1, nomeCidade1);
        } else {
            printf("Resultado: Carta %s (%s) venceu!\n", codigo2, nomeCidade2);
        }
        break;
    // default:
    //     printf("Opção Inválida");
    //     break;
    }

    return 0;
}
