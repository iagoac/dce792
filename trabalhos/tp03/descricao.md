# Trabalho Prático 3 - Avaliação de tabelas hash

**UNIVERSIDADE FEDERAL ALFENAS (UNIFAL)**  
**Bacharelado em Ciência da Computação**

| Informação               | Detalhe                                                   |
| :----------------------- | :-------------------------------------------------------- |
| **Disciplina**           | DCE792 - AEDS2                                            |
| **Professor**            | Iago Augusto de Carvalho (iago.carvalho@unifal-mg.edu.br) |
| **Método de realização** | Código e relatório                                        |
| **Data de entrega**      | 09/12/2026 às 23h59                                       |

---

## Objetivo
Neste trabalho cada grupo de dois ou três estudantes deverá implementar três diferentes tabelas hash. Duas delas deverão tratar colisões por meio de listas encadeadas, enquanto a terceira será uma tabela hash de endereçamento aberto.

A primeira tabela hash deverá tratar colisões utilizando uma estrutura de lista encadeada. Já a segunda tabela hash deverá substituir a lista encadeada por uma árvore balanceada (AVL, rubro-negra ou outra parecida). A terceira deverá ser a implementação de endereçamento aberto como visto em sala. Todos os algoritmos deverão ser desenvolvidos em linguagem de programação *C*, não sendo permitido o uso de bibliotecas externas ou bibliotecas *STL* do *C++*.

As tabelas hash deverão ter um tamanho $M = 1200$. O código deverá contabilizar e exibir o tempo de execução (em milisegundos) referente a inserção de todos os elementos da entrada.

### O que deve ser desenvolvido

Neste trabalho cada grupo deverá implementar um único código contendo os algoritmos das três tabelas hash. Este código deverá receber como parâmetro (utilizando *argc* e *argv*) o nome do arquivo *.csv* contendo o arquivo *jogadores.csv*. A saída deverá ser explicitamente como definido mais abaixo neste texto.

Cada grupo deverá desenvolver um documento `.pdf` contendo as seguintes seções:
1. **Introdução:** introduzir e definir o problema de balanceamento de árvore.
2. **Algoritmos e estruturas de dados:** descrever as estruturas utilizadas, principalmente os métodos de rotação e todos os diferentes casos necessários.
3. **Análise dos resultados:** comparar o tempo de inserção e remoção das três árvores em cenários distintos. Recomenda-se a utilização de gráficos e tabelas.
4. **Makefile e Compilação:** descrição do Makefile utilizado e instruções para compilação do código.

O código deverá ser desenvolvido na **linguagem C**. O código deverá ser entregue em um único arquivo `.zip` contendo um cabeçalho com o nome dos integrantes do grupo. Todo o código deverá, obrigatoriamente, compilar com um arquivo `Makefile` que deverá ser enviado em conjunto com o código.

### Entradas
Será fornecida uma única instância contendo diversos itens (structs). Esta entrada está disponível no diretório do trabalho prático 3 e se chama _jogadores.csv_. Este é um arquivo _.csv_ com cinco diferentes colunas: 
 - Nome
 - Posição
 - Naturalidade
 - Posição
 - Idade

Deverá ser utilizada como chave para a função de hashing o nome completo de cada jogador.

Note que cada linha (com excessão da primeira) refere-se a um diferente jogador. A ordenação deverá ser realizada pelo campo __nome__ da struct. 

O código também deverá receber como entrada um inteiro indicando qual algoritmo será utilizado
 - 1 para a tabela hash com listas linears
 - 2 para a tabela hash com árvores balanceadas
 - 3 para a tabela hash com endereçamento aberto

### Saída esperada
Espera-se que o código imprima, em ponto flutuante, o tempo de execução dos algoritmos.

A saída deverá, necessariamente, ser formatada em uma única linha.

### Código base
Este trabalho possui como código-base os códigos da aula sobre hashes disponíveis aqui no Github.

### Makefile
O trabalho deverá, **obrigatoriamente**, compilar com um arquivo *makefile*. O código deve compilar em um ambiente Linux padrão, como o disponível nos laboratórios da UNIFAL. O código deve compilar com o comando

    make all

Observa-se que o trabalho que não compilar com o *makefile* disponibilizado levará nota **zero**. 

### Entrega 

Cada grupo deverá enviar um único arquivo *.zip* contendo todos os arquivos *.c*, todos os arquivos *.h* e o *makefile* utilizado pelo grupo. O arquivo deverá ser entregue no Moodle da disciplina até as 23h59 do dia 09/12/2026. Entregas em atraso não serão toleradas.

### Método de Avaliação
O relatório em formato `.pdf` corresponderá a 50% da nota total. De forma complementar, o código corresponderá aos 50% restantes da nota total.

#### No documento `.pdf` serão avaliados:
- Uso correto da língua portuguesa
- Qualidade e clareza na apresentação das estruturas de dados e dos algoritmos
- Análise correta das complexidades dos algoritmos
- Qualidade da avaliação experimental

#### No código serão avaliados:
- A qualidade e clareza do código
- Comentários explicativos
- Execução correta dos algoritmos
- Saída correta de acordo com a proposta
- Facilidade de uso do `Makefile`
- 

#### Nota final
A nota do trabalho será um valor $z$ entre $0$ e $100$, onde

    z = 100c d

onde $c$ é um binário que indica se o código compila ou não utilizando o *makefile* enviado e $d$ é um valor real que representa a avaliação dos critérios acima. 

Observa-se que o trabalho que não compilar com o *makefile* disponibilizado levará nota **zero**. 

