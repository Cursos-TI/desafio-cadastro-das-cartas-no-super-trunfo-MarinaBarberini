#include <stdio.h>

int main() {
    //variaveis da carta1
    char estado1;
    char codigoDaCarta1[50];
    char nomeDaCidade1[50];
    int populacao1;
    float areaEmKm1;
    float pib1;
    int numDeTuristicos1;

    //variaveis da carta2
    char estado2;
    char codigoDaCarta2[50];
    char nomeDaCidade2[50];
    int populacao2;
    float areaEmKm2;
    float pib2;
    int numDeTuristicos2;

    //Entrada e saida da carta 1
    printf("Digite o estado da carta 1: \n");
    scanf("%c", &estado1);
    getchar();

    printf("Digite o codigo da carta 1: \n");
    scanf("%s", codigoDaCarta1);

    printf("Digite o nome da cidade da carta 1: \n");
    scanf("%s", nomeDaCidade1);

    printf("Digite a populacao da carta 1: \n");
    scanf("%d", &populacao1);

    printf("Digite a area em km da carta 1: \n");
    scanf("%f", &areaEmKm1);

    printf("Digite o pib da carta 1: \n");
    scanf("%f", &pib1);

    printf("Digite o número de áreas turisticas da carta 1: \n");
    scanf("%d", &numDeTuristicos1);

    //Entrada e saida da carta 2
    printf("Digite o estado da carta 2: \n");
    getchar();
    scanf("%c", &estado2);
getchar();


    printf("Digite o codigo da carta 2: \n");
    scanf("%s", codigoDaCarta2);

    printf("Digite o nome da cidade da carta 2: \n");
    scanf("%s", nomeDaCidade2);

    printf("Digite a populacao da carta 2: \n");
    scanf("%d", &populacao2);

    printf("Digite a area em km da carta 2: \n");
    scanf("%f", &areaEmKm2);

    printf("Digite o pib da carta 2: \n");
    scanf("%f", &pib2);

    printf("Digite o número de áreas turisticas da carta 2: \n");
    scanf("%d", &numDeTuristicos2);

//Dados inseridos pelo jogador sobre a carta 1
printf("Estado da carta 1: %c - Código da carta 1: %s\n", estado1, codigoDaCarta1);
printf("Nome da cidade da carta 1: %s - População da carta 1: %d\n", nomeDaCidade1, populacao1);
printf("Area em km da carta1: %f - PIB da carta 1: %f\n", areaEmKm1, pib1);
printf("Número de áreas turísticas da carta 1: %d\n", numDeTuristicos1);

//Dados inseridos pelo jogador sobre a carta 2
printf("Estado da carta 2: %c - Código da carta 2: %s\n", estado2, codigoDaCarta2);
printf("Nome da cidade da carta 2: %s - População da carta 2: %d\n", nomeDaCidade2, populacao2);
printf("Area em km da carta2: %f - PIB da carta 2: %f\n", areaEmKm2, pib2);
printf("Número de áreas turísticas da carta 2: %d\n", numDeTuristicos2);

    return 0;
}
