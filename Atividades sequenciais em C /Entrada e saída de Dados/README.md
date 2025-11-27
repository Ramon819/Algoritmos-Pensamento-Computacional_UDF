# 📥 Lista de Exercícios: Entrada e Saída em C

> **Linguagem C - Fundamentos de Programação**

Este repositório contém a resolução de uma lista prática de exercícios focada na manipulação de dados básicos. O objetivo é demonstrar domínio sobre declaração de variáveis, leitura de dados do usuário (`scanf`), processamento matemático e formatação de saída (`printf`).

---

## 🛠️ Tecnologias e Conceitos

![C](https://img.shields.io/badge/c-%2300599C.svg?style=for-the-badge&logo=c&logoColor=white)

Nestes códigos, foram aplicados os seguintes conceitos:
* **Tipos de Dados:** Diferença prática entre `int` (inteiros) e `float` (decimais).
* **Entrada e Saída:** Uso de `scanf` e `printf` com formatação de precisão (`%.2f`).
* **Operadores Aritméticos:** Soma, subtração, multiplicação, divisão e módulo (resto).
* **Constantes:** Uso de `#define` para valores fixos (ex: PI).
* **Lógica Matemática:** Cálculos de geometria, juros simples e conversão de tempo.

---

## 📂 Detalhamento dos Exercícios

Abaixo, a descrição funcional de cada código contido neste repositório:

| Arquivo | Descrição do Problema | Conceitos Chave |
| :--- | :--- | :--- |
| **Questão01.main.c** | Produto entre dois números inteiros pré-definidos (28 e 43). | Declaração e inicialização de variáveis. |
| **Questão02.main.c** | Cálculo da **Média Aritmética** entre três números reais. | `float`, média simples. |
| **Questão03.main.c** | Leitura de um número inteiro e exibição de seu **Antecessor e Sucessor**. | Operações de incremento/decremento. |
| **Questão04.main.c** | Leitura de dois números e exibição da **Soma**. | Entrada básica de dados. |
| **Questão05.main.c** | Cálculo da **terça parte** de um número real. | Divisão com números reais. |
| **Questão06.main.c** | Simulação de uma divisão inteira: exibe dividendo, divisor, **quociente e resto**. | Operador Módulo (`%`). |
| **Questão07.main.c** | Cálculo de **Média Ponderada** de 4 notas (pesos 1, 2, 3 e 4). | Lógica de pesos e precedência. |
| **Questão08.main.c** | Aplicação financeira: Reajuste de saldo em 1%. | Cálculo de porcentagem. |
| **Questão09.main.c** | Geometria: Calcula a **Área e Perímetro de um Retângulo**. | Fórmulas geométricas básicas. |
| **Questão10.main.c** | Geometria: Calcula a **Área e Perímetro de um Círculo**. | Uso da biblioteca `<math.h>` e constante `PI`. |
| **Questão11.main.c** | Geometria: Calcula a **Área de um Triângulo** (base x altura / 2). | Operadores aritméticos básicos. |
| **Questão12.main.c** | Financeiro: Calcula valor de **prestação em atraso** com taxa de juros. | Porcentagem e fórmula de juros simples. |
| **Questão13.main.c** | Matemática: Converte uma fração (numerador/denominador) em **número decimal**. | Divisão de reais (`float`). |
| **Questão14.main.c** | Tempo: Converte um horário (hora cheia) em **minutos totais** passados no dia. | Conversão de unidades de tempo. |

---

## 🚀 Como Compilar e Rodar

Para testar os códigos, utilize um compilador GCC. Exemplo via terminal:

1.  **Escolha o arquivo:**
    ```bash
    gcc Questão12.main.c -o juros
    ```

2.  **Execute o programa:**
    * Windows: `.\juros.exe`
    * Linux/Mac: `./juros`

---
