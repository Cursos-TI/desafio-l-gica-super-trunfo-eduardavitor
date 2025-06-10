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

   //compraração entre as cartas -

    printf("\n\n--COMPARAÇÃO ENTRE AS CARTAS--\n");
    printf("\nEscolha qual atributo deseja comparar: \n");
    printf("1 - População\n");
    printf("2 - PIB\n");
    printf("3 - Número de Pontos Turísticos\n");
    printf("4 - Densidade Populacional\n");
    printf("5 - PIB per Capita\n");
    int opcao;
    scanf("%d", &opcao);


    switch (opcao) {    
    case 1: // População
        printf("\nComparando População...\n");
        if(populacao01 > populacao02) {
            printf("\nCarta 01 Venceu!!\n");
            printf("\nPopulação Carta 01: %d", populacao01);
            printf("\nPopulação Carta 02: %d", populacao02);
        } else if (populacao02 > populacao01) {
            printf("\nCarta 02 Venceu!!\n");  
            printf("\nPopulação Carta 02: %d", populacao02);
            printf("\nPopulação Carta 01: %d", populacao01);
        }else {
            printf("\nEmpate!!\n");
        }
        break;
    case 2: // PIB
        printf("\nComparando PIB...\n");
        if(pib01 > pib02) {
            printf("\nCarta 01 Venceu!!\n");
            printf("\nPIB Carta 01: %2.2f bilhoes de reais", pib01);
            printf("\nPIB Carta 02: %2.2f bilhoes de reais", pib02);
        } else if (pib02 > pib01) {
            printf("\nCarta 02 Venceu!!\n");
            printf("\nPIB Carta 02: %2.2f bilhoes de reais", pib02);
            printf("\nPIB Carta 01: %2.2f bilhoes de reais", pib01);
        }else {
            printf("\nEmpate!!\n");
        }
        break;
     case 3: // Número de Pontos Turísticos
        printf("\nComparando Número de Pontos Turísticos...\n");
        if(turista01 > turista02) {
            printf("\nCarta 01 Venceu!!\n");
            printf("\nPontos Turísticos Carta 01: %d", turista01);
            printf("\nPontos Turísticos Carta 02: %d", turista02);
        } else if (turista02 > turista01) {
            printf("\nCarta 02 Venceu!!\n");
            printf("\nPontos Turísticos Carta 02: %d", turista02);
            printf("\nPontos Turísticos Carta 01: %d", turista01);
        }else {
            printf("\nEmpate!!\n");
        }
        break;  
    case 4: // Densidade Populacional
        printf("\nComparando Densidade Populacional...\n");
        if(densidade_populacional1 < densidade_populacional2) {
            printf("\nCarta 01 Venceu!!\n");
            printf("\nDensidade Populacional Carta 01: %2.2f hab/km²", densidade_populacional1);
            printf("\nDensidade Populacional Carta 02: %2.2f hab/km²", densidade_populacional2);
        } else if (densidade_populacional2 < densidade_populacional1) {
            printf("\nCarta 02 Venceu!!\n");
            printf("\nDensidade Populacional Carta 02: %2.2f hab/km²", densidade_populacional2);
            printf("\nDensidade Populacional Carta 01: %2.2f hab/km²", densidade_populacional1);
        }else {
            printf("\nEmpate!!\n");
        }
        break;
    case 5: // PIB per Capita
        printf("\nComparando PIB per Capita...\n");
        if(pib_per_capita1 > pib_per_capita2) {
            printf("\nCarta 01 Venceu!!\n");
            printf("\nPIB per Capita Carta 01: %2.2f reais", pib_per_capita1);
            printf("\nPIB per Capita Carta 02: %2.2f reais", pib_per_capita2);
        } else if (pib_per_capita2 > pib_per_capita1) {
            printf("\nCarta 02 Venceu!!\n");
            printf("\nPIB per Capita Carta 02: %2.2f reais", pib_per_capita2);
            printf("\nPIB per Capita Carta 01: %2.2f reais", pib_per_capita1);
        }else {
            printf("\nEmpate!!\n");
        }
        break;
    default: // Caso inválido
        printf("\nOpção inválida! Por favor, escolha uma opção válida.\n");
        break;
    }   
    printf("\n\n==FIM==\n");
    return 0;   
}
    

