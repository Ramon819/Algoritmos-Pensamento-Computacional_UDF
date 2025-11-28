# 🔀 Exercícios: Estruturas de Decisão em C

> **Lógica de Programação e Algoritmos**

Este repositório contém a resolução de exercícios focados em **Controle de Fluxo**. Aqui, os programas deixam de ser lineares e passam a tomar decisões baseadas em condições lógicas, utilizando estruturas como `if`, `else if`, `else` e `switch`.

Além disso, a lista aborda o uso da biblioteca matemática (`<math.h>`) integrada com lógica condicional.

---

## 🛠️ Tecnologias e Conceitos

![C](https://img.shields.io/badge/c-%2300599C.svg?style=for-the-badge&logo=c&logoColor=white)

Nesta lista, são explorados os seguintes tópicos:

* **Estruturas Condicionais:** Uso de `if` simples e composto para desvios de fluxo.
* **Seleção Múltiplas:** Uso do `switch / case` para menus e seleções diretas.
* **Operadores Relacionais:** Maior (`>`), Menor (`<`), Igual (`==`), Diferente (`!=`).
* **Operadores Lógicos:** E (`&&`), OU (`||`) para condições complexas (ex: faixas etárias).
* **Matemática Avançada:** Cálculo de raiz quadrada (`sqrt`), potência (`pow`) e operador módulo (`%`) para verificar par/ímpar.

---

## 📂 Detalhamento dos Exercícios

Abaixo, a descrição funcional de cada código contido neste repositório:

| Exercício | Descrição do Problema | Conceitos Chave |
| :--- | :--- | :--- |
| **01_maior_numero.c** | Lê dois números e informa qual é o **maior** entre eles. | `if`, `else`, comparação. |
| **02_comparar_alturas.c** | Lê a altura de duas pessoas (A e B) e exibe uma mensagem dizendo quem é mais alto. | Comparação com `float`. |
| **03_classificacao_idade.c** | Calcula a idade baseada no ano de nascimento e classifica: Maior de 18, entre 15-18 ou menor de 15. | Lógica aninhada (`else if`), intervalos. |
| **04_mes_extenso.c** | O usuário digita o número do mês (1-12) e o programa exibe o nome por extenso. | Estrutura `switch case`. |
| **05_par_impar_math.c** | Verifica se um número é **Par ou Ímpar**. Se Par: calcula Raiz Quadrada. Se Ímpar: eleva ao Quadrado. | Operador `%` (módulo) e `<math.h>`. |
| **06_hipotenusa.c** | Recebe catetos, calcula a **Hipotenusa** e avisa se o valor for "muito grande" (>100). | Teorema de Pitágoras, condicionais. |

---

## 🚀 Como Compilar e Rodar

Para exercícios que usam a biblioteca matemática (`<math.h>`), é importante linkar a biblioteca ao compilar (principalmente em Linux/Mac).

1.  **Exemplo de compilação (Exercício 05 ou 06):**
    ```bash
    gcc 05_par_impar_math.c -o programa -lm
    ```
    *(A flag `-lm` linka a biblioteca matemática)*

2.  **Execute o programa:**
    * Windows: `.\programa.exe`
    * Linux/Mac: `./programa`

---
