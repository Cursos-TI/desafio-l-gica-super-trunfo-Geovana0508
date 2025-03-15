#include <stdio.h>

int main() {
    // Variáveis para armazenar os dados da primeira carta
    char estado1[3];  // Armazena a sigla do estado (ex: SP, RJ)
    char codigo1[5];  // Código da carta (ex: A01)
    char cidade1[50]; // Nome da cidade
    unsigned long int populacao1;
    float area1, pib1;
    int pontosTuristicos1;
    float densidadePop1, pibPerCapita1;

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
    scanf("%s", estado1);
    printf("Código da Carta (ex: A01): ");
    scanf("%s", codigo1);
    printf("Nome da Cidade: ");
    scanf("%s", cidade1);
    printf("População: ");
    scanf("%lu", &populacao1);
    printf("Área (em km²): ");
    scanf("%f", &area1);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // Entrada de dados para a segunda carta
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

    // Cálculo da Densidade Populacional e PIB per capita
    densidadePop1 = populacao1 / area1;
    pibPerCapita1 = (pib1 * 1e9) / populacao1;
    densidadePop2 = populacao2 / area2;
    pibPerCapita2 = (pib2 * 1e9) / populacao2;

    // Escolha do atributo para comparação (exemplo: PIB per capita)
    float valor1 = pibPerCapita1;
    float valor2 = pibPerCapita2;
    char atributo[] = "PIB per Capita";

    // Determinação da carta vencedora
    printf("\nComparação de cartas (Atributo: %s):\n\n", atributo);
    printf("Carta 1 - %s (%s): %.2f\n", cidade1, estado1, valor1);
    printf("Carta 2 - %s (%s): %.2f\n", cidade2, estado2, valor2);

    // Garantindo que sempre haja um vencedor
    if (valor1 >= valor2) {
        printf("\nResultado: Carta 1 (%s) venceu!\n", cidade1);
        printf("Perdedor: Carta 2 (%s)\n", cidade2);
    } else {
        printf("\nResultado: Carta 2 (%s) venceu!\n", cidade2);
        printf("Perdedor: Carta 1 (%s)\n", cidade1);
    }

    return 0;
}
