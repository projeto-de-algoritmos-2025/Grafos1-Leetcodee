## Enunciado

Você recebe informações sobre um conjunto de objetos, cada um descrito por uma lista de propriedades numéricas.

* Existem **N objetos** (1 ≤ N ≤ 500).
* Cada objeto possui **M propriedades** representadas por inteiros (1 ≤ M ≤ 500, valores ≤ 10⁴).
* Dois objetos são considerados **conectados** se eles compartilham **pelo menos K propriedades em comum**.

A conexão é **transitiva**, ou seja:

* Se o objeto A está conectado ao objeto B,
* e o objeto B está conectado ao objeto C,
* então A, B e C pertencem ao mesmo **grupo**.

Seu objetivo é determinar **quantos grupos distintos de objetos existem**.

### Entrada

* A primeira linha contém três inteiros `N`, `M` e `K`.
* Em seguida, são fornecidas `N` linhas, cada uma contendo `M` inteiros, representando as propriedades de cada objeto.

### Saída

* Imprima um único inteiro representando o número de **grupos distintos** (componentes conexos) que podem ser formados.

---

### Exemplo 1

**Entrada:**

```
4 3 2
1 2 3
2 3 4
5 6 7
5 7 8
```

**Explicação:**

* Objeto 1 e Objeto 2 compartilham as propriedades `{2, 3}` → estão conectados.
* Objeto 3 e Objeto 4 compartilham as propriedades `{5, 7}` → estão conectados.
* Não há conexão entre os pares (1,2) e (3,4).

Assim, existem **2 grupos**: `{1,2}` e `{3,4}`.

**Saída:**

```
2
```

---

### Exemplo 2

**Entrada:**

```
3 4 1
10 20 30 40
20 50 60 70
30 60 80 90
```

**Explicação:**

* Objeto 1 e Objeto 2 compartilham a propriedade `20`.
* Objeto 1 e Objeto 3 compartilham a propriedade `30`.
* Objeto 2 e Objeto 3 compartilham a propriedade `60`.

Todos os objetos acabam conectados, formando um único grupo.

**Saída:**

```
1
```
