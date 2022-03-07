# 2 - Comunicação entre processos - Pipes

Pipe é um meio de comunicação entre dois ou mais processos relacionados ou inter-relacionados. Pode ser dentro de um processo ou uma comunicação entre os processos filho e pai

## Exercício

"criar dois processos, em que o pai escreve a mensagem e o filho ler a mensagem"

## Como funciona 

```bash

Uma pipa é criada 
 - usando a função pipe()

Logo depois um processo filho é criado 
 - usando fork()

O processo pai grava (escreve) no pipe as mensagens ("Oi" e "Ola") 
 - que foram armazenadas em uma variavel tipo char[][] - (ex usado no código: char writemes[2][15] = {"Oi", "Ola"})
 - usando a função "write"

O processo filho lê a mensagem do pipe e a grava (escreve) na saída padrão (standard output) 
 - usando a função "read"

```

## Como usar
* Pré-Requisitos
  * editor de codigo
  * C (linguagem)
  * SO Linux
  * makefile

Compilando no terminal (sem usar o makefile) 

```bash

1. gcc "nome do arq".c -o "nome do executavel"

```
```bash

2. ./"nome do executavel"

```

Compilando no terminal (com o makefile)

```bash

1. make 
   - executa o - gcc "nome do arq".c -o "nome do executavel"

```
```bash

2. make run
   - executa o - ./"nome do executavel"

```
```bash

3. make clean
   - executa o -  rm 'nome do executável'
