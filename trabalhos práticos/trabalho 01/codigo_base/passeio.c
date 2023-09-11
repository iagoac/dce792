#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "passeio.h"

// Implementar o trabalho aqui
void computa_passeios(bool **tabuleiro) {
    int fechados = 0;
    int abertos = 0;

    
    
    
    
    
    
    
    
    
    printf("%d\n%d\n", fechados, abertos);
    return;
}

int main(int argc, char* argv[]) {
    ///////////////////////////////////////////////////////////
    /////////////////// Leitor de instâncias //////////////////
    ///////////////// Não deve ser modificado /////////////////
    ///////////////////////////////////////////////////////////
    int instancia_num = -1;
    instancia_num = atoi(argv[1]);
    if (instancia_num <= 0 || instancia_num > 20) {
        printf("Para executar o código, digite ./passeio x\nonde x é um número entre 1 e 20 que simboliza a instância utilizada\n");
        exit(0);
    }
    
    // Tabuleiro do jogo
    bool **tabuleiro = ler_instancia(instancia_num);

    computa_passeios(tabuleiro);

    return (1);
}

bool **ler_instancia(int instancia_num) {
    int n, m;
    int i;
    
    // Montando o caminho para a instancia
    char *arquivo_instancia = "./instancias/";
    asprintf(&arquivo_instancia, "%s%d", arquivo_instancia, instancia_num);
    
    // Ponteiro para a instância
    FILE* file;
 
    // Abrindo a instância em modo leitura
    file = fopen(arquivo_instancia, "r");
 
    if (NULL == file) {
        printf("Arquivo de instância não encontrado. Verifique se sua estrutura de diretórios está EXATAMENTE igual ao do Github\n");
        exit(0);
    }

    // Lendo o arquivo da instância
    fscanf (file, "%d", &n);
    fscanf (file, "%d", &m);

    // Alocando o tabuleiro dinamicamente
    // Usando calloc ao invés de malloc para inicializar todo o tabuleiro com zeros
    bool** tabuleiro = (bool**)calloc(n, sizeof(bool*));
    for (i = 0; i < n; i++) {
        tabuleiro[i] = (bool*)calloc(m, sizeof(bool));
    }

    return tabuleiro;
}