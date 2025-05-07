#include <stdio.h>
    //  Estrutura da carta
    typedef struct {
        char codigo[10];
        char nome[50];
        int populacao;
        float area;
        float pib;
        int pontos__turisticos;
    }
    Carta;
    // Função de exibição da carta
    void mostrarCarta(Carta c) {
        printf("\nCódigo: %s\n", c.codigo);
        printf("Cidade: %s (%s)\n", c.nome, c.estado);
        printf("População %d\n", c.populacao)
        printf("Área: %.2f km²\n", c.area);
        printf("PIB: %2f Bilhões\n", c.pontos__turisticos);
        
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
        if(atributo == 1){
            valor1 = c1.populacao;
            valor2 = c2.populacao;
            printf("\n Comparando população... \n");
            if (valor1 > valor2){
                printf("Vencedora: %s\n", c1.nome);
            } else if (valor2 > valor1) {
                printf("Vencedora: %s\n", c2.nome);
            } else {
                printf("Empate!\n");
            }
        }
    }
    else if (atributo == 2) {
        valor1 = c1.area;
        valor2 = c2.area;
        printf("\n Comparando área... \n");
        if (valor1 > valor2) {
            printf("Vencedora: %s\n", c1.nome);
        } else if (valor2 > valor1) {
            printf("Vencedora: %s\n", c2.nome);
        } else {
            printf("Empate! \n");
        }
    }
    else if (atributo == 3) {
        valor1 = c1.pib;
        valor2 = c2.pib;
        printf("\n Comparando PIB... \n");
        if (valor1 > valor2){
            printf("Vencedor: %s\n", c1.nome);
        } else if (valor2 > valor1) {
            printf("Vencedora: %s\n", c2.nome);
        } else {
            printf("Empate!\n");
        }
    }
    else if (atributo == 4) {
        valor1 = c1.pontos_turisticos;
        valor2 = c2.pontos_turisticos;
        printf("\n Comparando pontos turísticos... \n");
        if (valor1 > valor2) {
            printf("Vencedora: %s\n", c1.nome);
        } else if (valor2 > valor1) {
            printf("Vencedora: %s\n", c2.nome);
        } else {
            printf("Empate!\n");
        }
    else if (atributo == 5) {
        // Densidade populacional: menor valor vence
        valor1 = c1.populacao / c1.area;
        valor2 = c2.populacao / c2.area;
        printf("\n Comparando densidade populacional (Menor Vence)...\n");
        if (valor1 < valor2) {
            printf("Vencedora: %s\n", c1.nome);
        } else if (valor2 < valor1) {
            prinf("Vencedora: %s\n", c2.nome);
        } else {
            printf("Empate!\n");
        }
    }
    else{
        printf("Atributo inválido. \n");
    }
}


    // Resultado
int main() {
    printf("Desafio Novato: SUPER TUNFO CIDADES! \n \n");

    printf("Cadastro da carta1:\n");
    printf("Código: ");
    
}
    return 0;
}
