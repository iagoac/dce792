# Trabalho prático 01
## Passeio do Cavalo

No jogo de xadrez, cada jogador inicia a partida com dois cavalos. Esta peça se movimenta de forma especial, fazendo um "L" no tabuleiro, conforme pode ser observado na figura abaixo. Note que ele sempre se move duas casas em uma direção, e então uma outra casa a esquerda ou a direita da direção inicial.

![movimento_cavalo](https://github.com/iagoac/dce792/assets/8388583/67070d36-f709-4d60-9993-85e1c25a1603)

Nós dizemos que um percurso de um cavalo é completo quando, a partir de um ponto inicial qualquer, este consegue percorrer todas as casas de um tabuleiro de xadrez sem repetir nenhuma. Um exemplo de um percurso de um cavalo é mostrado na figura abaixo. 

![percurso_cavalo](https://github.com/iagoac/dce792/assets/8388583/5e598c26-099a-4650-bb2b-40f3ed0a9fb9)

Um percurso pode ser dito *fechado* ou *aberto*. Considera-se como *fechado* um percurso no qual o cavalo é capaz de retornar a sua posição inicial após preencher todo o tabuleiro. Já um percurso é dito ser *aberto* caso não seja possível realizar tal retorno. Nota-se na figura acima que o cavalo realizou um percurso fechado, pois ele foi capaz de retornar a sua posição inicial logo após o fim do percurso.

Neste trabalho, você deve construir e contar percursos para um cavalo em um tabuleiro de xadrez fictício de dimensões $n$ por $m$. Você deve contar o número de percursos abertos e o número de percursos fechados de forma separada. Além disso, deve-se considerar que o cavalo sempre é inicialmente posicionado na casa $(a, 1)$ do tabuleiro, ou seja, a casa inferior esquerda.

## O que deve ser desenvolvido
Neste trabalho cada grupo (de dois ou três integrantes) deverá implementar um **método não recursivo** para construir e contar os percursos do cavalo. O código deverá ser desenvolvido em linguagem de programação *C*, não sendo permitido o uso de bibliotecas externas ou bibliotecas *STL* do C++.

O código deve contar, separadamente, os percursos fechados e abertos. Para isto, o grupo deverá utilizar uma ou mais das estruturas de dados aprendidas em sala de aula

### Entradas
Diversas instâncias de teste serão dadas como entrada. Cada instância de teste será uma tupla $(n, m)$, onde $n$ e $m$ são as dimensões do tabuleiro de xadrez.

Serão fornecidas 20 instâncias de teste, sendo que a saída de 5 delas já serão conhecidas previamente como forma de validar o algoritmo desenvolvido pelo grupo.

### Saída esperada
Espera-se que o código imprima somente dois números inteiros. O primeiro número deverá indicar o número de diferentes passeios fechados que o cavalo foi capaz de realizar, enquanto o segundo número deverá simbolizar o número de passeios abertos distintos que o cavalo conseguiu percorrer.
A saída deverá, necessariamente, ser formatada em duas linhas, sendo que
 - A primeira linha indica o número de passeios fechados
 - A segunda linha indica o número de passeios abertos

### Código base
Este diretório contém o código-base para a realização do trabalho prático assim como as instâncias de teste. Todo o desenvolvimento deverá ser realizado a partir do código-base aqui disponibilizado

### Makefile
O trabalho deverá, **obrigatoriamente**, compilar com um arquivo *makefile*, sendo que um arquivo de exemplo é disponibilizado junto do código-base deste trabalho. Este *makefile* pode ser modificado caso o grupo julgue necessário. 

O código deve compilar em um ambiente Linux padrão, como o disponível nos laboratórios da UNIFAL. O código deve compilar com o comando

    make all

Observa-se que o trabalho que não compilar com o *makefile* disponibilizado levará nota **zero**. 

## Entrega e avaliação

Cada grupo deverá enviar um único arquivo *.zip* contendo todos os arquivos *.c*, todos os arquivos *.h* e o *makefile* utilizado pelo grupo. O arquivo deverá ser entregado no Moodle da disciplina até as 23h59 do dia 27/09/2023. Entregas em atraso não serão toleradas.

A nota do trabalho será um valor $z$ entre $0$ e $100$, onde

    z = 100c (0.9 (u/d) + 0.1 (e))

onde $c$ é um binário que indica se o código compila ou não utilizando o *makefile* enviado, $\frac{u}{d}$ simboliza a proporção de instâncias com o resultado correto e $e$ é um valor real que representa a qualidade do código, incluindo a presença de comentários explicativos e a correta formatação da saída. Além disso, a utilização de um método recursivo também implicará na nota **zero**.

