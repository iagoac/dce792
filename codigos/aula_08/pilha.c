#include <stdio.h> 
#include <stdlib.h> 
#include <limits.h> 
#include <stdbool.h>
#include "pilha.h"

struct pilha { 
	int topo; 
	int tamanho; 
	int* items; 
}; 

struct pilha* criar_pilha(int tamanho) { 
	// Aloca a estrutura de dados pilha
    struct pilha* pilha = (struct pilha*)malloc(sizeof(struct pilha)); 
	// Armazena o tamanho que ela foi criada
    pilha->tamanho = tamanho; 
    // Diz que não existe nenhum elemento no topo
	pilha->topo = -1; 
    // Aloca o vetor de items utilizando o tamanho passado para a função
	pilha->items = (int*)malloc(pilha->tamanho * sizeof(int)); 
    // Retorna a pilha
	return pilha; 
} 

bool ehCheia(struct pilha* pilha) { 
    // Se topo == tamanho - 1, quer dizer que a pilha é cheia
	if (pilha->topo == pilha->tamanho - 1) {
        return (true);
    }
    // Caso contrário, ela não está cheia
    return (false);
} 

bool ehVazia(struct pilha* pilha) { 
	// Se o topo == -1, então a pilha é vazia
    // Verificar que isto é verdade na criação da pilha
    if (pilha->topo == -1) {
        return (true);
    } 
    return (false);
} 

void push(struct pilha* pilha, int item) { 
	// Se a pilha estiver cheia, não tem como inserir nenhum novo elemento
    if (ehCheia(pilha)) {
		printf("\nPilha cheia. Impossível inserir elementos");
        return; 
    }
    // Aumenta o topo da pilha
    pilha->topo++;
    // Insere o elemento no topo da pilha
	pilha->items[pilha->topo] = item; 
} 


int pop(struct pilha* pilha) { 
	// Se a pilha estiver vazia, não tem como remover nenhum elemento
    if (ehVazia(pilha)) {
		printf("\nPilha  vazia. Impossível remover elementos");
        return -1; 
    }
    // Remove o elemento no topo da pilha e diminui o topo
	return (pilha->items[pilha->topo--]); 
} 

int obtem_elemento(struct pilha* pilha) { 
	// Se a pilha estiver vazia, não tem como obter nenhum elemento
    if (ehVazia(pilha)) {
		printf("\nPilha  vazia. Impossível obter elementos");
        return INT_MIN; 
    }
    // Retorna o elemento do topo da pilha
	return pilha->items[pilha->topo]; 
} 


int main() { 
    int val, n;
    bool aux;
    // Cria pilha com 5 posições
    struct pilha* pilha = criar_pilha(5); 
    do {
        printf("\n************************* MENU ************************");
	    printf("\n1. Push");
	    printf("\n2. Pop");
	    printf("\n3. Obtém elemento");
	    printf("\n4. Pilha vazia?");
        printf("\n5. Pilha cheia?");
	    printf("\n6. Sair");
	    printf("\n Digite sua escolha : ");
	    scanf("%d",&n);
	    switch(n) {
            case 1: 
		        printf("\nDigite o valor ");
                scanf("%d",&val);
                push(pilha , val);
                break;
            case 2: 
                printf("\nElemento retirado : %d",pop(pilha));
                break;
            case 3: 
                printf("\nElemento do topo: %d",obtem_elemento(pilha));
                break;
            case 4: 
                aux = ehVazia(pilha);
                if (aux) {
                    printf("\nPilha vazia");
                } else {
                    printf("\nPilha não está vazia");
                }
                break;
            case 5: 
                aux = ehCheia(pilha);
                if (aux) {
                    printf("\nPilha cheia");
                } else {
                    printf("\nPilha não está cheia");
                }
                break;         
            case 6:
                return (1);
                break;
            default: printf("\nOpção errada!");
                break;
        }
	} while(1);
    
    return (0);
 }





