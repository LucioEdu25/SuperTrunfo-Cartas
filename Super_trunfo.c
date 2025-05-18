#include <stdio.h>

    int main(){

        char estado1; // Uma letra de 'A' a 'H' (representando um dos oito estados)
        char codigo1[4]; // A letra do estado seguida de um número de 01 a 04 (ex: A01, B03)
        char cidade1[50]; // O nome da cidade
        int populacao1;  // O número de habitantes da cidade
        float area1;  //A área da cidade em quilômetros quadrados
        float pib1; // O Produto Interno Bruto da cidade
        int pontos1; // A quantidade de pontos turísticos na cidade

        char estado2; // Uma letra de 'A' a 'H' (representando um dos oito estados)
        char codigo2[4]; // A letra do estado seguida de um número de 01 a 04 (ex: A01, B03)
        char cidade2[50]; // O nome da cidade
        int populacao2;  // O número de habitantes da cidade
        float area2;  //A área da cidade em quilômetros quadrados
        float pib2; // O Produto Interno Bruto da cidade
        int pontos2; // A quantidade de pontos turísticos na cidade

        // Cadastrar a carta  1

        printf("Cadastre a carta 1 \n");

        printf("Estado (A a H): \n"); //
        scanf(" %c", &estado1);

        printf("Código da cidade:\n");
        scanf("%s",  codigo1);

        printf("Nome da cidade: \n");
        scanf("%s", cidade1);

        printf("População: \n");
        scanf("%d", &populacao1);

        printf("Área em quilômmetros quadrados: \n");
        scanf("%f", &area1);

        printf("Produto Interno Bruto: \n");
        scanf("%f", &pib1);

        printf("Quantidade de pontos turísticos: \n");
        scanf("%d", &pontos1);

        // Cadastrar a carta 2

        printf(" \n Cadastre a carta 2 \n");

        printf("Estado (A a H): \n");
        scanf(" %c", &estado2);

        printf("Código da cidade:\n");
        scanf("%s",  codigo2);

        printf("Nome da cidade: \n");
        scanf("%s", cidade2);

        printf("População: \n");
        scanf("%d", &populacao2);

        printf("Área em quilômmetros quadrados: \n");
        scanf("%f", &area2);

        printf("Produto Interno Bruto: \n");
        scanf("%f", &pib2);

        printf("Quantidade de pontos turísticos: \n");
        scanf("%d", &pontos2);

        // Saída de dados da carta 1
        // Retorna todos os dados solicitados no cadastro da carta 1

        printf("\n -- Carta 1 -- \n");
        printf("Estado: %c \n", estado1);
        printf("Código da cidade: %s \n", codigo1);
        printf("Nome da cidade: %s \n", cidade1);
        printf("População: %d \n", populacao1);
        printf("Área(em km²): %.2f \n", area1);
        printf("PIB: %.2f \n", pib1);
        printf("Pontos turísticos: %d \n", pontos1);

        // Saída de dados da carta 2
        // Retorna todos os dados solicitados do cadastro da carta 2

        printf("\n -- Carta 2 -- \n");
        printf("Estado: %c \n", estado2);
        printf("Código da cidade: %s \n", codigo2);
        printf("Nome da cidade: %s \n", cidade2);
        printf("População: %d \n", populacao2);
        printf("Área(em km²): %.2f \n", area2);
        printf("PIB: %.2f \n", pib2);
        printf("Pontos turísticos: %d \n", pontos2);

    return 0;
    }
