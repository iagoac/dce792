#include <stdio.h> 
#include <stdlib.h> 
#include "heap.h"

struct Heap* heap_inicializa(int max) {
    struct Heap* heap=(struct Heap*)malloc(sizeof(struct Heap));
    heap->max = max;
    heap->pos = 0;
    heap->prioridade=(int *)malloc(max*sizeof(int));
    return heap;
}

void heap_insere(struct Heap* heap, int prioridade) {
    if (heap->pos < heap->max) {
        heap->prioridade[heap->pos]=prioridade;
        corrige_acima(heap,heap->pos);
        heap->pos++;
    } else {
        printf("Heap CHEIO!\n"); 
    }
}

void troca(int a, int b, int* v) {
    int f = v[a];
    v[a] = v[b];
    v[b] = f;
}

void corrige_acima(struct Heap* heap, int pos) {
    int pai;
    while (pos > 0) {
        pai = (pos-1)/2;
        if (heap->prioridade[pai] < heap->prioridade[pos]) {
            troca(pos,pai,heap->prioridade);
        } else { 
            break;
        }
        pos = pai;
    }
}

int heap_remove(struct Heap* heap) {
    if (heap->pos > 0) {
        int topo = heap->prioridade[0];
        heap->prioridade[0] = heap->prioridade[heap->pos-1];
        heap->pos--;
        corrige_abaixo(heap->prioridade, 0, heap->pos);
        return topo;
    }
    printf("Heap VAZIO!");
    return -1;
}

void corrige_abaixo(int *prios, int atual, int tam) {
    int pai = atual;
    int filho_esq, filho_dir, filho;
    while (2*pai+1 < tam){
        filho_esq = 2*pai+1;
        filho_dir = 2*pai+2;
        if (filho_dir >= tam) {
            filho_dir=filho_esq;
        }
        if (prios[filho_esq] > prios[filho_dir]) {
                filho = filho_esq;
        } else {
            filho = filho_dir;
        }
        if (prios[pai] < prios[filho]) {
            troca(pai,filho,prios);
        } else {
            break;
        }
        pai = filho;
    }
}


int main() { 

    return (1);
}