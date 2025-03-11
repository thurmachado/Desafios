#include <stdio.h>

int main() {
    char estado1[20], estado2[20]; // %s
    char codigo1[20], codigo2[20]; // %s
    char nome1[20], nome2[20]; // %s
    int populacao1, populacao2; // %d
    float area1, area2; // %f
    float PIB1, PIB2; // %f
    int pturistico1, pturistico2; // %d

    // COLETA DOS DADOS DA CARTA 1
    printf("BORA PARA A COLETA DE DADOS DA CARTA!\n");
    printf("INFORMAÇÕES DA CARTA 1\n");

    printf("Digite o estado: \n");
    scanf("%s", estado1);

    printf("Digite o código da carta: \n");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade: \n");
    scanf("%s", nome1);

    printf("Digite a população: \n");
    scanf("%d", &populacao1);

    printf("Digite a área: \n");
    scanf(" %f", &area1);

    printf("Digite o PIB: \n");
    scanf(" %f", &PIB1);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pturistico1);

    printf("\n"); // Organizando as linhas da impressão no terminal

    // COLETA DOS DADOS DA CARTA 2
    printf("INFORMAÇÕES DA CARTA 2\n");

    printf("Digite o estado: \n");
    scanf("%s", estado2);

    printf("Digite o código da carta: \n");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: \n");
    scanf("%s", nome2);

    printf("Digite a população: \n");
    scanf("%d", &populacao2);

    printf("Digite a área: \n");
    scanf(" %f", &area2);

    printf("Digite o PIB: \n");
    scanf(" %f", &PIB2);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pturistico2);

    printf("\n"); // Organizando as linhas da impressão no terminal

    // IMPRESSÃO DOS DADOS CARTA 1
    printf("INFORMAÇÕES DA CARTA 1\n");
    printf("Estado: %s \n", estado1);
    printf("Código: %s \n", codigo1);
    printf("Nome: %s \n", nome1);
    printf("População: %d \n", populacao1);
    printf("Área: %.2f \n", area1);
    printf("PIB: %.2f \n", PIB1);
    printf("Pontos turísticos: %d \n", pturistico1);

    printf("\n"); // Organizando as linhas da impressão no terminal

    // IMPRESSÃO DOS DADOS CARTA 2
    printf("INFORMAÇÕES DA CARTA 2\n");
    printf("Estado: %s \n", estado2);
    printf("Código: %s \n", codigo2);
    printf("Nome: %s \n", nome2);
    printf("População: %d \n", populacao2);
    printf("Área: %.2f \n", area2);
    printf("PIB: %.2f \n", PIB2);
    printf("Pontos turísticos: %d \n", pturistico2);

    printf("\n");

    return 0;
}
