# Trabalho prático de recuperação
## Avaliação de tabelas hash

Este trabalho deverá ser realizado e entregue __individualmente__. O objetivo é estudar as diferentes implementações de tabelas hash estudadas na disciplina

## O que deve ser desenvolvido
Neste trabalho cada estudante deverá implementar três diferentes tabelas hash. Duas delas deverão tratar colisões por meio de listas encadeadas, enquanto a terceira será uma tabela hash de endereçamento aberto.

A primeira tabela hash deverá tratar colisões utilizando uma estrutura de lista encadeada. Já a segunda tabela hash deverá substituir a lista encadeada por uma árvore balanceada (AVL, rubro-negra ou outra parecida). A terceira deverá ser a implementação de endereçamento aberto como visto em sala. Todos os algoritmos deverão ser desenvolvidos em linguagem de programação *C*, não sendo permitido o uso de bibliotecas externas ou bibliotecas *STL* do *C++*.

As tabelas hash deverão ter um tamanho $M = 1200$. O código deverá contabilizar e exibir o tempo de execução (em milisegundos) referente a inserção de todos os elementos da entrada.

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
Este trabalho de recuperação possui como código-base os códigos da aula 26, disponíveis aqui no Github.

### Makefile
O trabalho deverá, **obrigatoriamente**, compilar com um arquivo *makefile*. O código deve compilar em um ambiente Linux padrão, como o disponível nos laboratórios da UNIFAL. O código deve compilar com o comando

    make all

Observa-se que o trabalho que não compilar com o *makefile* disponibilizado levará nota **zero**. 

## Entrega e avaliação

Cada grupo deverá enviar um único arquivo *.zip* contendo todos os arquivos *.c*, todos os arquivos *.h* e o *makefile* utilizado pelo grupo. O arquivo deverá ser entregado no Moodle da disciplina até as 23h59 do dia 27/10/2023. Entregas em atraso não serão toleradas.

A nota do trabalho será um valor $z$ entre $0$ e $100$, onde

    z = 100c d

onde $c$ é um binário que indica se o código compila ou não utilizando o *makefile* enviado e $d$ é um valor real que representa a qualidade do código e a corretude dos algoritmos, incluindo a presença de comentários explicativos e a correta formatação da saída. 

