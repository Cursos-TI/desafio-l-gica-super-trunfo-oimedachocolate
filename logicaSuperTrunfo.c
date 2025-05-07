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

    // Resultado
int main() {
    printf("Desafio Novato: SUPER TUNFO CIDADES! \n \n");

    printf("Cadastro da carta1:\n");
    printf("Código: ");
    
}
    return 0;
}
