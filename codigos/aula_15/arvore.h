#ifndef _H_ARVORE
#define _H_ARVORE

struct node {
    int valor;
    struct node *esquerda, *direita;
};

struct node* novo_no(int item);
struct node* inserir(struct node* node, int valor);
struct node* buscar(struct node* root, int valor);

#endif // _H_ARVORE