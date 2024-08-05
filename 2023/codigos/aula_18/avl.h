#ifndef _H_AVL_
#define _H_AVL_

struct Node {
    int valor;
    struct Node *esquerda;
    struct Node *direita;
    int altura;
};

int altura(struct Node *N);
int max(int a, int b);
struct Node* newNode(int valor);
struct Node *direitaRotate(struct Node *y);
struct Node *esquerdaRotate(struct Node *x);
int balanceamento(struct Node *N);
struct Node* inserir(struct Node* node, int valor);
void inOrder(struct Node *raiz);

#endif // _H_AVL_