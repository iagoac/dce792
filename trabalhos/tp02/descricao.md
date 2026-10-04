# Trabalho Prático 2 - Árvore Rubro Negra

**UNIVERSIDADE FEDERAL ALFENAS (UNIFAL)**  
**Bacharelado em Ciência da Computação**

| Informação               | Detalhe                                                   |
| :----------------------- | :-------------------------------------------------------- |
| **Disciplina**           | DCE792 - AEDS2                                            |
| **Professor**            | Iago Augusto de Carvalho (iago.carvalho@unifal-mg.edu.br) |
| **Método de realização** | Código e relatório                                        |
| **Data de entrega**      | 11/11/2026 às 07h59                                       |

---

## Objetivo
O objetivo deste segundo trabalho é implementar uma estrutura de árvore balanceada diferente da vista em sala de aula.

O trabalho deverá ser realizado em **duplas ou em trios**. Não serão aceitos trabalhos realizados individualmente ou por grupos com 4 ou mais indivíduos.

## Descrição
Neste trabalho, cada grupo de dois ou três estudantes deverá implementar um algoritmo de árvore rubro-negra. O algoritmo da árvore rubro-negra implementado deverá ser comparado com o algoritmo de árvore AVL e com uma árvore binária não-balanceada (assim como implementado nas atividades semanais). Esta comparação deverá levar em consideração o tempo de inserção e de remoção dos dados.

Todos os três algoritmos deverão receber como entrada um arquivo de texto contendo números, e estes números deverão ser inseridos na árvore de forma sequêncial. Os algoritmos desenvolvidos deverão computar o tempo necessário para realizar a inserção e a remoção dos dados de forma separada.

```
<AVL_1>, <AVL_2>
<RN_1>, <RN_2>
<NB_1>, <NB_2>
```
onde <AVL_1> representa o tempo total de inserção dos dados na árvore AVL e <AVL_2> representa o tempo total para remoção dos dados na mesma árvore. De forma análoga, <RN_1> e <RN_2> representam o tempo total de inserção e de remoção de todos os dados na árvore rubro negra. Por fim, a última linha contém os mesmos dados para a árvore não-balanceada.

Dois pequenos exemplos de entrada estão disponíveis neste diretório. Entretanto, recomenda-se testar entradas maiores, contendo **milhões** de números. Um bom trabalho avaliará a entrada de números aleatórios, números ordenados em ordem crescente e em ordem decrescente. Além disso, ele também avaliará diferentes tamanhos de entrada.

## O que deve ser desenvolvido
Neste trabalho cada grupo deverá implementar um único código contendo os algoritmos das três árvores. Este código deverá receber como parâmetro (utilizando *argc* e *argv*) um arquivo de texto com uma sequência de números. A saída deverá, obrigatoriamente, ser igual à mostrada acima.

Cada grupo deverá desenvolver um documento `.pdf` contendo as seguintes seções:
1. **Introdução:** introduzir e definir o problema de balanceamento de árvore.
2. **Algoritmos e estruturas de dados:** descrever as estruturas utilizadas, principalmente os métodos de rotação e todos os diferentes casos necessários.
3. **Análise dos resultados:** comparar o tempo de inserção e remoção das três árvores em cenários distintos. Recomenda-se a utilização de gráficos e tabelas.
4. **Makefile e Compilação:** descrição do Makefile utilizado e instruções para compilação do código.

O código deverá ser desenvolvido na **linguagem C**. O código deverá ser entregue em um único arquivo `.zip` contendo um cabeçalho com o nome dos integrantes do grupo. Todo o código deverá, obrigatoriamente, compilar com um arquivo `Makefile` que deverá ser enviado em conjunto com o código.

## Método de Entrega
Todos os arquivos deverão ser entregues no Moodle da disciplina até as **23h59 do dia 11/11/2026**.

## Método de Avaliação
O relatório em formato `.pdf` corresponderá a 50% da nota total. De forma complementar, o código corresponderá aos 50% restantes da nota total.

### No documento `.pdf` serão avaliados:
- Uso correto da língua portuguesa
- Qualidade e clareza na apresentação das estruturas de dados e dos algoritmos
- Análise correta das complexidades dos algoritmos
- Qualidade da avaliação experimental

### No código serão avaliados:
- A qualidade e clareza do código
- Comentários explicativos
- Execução correta dos algoritmos
- Saída correta de acordo com a proposta
- Facilidade de uso do `Makefile`