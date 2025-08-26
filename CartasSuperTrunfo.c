#include <stdio.h>

// Estrutura que representa uma carta do jogo
struct Carta {
    char codigo[4];            // Ex: "A01"
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
};

int main() {
    struct Carta carta1;
    struct Carta carta2;

    // Cadastro da primeira carta
    printf("Cadastro da primeira carta:\n");

    printf("Digite o código da cidade (ex: A01): ");
    scanf("%s", carta1.codigo);

    printf("Digite a população: ");
    scanf("%d", &carta1.populacao);

    printf("Digite a área (em km²): ");
    scanf("%f", &carta1.area);

    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &carta1.pib);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &carta1.pontos_turisticos);

    // Cadastro da segunda carta
    printf("\nCadastro da segunda carta:\n");

    printf("Digite o código da cidade (ex: B02): ");
    scanf("%s", carta2.codigo);

    printf("Digite a população: ");
    scanf("%d", &carta2.populacao);

    printf("Digite a área (em km²): ");
    scanf("%f", &carta2.area);

    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &carta2.pib);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &carta2.pontos_turisticos);

    // Exibição dos dados
    printf("\n===== DADOS DAS CARTAS =====\n");

    printf("\nCarta 1:\n");
    printf("Código: %s\n", carta1.codigo);
    printf("População: %d\n", carta1.populacao);
    printf("Área: %.2f km²\n", carta1.area);
    printf("PIB: %.2f bilhões\n", carta1.pib);
    printf("Pontos turísticos: %d\n", carta1.pontos_turisticos);

    printf("\nCarta 2:\n");
    printf("Código: %s\n", carta2.codigo);
    printf("População: %d\n", carta2.populacao);
    printf("Área: %.2f km²\n", carta2.area);
    printf("PIB: %.2f bilhões\n", carta2.pib);
    printf("Pontos turísticos: %d\n", carta2.pontos_turisticos);

    return 0;
}
