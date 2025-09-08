#include <stdio.h>
#include <stdlib.h>

struct No {
    int valor;                // valor do nó
    int numVizinhos;          // quantidade de vizinhos
    struct No** vizinhos;     // lista de ponteiros para os vizinhos
};

struct No* clonarDFS(struct No* original, struct No* visitados[]) {
    if (original == NULL) return NULL;

    if (visitados[original->valor] != NULL) {
        return visitados[original->valor];
    }

    struct No* clone = (struct No*)malloc(sizeof(struct No));
    clone->valor = original->valor;
    clone->numVizinhos = original->numVizinhos;

    if (clone->numVizinhos > 0) {
        clone->vizinhos = (struct No**)malloc(sizeof(struct No*) * clone->numVizinhos);
    } else {
        clone->vizinhos = NULL;
    }

    visitados[original->valor] = clone;

    for (int i = 0; i < original->numVizinhos; i++) {
        clone->vizinhos[i] = clonarDFS(original->vizinhos[i], visitados);
    }

    return clone;
}

struct No* clonarGrafo(struct No* no) {
    struct No* visitados[101] = {0};

    return clonarDFS(no, visitados);
}


void imprimirGrafo(struct No* no, int visitados[]) {
    if (!no || visitados[no->valor]) return;

    visitados[no->valor] = 1;
    printf("No %d: ", no->valor);
    for (int i = 0; i < no->numVizinhos; i++) {
        printf("%d ", no->vizinhos[i]->valor);
    }
    printf("\n");

    for (int i = 0; i < no->numVizinhos; i++) {
        imprimirGrafo(no->vizinhos[i], visitados);
    }
}

int main() {
    struct No n1 = {1, 2, NULL};
    struct No n2 = {2, 2, NULL};
    struct No n3 = {3, 2, NULL};
    struct No n4 = {4, 2, NULL};

    struct No* viz1[] = {&n2, &n4};
    struct No* viz2[] = {&n1, &n3};
    struct No* viz3[] = {&n2, &n4};
    struct No* viz4[] = {&n1, &n3};

    n1.vizinhos = viz1;
    n2.vizinhos = viz2;
    n3.vizinhos = viz3;
    n4.vizinhos = viz4;

    struct No* clone = clonarGrafo(&n1);

    printf("Grafo original:\n");
    int visitados[101] = {0};
    imprimirGrafo(&n1, visitados);

    printf("\n");

    printf("Grafo clonado:\n");
    int visitadosClone[101] = {0};
    imprimirGrafo(clone, visitadosClone);

    return 0;
}
