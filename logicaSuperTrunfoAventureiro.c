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

void compararCartas(Cartas c1, Carta c2, int atributo) {
    float valor1 = 0, valor2 = 0;
    int vencedor = -1; // 1 = carta1; 2 = carta2; 0 = empate

    if(atributo == 1) {
        valor1 = c1.populacao;
        valor2 = c2.populacao;
        if (valor1 > valor2)
            vencedor = 1;
        else if (valor2> valor1)
            vencedor = 2;
        else
            vencedor   =  0;
    } 
    else if (atributo == 2) {
        valor1 = c1.area;
        valor2 = c2.area;
        if (valor1 > valor2)
            vencedor = 1;
        else if (valor2 > valor1)
            vencedor = 2;
        else
            vencedor  = 0;
    }
    else if (atributo  == 3)  {
        valor1 = c1.pib;
        valor2  =   c2.pib;
        if (valor1 > valor2)
            vencedor = 1;
        else if (valor2 > valor1)
            vencedor = 2;
        else 
            vencedor = 0;
    }
    else if (atributo == 4) {
        valor1 = c1.pontos_turisticos;
        valor2 = c2.pontos_turisticos;
        if(valor1 > valor2)
            vencedor = 1;
        else if (valor2 > valor1)
            vencedor = 2;
        else
            vencedor =  0;
    }
    else if (atributo == 5) {
        valor1 = calcularDensidade(c1);
        valor2 = calcularDensidade(c2);
        if (valor1 < valor2)
            vencedor = 1;
        else if (valor2 < valor1)
            vencedor = 2;
        else
           vencedor = 0;
    }
    else {
        printf("\nAtributo inválido!\n");
        return;
    }

    // Exibir nome do atributo
    printf("\n Resultado da compaação pelo atributo: ");
    if (atributo == 1)
        printf("População\n");
    else if (atributo == 2)
        printf("Área\n");
    else if (atributo == 3)
        printf("PIB\n");
    else if (atributo == 4)
        printf("Pontos Turísticos\n");
    else if (atributo == 5)
        printf("Densidade Populacional (MENOR vence)\n");
    
        // Exibir resultado
    if (vencedor == 1) {
        printf("Vencedora: %s", c1.nome);
    }
    else if (vencedor ==2){
        printf("Vencedora: %s", c2.nome);
    }
    else {
        printf("Empate entre as cartas!\n");
    }
}

int main() {
    Carta carta1, carta2;

    // Cadastro da carta 1
    printf("Cadastro da carta 1: \n");
    printf("Código: ");
    fgets(carta1.codigo, 10, stdin);
    printf("Nome da cidade: ");
    fgets(carta1.nome, 50, stdin);
    printf("Estado: ");
    fgets(carta1.estado, 30, stdin);
    printg("População: ");
    scanf("%d", &carta1.populacao);
    printf("Área (km²) ");
    scanf("%f", &carta1.area);
    printf("PIB (em bilhões): ");
    scanf("%f", &carta1.pib);
    printf("Pontos turísticos: ");
    scanf("%d", &carta1.pontos_turisticos);
    getchar(); // para limpar o buffer
// Cadastro da carta 1
    printf("Cadastro da carta 1: \n");
    printf("Código: ");
    fgets(carta1.codigo, 10, stdin);
    printf("Nome da cidade: ");
    fgets(carta1.nome, 50, stdin);
    printf("Estado: ");
    fgets(carta1.estado, 30, stdin);
    printg("População: ");
    scanf("%d", &carta1.populacao);
    printf("Área (km²) ");
    scanf("%f", &carta1.area);
    printf("PIB (em bilhões): ");
    scanf("%f", &carta1.pib);
    printf("Pontos turísticos: ");
    scanf("%d", &carta1.pontos_turisticos);,

    // Cadastro da carta 2
    printf("Cadastro da carta 2: \n");
    printf("Código: ");
    fgets(carta2.codigo, 10, stdin);
    printf("Nome da cidade: ");
    fgets(carta2.nome, 50, stdin);
    printf("Estado: ");
    fgets(carta2.estado, 30, stdin);
    printg("População: ");
    scanf("%d", &carta2.populacao);
    printf("Área (km²) ");
    scanf("%f", &carta2.area);
    printf("PIB (em bilhões): ");
    scanf("%f", &carta2.pib);
    printf("Pontos turísticos: ");
    scanf("%d", &carta2.pontos_turisticos);
    
    // Exibir cartas
    printf("\n === Carta1 ===");
    mostrarCarta(carta1);
    printf("\n === Carta  2 ===");
    mostrarCarta(carta2);

    // Escolha do atributo
    int atributo;
    printf("\n  Qual atributo deseja comparar? \n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade  Populacional (MENOR vence)\n");
    printf("Digite o número  do atributo: ");
    scanf("%d", &atributo);

    // Comparar e mostrar o resultado
    compararCartas(carta1, carta2, atributo);

    return 0;
    
}