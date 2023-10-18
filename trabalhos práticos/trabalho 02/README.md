# Trabalho prático 02
## Comparação entre árvores balanceadas e não-balanceadas

Como estudado na disciplina, árvores podem sofrer um grande desbalanceamento. Desta forma, o objetivo deste trabalho é verificar o quão lento é uma árvore não balanceada em comparação a uma árvore balanceada.

## O que deve ser desenvolvido
Neste trabalho cada grupo (de dois ou três integrantes) deverá implementar dois algoritmos. O primeiro será uma árvore binária não-balanceada, e o segundo uma árvore balanceada qualquer a escolha do grupo. O código deverá ser desenvolvido em linguagem de programação *C*, não sendo permitido o uso de bibliotecas externas ou bibliotecas *STL* do C++.

O código deverá contabilizar o tempo, em milisegundos, gastos para realizar todas as operações de inserção e remoção descritas nas instâncias dadas.

### Entradas
Diversas instâncias de teste serão dadas como entrada. Cada instância de teste será composta por duas colunas. A primeira coluna será um caractere __I__ ou um caractere __R__, enquanto a segunda coluna será um número inteiro. O caractere __I__ significa uma inserção na árvore, enquanto o caractere __R__ simboliza uma remoção. O inteiro a ser inserido ou removido será aquele que consta na coluna logo a frente.


### Saída esperada
Espera-se que o código imprima somente dois números em ponto flutuante. O primeiro número deverá indicar o tempo necessário para realizar as operações de inserção e remoção na árvore não balanceada, enquanto o segundo deverá simbolizar o tempo das mesmas operações de inserção e remoção na árvore balanceada.
A saída deverá, necessariamente, ser formatada em duas linhas, sendo que
 - A primeira linha indica o tempo da árvore não balanceada
 - A segunda linha indica o tempo da árvore balanceada

### Código base
Este diretório contém o código-base para a realização do trabalho prático assim como as instâncias de teste. Todo o desenvolvimento deverá ser realizado a partir do código-base aqui disponibilizado

### Makefile
O trabalho deverá, **obrigatoriamente**, compilar com um arquivo *makefile*, sendo que um arquivo de exemplo é disponibilizado junto do código-base deste trabalho. Este *makefile* pode ser modificado caso o grupo julgue necessário. 

O código deve compilar em um ambiente Linux padrão, como o disponível nos laboratórios da UNIFAL. O código deve compilar com o comando

    make all

Observa-se que o trabalho que não compilar com o *makefile* disponibilizado levará nota **zero**. 

## Entrega e avaliação

Cada grupo deverá enviar um único arquivo *.zip* contendo todos os arquivos *.c*, todos os arquivos *.h* e o *makefile* utilizado pelo grupo. O arquivo deverá ser entregado no Moodle da disciplina até as 23h59 do dia 27/10/2023. Entregas em atraso não serão toleradas.

A nota do trabalho será um valor $z$ entre $0$ e $100$, onde

    z = 100c d

onde $c$ é um binário que indica se o código compila ou não utilizando o *makefile* enviado e $d$ é um valor real que representa a qualidade do código, incluindo a presença de comentários explicativos e a correta formatação da saída. 

