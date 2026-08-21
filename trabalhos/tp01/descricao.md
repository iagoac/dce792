# Trabalho Prático 1 - Saída do Labirinto

**UNIVERSIDADE FEDERAL ALFENAS (UNIFAL)**  
**Bacharelado em Ciência da Computação**

| Informação               | Detalhe                                                   |
| :----------------------- | :-------------------------------------------------------- |
| **Disciplina**           | DCE792 - AEDS2                                            |
| **Professor**            | Iago Augusto de Carvalho (iago.carvalho@unifal-mg.edu.br) |
| **Método de realização** | Código e relatório                                        |
| **Data de entrega**      | 23/09/2026 às 07h59                                       |

---

## Objetivo
O objetivo deste primeiro trabalho é utilizar as estruturas vistas em sala em um contexto prático.

O trabalho deverá ser realizado em **duplas ou em trios**. Não serão aceitos trabalhos realizados individualmente ou por grupos com 4 ou mais indivíduos.

## Descrição
Neste trabalho, cada grupo de dois ou três estudantes deverá implementar um algoritmo para andar em um labirinto de tamanho $10\times10$. Abaixo segue um exemplo de um labirinto de tamanho $5\times5$. Neste labirinto, a letra `E` representa a entrada, `S` representa a saída, um `X` representa uma parede e um `0` denota um caminho livre.

**Exemplo de labirinto ($5\times5$):**
```text
EXXXX
000XX
OXOOS
XOOXX
XOXXX
```

## Saída Esperada
A saída do algoritmo deverá ser padronizada. Ela deverá indicar, passo a passo, o caminho entre a entrada e a saída. Este caminho será impresso sempre em duas colunas, separadas por vírgula, como no exemplo abaixo:

```text
0,4
0,3
1,3
2,3
2,2
3,2
4,2
```
*Note que a casa `0,4` representa o símbolo `E`, enquanto a casa `4,2` denota o símbolo `S`. Todos os outros símbolos representam as casas que estão no caminho entre `E` e `S` no pequeno labirinto descrito.*

## O que deve ser desenvolvido
Neste trabalho cada grupo deverá implementar um algoritmo para encontrar a saída do labirinto. A saída deverá, obrigatoriamente, ser igual à mostrada acima.

Cada grupo deverá desenvolver um documento `.pdf` contendo as seguintes seções:
1. **Introdução:** introduzir e definir o problema do labirinto.
2. **Estruturas de dados:** descrever as estruturas utilizadas.
3. **Algoritmos:** descrever o algoritmo utilizado e analisar sua complexidade.
4. **Makefile e Compilação:** descrição do Makefile utilizado e instruções para compilação do código.

Além disso, deverá ser entregue o código desenvolvido na **linguagem C**. O código deverá ser entregue em um único arquivo `.zip` contendo um cabeçalho com o nome dos integrantes do grupo. Todo o código deverá, obrigatoriamente, compilar com um arquivo `Makefile` que deverá ser enviado em conjunto com o código.

Por fim, também deverá ser entregue as instâncias utilizadas para teste. Elas deverão ser inseridas no arquivo `.zip` de tal forma que seja possível compilar e rodar o código utilizando somente as instâncias fornecidas.

## Método de Entrega
Todos os arquivos deverão ser entregues no Moodle da disciplina até as **07h59 do dia 23/09/2026**.

## Método de Avaliação
O relatório em formato `.pdf` corresponderá a 50% da nota total. De forma complementar, o código corresponderá aos 50% restantes da nota total.

### No documento `.pdf` com a descrição do problema, do algoritmo e os resultados, serão avaliados:
- Uso correto da língua portuguesa
- Qualidade e clareza na apresentação das estruturas de dados
- Qualidade e clareza na apresentação do algoritmo
- Análise correta das complexidades dos algoritmos

### No código serão avaliados:
- A qualidade e clareza do código
- Comentários explicativos
- Execução correta dos algoritmos
- Saída correta de acordo com a proposta
- Facilidade de uso do `Makefile`