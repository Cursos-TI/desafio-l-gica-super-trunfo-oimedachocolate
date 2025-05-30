#include <stdio.h>

//  Estrutura da carta
typedef struct {
        char codigo[10];
        char nome[50];
        char estado[30];
        int populacao;
        float area;
        float pib;
        int pontos_turisticos;
} Carta;

// Função de exibição da carta    
void mostrarCarta(Carta c) {
    printf("\nCódigo: %s\n", c.codigo);
    printf("Cidade: %s (%s)\n", c.nome, c.estado);
    printf("População %d\n", c.populacao);
    printf("Área: %.2f km²\n", c.area);
    printf("PIB: %2f Bilhões\n", c.pontos_turisticos);
        
        // Densidade Populacional = população / área
    float densidade = c.populacao / c.area;
    printf("Densidade Populacional: %.2f hab/km²\n", densidade);

    }

    // Função para comparar um atributo específico
void compararCartas(Carta c1, Carta c2) {
        //atributo a ser comparado: você pode trocar o valor
    int atributo = 5;
    float valor1 = 0, valor2 = 0;

        // Escolher o valor com base no atributo
        if (atributo == 1) {
            valor1 = c1.populacao;
            valor2 = c2.populacao;
            printf("\nComparando população\n");
            if (valor1 > valor2) {
                printf("Vencedora: %s\n", c1.nome);
            } else if (valor2 > valor1) {
                printf("Vencedora: %s\n", c2.nome);
            } else {
                printf("Empate!\n");
            }
        }
        else if (atributo == 2) {
            valor1 = c1.area;
            valor2 = c2.area;
            printf("\nComparando área\n");
            if (valor1 > valor2) {
                printf("Vencedora: %s\n", c1.nome);
            } else if (valor2 > valor1) {
                printf("Vencedora: %s\n", c2.nome);
            } else {
                printf("Empate!\n");
            }
        }
        else if (atributo == 3) {
            valor1 = c1.pib;
            valor2 = c2.pib;
            printf("\nComparando PIB\n");
            if (valor1 > valor2) {
                printf("Vencedora: %s\n", c1.nome);
            } else if (valor2 > valor1) {
                printf("Vencedora: %s\n", c2.nome);
            } else {
                printf("Empate!\n");
            }
        }
        else if (atributo == 4) {
            valor1 = c1.pontos_turisticos;
            valor2 = c2.pontos_turisticos;
            printf("\nComparando pontos turísticos...\n");
            if (valor1 > valor2) {
                printf("Vencedora: %s\n", c1.nome);
            } else if (valor2 > valor1) {
                printf("Vencedora: %s\n", c2.nome);
            } else {
                printf("Empate!\n");
            }
        }
        else if (atributo == 5) {
            // Densidade populacional: menor valor vence
            valor1 = c1.populacao / c1.area;
            valor2 = c2.populacao / c2.area;
            printf("\nComparando densidade populacional (MENOR vence)\n");
            if (valor1 < valor2) {
                printf("Vencedora: %s\n", c1.nome);
            } else if (valor2 < valor1) {
                printf("Vencedora: %s\n", c2.nome);
            } else {
                printf("Empate!\n");
            }
        }
        else {
            printf("Atributo inválido.\n");
        }
    }
    
    // Resultado
int main() {
    printf("Desafio Novato: SUPER TUNFO CIDADES! \n \n");

    Carta carta1, carta2;

    printf("Cadastro da carta1:\n");
    printf("Código: ");
    fgets(carta1.codigo, 10, stdin);
    printf("Nome da cidade: ");
    fgets(carta1.nome, 50, stdin);
    printf("Estado: ");
    fgets(carta1.estado, 30, stdin);
    printf("População: ");
    scanf("%d", &carta1.populacao);
    printf("Área (km²): ");
    scanf("%f", &carta1.area);
    prinf("PIB (em bilhões): ");
    scanf("%f", &carta1.pib);
    printf("Pontos Turísticos: ");
    scanf("%d", &carta1.pontos_turisticos);
    getchar(); // Para limpar o buffer

    printf("\n Cadastro da carta 2: \n");
    printf("Código: ");
    fgets(carta2.codigo, 10, stdin);
    printf("Nome da cidade: ");
    fgets(carta2.nome, 50, stdin);
    printf("Estado: ");
    fgets(carta2.estado, 30, stdin);
    printf("População: ");
    scanf("%d", &carta2.populacao);
    printf("Área (km²): ");
    scanf("%f", &carta2.area);
    printf("PIB (em bilhões): ");
    scanf("%f", &carta2.pib);
    printf("Pontos turísticos: ");
    scanf("%d", &carta2.pontos_turisticos);

    // Exibir Cartas
    printf("\n === Carta 1 ===");
    mostrarCarta(carta1);
    printf("\n === Carta2 ===");
    mostrarCarta(carta2);

    // Comparação
    compararCartas(carta1, carta2);

    return 0;
}
