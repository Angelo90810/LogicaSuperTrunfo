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

    printf("\n");

    // Menu Interativos
    int opcao1, opcao2, carta1_attr1, carta1_attr2, carta2_attr1, carta2_attr2, soma1, soma2;

    printf("Atributos para a primeira comparação: \n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade Demográfica\n");
    printf("Escolha o primeiro atributo para comparação: ");
    scanf("%d", &opcao1);

    printf("\n");

    printf("Atributos para a segunda comparação: \n");
    switch (opcao1)
    {
    case 1:
        printf("2. Área\n");
        printf("3. PIB\n");
        printf("4. Pontos Turísticos\n");
        printf("5. Densidade Demográfica\n");
        break;
    case 2:
        printf("1. População\n");
        printf("3. PIB\n");
        printf("4. Pontos Turísticos\n");
        printf("5. Densidade Demográfica\n");
        break;
    case 3:
        printf("1. População\n");
        printf("2. Área\n");
        printf("4. Pontos Turísticos\n");
        printf("5. Densidade Demográfica\n");
        break;
    case 4:
        printf("1. População\n");
        printf("2. Área\n");
        printf("3. PIB\n");
        printf("5. Densidade Demográfica\n");
        break;  
    case 5:
        printf("1. População\n");
        printf("2. Área\n");
        printf("3. PIB\n");
        printf("4. Pontos Turísticos\n");
        break;
    }
    printf("Escolha o segundo atributo para comparação: ");
    scanf("%d", &opcao2);

    printf("\n");

    if (opcao1 == opcao2) {
        printf("Os atributos para comparação não podem ser iguais.\n");
        return 0;
    }

    printf("Informação das Cartas: \n");
    printf("Carta %s - %s\n", codigo1, nomeCidade1);
    printf("Carta %s - %s\n", codigo2, nomeCidade2);
    printf("\n");

    if (opcao1 == 1) {
        carta1_attr1 = populacao1;
        carta2_attr1 = populacao2;
        printf("Primeio Atríbuto Selecionado para comparação: População\n");
    } else if (opcao1 == 2) {
        carta1_attr1 = area1;
        carta2_attr1 = area2;
        printf("Primeio Atríbuto Selecionado para comparação: Área\n");
    } else if (opcao1 == 3) {
        carta1_attr1 = pib1;
        carta2_attr1 = pib2;
        printf("Primeio Atríbuto Selecionado para comparação: PIB\n");
    } else if (opcao1 == 4) {
        carta1_attr1 = pontosTuristicos1;
        carta2_attr1 = pontosTuristicos2;
        printf("Primeio Atríbuto Selecionado para comparação: Pontos Turísticos\n");
    } else if (opcao1 == 5) {
        carta1_attr1 = densidadePopulacional1;
        carta2_attr1 = densidadePopulacional2;
        printf("Primeio Atríbuto Selecionado para comparação: Densidade Demográfica\n");
    } else {
        printf("Primeio Atríbuto Invalido.\n");
        return 0;
    }

    if (opcao2 == 1) {
        carta1_attr2 = populacao1;
        carta2_attr2 = populacao2;
        printf("Segundo Atríbuto Selecionado para comparação: População\n");
    } else if (opcao2 == 2) {
        carta1_attr2 = area1;
        carta2_attr2 = area2;
        printf("Segundo Atríbuto Selecionado para comparação: Área\n");
    } else if (opcao2 == 3) {
        carta1_attr2 = pib1;
        carta2_attr2 = pib2;
        printf("Segundo Atríbuto Selecionado para comparação: PIB\n");
    } else if (opcao2 == 4) {
        carta1_attr2 = pontosTuristicos1;
        carta2_attr2 = pontosTuristicos2;
        printf("Segundo Atríbuto Selecionado para comparação: Pontos Turísticos\n");
    } else if (opcao2 == 5) {
        carta1_attr2 = densidadePopulacional1;
        carta2_attr2 = densidadePopulacional2;
        printf("Segundo Atríbuto Selecionado para comparação: Densidade Demográfica\n");
    } else {
        printf("Segundo Atríbuto Invalido.\n");
        return 0;
    }

    printf("\n");
    printf("Valor do Primeiro Atríbuto Selecionado Carta 1: %d\n", carta1_attr1);
    printf("Valor do Segundo Atríbuto Selecionado Carta 1: %d\n", carta1_attr2);
    printf("Valor do Primeiro Atríbuto Selecionado Carta 2: %d\n", carta2_attr1);
    printf("Valor do Segundo Atríbuto Selecionado Carta 2: %d\n", carta2_attr2);

    printf("\n");
    printf("Comparação do Primeiro Atríbuto: \n");
    if (carta1_attr1 == carta2_attr1) {
        printf("Empate!");
    } else if (carta1_attr1 > carta2_attr1) {
        printf("Carta %s (%s) venceu a comparação de atríbutos!!\n", codigo1, nomeCidade1);
    } else {
        printf("Carta %s (%s) venceu a comparação de atríbutos!!\n", codigo2, nomeCidade2);
    }

    printf("\n");
    printf("Comparação do Segundo Atríbuto: \n");
    if (carta1_attr2 == carta2_attr2) {
        printf("Empate!");
    } else if (carta1_attr2 > carta2_attr2) {
        printf("Carta %s (%s) venceu a comparação de atríbutos!\n", codigo1, nomeCidade1);
    } else {
        printf("Carta %s (%s) venceu a comparação de atríbutos!!\n", codigo2, nomeCidade2);
    }

    soma1 = carta1_attr1 + carta1_attr2;
    soma2 = carta2_attr1 + carta2_attr2;

    printf("\n");
    printf("Soma dos Atríbutos escolhidos Carta 1: %d\n", soma1);
    printf("Soma dos Atríbutos escolhidos Carta 1: %d\n", soma2);

    printf("\n");
    printf("Resultado da Rodada: \n");
    if (soma1 > soma2) {
        printf("Carta %s (%s) venceu a rodada!\n", codigo1, nomeCidade1);
    } else {
        printf("Carta %s (%s) venceu a rodada!\n", codigo2, nomeCidade2);
    }
    
    // default:
    //     printf("Opção Inválida");
    //     break;

    return 0;
}
