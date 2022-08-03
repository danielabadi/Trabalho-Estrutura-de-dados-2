# Trabalho Prático 2: O problema da agenda de viagens de Rick Sanchez
## Introdução

Está lembrado de Rick Sanchez? Ele ficou muito contente com a sua solução computacional para o problema das medições nos recipientes! Agora, ele precisa de você para resolver uma outra situação: como ele é um cientista de renome intergalático, recebe constantemente convites para visitar e dar palestras em diferentes planetas. Ele geralmente aceita o convite, desde que possa decidir o dia e o tempo que permanecerá no planeta, visitando-o. Além disso, Rick sempre aloca um tempo T, em minutos, para visitação de planetas durante um mês.

Rick gostaria de automatizar a sua agenda de viagens interplanetárias. Para isso, ele pediu para você desenvolver um programa que, dado uma especificação de P planetas e o tempo t que ele deve permanecer em cada um, informe como saída uma agenda de visitação dos planetas em cada mês, dado que o tempo total de visitação em um mês não ultrapasse o tempo T.

Como todo cientista, Rick tem suas manias: ele quer visitar o máximo de planetas possíveis no primeiro mês, ou seja, os k planetas de menor tempo de visitação. Para o próximo mês, caso haja planetas ainda não visitados, pretende novamente visitar o máximo possível, considerando os {P − k} planetas restantes, e assim sucessivamente. Além disso, dados os k planetas, a visitação deve acontecer seguindo a ordem alfabética em k.
 
Rick ainda lhe propõe um grande desafio: ele garante que é possível organizar quais planetas devem ser visitados em cada mês com um algoritmo de ordenação estável de complexidade de tempo O(n log2 n). Já para indicar a ordem de visitação dos planetas no mês, Rick garante que é possível fazer este processamento com complexidade de tempo O(n × k), dado que k é o tamanho da cadeia de caracteres que identifica um planeta.

## Detalhes do problema

O objetivo deste trabalho é praticar os conceitos relacionados a algoritmos clássicos de ordenação. A seguir, são esclarecidos detalhes relevantes que compõem o problema:

- T indica o tempo em minutos alocados por Rick para visitar planetas durante 1 mês, tal que T > 0;
- São especificados P planetas, tal que 0 < P ≤ 150000. Cada especificação de um planeta p ∈ P possui:

  – Um nome composto por uma cadeia de x caracteres (o tamanho da cadeia é o mesmo para todos os planetas), tal que x < log2 P;
  
  – Um tempo inteiro t em minutos, tal que 0 < t ≤ T;
  
- O primeiro mês de visitação deve ter índice 1. Para cada mês de visitação, o tempo total não deve exceder T;
- Dados dois meses de visitação subsequentes, M1 e M2, o número de planetas visitados em M1 deve ser sempre maior ou igual o número de planetas visitados em M2;
- Para qualquer planeta p1 agendado para o mês M1, seu tempo t de visitação deve ser sempre menor ou igual qualquer tempo de visitação de um planeta p2 de um mês M2;
- Para um determinado mês M com k planetas agendados, o programa deve indicar para Rick que a visitação deve ocorrer seguindo a ordem alfabética dos nomes dos k planetas.

Mais detalhes no arquivo de especificação.
