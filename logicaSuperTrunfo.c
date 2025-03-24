#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main() {
    // Variáveis para armazenar os dados das cartas
    char estado1[3], codigo1[5], cidade1[50];
    unsigned long int populacao1;
    float area1, pib1;
    int pontosTuristicos1;
    float densidadePop1;

    char estado2[3], codigo2[5], cidade2[50];
    unsigned long int populacao2;
    float area2, pib2;
    int pontosTuristicos2;
    float densidadePop2;

    // Entrada de dados para as cartas
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

    // Cálculo de densidade populacional
    densidadePop1 = populacao1 / area1;
    densidadePop2 = populacao2 / area2;

    // Escolha de atributos
    int escolha1, escolha2;
    float valor1_1, valor1_2, valor2_1, valor2_2;
    char atributo1[50], atributo2[50];

    printf("\nEscolha o primeiro atributo para comparação:\n");
    printf("1 - População\n2 - Área\n3 - PIB\n4 - Pontos Turísticos\n5 - Densidade Demográfica\n");
    do {
        scanf("%d", &escolha1);
    } while (escolha1 < 1 || escolha1 > 5);

    printf("\nEscolha o segundo atributo para comparação (diferente do primeiro):\n");
    do {
        scanf("%d", &escolha2);
    } while (escolha2 < 1 || escolha2 > 5 || escolha2 == escolha1);

    // Função auxiliar para definir valores e atributos
    void definirAtributo(int escolha, float *valor1, float *valor2, char *nome) {
        switch (escolha) {
            case 1: *valor1 = populacao1; *valor2 = populacao2; strcpy(nome, "População"); break;
            case 2: *valor1 = area1; *valor2 = area2; strcpy(nome, "Área"); break;
            case 3: *valor1 = pib1; *valor2 = pib2; strcpy(nome, "PIB"); break;
            case 4: *valor1 = pontosTuristicos1; *valor2 = pontosTuristicos2; strcpy(nome, "Pontos Turísticos"); break;
            case 5: *valor1 = densidadePop1; *valor2 = densidadePop2; strcpy(nome, "Densidade Demográfica"); break;
        }
    }

    // Definição dos atributos escolhidos
    definirAtributo(escolha1, &valor1_1, &valor2_1, atributo1);
    definirAtributo(escolha2, &valor1_2, &valor2_2, atributo2);

    // Comparação individual
    int pontos1 = 0, pontos2 = 0;
    pontos1 += (escolha1 == 5) ? (valor1_1 < valor2_1) : (valor1_1 > valor2_1);
    pontos2 += (escolha1 == 5) ? (valor2_1 < valor1_1) : (valor2_1 > valor1_1);
    pontos1 += (escolha2 == 5) ? (valor1_2 < valor2_2) : (valor1_2 > valor2_2);
    pontos2 += (escolha2 == 5) ? (valor2_2 < valor1_2) : (valor2_2 > valor1_2);

    // Soma dos valores
    float soma1 = valor1_1 + valor1_2;
    float soma2 = valor2_1 + valor2_2;

    // Exibição dos resultados
    printf("\nComparação de Cartas:\n");
    printf("%s (%s) vs. %s (%s)\n", cidade1, estado1, cidade2, estado2);
    printf("%s: %.2f vs %.2f\n", atributo1, valor1_1, valor2_1);
    printf("%s: %.2f vs %.2f\n", atributo2, valor1_2, valor2_2);
    printf("Soma dos Atributos: %.2f vs %.2f\n", soma1, soma2);

    // Determinação do vencedor
    if (soma1 > soma2) {
        printf("\nResultado: Carta 1 (%s) venceu!\n", cidade1);
    } else if (soma2 > soma1) {
        printf("\nResultado: Carta 2 (%s) venceu!\n", cidade2);
    } else {
        printf("\nEmpate!\n");
    }

    return 0;
}