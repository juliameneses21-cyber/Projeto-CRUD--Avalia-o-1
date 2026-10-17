# Projeto-CRUD--Avaliação 1

# AvaliaFarma 💊

PROJETO DE ALGORITMOS E ESTRUTURA DE DADOS - AVALIAÇÃO 1

ALUNOS:
Julia Meneses Sousa
Ayrton Kauan Gomes da Silva 
Ian Oliveira Taciano 

## Apresentação

O AvaliaFarma é um programa desenvolvido em C que permite registrar e consultar avaliações de eficácia de produtos farmacêuticos. A aplicação funciona por meio de um menu no terminal, oferecendo opções para organizar e administrar os registros durante a execução.

## O que o sistema permite fazer?

O usuário pode cadastrar um produto informando seu nome, código identificador e nota de eficácia. Depois, pode consultar os registros existentes, localizar um produto pelo código, alterar sua avaliação ou excluir seu cadastro.

As notas são limitadas ao intervalo de 1 a 5, e o sistema comporta até 100 produtos cadastrados simultaneamente.

## Organização dos dados

As informações são armazenadas em estruturas de dados na memória do programa:

* Os códigos identificam os produtos.
* Os nomes armazenam a identificação de cada produto.
* As notas registram as avaliações de eficácia.
* Uma variável de controle acompanha a quantidade de produtos cadastrados.

## Ferramentas utilizadas

* Linguagem de programação C
* stdio.h — entrada e saída de dados.
* string.h — manipulação de textos.
* Git e GitHub — controle de versões e colaboração no desenvolvimento.

## Executando a aplicação

Com o GCC instalado, compile o arquivo-fonte na pasta do projeto:

bash
gcc avfarmacia.c -o avfarmacia


Em seguida, execute o programa:

Windows
bash
avfarmacia.exe


Linux
bash
./avfarmacia


## Aprendizados

O desenvolvimento do projeto envolve a aplicação de lógica de programação, organização de dados com vetores e matrizes, estruturas condicionais, laços de repetição, validação de entradas e manipulação de strings. Também permite praticar o gerenciamento de versões e o trabalho colaborativo com Git e GitHub.

## Limitações atuais

Os registros existem apenas enquanto o programa está em execução. Ao encerrar a aplicação, os dados cadastrados são perdidos, pois ainda não há armazenamento permanente em arquivos ou banco de dados.
