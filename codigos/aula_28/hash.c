#include <stdio.h> 
#include <stdlib.h> 
#include "hash.h"

int M;

struct Hash* criar_hash(int tamanho) {
    M = tamanho;
    struct Hash* hash = (struct Hash*) malloc(sizeof(struct Hash));
    hash->items = (struct Item*) malloc(tamanho*sizeof(struct Item));
    return hash;
}

void hash_insere(struct Hash* hash, struct Item item) {
    hash->items[hashing(item.valor)] = item;
}

void hash_remove(struct Hash* hash, struct Item item) {
    struct Item newItem;
    newItem.valor = 0;
    hash->items[hashing(item.valor)] = newItem;
}

struct Item busca(struct Hash* hash, struct Item item) {
    return (hash->items[hashing(item.valor)]);
}

int hashing(int chave) {
    return (chave % M);
}

int main() { 
    int n;
    /* Cria hash com 20 posições */
    struct Hash* hash = criar_hash(10);
    struct Item item;
    do {
        printf("\n\n\n******************** Escolha a opção *******************");
        printf("\n1.Inserir item");
        printf("\n2.Remover item");
        printf("\n3.Obter item");
        printf("\n0.Sair");
        printf("\nEntre sua opção : ");
        scanf("%d",&n);
        switch(n) {
            case 1: printf("\nDigite o item ");
                    scanf("%d",&item.valor);
                    hash_insere(hash, item);
                    break;
            case 2: printf("\nDigite o item ");
                    scanf("%d",&item.valor);
                    hash_remove(hash, item);
                    break;
            case 3: printf("\nDigite o item ");
                    scanf("%d",&item.valor);
                    item = busca(hash, item);
                    break;
            case 0: exit(0);
                    break;
            default: printf("\n Opção errada!");
                    break;
            }
        } while(1);
    
}