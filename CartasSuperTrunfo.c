#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {

   
    char estado, estado1;
    char codigo[4], codigo1[4];
    char cidade[20], cidade1[20];
    int populacao, populacao1;
    float area, area1;
    float pib, pib1;
    int pontos_turisticos, pontos_turisticos1;

    printf("Digite um estado (entre A e H ): ");
    scanf("%c", &estado);

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

    printf("Digite um estado (entre A e H ): ");
    scanf("%c", &estado1);

    printf("Digite um código para a carta: ");
    scanf("%s", codigo1);

    printf("digite o nome da cidade: ");
    scanf("%s", cidade1);

    printf("Digite a população da cidade: ");
    scanf("%d", &populacao1);

    printf("Digite a área da cidade [KM2]: ");
    scan("%f", &area1);

    printf("Informe o PIB da cidade: ");
    scanf("%f", &pib1);

    printf("Quantidade de Pontos Turísticos: ");
    scanf("%d", &pontos_turisticos1);


     printf("Carta 1: \n");
     printf("Estado: %c \n", estado); 
     printf("Código: %s \n", codigo);
     printf("Nome da cidade: %s \n", cidade);
     printf("População: %d \n", populacao);
     printf("Área: %.2f km2 \n", area);
     printf("PIB: %.2f bilhoes de reais \n", pib);
     printf("Número de Pontos Turísticos: %d \n",pontos_turisticos);

     printf("Carta 2:\n");
     printf("Estado: %c \n", estado1);
     printf("Código: %s \n", codigo1);
     printf("Nome da Cidade: %s \n", cidade1);
     printf("População: %d \n", populacao1);
     printf("Área: %.2f \n", area1); 
     printf("PIB: %.2f \n", pib1);
     printf("Número de Pontos Turísticos: %d", pontos_turisticos1);


    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
