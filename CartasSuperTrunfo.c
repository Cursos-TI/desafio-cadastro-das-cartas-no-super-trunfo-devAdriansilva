#include <stdio.h>
int main() {
    // declaração das variáveis
    char estado, estado1;
    char codigo[4], codigo1[4];
    char cidade[20], cidade1[20];
    int populacao, populacao1;
    float area, area1,densidade_populacional, densidade_populacional1;
    float pib, pib1,pib_percapita, pib_percapita1;
    int pontos_turisticos, pontos_turisticos1;

    //Entada de dados para a carta 1
    printf("CARTA 1: \n");

    printf("Digite um estado (entre A e H ): ");
    scanf(" %c", &estado);

    printf("Digite um código para a carta: ");
    scanf("%s", codigo);

    printf("Digite o nome da cidade: ");
    scanf("%s", cidade);

    printf("Digite a população da cidade: ");
    scanf("%d", &populacao);

    printf("Digite a area de cidade[KM2]: ");
    scanf("%f", &area);

    printf("Informe o PIB da cidade: ");
    scanf("%f", &pib);

    printf("Quntidade de Pontos Turisticos: ");
    scanf("%d", &pontos_turisticos);

    //Calculo da densidade populacional e PIB percapita carta 1
    densidade_populacional = populacao / area ;
    pib_percapita = pib / populacao;


    printf("\n");

    //Entrada de dadps para a carta 2
    printf("CARTA 2: \n");
    printf("Digite um estado (entre A e H ): ");
    scanf(" %c", &estado1);

    printf("Digite um código para a carta: ");
    scanf("%s", codigo1);

    printf("digite o nome da cidade: ");
    scanf("%s", cidade1);

    printf("Digite a população da cidade: ");
    scanf("%d", &populacao1);

    printf("Digite a área da cidade [KM2]: ");
    scanf("%f", &area1);

    printf("Informe o PIB da cidade: ");
    scanf("%f", &pib1);

    printf("Quantidade de Pontos Turísticos: ");
    scanf("%d", &pontos_turisticos1);

    //Calculo da densidade populacional e PIB percapita carta 2
    densidade_populacional1 = populacao1 / area1 ;
    pib_percapita = pib1 / populacao1;

// Resultado da captura de dados referentes à carta 1 
     printf("Carta 1: \n");
     printf("Estado: %c \n", estado); 
     printf("Código: %s \n", codigo);
     printf("Nome da cidade: %s \n", cidade);
     printf("População: %d \n", populacao);
     printf("Área: %.2f km2 \n", area);
     printf("PIB: %.2f bilhoes de reais \n", pib);
     printf("Número de Pontos Turísticos: %d \n",pontos_turisticos);
     printf("Densidade Populacional: %.2f",densidade_populacional);
     printf("PIB per Capita: %2.f", pib_percapita);

     

     printf("\n");

    // Resultado da captura de dados referentes à carta 2 
     printf("Carta 2:\n");
     printf("Estado: %c \n", estado1);
     printf("Código: %s \n", codigo1);
     printf("Nome da Cidade: %s \n", cidade1);
     printf("População: %d \n", populacao1);
     printf("Área: %.2f km2 \n ", area1); 
     printf("PIB: %.2f bilhoes de reais\n", pib1);
     printf("Número de Pontos Turísticos: %d", pontos_turisticos1);
      printf("Densidade Populacional: %.2f",densidade_populacional1);
     printf("PIB per Capita: %2.f", pib_percapita1);

    return 0;
}
