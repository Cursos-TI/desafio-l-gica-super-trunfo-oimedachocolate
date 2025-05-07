#include  <stdio.h>

//Estrutura da Carta
typedef struct {
    char codigo[10];
    char nome[50];
    char estado[30];
    int populacao;
    float  pib;
    int pontos_turisticos;

} Carta;

// Função para calcular  a densidade populacional
float calcularDensidade(Carta c) {
    if (c.area   > 0) {
        return c.populacao / c.area;
    }
    return 0;
}

// Função para mostrar uma carta
void mostrarCarta(carta c)  {
    printf("\nCódigo %s", c.codigo);
    printf("Cidade: %s", c.nome);
    printf("Estado: %s", c.estado);
    printf("População: %d\n" c.populacao);
    printf("Área: %.2f km²\n", c.area);
    printf("PIB: %.2f bilhões\n", c.pib);
    printf("Pontos Turísticos: %d\n", c.pontos_turisticos);
    printf("Densidade Populacional: %.2f  hab/km²\n", calcularDensidade(c));
    
}