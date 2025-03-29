#include <stdio.h>

struct Carta {
    char estado;              // Estado da cidade ('A' a 'H')                                                       
    char codigo[5];          // Código da carta (ex: "A01", "B03")
    char nomeCidade[50];     // Nome da cidade
    int populacao;           // População da cidade
    float area;              // Área em km²
    float pib;               // PIB em bilhões de reais
    int pontosTuristicos;    // Número de pontos turísticos
};

void lerCarta(struct Carta *carta) {
    printf("\nInforme os dados da carta:\n");
    
    printf("Estado: ");
    scanf(" %c", &carta->estado);
    
    printf("Código da Carta: ");
    scanf(" %4s", carta->codigo); // Limita a leitura a 4 caracteres

    printf("Nome da Cidade: ");
    scanf(" %49[^\n]", carta->nomeCidade); // Lê até 49 caracteres ou até nova linha

    printf("População: ");
    scanf("%d", &carta->populacao);

    printf("Área (em km²): ");
    scanf("%f", &carta->area);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &carta->pib);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &carta->pontosTuristicos);
}

void exibirCarta(const struct Carta *carta, int numero) {
    printf("\nCarta %d:\n", numero);
    printf("Estado: %c\n", carta->estado);
    printf("Código: %s\n", carta->codigo);
    printf("Nome da Cidade: %s\n", carta->nomeCidade);
    printf("População: %d\n", carta->populacao);
    printf("Área: %.2f km²\n", carta->area);
    printf("PIB: %.2f bilhões de reais\n", carta->pib);
    printf("Número de Pontos Turísticos: %d\n", carta->pontosTuristicos);
}

int main() {
    struct Carta cartas[2]; // Cria um array para armazenar 2 cartas

    // Lê os dados das cartas
    for (int i = 0; i < 2; i++) {
        lerCarta(&cartas[i]);
    }

    // Exibe as cartas
    for (int i = 0; i < 2; i++) {
        exibirCarta(&cartas[i], i + 1);
    }

    return 0;
}
