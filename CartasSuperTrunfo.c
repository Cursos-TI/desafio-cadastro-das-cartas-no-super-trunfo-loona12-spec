#include <stdio.h>

int main() {
    int codigocidade;
    char nome[50];
    float populacao;
    double area;
    double pib;
    int pontosturisticos;

    printf("Desafio Cartas Super Trunfo\n");

    printf("Codigo da Cidade: \n");
    scanf("%d", &codigocidade);

    printf("Nome: \n");
    scanf("%s", nome); // Não precisa de & para o nome, já que é um array de caracteres

    printf("Populacao: \n");
    scanf("%f", &populacao); // O tipo é float, então %f é o correto

    printf("Area: \n");
    scanf("%lf", &area); // O tipo é double, então %lf é o correto

    printf("PIB: \n");
    scanf("%lf", &pib); // O tipo é double, então %lf é o correto

    printf("Pontos Turisticos: \n");
    scanf("%d", &pontosturisticos);

    // Impressão das informações
    printf("\nInformações da Cidade:\n");
    printf("Codigo da Cidade: %d\n", codigocidade);
    printf("Nome da Cidade: %s\n", nome);
    printf("Populacao: %.2f\n", populacao); // Formatação para 2 casas decimais
    printf("Area da Cidade: %.2f km²\n", area); // Formatação para 2 casas decimais
    printf("PIB: %.2f\n", pib); // Formatação para 2 casas decimais
    printf("Pontos Turisticos: %d\n", pontosturisticos);

    return 0;
}

