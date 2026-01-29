#include <stdio.h>

int main(){
    //Declaração de variáveis para duas cartas

    char Estado1[50], Estado2[50];
    char codigo1[50], codigo2[50];
    char nomeCidade1[50], nomeCidade2[50];
    int populacao1, populacao2;
    float area1, area2;
    float PIB1, PIB2; 
    int pontos1 = 0, pontos2 = 0;

    //Cadastro da Carta 1
    printf("---Cadastro Carta 1 ---\n");
    printf("Estado: "); scanf("%c", &Estado1);
    printf("Codigo da Cidade: \n"); scanf("%s", &codigo1);
    printf("Nome da Cidade: \n"); scanf("%s", &nomeCidade1);
    printf("Populacao: \n"); scanf("%d", &populacao1);
    printf("Area: \n"); scanf("%f", &area1);
    printf("PIB: \n"); scanf("%f", &PIB1);
    printf("Pontos Turisticos: \n"); scanf("%d", &pontos1);

    //Cadastro da Carta 2
    printf("\n---Cadastro Carta 2 ---\n");
    printf("Estado: "); scanf("%c", &Estado2);
    printf("Codigo da Cidade: \n"); scanf("%s", &codigo2);
    printf("Nome da Cidade: \n"); scanf("%s", &nomeCidade2);
    printf("Populacao: \n"); scanf("%d", &populacao2);
    printf("Area: \n"); scanf("%f", &area2);
    printf("PIB: \n"); scanf("%f", &PIB2);
    printf("Pontos Turisticos: \n"); scanf("%d", &pontos2);

    //Exibição e Comparação das Cartas
    printf("\n---Comparação das Cartas (População) ---\n");
    printf("Carta 1 - Cidade: %s, População: %d\n", nomeCidade1, populacao1, pib1, area1);
    printf("Carta 2 - Cidade: %s, População: %d\n", nomeCidade2, populacao2, pib2, area2);
    printf("Vencedor: ");
    
    

    return 0;
}
