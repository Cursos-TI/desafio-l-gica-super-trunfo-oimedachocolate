#include <stdio.h>
#include <string.h>

#define MAX 100

// Definição da carta
typedef struct{
    int codigo;
    int pontos_turisticos;
    char nome[50];
    char estado[30];
    int populacao;
    float area;
    float pib;
}
Carta;

// Calcular a densidade populacional
float calcularDensidade(Carta c) {
    return c.populacao / c.area;
}

// Cadastrar uma carta
void cadastrarCarta(Carta  *c) {
    printf("\n Cadastro da Carta: \n");
    printf("Código: ");
    scanf("%d", &c->codigo);
    getchar();
    printf("Nome da cidade: ");
    fgets(c->nome, 50, stdin);
    c->nome[strcspn(c->nome, "\n")] = '\0';
    printf("Estado: ")/
    fgets(c->estado, 30, stdin);
    c->estado[strcspn(c->estado, "\n")] = '\0';
    printf("Populacao: ");
    scanf("%d", &c->populacao);
    printf("Área (km²): ");
    scanf("%f", &c->area);
    printf("PIB (em bilhões): ");
    scanf("%f", &c->pib);
    printf("Número de pontos turísticos: ");
    scanf("%d", &c->pontos_turisticos);
}

// Exibir as infgormações de uma carta
void exibirCarta(Carta c){
    
}
