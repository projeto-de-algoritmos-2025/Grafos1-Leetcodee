# LeetCode 133 – Clonar Grafo (Clone Graph)

## Descrição

Dado um **grafo não direcionado** representado por um nó `Node`, faça uma **cópia profunda (deep copy)** do grafo.

Cada nó possui um valor inteiro único (`val`) e uma lista de vizinhos (`neighbors`).

Você deve retornar o **nó clonado** correspondente ao nó de entrada, com todos os vizinhos corretamente clonados, mantendo a mesma estrutura do grafo original.

---

## Estrutura do Nó

Em C:

```c
struct Node {
    int val;               // valor do nó
    int numNeighbors;      // número de vizinhos
    struct Node** neighbors; // lista de ponteiros para os vizinhos
};

```

! Para a visibilidade do código, a estrutura está em português:

```c
struct No {
    int valor;                // valor do nó
    int numVizinhos;          // quantidade de vizinhos
    struct No** vizinhos;     // lista de ponteiros para os vizinhos
};
```

## Entrada

[[2,4],[1,3],[2,4],[1,3]]

## Saída

[[2,4],[1,3],[2,4],[1,3]]


