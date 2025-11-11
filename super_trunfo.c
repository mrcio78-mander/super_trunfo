#include <stdio.h>
#include <string.h>

int main() {
    // Variáveis da carta 1
    char estado1;
    char codigo1[4];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidade1;
    float pibPerCapita1;


    // Variáveis da carta 2
    char estado2;
    char codigo2[4];  
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidade2;
    float pibPerCapita2;

    // --- Leitura da carta 1 ---
    printf("Carta 1:\n");

    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Digite um código para o estado (ex.: A01): ");
    scanf(" %3s", &codigo1);

    printf("Digite o nome da cidade: ");
    getchar(); // consome o '\n' deixado pelo scanf anterior
    fgets(cidade1, sizeof(cidade1), stdin);
    cidade1[strcspn(cidade1, "\n")] = '\0';//remove o '\n' no final

    printf("Digite a população: ");
    scanf("%d", &populacao1);

    printf("Digite a área (km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);


    //Cálculo da densidade demográfica - carta 1
    densidade1 = populacao1 / area1;

    //Cálculo do Pib Per Cápita - carta 1
    pibPerCapita1 = (pib1 * 1000000000) / populacao1;


   

    // --- Leitura da carta 2 ---
    printf("Carta 2:\n");

    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Digite um código para o estado (ex.: B02): ");
    scanf(" %3s", &codigo2);

    printf("Digite o nome da cidade: ");
    getchar();
    fgets(cidade2, sizeof(cidade2), stdin);
    cidade2[strcspn(cidade2, "\n")] = '\0';

    printf("Digite a população: ");
    scanf("%d", &populacao2);

    printf("Digite a área (km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);


    //Cálculo da densidade demográfica - carta 2
    densidade2 = populacao2 / area2;

    //Cálculo do Pib Per Cápita - carta 2
    pibPerCapita2 = (pib2 * 1000000000) / populacao2;


    printf("\n--- Dados das Cartas ---\n\n");

    // --- Exibição da carta 1 ---
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Demográfica: %2f habitantes por m²\n", densidade1);
    printf("PIB per capita: %2f reais\n", pibPerCapita1);

     printf("\n\n"); // espaço entre cartas


    // --- Exibição da carta 2 ---
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Demográfica: %2f habitantes por m²\n", densidade2);
    printf("PIB per capita: %2f reais\n", pibPerCapita2);

    //Comparação de cartas - Atributo População
    printf("\n\n");
    printf("Comparação de cartas (Atributo: População)\n\n");
        printf("Carta 1 - %s: %d\n", cidade1, populacao1);
        printf("Carta 2 - %sc: %d\n", cidade2, populacao2);  

    if (populacao1 > populacao2) {
        printf("Carta 1 venceu!\n"); 
    } else if (populacao1 < populacao2) {
        printf("Carta 2 venceu!\n");
    } else {
        printf("Empate - sem vencedores.\n");
    }

    return 0;
}
