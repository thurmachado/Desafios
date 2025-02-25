#include <stdio.h>

int main() {
    char estado[20]; // %s
    char codigo[20]; // %s
    char nome[20]; // %s
    int populacao; // %d
    float area; // %f
    float PIB; // %f
    int pturistico; // %d
    int numCartas = 2; // Definindo o número de cartas
    for (int i = 0; i < numCartas; i++) { 

    /*Pesquisei uma maneira mais eficiente
    para deixar o código mais claro...essa função
    fará loopar (loop = fazer de novo) a coleta de dados da carta.
    Para fazer com que faça mais que 2 vezes,
    somente altere o número (2 no caso) em "numCartas = 2" para quantas vezes desejar fazer o loop.
    
    A função utiliza um loop "for", que vai de 0 até o valor de "numCartas".
    Em cada loop, o programa coleta os dados de uma nova carta, solicitando
    novamente o estado, código e etc.
    
    Como disse anteriormente, o loop faz com que o programa colete e imprima várias cartas sem precisar
    duplicar o código de coleta de dados para cada carta, deixando o código em um todo, enorme.
    
    Se desejar aumentar ou diminuir o número de cartas, só ajustar o valor de "numCartas" no início do código,
    sem precisar mudar a estrutura do loop.
    */

    // COLETA DOS DADOS DA CARTA
    printf("BORA PARA A COLETA DE DADOS DA CARTA!\n");
    printf("INFORMAÇÕES DA CARTA %d\n", i + 1); // isso vai imprimir "CARTA 1", "CARTA 2", etc., vai do valor que colocar em 'i'.

    printf("Digite o estado: \n");
    scanf("%s", estado);

    printf("Digite o código da carta: \n");
    scanf("%s", codigo);

    printf("Digite o nome da cidade: \n");
    scanf("%s", nome);

    printf("Digite a população: \n");
    scanf("%d", &populacao);

    printf("Digite a área: \n");
    scanf(" %f", &area);

    printf("Digite o PIB: \n");
    scanf(" %f", &PIB);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pturistico);

    printf("\n"); //pulando linha para organizar a impressão

    printf("INFORMAÇÕES DA CARTA %d\n", i + 1); //RESULTADO - impressão dos dados das cartas

    printf("Estado: %s \n", estado);
    printf("Código: %s \n", codigo);
    printf("Nome: %s \n", nome);
    printf("População: %d \n", populacao);
    printf("Área: %.2f \n", area);
    printf("PIB: %.2f \n", PIB);
    printf("Pontos turísticos: %d \n", pturistico);

    printf("\n");
}

    return 0;
}
