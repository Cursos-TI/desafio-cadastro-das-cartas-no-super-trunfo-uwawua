#include <stdio.h>

int main() {
    // carta 1
    char estado, codigodacarta[5] , nomedacidade[30];
    int populacao , qtdpontoturismo;
    float area , pib;

    // carta 2

    char estado2 = 'C' , codigodacarta2[5] = "A" , nomedacidade2[30] = "SãoCaetanoDoSul";
    int populacao2 = 0 ,qtdpontoturismo2 = 0;
    float area2 = 2.0 , pib2 = 0.5;

   //cadastrando carta 1

    printf ("Olá, vamos cadastrar suas cartas para o Supertrunfo.\n Para começar vamos cadastrar a carta 1.\n Digite o nome da cidade sem espaços, ex: SãoCaetanoDoSul \n");
    scanf (" %s", &nomedacidade);

    printf ("Agora digite um estado representado por uma letra em maiúscula, ex: A, B, C...\n");
    scanf (" %c", &estado);
    
    printf ("Qual seria o código da carta? O código é representado por uma letra em maiúscula seguida de um 0 e um número, ex A01, B02\n");
    scanf (" %s", &codigodacarta);

    printf ("Qual a população desta carta?\n");
    scanf ("%d" , &populacao);

    printf ("Qual a área em km² dessa carta?\n");
    scanf (" %f" , &area);

    printf ("Qual a quantidade de pontos turísticos dessa carta?\n");
    scanf ("%d" , &qtdpontoturismo);

    printf ("Qual o PIB dessa carta?(digite em bilhões de reais)\n");
    scanf (" %f" , &pib);

    //calculo da densidade populacional e pib carta 1(transformando população que esta em milhões para bilhões)
    float densidadepopulacional = (float) populacao / area  , pibpcap = (float) (pib * 1000000000) / populacao;

    //adicionando superpoder da carta 1
    float inv_densidadepop = (float) area / populacao;
    float superpoder1 = (long double) populacao + qtdpontoturismo + area + pib + pibpcap + inv_densidadepop;

    //cadastrando carta 2

  
    printf ("Agora iremos cadastrar a carta 2.\n Digite o nome da cidade sem espaços, ex: SãoCaetanoDoSul \n");
    scanf ("%s", &nomedacidade2);

    printf ("Agora digite um estado representado por uma letra em maiúscula, ex: A, B, C...\n");
    scanf (" %c", &estado2);
    
    printf ("Qual seria o código da carta? O código é representado por uma letra em maiúscula seguida de um 0 e um número, ex A01, B02\n");
    scanf ("%s", codigodacarta2);

    printf ("Qual a população desta carta?\n");
    scanf ("%d" , &populacao2);

    printf ("Qual a área em km² dessa carta?\n");
    scanf (" %f" , &area2);

    printf ("Qual a quantidade de pontos turísticos dessa carta?\n");
    scanf ("%d" , &qtdpontoturismo2);

    printf ("Qual o PIB dessa carta?(digite em bilhões de reais)\n");
    scanf (" %f" , &pib2);

    //calculo da densidade populacional e pib carta 2
   
    float densidadepopulacional2 = (float) populacao2 / area2  , pibpcap2 = (float) (pib2 * 1000000000) / populacao2;

    //adicionando superpoder carta2

    float inv_densidadepop2 = (float) area2 / populacao2;
    float superpoder2 = (long double) populacao2 + qtdpontoturismo2 + area2 + pib2 + inv_densidadepop2 ;

    //lendo todos os valores

    printf("Cartas Cadastradas:\n");
    
    printf ("Carta 1\n");
    printf ("Nome da cidade: %s \nEstado: %c\nCódigo da carta: %s\nPopulação: %d habitantes\nQuantidade de pontos turísticos: %d\nÁrea: %.2f km²\nPIB: %.2f bilhões de reais\nDensidade Populacional: %.2f\nPIB per Capita: R$%.2f\n", nomedacidade, estado, codigodacarta, populacao, qtdpontoturismo, area, pib, densidadepopulacional, pibpcap);

    printf ("Carta 2\n");
    printf ("Nome da cidade: %s \nEstado: %c\nCódigo da carta: %s\nPopulação: %d habitantes\nQuantidade de pontos turísticos: %d\nÁrea: %.2f km²\nPIB: %.2f bilhões de reais\nDensidade Populacional: %.2f\nPIB per Capita: R$%.2f\n", nomedacidade2, estado2, codigodacarta2, populacao2, qtdpontoturismo2, area2, pib2, densidadepopulacional2, pibpcap2);

    //comparando cartas

    printf ("Iremos exibir o resultado do jogo de comparação das cartas\n--------------------//--------------------------\n");

    if (populacao > populacao2) {
        printf("População: Carta 1 venceu\n");
    } 
    else if (populacao2 > populacao){
        printf("População: Carta 2 venceu\n");
    } 
    else { 
        printf("População: Aconteceu um empate!\n");
    }

    if (area > area2) {
        printf("Área: Carta 1 venceu\n");
    }
    else if (area2 > area){
        printf("Área: Carta 2 venceu\n");
    }
    else {
        printf("Área: Aconteceu um empate!\n");
    }

    if (pib > pib2) {
        printf("PIB: Carta 1 venceu\n");
    }
    else if (pib2 > pib) {
        printf("PIB: Carta 2 venceu\n");
    }
    else {
        printf("PIB: Aconteceu um empate!\n");
    }

    if (qtdpontoturismo > qtdpontoturismo2) {
        printf("Pontos Turísticos: Carta 1 venceu\n");
    }
    else if (qtdpontoturismo2 > qtdpontoturismo) {
        printf("Pontos Turísticos: Carta 2 venceu\n");
    }
    else {
        printf("Pontos Turísticos: Aconteceu um empate!\n");
    }

    if (densidadepopulacional > densidadepopulacional2) {
        printf("Densidade Populacional: Carta 2 venceu\n");
    }
    else if (densidadepopulacional2 > densidadepopulacional) {
        printf("Densidade Populacional: Carta 1 venceu\n");
    }
    else {
        printf("Densidade Populacional: Aconteceu um empate!\n");
    }

    if (pibpcap > pibpcap2) {
        printf("PIB per capita: Carta 1 venceu\n");
    }
    else if (pibpcap2 > pibpcap) {
        printf("PIB per capita: Carta 2 venceu\n");
    }
    else {
        printf("PIB per capita: Aconteceu um empate!\n");
    }
    
    if (superpoder1 > superpoder2) {
        printf("Super Poder: Carta 1 venceu\n");
    }
    else if (superpoder2 > superpoder1) {
        printf("Super Poder: Carta 2 venceu\n");
    }
    else {
        printf("Super Poder: Aconteceu um empate!\n");
    }

    
    return 0;
   }
