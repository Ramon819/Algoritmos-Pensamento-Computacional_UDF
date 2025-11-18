📘  Calculadora Científica Completa em C

Este projeto implementa uma calculadora científica modular em linguagem C, contendo operações básicas, avançadas, funções matemáticas, operações em cadeia, manipulação de matrizes, conversões e um sistema completo de histórico persistente em CSV.

O código foi estruturado em camadas, separando I/O, lógica de cálculos, operações de matrizes e gestão de histórico, tornando o programa mais limpo, modular e seguro.

📌 1. Funcionalidades Principais

A calculadora inclui os seguintes grupos de operações:

🧮 Operações em cadeia (vários números → um resultado)

Adição

Subtração

Multiplicação

Divisão

Módulo

Usuário informa N números e a operação é aplicada sequencialmente.

🎯 Operações por elemento (vetor → vetor)

Para cada número digitado:

Seno / Cosseno / Tangente (em graus)

Raiz quadrada

Logaritmo natural e log10

Valor absoluto

Fatorial (com limite configurável)

Inverso (1/x)

Arredondamento / piso / teto

Conversão graus ↔ radianos

Todas as operações registram o histórico automaticamente.

🔢 Operações padrão (com dois números)

Potenciação

Porcentagem

🧱 Matrizes

Suporte a operações com:

Matrizes 2×2

Soma

Multiplicação

Matrizes 3×3

Soma

Multiplicação

📝 Histórico (buffer circular)

Sistema avançado de histórico:

Armazena até 100 operações

Mostra ID, tipo, operandos e resultado

Salvamento em arquivo CSV

Carregamento de CSV, preservando IDs e ordem

Implementado com buffer circular para evitar estouro

🧱 2. Arquitetura e Organização do Código

O programa é dividido em módulos lógicos:

🔧 Utilidades / Entrada

read_int()

read_double()

read_line()

Tratamento robusto de entrada

Limpeza de buffer

🧠 Funções matemáticas puras (sem I/O)

Básicas: calc_add, calc_sub, etc.

Avançadas: log com base, fatorial seguro, média, mediana, desvio-padrão

Máximo, mínimo

MDC e MMC

🧮 Matrizes

Mat2 e Mat3

Soma e multiplicação

🗂 Histórico

init_historico()

hist_add()

hist_print()

hist_save_csv()

hist_load_csv()

▶️ 3. Como Compilar

Compile usando gcc, padrão C11:

gcc -O2 -std=c11 calculadora.c -lm -o calc


O uso de -lm é obrigatório para vincular a biblioteca matemática (math.h).

▶️ 4. Como Executar
./calc


O menu exibirá todas as operações disponíveis.

🧪 5. Segurança e Validações

O programa possui diversas proteções:

✔️ Operações seguras

Tratamento de divisão por zero

Bloqueio de fatorial acima do limite

Logaritmo apenas para valores positivos

Raiz real de negativos apenas para expoentes ímpares

Conversões e arredondamentos protegidos

✔️ Robustez de entrada

Conversão com strtol e strtod

Checagem de errno

Validação de intervalos

✔️ Histórico protegido

Circular buffer para evitar overflow

Sistema de IDs automático

CSV seguro e padronizado

📊 6. Estrutura do Menu
=============== CALCULADORA CIENTÍFICA (MOD) ===============
 --- Operações em Cadeia ---
 1  Adição
 2  Subtração
 3  Multiplicação
 4  Divisão
 19 Módulo

 --- Operações por Elemento ---
 5  Seno
 6  Cosseno
 7  Tangente
 8  Raiz Quadrada
10  Log Natural
11  Log10
13  Absoluto
14  Fatorial
15  Inverso
16  Arredondar
17  Piso
18  Teto
20  Conversão Graus ↔ Radianos

 --- Operações padrão ---
 9  Potenciação
12  Porcentagem

 --- Matrizes ---
21 Mat2 soma
22 Mat2 multiplicação
23 Mat3 soma
24 Mat3 multiplicação

 --- Histórico ---
30 Ver histórico
31 Salvar CSV
32 Carregar CSV
0  Sair

💾 7. Salvando e Carregando Histórico
Salvar histórico:

Nome do arquivo: historico.csv

Carregar histórico:
32
Nome do arquivo: historico.csv

IDs são preservados automaticamente.

📝 8. Observações Técnicas Importantes

O código usa pow(), sin(), log(), etc. → exige math.h

O histórico usa buffer circular para não explodir memória

Operações puras são totalmente independentes de I/O (bom para testes)

Matrizes são armazenadas em structs com arrays fixos

