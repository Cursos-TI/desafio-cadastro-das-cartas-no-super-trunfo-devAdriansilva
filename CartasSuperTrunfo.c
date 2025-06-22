#include <stdio.h>
int main() {
    // declaração das variáveis
    char estado, estado1;
    char codigo[4], codigo1[4];
    char cidade[20], cidade1[20];
    unsigned long int populacao, populacao1;
    float area, area1,densidade_populacional, densidade_populacional1, super_poder, super_poder1;
    double pib, pib1,pib_percapita, pib_percapita1;
    int pontos_turisticos, pontos_turisticos1;
    int result, result1;


    //Entrada de dados para a carta 1
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
    scanf("%lf", &pib);

    printf("Quantidade de Pontos Turisticos: ");
    scanf("%d", &pontos_turisticos);

    //Calculo da densidade populacional, densidade invertida e PIB percapita carta 1
    densidade_populacional = populacao / area ;
    pib_percapita = (pib * 1000000000) / populacao;
    float densidade_invertida = 1 / densidade_populacional;

    // calculo do Super Poder para carta 1
    super_poder = populacao + area + pib + pontos_turisticos + pib_percapita + densidade_invertida;
    
    


    printf("\n");

    //Entrada de dadps para a carta 2
    printf("CARTA 2: \n");
    printf("Digite um estado (entre A e H ): ");
    scanf(" %c", &estado1);

    printf("Digite um código para a carta: ");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade: ");
    scanf("%s", cidade1);

    printf("Digite a população da cidade: ");
    scanf("%d", &populacao1);

    printf("Digite a área da cidade [KM2]: ");
    scanf("%f", &area1);

    printf("Informe o PIB da cidade: ");
    scanf("%lf", &pib1);

    printf("Quantidade de Pontos Turísticos: ");
    scanf("%d", &pontos_turisticos1);

    //Calculo da densidade populacional, densidade invertida e PIB percapita carta 2
    densidade_populacional1 = populacao1 / area1 ;
    pib_percapita1 = (pib1 * 1000000000 ) / populacao1;
    float densidade_invertida1 = 1 / densidade_populacional1;

     // calculo do Super Poder para carta 2
    super_poder1 = populacao1 + area1 + pib1 + pontos_turisticos1 + pib_percapita1 + densidade_invertida1;
    

// Resultado da captura de dados referentes à carta 1 
     printf("Carta 1: \n");
     printf("Estado: %c \n", estado); 
     printf("Código: %s \n", codigo);
     printf("Nome da cidade: %s \n", cidade);
     printf("População: %d \n", populacao);
     printf("Área: %.2f km2 \n", area);
     printf("PIB: %.2lf bilhões de reais \n", pib);
     printf("Número de Pontos Turísticos: %d \n",pontos_turisticos);
     printf("Densidade Populacional: %.2lf\n",densidade_populacional);
     printf("PIB per Capita: %.2lf\n", pib_percapita);

     

     printf("\n");

    // Resultado da captura de dados referentes à carta 2 
     printf("Carta 2:\n");
     printf("Estado: %c \n", estado1);
     printf("Código: %s \n", codigo1);
     printf("Nome da Cidade: %s \n", cidade1);
     printf("População: %d \n", populacao1);
     printf("Área: %.2f km2 \n ", area1); 
     printf("PIB: %.2f bilhões de reais\n", pib1);
     printf("Número de Pontos Turísticos: %d \n", pontos_turisticos1);
     printf("Densidade Populacional: %.2lf \n",densidade_populacional1);
     printf("PIB per Capita: %.2lf \n", pib_percapita1);


     printf("\n");
     printf("Comparação de cartas:\n");
     result = populacao > populacao1;
     printf("População: Carta 1 venceu?  %d \n", result);
     result = area > area1;
     printf("Área: Carta 1 venceu? %d \n", result);
     result = pib > pib1;
     printf("PIB: Carta 1 venceu? %d \n", result);
     result = pontos_turisticos > pontos_turisticos1;
     printf("Pontos Turísticos: Carta 1 venceu? %d \n", result);
     result = densidade_populacional > densidade_populacional1;
     printf("Densidade Populacional: Carta 2 venceu? %d \n", result);
     result = pib_percapita > pib_percapita1;
     printf("PIB per Capita; Carta 1 venceu? %d \n", result);
     result = super_poder > super_poder1;
     printf("Super Poder: Carta 1 venceu? %d \n", result );

    if (populacao > populacao1)
    {
        printf("A carta 1 venceu\n");
        printf("A populacão de %d é maior que a população da carta 2 que é de  %d  habitantes.", populacao, populacao1);
    } else {
        printf("A carta 2 venceu\n");
        printf("A população de %d é maior que a população da carta 1 que é  de %d habitantes.", populacao1, populacao);
    }
    


    return 0;
}
