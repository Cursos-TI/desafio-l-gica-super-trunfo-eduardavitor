#include <stdio.h>


// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Tema 2 - Calculando a densidade populacional e o pib per capita

int main() {
    //variaveis 
    char estado01[20], estado02[20];
    char codigocarta01[4], codigocarta02[4];
    char cidade01[50], cidade02[50];
    int populacao01, populacao02;
    float area01, area02, pib01, pib02;
    int turista01, turista02;
    float densidade_populacional1, densidade_populacional2;
    float pib_per_capita1, pib_per_capita2;


    printf("==SUPER TRUNFO==\n");

    //cadastro das cartas

    printf("\nDigite os dados da Carta 01\n");
    printf("Estado: "); scanf(" %19[^\n]", &estado01);
    printf("Codigo da Carta: "); scanf(" %19[^\n]", &codigocarta01);
    printf("Nome Cidade: "); scanf(" %49[^\n]", &cidade01);
    printf("Populacao: "); scanf("%d", &populacao01);
    printf("Area km: "); scanf("%f", &area01);
    printf("PIB: "); scanf("%f", &pib01);
    printf("Numeros de pontos Turisticos: "); scanf("%d", &turista01);
    printf("\n\n");
    printf("\nDigite os dados da Carta 02\n");
    printf("Estado: "); scanf(" %19[^\n]", &estado02);
    printf("Codigo da Carta: "); scanf(" %19[^\n]", &codigocarta02);
    printf("Nome Cidade: "); scanf(" %49[^\n]", &cidade02);
    printf("Populacao: "); scanf("%d", &populacao02);
    printf("Area km: "); scanf("%f", &area02);
    printf("PIB: "); scanf("%f", &pib02);
    printf("Numeros de pontos Turisticos: "); scanf("%d", &turista02);

    //calculos

    densidade_populacional1 = populacao01 / area01;
    densidade_populacional2 = populacao02 / area02;   
    pib_per_capita1 = (float) pib01 / populacao01;  
    pib_per_capita2 = (float) pib02 / populacao02;  

    //exibição de dados

    printf("\n\n--Dados Carta 01--");
    printf("\nEstado: %s", estado01);
    printf("\nCodigo: %s", codigocarta01);
    printf("\nCidade: %s", cidade01);
    printf("\nPopulacao: %d", populacao01);
    printf("\nArea Km: %2.2f", area01);
    printf("\nPIB: %2.2f bilhoes de reais", pib01);
    printf("\nPontos Turistiscos: %d", turista01);
    printf("\nDensidade Populacional: %2.2f hab/km²", densidade_populacional1);
    printf("\nPIB per Capita: %2.2f", pib_per_capita1);   

    printf("\n\n--Dados Carta 02--");
    printf("\nEstado: %s", estado02);
    printf("\nCodigo: %s", codigocarta02);
    printf("\nCidade: %s", cidade02);
    printf("\nPopulacao: %d", populacao02);
    printf("\nArea Km: %2.2f", area02);
    printf("\nPIB: %2.2f bilhoes de reais", pib02);
    printf("\nPontos Turistiscos: %d", turista02);
    printf("\nDensidade Populacional: %2.2f hab/km²", densidade_populacional2);
    printf("\nPIB per Capita: %2.2f reais", pib_per_capita2);   

    //compraração entre as cartas - mais populoso

    printf("\n\n--Comparação Entre as Cartas--\n");
   
    printf("Carta 01 - %s: %d\n", estado01, populacao01);
    printf("Carta 02 - %s: %d\n", estado02, populacao02);
    if(populacao01 > populacao02){
        printf("Carta 01 Venceu!!\n");
    } else {
        printf("Carta 02 Venceu!!\n");
    }

    return 0;
}
