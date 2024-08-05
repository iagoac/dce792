# Trabalho prático 03
## Ordenação de structs

Como estudado na disciplina, existem diversos métodos e algoritmos de ordenação. Neste trabalho, você deve implementar três deles e comparar seu desempenho

## O que deve ser desenvolvido
Neste trabalho cada grupo (de dois ou três integrantes) deverá implementar três algoritmos. O primeiro será um método de ordenação simples, como estudado na [aula 21](https://github.com/iagoac/dce792/blob/main/slides/aula_21.pdf). O segundo será um método de ordenação ótimo, como apresentado na [aula 22](https://github.com/iagoac/dce792/blob/main/slides/aula_22.pdf). O terceiro é um método de ordenação em tempo linear, como visto na [aula 23](https://github.com/iagoac/dce792/blob/main/slides/aula_23.pdf). O código deverá ser desenvolvido em linguagem de programação *C*, não sendo permitido o uso de bibliotecas externas ou bibliotecas *STL* do C++.

O código deverá contabilizar e exibir
 - O tempo de execução (em milisegundos)
 - O número de operações de comparação executadas
 - O número de operações de troca executadas
 - A memória total gasta pelo algoritmo

### Entradas
Será dada uma única instância contendo diversos itens (structs). Esta entrada está disponível neste mesmo diretório e se chama _jogadores.csv_. Este é um arquivo _.csv_ com cinco diferentes colunas: 
 - Nome
 - Posição
 - Naturalidade
 - Posição
 - Idade

Note que cada linha (com excessão da primeira) refere-se a um diferente jogador. A ordenação deverá ser realizada pelo campo __nome__ da struct. Observe que deve-se construir um vetor com a struct completa e ordena-lo com base nesta única chave. 

O código também deverá receber como entrada um inteiro indicando qual algoritmo será utilizado
 - 1 para o método de ordenação simples
 - 2 para o método de ordenação ótimo
 - 3 para o método de ordenação em tempo linear


### Saída esperada
Espera-se que o código imprima a lista de structs ordenada (com todos os campos da struct e não somente o seu nome). Logo após, ele deve imprimir quatro números em ponto flutuante:
 - O tempo de execução (em milisegundos)
 - O número de operações de comparação executadas
 - O número de operações de troca executadas
 - A memória total gasta pelo algoritmo

A saída deverá, necessariamente, ser formatada em quatro linhas, seguindo a ordem apresentada acima

### Código base
Este terceiro trabalho não possui um código-base. É de responsabilidade de vocês se organizarem e criarem tudo a partir do zero.

### Makefile
O trabalho deverá, **obrigatoriamente**, compilar com um arquivo *makefile*. O código deve compilar em um ambiente Linux padrão, como o disponível nos laboratórios da UNIFAL. O código deve compilar com o comando

    make all

Observa-se que o trabalho que não compilar com o *makefile* disponibilizado levará nota **zero**. 

## Entrega e avaliação

Cada grupo deverá enviar um único arquivo *.zip* contendo todos os arquivos *.c*, todos os arquivos *.h* e o *makefile* utilizado pelo grupo. O arquivo deverá ser entregado no Moodle da disciplina até as 23h59 do dia 27/10/2023. Entregas em atraso não serão toleradas.

A nota do trabalho será um valor $z$ entre $0$ e $100$, onde

    z = 100c d

onde $c$ é um binário que indica se o código compila ou não utilizando o *makefile* enviado e $d$ é um valor real que representa a qualidade do código e a corretude dos algoritmos, incluindo a presença de comentários explicativos e a correta formatação da saída. 

