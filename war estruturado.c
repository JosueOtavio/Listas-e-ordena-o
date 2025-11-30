#include <stdio.h>
#include <string.h>

// Definição da constante para o número máximo de territórios
#define MAX_TERRITORIOS 5

// -----------------------------------------------------------
// Definição da Struct Territorio
// Armazena as informações de cada território.
// Requisito: char nome[30], char cor[10], int tropas.
// -----------------------------------------------------------
typedef struct {
    char nome[30];  // Nome do território (máximo 29 caracteres + '\0')
    char cor[10];   // Cor do exército (máximo 9 caracteres + '\0')
    int tropas;     // Quantidade de tropas
} Territorio;


// -----------------------------------------------------------
// Função principal
// -----------------------------------------------------------
int main() {
    // Declaração de vetor de structs:
    // Cria um array capaz de armazenar 5 estruturas do tipo Territorio.
    Territorio baseTerritorios[MAX_TERRITORIOS];
    
    int i; // Variável de controle do laço (loop)

    // ===============================================
    // 1. ENTRADA DE DADOS: Cadastro dos Territórios
    // ===============================================
    printf("===== CADASTRO DE TERRITÓRIOS (%d Máx.) =====\n", MAX_TERRITORIOS);
    
    // Laço 'for' para preencher os dados dos 5 territórios.
    // O laço executa exatamente MAX_TERRITORIOS vezes.
    for (i = 0; i < MAX_TERRITORIOS; i++) {
        printf("\n--- Território %d ---\n", i + 1);
        
        // Usabilidade: Mensagens claras para orientar o usuário.
        
        // Entrada do nome: Usando scanf com limitação de largura (%29s) 
        // para evitar estouro de buffer no campo nome[30].
        printf("Nome do Território (até 29 caracteres): ");
        scanf("%29s", baseTerritorios[i].nome);
        
        // Entrada da cor: Usando scanf com limitação de largura (%9s) 
        // para evitar estouro de buffer no campo cor[10].
        printf("Cor do Exército (até 9 caracteres): ");
        scanf("%9s", baseTerritorios[i].cor);
        
        // Entrada da quantidade de tropas: Leitura de inteiro.
        printf("Quantidade de Tropas: ");
        scanf("%d", &baseTerritorios[i].tropas);
    }
    
    // ===============================================
    // 2. EXIBIÇÃO DE DADOS: Listagem dos Territórios
    // ===============================================
    printf("\n\n===== DADOS DOS TERRITÓRIOS REGISTRADOS =====\n");
    
    // Percorre o vetor de structs para exibir os dados de cada território.
    for (i = 0; i < MAX_TERRITORIOS; i++) {
        // Formatação clara para exibição dos dados.
        printf("\nTerritório %d:\n", i + 1);
        printf("  Nome: %s\n", baseTerritorios[i].nome);
        printf("  Cor: %s\n", baseTerritorios[i].cor);
        printf("  Tropas: %d\n", baseTerritorios[i].tropas);
    }
    
    printf("\nCadastro e exibição concluídos.\n");

    return 0;
}