#include <stdio.h> 
#include <stdlib.h> 
#include "ordenacao.h"
  
// Imprime um vetor de inteiros
void imprimir(int *vetor) {
    int i;
    for (i = 0; i < 50; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
}

void bubble(int *vetor) {
    //////////////////////////////////////////////////////////////
    ////////////////////// IMPLEMENTAR AQUI //////////////////////
    //////////////////////////////////////////////////////////////
    imprimir(vetor);
    return;
}

void selection(int *vetor) {
    //////////////////////////////////////////////////////////////
    ////////////////////// IMPLEMENTAR AQUI //////////////////////
    //////////////////////////////////////////////////////////////
    imprimir(vetor);
    return;
}

void insertion(int *vetor) {
    //////////////////////////////////////////////////////////////
    ////////////////////// IMPLEMENTAR AQUI //////////////////////
    //////////////////////////////////////////////////////////////
    imprimir(vetor);
    return;
}

void merge(int *vetor) {
    //////////////////////////////////////////////////////////////
    ////////////////////// IMPLEMENTAR AQUI //////////////////////
    //////////////////////////////////////////////////////////////
    imprimir(vetor);
    return;
}

void quick(int *vetor) {
    //////////////////////////////////////////////////////////////
    ////////////////////// IMPLEMENTAR AQUI //////////////////////
    //////////////////////////////////////////////////////////////
    imprimir(vetor);
    return;
}

int main() { 
  // Vetor aleatório de 50 posições
  
  int n;
  do {
    int vetor[50] = {40, 32, 24, 25,  1, 48, 38,  7, 17,  8, 42,  4, 44, 45, 27, 49, 30, 18,  6, 23,  5, 41, 33, 26, 28,  3, 37, 19, 11, 43, 39, 16, 36, 21,  9,  2, 47, 12, 50, 20, 14, 29, 35, 46, 13, 34, 31, 15, 10, 2};
    printf("\n\n\n******************** Escolha seu algoritmo *******************");
	printf("\n1.Bubble sort");
	 printf("\n2.Selection sort");
	 printf("\n3.Insertion sort");
     printf("\n3.Merge sort");
     printf("\n3.Quick sort");
     printf("\n0.Sair");
	 printf("\nEntre sua opção : ");
	 scanf("%d",&n);
	 switch(n) {
        case 1: bubble(vetor);
			    break;
		case 2: selection(vetor);
			    break;
		case 3: insertion(vetor);
			    break;
        case 4: merge(vetor);
			    break;
        case 5: quick(vetor);
			    break;
        case 0: exit(0);
		 	    break;
		default: printf("\n Opção errada!");
		 	    break;
		}
	} while(1);

  return 0; 
} 