## Autor

Danilo Naves do Nascimento

# Exercícios de Grafos em C

Este repositório contém soluções em **C** para diferentes problemas clássicos de grafos.

Link de soluções: https://unbbr.sharepoint.com/:v:/s/FGA636/EfbOV9nDwZBJqfMqqwTV-D8BBcA9NyzNywH3w4pOjWksbQ?e=i4ICVb&nav=eyJyZWZlcnJhbEluZm8iOnsicmVmZXJyYWxBcHAiOiJTdHJlYW1XZWJBcHAiLCJyZWZlcnJhbFZpZXciOiJTaGFyZURpYWxvZy1MaW5rIiwicmVmZXJyYWxBcHBQbGF0Zm9ybSI6IldlYiIsInJlZmVycmFsTW9kZSI6InZpZXcifX0%3D

---

## Estrutura do Repositório

* **`clone_graph.c`** → Implementação do problema *Clone Graph (LeetCode 133)*.
* **`knight_board.c`** → Resolução do problema do *Tabuleiro do Cavalo*.
* **`graph_properties.c`** → Implementação do problema

---

## Exercícios

### 1. Clonar Grafo (Clone Graph)

**Descrição:**
Dado um grafo não-direcionado e conectado, representado por uma lista de adjacências, o objetivo é **clonar (copiar)** o grafo inteiro de forma independente, preservando todas as conexões entre os nós.

**Tópicos envolvidos:**

* DFS/BFS para percorrer o grafo.
* Estrutura de dados para mapear nós originais → nós clonados.

**Referência:** LeetCode 133 – *Clone Graph*.

---

### 2. Tabuleiro do Cavalo (Knight Paths)

**Descrição:**
Dado um tabuleiro de xadrez de dimensão `8 x 8` e uma posição inicial do cavalo, o problema consiste em **gerar caminhos possíveis e contagens de movimentos** do cavalo, explorando os deslocamentos válidos da peça.

**Tópicos envolvidos:**

* Representação implícita de grafos (cada posição é um nó).
* Movimentos possíveis do cavalo (`L-shape`).

**Aplicação típica:**

* Problema do *Knight’s Tour*.
* Contagem de rotas possíveis entre posições específicas.

---

### 3. Propriedades do Grafo (Connected Components by Properties)

**Descrição:**
Temos `N` objetos, cada um descrito por `M` propriedades inteiras. Construímos um grafo em que:

* Cada objeto é um nó.
* Existe uma aresta entre dois objetos se eles compartilham pelo menos `K` propriedades em comum.

O objetivo é calcular **quantos componentes conexos** existem no grafo.

**Tópicos envolvidos:**

* Comparação de listas de propriedades.
* Construção de grafo não-direcionado a partir de regras de interseção.
* DFS para encontrar componentes conexos.

**Exemplo:**
Se `K = 2`, dois objetos só são conectados se tiverem **pelo menos 2 propriedades iguais**.

---

## ⚙️ Compilação e Execução

Para compilar qualquer exercício:

```bash
gcc nome_do_arquivo.c -o programa
```

Para executar:

```bash
cat entrada.txt | ./programa
```

