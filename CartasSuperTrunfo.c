#include <stdio.h>
#include <string.h>

// Função principal do programa
int main() {
    // Declaração de variáveis para armazenar as informações da primeira cidade
    int codigocidade1, codigocarta1;  
    char nomecidade1[50], estado1[50]; 
    float populacao1;  
    double area1, pib1; 
    int pontosturisticos1;

    // Declaração de variáveis para armazenar as informações da segunda cidade
    int codigocidade2, codigocarta2;  
    char nomecidade2[50], estado2[50]; 
    float populacao2;  
    double area2, pib2; 
    int pontosturisticos2;

    // Variável para controlar o menu do jogo
    int opcao;  

    // Loop para exibir o menu principal enquanto o usuário não escolher sair
    do {
        printf("\nMenu:\n");
        printf("1 - Iniciar jogo\n");
        printf("2 - Ver regras\n");
        printf("3 - Sair\n");
        printf("Escolha uma opção (1, 2 ou 3): ");
        scanf("%d", &opcao);  // Lê a escolha do usuário
        getchar();  // Limpa o caractere de nova linha do buffer

        switch (opcao) {
            case 1:  // Inicia o jogo
                printf("\nIniciando o jogo...\n");

                // Leitura das informações da primeira cidade (Carta 1)
                printf("\nInforme os dados da primeira cidade (Carta 1):\n");
                printf("Codigo da Cidade: ");
                scanf("%d", &codigocidade1);  // Lê o código da cidade
                printf("Codigo da Carta: ");
                scanf("%d", &codigocarta1);  // Lê o código da carta
                getchar();  // Limpa o buffer

                // Leitura do nome da cidade
                printf("Nome da Cidade: ");
                fgets(nomecidade1, sizeof(nomecidade1), stdin);  // Lê o nome da cidade, permitindo espaços
                nomecidade1[strcspn(nomecidade1, "\n")] = '\0';  // Remove o caractere de nova linha

                // Leitura do estado da cidade
                printf("Estado: ");
                fgets(estado1, sizeof(estado1), stdin);  // Lê o nome do estado
                estado1[strcspn(estado1, "\n")] = '\0';  // Remove o caractere de nova linha

                // Leitura dos dados numéricos da cidade
                printf("População: ");
                scanf("%f", &populacao1);  // Lê a população da cidade
                printf("Área: ");
                scanf("%lf", &area1);  // Lê a área da cidade
                printf("PIB: ");
                scanf("%lf", &pib1);  // Lê o PIB da cidade
                printf("Pontos Turísticos: ");
                scanf("%d", &pontosturisticos1);  // Lê o número de pontos turísticos
                getchar();  // Limpa o buffer

                // Leitura das informações da segunda cidade (Carta 2)
                printf("\nInforme os dados da segunda cidade (Carta 2):\n");
                printf("Codigo da Cidade: ");
                scanf("%d", &codigocidade2);  // Lê o código da cidade
                printf("Codigo da Carta: ");
                scanf("%d", &codigocarta2);  // Lê o código da carta
                getchar();  // Limpa o buffer

                // Leitura do nome da cidade
                printf("Nome da Cidade: ");
                fgets(nomecidade2, sizeof(nomecidade2), stdin);  // Lê o nome da cidade
                nomecidade2[strcspn(nomecidade2, "\n")] = '\0';  // Remove o caractere de nova linha

                // Leitura do estado da cidade
                printf("Estado: ");
                fgets(estado2, sizeof(estado2), stdin);  // Lê o nome do estado
                estado2[strcspn(estado2, "\n")] = '\0';  // Remove o caractere de nova linha

                // Leitura dos dados numéricos da cidade
                printf("População: ");
                scanf("%f", &populacao2);  // Lê a população da cidade
                printf("Área: ");
                scanf("%lf", &area2);  // Lê a área da cidade
                printf("PIB: ");
                scanf("%lf", &pib2);  // Lê o PIB da cidade
                printf("Pontos Turísticos: ");
                scanf("%d", &pontosturisticos2);  // Lê o número de pontos turísticos
                getchar();  // Limpa o buffer

                // Menu para o jogador escolher os dois atributos para comparar
                int escolha1, escolha2;
                printf("\nEscolha o primeiro atributo para comparar:\n");
                printf("1 - População\n");
                printf("2 - Área\n");
                printf("3 - PIB\n");
                printf("Digite sua escolha (1, 2 ou 3): ");
                scanf("%d", &escolha1);  // Lê a escolha do primeiro atributo

                // Garantia de que o segundo atributo é diferente do primeiro
                do {
                    printf("\nEscolha o segundo atributo para comparar (diferente do primeiro):\n");
                    printf("1 - População\n");
                    printf("2 - Área\n");
                    printf("3 - PIB\n");
                    printf("Digite sua escolha (1, 2 ou 3): ");
                    scanf("%d", &escolha2);  // Lê a escolha do segundo atributo
                } while (escolha1 == escolha2);  // Repete até o segundo atributo ser diferente do primeiro

                // Inicializa as variáveis que somarão os valores dos atributos escolhidos
                double soma1 = 0, soma2 = 0;

                // Adiciona o valor do primeiro atributo da carta 1
                if (escolha1 == 1) soma1 += populacao1;  // Se for População, soma a população
                else if (escolha1 == 2) soma1 += area1;  // Se for Área, soma a área
                else if (escolha1 == 3) soma1 += pib1;  // Se for PIB, soma o PIB

                // Adiciona o valor do primeiro atributo da carta 2
                if (escolha1 == 1) soma1 += populacao2;  // Se for População, soma a população
                else if (escolha1 == 2) soma1 += area2;  // Se for Área, soma a área
                else if (escolha1 == 3) soma1 += pib2;  // Se for PIB, soma o PIB

                // Adiciona o valor do segundo atributo da carta 1
                if (escolha2 == 1) soma2 += populacao1;  // Se for População, soma a população
                else if (escolha2 == 2) soma2 += area1;  // Se for Área, soma a área
                else if (escolha2 == 3) soma2 += pib1;  // Se for PIB, soma o PIB

                // Adiciona o valor do segundo atributo da carta 2
                if (escolha2 == 1) soma2 += populacao2;  // Se for População, soma a população
                else if (escolha2 == 2) soma2 += area2;  // Se for Área, soma a área
                else if (escolha2 == 3) soma2 += pib2;  // Se for PIB, soma o PIB

                // Comparação das somas dos dois atributos
                if (soma1 > soma2) {
                    // Se a soma dos atributos da carta 1 for maior, ela vence
                    printf("Carta 1 - %s venceu com um total de %.2f (Atributos: %d e %d)\n", nomecidade1, soma1, escolha1, escolha2);
                } else if (soma2 > soma1) {
                    // Se a soma dos atributos da carta 2 for maior, ela vence
                    printf("Carta 2 - %s venceu com um total de %.2f (Atributos: %d e %d)\n", nomecidade2, soma2, escolha1, escolha2);
                } else {
                    // Se as somas forem iguais, é um empate
                    printf("Empate! As somas dos atributos são iguais.\n");
                }

                break;

            case 2:  // Exibe as regras do jogo
                printf("\nRegras do jogo:\n");
                printf("Escolha dois atributos diferentes (População, Área ou PIB) e compare-os entre duas cidades. A soma dos dois atributos é usada para determinar o vencedor.\n");
                break;

            case 3:  // Encerra o jogo
                printf("\nSaindo do jogo...\n");
                break;

            default:  // Se a opção for inválida
                printf("\nOpção inválida! Tente novamente.\n");
                break;
        }
    } while (opcao != 3);  // Repete até o usuário escolher a opção 3 (Sair)

    return 0;  // Fim do programa
}




