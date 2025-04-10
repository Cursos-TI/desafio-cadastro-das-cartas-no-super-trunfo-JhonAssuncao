#include <stdio.h>

    int main() {

    char estado[50];
    char codigo[10];
    char cidade[50];
    int populacao;
    float area;
    float pib;
    int turistico;

    char estado2[50];
    char codigo2[10];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int turistico2;

    printf("Digite o nome do estado: ");
    scanf(" %[^\n]", estado);

    printf("Digite o codigo da carta: ");
    scanf(" %[^\n]", codigo);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", cidade);

    printf("digite o numero da populacao: ");
    scanf("%d", &populacao);

    printf("digite a area: ");
    scanf("%f", &area);

    printf("digite o pib: ");
    scanf("%f", &pib);

    printf("digite a quantidade de pontos turistico existe: ");
    scanf("%d", &turistico);


    printf("Digite o nome do segundo estado: ");
    scanf(" %[^\n]", estado2);

    printf("Digite o codigo da carta: ");
    scanf(" %[^\n]", codigo2);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", cidade2);

    printf("digite o numero da populacao: ");
    scanf("%d", &populacao2);

    printf("digite a area: ");
    scanf("%f", &area2);

    printf("digite o pib: ");
    scanf("%f", &pib2);

    printf("digite a quantidade de pontos turistico existe: ");
    scanf("%d", &turistico2);


    printf("\n Carta 1\n");
    printf("estado: %s\n", estado);
    printf("codigo: %s\n", codigo);
    printf("cidade: %s\n", cidade2);
    printf("populacao: %d\n", populacao);
    printf("area: %.2f km²\n", area);
    printf("pib: R$ %.2f bilhoes\n", pib);
    printf("pontos turisticos: %d\n", turistico);

    printf("\n Carta 2\n");
    printf("estado: %s\n", estado2);
    printf("codigo: %s\n", codigo2);
    printf("cidade: %s\n", cidade2);
    printf("populacao: %d\n", populacao2);
    printf("area: %.2f km²\n", area2);
    printf("pib: R$ %.2f bilhoes\n", pib2);
    printf("pontos turisticos: %d\n", turistico2);


    return 0;
}
