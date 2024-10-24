#include <stdio.h>

int main (){

    printf("Jogo super trunfo basico\n");

    int população;
    int pontos;
    float area;
    float pib;
    char codigo;
    char cidade;
    char estado;

    printf("Digite o codigo da carta\n");
    scanf("%s", &codigo);

    printf("Digite o nome do estado\n");
    scanf("%s", &estado);

    printf("Digite o nome da cidade\n");
    scanf("%s", &cidade);

    printf("Digite a populção da cidade\n");
    scanf("%d", &população);

    printf("Digite a quantidade de pontos turisticos\n");
    scanf("%d", &pontos);

    printf("Digite a area da cidade\n")
    scanf("%f", &area);

    printf("Digite o pib da cidade\n");
    scanf("%f", &pib);

    printf("codigo da carta: %s\n", codigo);
    printf("nome do estado: %s\n", estado);
    printf("nome da cidade: %s\n", cidade);
    printf("população da cidade: %d\n", população);
    printf("pontos turisticos: %d\n", pontos);
    printf("area da cidade em km²: %f\n", area);
    printf("pib da cidade: %f", pib);


return 0;

}
