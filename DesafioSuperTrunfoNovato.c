#include <stdio.h>
int main(){
// Variável das cartas 
    char estado1;
    char codigo1[5];
    char cidade1[25];
    int populacao1;
    float area1;
    float pib1;
    int pt1; //Pontos Turísticos 

    char estado2;
    char codigo2[5];
    char cidade2[25];
    int populacao2;
    float area2;
    float pib2;
    int pt2; //Pontos Turísticos

// Introdução do programa Super Trunfo

    printf("Cadastro das cartas Super Trunfo\n");
//entrada de dados da carta 1
    printf("Escolha uma letra de A a H para seu estado\n");
    scanf(" %c", &estado1);

    printf(" Escolha de 01 à 04 para o código de suas cartas\n");
    scanf("%s", codigo1);

    printf("Escreva o Nome da cidade\n");
    scanf(" %25[^\n]", cidade1);

    printf("Escrava a quantidade de população da cidade\n");
    scanf("%d", &populacao1);

    printf("Área da cidade em Km²\n");
    scanf("%f", &area1);

    printf("PIB da cidade\n");
    scanf("%f", &pib1);

    printf("Escreva a quantidade de pontos turísticos da cidade\n");
    scanf("%d", &pt1);

// entrada de dados da carta 2

    printf("Escolha uma letra de A a H para seu estado\n");
    scanf(" %c", &estado2);

    printf(" Escolha de 01 à 04 para o código de suas cartas\n");
    scanf("%s", codigo2);

    printf("Escreva o Nome da cidade\n");
    scanf(" %25[^\n]", cidade2);

    printf("Escrava a quantidade de população da cidade\n");
    scanf("%d", &populacao2);

    printf("Área da cidade em Km²\n");
    scanf("%f", &area2);

    printf("PIB da cidade\n");
    scanf("%f", &pib2);

    printf("Escreva a quantidade de pontos turísticos da cidade\n");
    scanf("%d", &pt2);

//saída de dados

    printf("\n-------Cartas Super Trunfo-------\n");

    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %c%s\n", estado1, codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2fKm²\n", area1);
    printf("PIB: %3.2f bilhões de reais\n", pib1);
    printf("Número de Pontos turìsticos: %d\n", pt1);
    
    printf("\n---------------------------------\n");
    
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %c%s\n", estado2, codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2fKm²\n", area2);
    printf("PIB: %3.2f bilhões de reais\n", pib2);
    printf("Número de Pontos turìsticos: %d\n", pt2);
    
    return 0;
    
}