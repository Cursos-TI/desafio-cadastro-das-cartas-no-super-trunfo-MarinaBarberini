#include <stdio.h>

int main() {
    //variaveis da carta1
    char estado1;
    char codigoDaCarta1[50];
    char nomeDaCidade1[50];
    unsigned long int populacao1;
    float areaEmKm1;
    float pib1;
    int numDeTuristicos1;

    //variaveis da carta2
    char estado2;
    char codigoDaCarta2[50];
    char nomeDaCidade2[50];
    unsigned long int populacao2;
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
    scanf("%lu", &populacao1);

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
    scanf("%lu", &populacao2);

    printf("Digite a area em km da carta 2: \n");
    scanf("%f", &areaEmKm2);

    printf("Digite o pib da carta 2: \n");
    scanf("%f", &pib2);

    printf("Digite o número de áreas turisticas da carta 2: \n");
    scanf("%d", &numDeTuristicos2);

//Dados inseridos pelo jogador sobre a carta 1
printf("Estado da carta 1: %c - Código da carta 1: %s\n", estado1, codigoDaCarta1);
printf("Nome da cidade da carta 1: %s - População da carta 1: %lu\n", nomeDaCidade1, populacao1);
printf("Area em km da carta1: %.2f - PIB da carta 1: %.2f\n", areaEmKm1, pib1);
printf("Número de áreas turísticas da carta 1: %d\n", numDeTuristicos1);

//Dados inseridos pelo jogador sobre a carta 2
printf("Estado da carta 2: %c - Código da carta 2: %s\n", estado2, codigoDaCarta2);
printf("Nome da cidade da carta 2: %s - População da carta 2: %lu\n", nomeDaCidade2, populacao2);
printf("Area em km da carta2: %.2f - PIB da carta 2: %.2f\n", areaEmKm2, pib2);
printf("Número de áreas turísticas da carta 2: %d\n", numDeTuristicos2);


//parte 2, calculando a densidade populacional e armazenar em float (dividir populacao cidade por area); calculando pib per capita (pib pela populaçao), exibir esses resultados de cada cidade.

//criando as variaveis que sao as divisoes
long double densidadePopulacional1 = (float) populacao1 / areaEmKm1;

long double pibPerCap1 = pib1 / (float) populacao1;

//cidade 2
long double densidadePopulacional2 = (float) populacao2 / areaEmKm2;

long double pibPerCap2 = pib2 / (float) populacao2;

//exibir os resultados

printf("Densidade populacional da cidade 1: é %.2Lf\n", densidadePopulacional1);
printf("Pib per capita da cidade 1 é: %.2Lf\n", pibPerCap1);
printf("Densidade populacional da cidade 2 é: %.2Lf\n", densidadePopulacional2);
printf("Pib per capita da cidade 2 é: %.2Lf\n", pibPerCap2);



//parte 3 - calculando o super poder; comparando as cartas.
// invertendo valor da densidade populacional
long double inversoDens1 = 1.0 / densidadePopulacional1;
long double inversoDens2 = 1.0 / densidadePopulacional2;


// calculando super poder da cidade 1
long double superPoder1 = (float) populacao1 + areaEmKm1 + pib1 + (float) numDeTuristicos1 + inversoDens1;

//cidade 2 

long double superPoder2 = (float) populacao2 + areaEmKm2 + pib2 + (float) numDeTuristicos2 + inversoDens2;


// comparando cartas

//saída de dados + comparaçao
printf("Populacao: carta 1 venceu: %d\n", populacao1 > populacao2);
printf("Populacao: carta 2 venceu: %d\n", populacao2 > populacao1);
printf("Area: carta 1 venceu: %d\n", areaEmKm1 > areaEmKm2);
printf("Area: carta 2 venceu: %d\n", areaEmKm2 > areaEmKm1);
printf("Pib: carta 1 venceu: %d\n", pib1 > pib2);
printf("Pib: carta 2 venceu: %d\n", pib2 > pib1);
printf("Número de áreas turísticas: carta 1 venceu: %d\n", numDeTuristicos1 > numDeTuristicos2);
printf("Número de áreas turísticas: carta 2 venceu: %d\n", numDeTuristicos2 > numDeTuristicos1);
printf("Densidade demográfica: carta 1 venceu: %d\n", densidadePopulacional1 < densidadePopulacional2);
printf("Densidade demográfica: carta 2 venceu: %d\n", densidadePopulacional2 < densidadePopulacional1);
printf("Pib per capita: carta 1 venceu: %d\n", pibPerCap1 > pibPerCap2);
printf("Pib per capita: carta 2 venceu: %d\n", pibPerCap2 > pibPerCap1);
printf("Super poder: carta 1 venceu: %d\n", superPoder1 > superPoder2);
printf("Super poder: carta 2 venceu: %d\n", superPoder2 > superPoder1);

    return 0;
}
