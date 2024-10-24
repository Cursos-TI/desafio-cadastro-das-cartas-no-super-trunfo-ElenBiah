#include <stdio.h>

int main () {

    printf("Jogo super trunfo basico\n");

    int pontos;
    float populacao, area, PIB;
    char estado[50], nome[50], codigo [50];

    printf ("Digite o codigo da carta\n");
    scanf ("%s", &codigo);

    printf ("Digite o nome da cidade\n");
    scanf ("%s", &nome);

    printf ("digite o nome do estado\n");
    scanf ("%s", &estado);

    printf ("Quantos pontos turisticos?\n");
    scanf ("%d", &pontos);

    printf ("Qual a população da cidade?\n");
    scanf ("%f", &populacao);

    printf ("Qual a area da cidade?\n");
    scanf ("%f", &area);

    printf ("Qual o pib da cidade?\n");
    scanf ("%f", &PIB);


    printf ("Codigo da cidade: %s, Nome da cidade: %s, Nome do Estado: %s\n", codigo, nome, estado);

    printf ("Pontos turisticos: %d, Populacao: %f\n", pontos, populacao);

    printf ("Area da cidade: %f, PIB da cidade: %f\n", area, PIB);


return 0;

}