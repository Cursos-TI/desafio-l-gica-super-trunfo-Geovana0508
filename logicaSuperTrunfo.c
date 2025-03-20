#include <stdio.h>
#include <string.h>

int main() {
    // Variáveis para armazenar os dados da primeira carta
    char estado1[3];  // Armazena a sigla do estado (ex: SP, RJ)
    char codigo1[5];  // Código da carta (ex: A01)
    char cidade1[50]; // Nome da cidade
    unsigned long int populacao1; // População da cidade
    float area1, pib1; // Área e PIB da cidade
    int pontosTuristicos1; // Número de pontos turísticos na cidade
    float densidadePop1, pibPerCapita1; // Densidade populacional e PIB per capita

    // Variáveis para armazenar os dados da segunda carta
    char estado2[3];
    char codigo2[5];
    char cidade2[50];
    unsigned long int populacao2;
    float area2, pib2;
    int pontosTuristicos2;
    float densidadePop2, pibPerCapita2;

    // Entrada de dados para a primeira carta
    printf("Digite os dados da primeira carta:\n");
    printf("Estado (sigla, ex: SP): ");
    scanf("%s", estado1); // Recebe a sigla do estado da primeira carta
    printf("Código da Carta (ex: A01): ");
    scanf("%s", codigo1); // Recebe o código da carta
    printf("Nome da Cidade: ");
    scanf("%s", cidade1); // Recebe o nome da cidade
    printf("População: ");
    scanf("%lu", &populacao1); // Recebe a população da cidade
    printf("Área (em km²): ");
    scanf("%f", &area1); // Recebe a área da cidade
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1); // Recebe o PIB da cidade
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1); // Recebe o número de pontos turísticos

    // Entrada de dados para a segunda carta (Mesmo processo da primeira)
    printf("\nDigite os dados da segunda carta:\n");
    printf("Estado (sigla, ex: RJ): ");
    scanf("%s", estado2);
    printf("Código da Carta (ex: B02): ");
    scanf("%s", codigo2);
    printf("Nome da Cidade: ");
    scanf("%s", cidade2);
    printf("População: ");
    scanf("%lu", &populacao2);
    printf("Área (em km²): ");
    scanf("%f", &area2);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculo da Densidade Populacional e PIB per capita para ambas as cartas
    densidadePop1 = populacao1 / area1; // Calcula a densidade populacional da primeira carta
    pibPerCapita1 = (pib1 * 1e9) / populacao1; // Calcula o PIB per capita da primeira carta
    densidadePop2 = populacao2 / area2; // Calcula a densidade populacional da segunda carta
    pibPerCapita2 = (pib2 * 1e9) / populacao2; // Calcula o PIB per capita da segunda carta

    // Menu interativo - Permite ao jogador escolher o atributo de comparação
    int escolha;
    printf("\nEscolha o atributo para comparação:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Número de Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("Escolha uma opção (1-5): ");
    scanf("%d", &escolha); // Recebe a opção escolhida pelo usuário

    // Definir os valores e nomes dos atributos
    float valor1, valor2;
    char atributo[50];

    // Estrutura de switch que permite a escolha do atributo para comparação
    switch (escolha) {
        case 1:
            // Comparação de População
            valor1 = populacao1; // A carta 1 tem a população como valor
            valor2 = populacao2; // A carta 2 tem a população como valor
            strcpy(atributo, "População"); // Define o nome do atributo
            printf("\nComparação de cartas (Atributo: População):\n\n");
            printf("Carta 1 - %s (%s): %lu\n", cidade1, estado1, populacao1); // Exibe as informações da primeira carta
            printf("Carta 2 - %s (%s): %lu\n", cidade2, estado2, populacao2); // Exibe as informações da segunda carta
            if (valor1 > valor2) { // Compara as populações
                printf("\nResultado: Carta 1 (%s) venceu!\n", cidade1); // Carta 1 vence
            } else if (valor2 > valor1) { // Se a população de 2 for maior
                printf("\nResultado: Carta 2 (%s) venceu!\n", cidade2); // Carta 2 vence
            } else {
                printf("\nEmpate!\n"); // Caso as populações sejam iguais
            }
            break;

        case 2:
            // Comparação de Área
            valor1 = area1;
            valor2 = area2;
            strcpy(atributo, "Área");
            printf("\nComparação de cartas (Atributo: Área):\n\n");
            printf("Carta 1 - %s (%s): %.2f km²\n", cidade1, estado1, area1); // Exibe as áreas das cartas
            printf("Carta 2 - %s (%s): %.2f km²\n", cidade2, estado2, area2);
            if (valor1 > valor2) {
                printf("\nResultado: Carta 1 (%s) venceu!\n", cidade1);
            } else if (valor2 > valor1) {
                printf("\nResultado: Carta 2 (%s) venceu!\n", cidade2);
            } else {
                printf("\nEmpate!\n");
            }
            break;

        case 3:
            // Comparação de PIB
            valor1 = pib1;
            valor2 = pib2;
            strcpy(atributo, "PIB");
            printf("\nComparação de cartas (Atributo: PIB):\n\n");
            printf("Carta 1 - %s (%s): %.2f bilhões de reais\n", cidade1, estado1, pib1); // Exibe os PIBs das cartas
            printf("Carta 2 - %s (%s): %.2f bilhões de reais\n", cidade2, estado2, pib2);
            if (valor1 > valor2) {
                printf("\nResultado: Carta 1 (%s) venceu!\n", cidade1);
            } else if (valor2 > valor1) {
                printf("\nResultado: Carta 2 (%s) venceu!\n", cidade2);
            } else {
                printf("\nEmpate!\n");
            }
            break;

        case 4:
            // Comparação de Número de Pontos Turísticos
            valor1 = pontosTuristicos1;
            valor2 = pontosTuristicos2;
            strcpy(atributo, "Número de Pontos Turísticos");
            printf("\nComparação de cartas (Atributo: Número de Pontos Turísticos):\n\n");
            printf("Carta 1 - %s (%s): %d pontos turísticos\n", cidade1, estado1, pontosTuristicos1); // Exibe os pontos turísticos
            printf("Carta 2 - %s (%s): %d pontos turísticos\n", cidade2, estado2, pontosTuristicos2);
            if (valor1 > valor2) {
                printf("\nResultado: Carta 1 (%s) venceu!\n", cidade1);
            } else if (valor2 > valor1) {
                printf("\nResultado: Carta 2 (%s) venceu!\n", cidade2);
            } else {
                printf("\nEmpate!\n");
            }
            break;

        case 5:
            // Comparação de Densidade Demográfica
            valor1 = densidadePop1;
            valor2 = densidadePop2;
            strcpy(atributo, "Densidade Demográfica");
            printf("\nComparação de cartas (Atributo: Densidade Demográfica):\n\n");
            printf("Carta 1 - %s (%s): %.2f pessoas por km²\n", cidade1, estado1, densidadePop1); // Exibe as densidades populacionais
            printf("Carta 2 - %s (%s): %.2f pessoas por km²\n", cidade2, estado2, densidadePop2);
            if (valor1 < valor2) { // Para densidade, vence a carta com menor valor
                printf("\nResultado: Carta 1 (%s) venceu!\n", cidade1);
            } else if (valor2 < valor1) {
                printf("\nResultado: Carta 2 (%s) venceu!\n", cidade2);
            } else {
                printf("\nEmpate!\n");
            }
            break;

        default:
            printf("\nOpção inválida!\n"); // Caso a opção escolhida seja inválida
            break;
    }

    return 0;
}
