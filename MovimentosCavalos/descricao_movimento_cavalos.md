# Movimentos do Cavalo

Link Beecrowd: https://judge.beecrowd.com/pt/problems/view/1100

# Referência para resolução do desafio

A lógica de todos os movimentos possível para o cavalo foi inspirada na solução abaixo.

https://www.reddit.com/r/learnpython/comments/14kr4vw/comment/lt9o8vn/?tl=pt-br&utm_source=share&utm_medium=web3x&utm_name=web3xcss&utm_term=1&utm_content=share_button

# Descrição de desafio

Pedro está fazendo uma pesquisa sobre o problema do movimento do cavalo em um tabuleiro de xadrez e incumbiu você da tarefa de encontrar o menor conjunto de movimentos possíveis, podendo sair de qualquer quadrado a e podendo chegar em qualquer quadrado b dentro do tabuleiro, sendo que a e b são quadrados diferentes. Ele pensa que a parte mais difícil do problema é determinar o menor número de movimentos do cavalo entre 2 quadrados fornecidos e que uma vez que você está comprometido com esta tarefa, encontrar a sequência de movimentos entre estes 2 quadrados será uma tarefa muito fácil.

É claro que você sabe que o movimento é vice versa. Portanto você deve fornecer a Pedro um programa que resolva esta questão.

Seu trabalho então será escrever um programa que, pegando dois quadrados a e b como entrada, determine o número de movimentos para encontrar a rota mais curta de a até b.

## Entrada

A entrada contém um ou mais casos de teste. Cada caso de teste consiste de uma linha contendo dois quadrados separados por um espaço. Um quadrado será uma string consistindo de uma letra (a-h) representando a coluna e um dígito (1-8) representando a linha do tabuleiro de xadrez (veja figura acima).

## Saída

para cada caso de teste imprima uma linha dizendo "To get from xx to yy takes n knight moves.". No caso xx é a origem, yy é o destino e n é a quantidade de movimentos necessários para ir de xx  até yy.

## Entrada esperada

e2 e4

a1 b2

b2 c3

a1 h8

a1 h7

h8 a1

b1 c3

f6 f6

## Saída

To get from e2 to e4 takes 2 knight moves.

To get from a1 to b2 takes 4 knight moves.

To get from b2 to c3 takes 2 knight moves.

To get from a1 to h8 takes 6 knight moves.

To get from a1 to h7 takes 5 knight moves.

To get from h8 to a1 takes 6 knight moves.

To get from b1 to c3 takes 1 knight moves.

To get from f6 to f6 takes 0 knight moves.
