#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Função para inverter uma string
void inverterString(char *str) {
    int a, b;
    char temp;
    int len = strlen(str);
    for (a = 0, b = len - 1; a < b; a++, b--) {
        temp = str[a];
        str[a] = str[b];
        str[b] = temp;
    }
}

// Função para inverter um número float 
float inverterNumero(float num) {
    char str[20];
    sprintf(str, "%.2f", num); 
    inverterString(str);       
    return atof(str);        
}

int main(){
// Variável das cartas 1
    char estado1;
    char codigo1[5];
    char cidade1[25];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pt1; //Pontos Turísticos
// Cálculo cálculo das variáveis 1
   float densidadep1 = populacao1 / area1;
   float pibpc1 = (pib1 * 1000000000) / populacao1;

// Invertendo a densidade populacional
float densidadep1_invert = inverterNumero (densidadep1);

// Variável das cartas 2 
    char estado2;
    char codigo2[5];
    char cidade2[25];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pt2; //Pontos Turísticos
// Cálculo cálculo das variáveis 2
    float densidadep2 = populacao2 / area2;
    float pibpc2 = (pib2 * 1000000000) / populacao2;

// Invertendo a densidade populacional
float densidadep2_invert = inverterNumero (densidadep2);

// Cálculo do Super Poder Carta 1 e 2
float super_poder1 = populacao1 + area1 + (pib1 * 1000000000) + pt1 + pibpc1 + densidadep1_invert;
float super_poder2 = populacao2 + area2 + (pib2 * 1000000000) + pt2 + pibpc2 + densidadep2_invert;

// Introdução do programa Super Trunfo

    printf("Cadastro das cartas Super Trunfo\n");
//entrada de dados da carta 1
    printf("Escolha uma letra de A a H para seu estado\n");
    scanf(" %c", &estado1); // foi colocado espaço antes o %c para não dar mais erro de compilação

    printf(" Escolha de 01 à 04 para o código de suas cartas\n");
    scanf("%s", codigo1);

    printf("Escreva o Nome da cidade\n");
    scanf(" %[^\n]", cidade1); // foi colocado espaço antes o % para não dar mais erro de compilação

    printf("Escrava a quantidade de população da cidade\n");
    scanf("%lu", &populacao1);

    printf("Área da cidade em Km²\n");
    scanf("%f", &area1);

    printf("PIB da cidade\n");
    scanf("%f", &pib1);

    printf("Escreva a quantidade de pontos turísticos da cidade\n");
    scanf("%d", &pt1);

//entrada de dados da carta 2

    printf("Escolha uma letra de A a H para seu estado\n");
    scanf(" %c", &estado2); // foi colocado espaço antes o %c para não dar mais erro de compilação

    printf(" Escolha de 01 à 04 para o código de suas cartas\n");
    scanf("%s", codigo2);

    printf("Escreva o Nome da cidade\n");
    scanf(" %[^\n]", cidade2); // foi colocado espaço antes o % para não dar mais erro de compilação

    printf("Escrava a quantidade de população da cidade\n");
    scanf("%lu", &populacao2);

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
    printf("População: %lu\n", populacao1);
    printf("Área: %.2fKm²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos turìsticos: %d\n", pt1);
    //Exibição dos cálculos
    printf("Densidade Populacional: %.2f hab/km²\n", densidadep1);
    printf("PIB per Capita: %.2f reais\n", pibpc1);
    
    printf("\n---------------------------------\n");
    
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %c%s\n", estado2, codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2fKm²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos turìsticos: %d\n", pt2);
    //Exibição dos cáculos
    printf("Densidade Populacional: %.2f hab/km²\n", densidadep2);
    printf("PIB per Capita: %.2f reais\n", pibpc2);

    printf("\n--------------------------------------------\n");
// Resultado das cartas 
    printf("Comparação das Cartas\n");

// Fazendo a comparaçõe
//População
if (populacao1 > populacao2){
    printf("População: Carta 1 venceu (1)\n");
}
else if (populacao2 > populacao1){
    printf("População: Carta 2 venceu (0)\n");
}
//Área
if (area1 > area2){
    printf("Área: Carta 1 venceu (1)\n");
}
else if (area2 > area1){
    printf("Área: Carta 2 venceu (0)\n");
}
//PIB
if (pib1 > pib2){
printf("PIB: Carta 1 venceu (1)\n");
}
else if (pib2 > pib1){
printf("PIB: Carta 2 venceu (0)\n");
}
//Pontos Turísticos
if (pt1 > pt2){
printf("Pontos Turísticos: Carta 1 venceu (1)\n");
}
else if (pt2 > pt1){
printf("Pontos Turísticos: Carta 2 venceu (0)\n");
}
//Densidade Populacional
if (densidadep1 > densidadep2){
printf("Densidade Populacional: Carta 1 venceu (1)\n");
}
else if (densidadep2> densidadep1){
printf("Densidade Populacional: Carta 2 venceu (0)\n");
}
//PIB per Capita
if (pib1 > pib2){
printf("PIB per Capita: Carta 1 venceu (1)\n");
}
else if (pib2 > pib1){
printf("PIB per Capita: Carta 2 venceu (0)\n");
}
//Super Poder
if (super_poder1 > super_poder2){
printf("Super Poder: Carta 1 venceu (1)\n");
}
else if (super_poder2 > super_poder1){
printf("Super Poder: Carta 2 venceu (0)\n");
}

    return 0;

}