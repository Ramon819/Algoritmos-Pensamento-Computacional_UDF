# 🧮 Calculadora Científica Modular

> **Linguagem C - Algoritmos e Estruturas de Dados**
> **Universidade do Distrito Federal (UDF)**

Este repositório contém um projeto avançado de uma **Calculadora Científica**, desenvolvida com foco em modularidade, segurança de dados e persistência. O sistema vai além das operações básicas, implementando histórico de cálculos, operações matriciais e tratamento robusto de entrada de dados.

---

## 🛠️ Tecnologias e Conceitos

![C](https://img.shields.io/badge/c-%2300599C.svg?style=for-the-badge&logo=c&logoColor=white)

Neste projeto, foram aplicados conceitos avançados da linguagem C:

* **Estruturas de Dados (`struct`):** Organização do histórico e matrizes.
* **Alocação Dinâmica (`malloc`/`free`):** Gerenciamento eficiente de memória para vetores.
* **Persistência de Dados (File I/O):** Leitura e escrita de arquivos **CSV**.
* **Ponteiros:** Manipulação direta de memória e passagem por referência.
* **Biblioteca Matemática (`<math.h>`):** Uso de funções trigonométricas, logarítmicas e exponenciais.
* **Buffer Circular:** Implementação otimizada para o histórico de operações.

---

## 📂 Funcionalidades do Sistema

O programa opera através de um menu interativo com as seguintes capacidades:

| Categoria | Funcionalidades |
| :--- | :--- |
| **Operações em Cadeia** | Adição, subtração, multiplicação e divisão acumulativa com múltiplos números. |
| **Científica** | Seno, Cosseno, Tangente (Graus/Radianos), Logaritmos (Base 10 e Natural), Fatorial e Raiz. |
| **Matrizes** | Soma e Multiplicação de matrizes **2x2** e **3x3**. |
| **Utilidades** | Arredondamento (Round, Ceil, Floor), Porcentagem e Conversão de Unidades. |
| **Histórico** | Registro das últimas 100 operações com opção de **Salvar** e **Carregar** em arquivo `.csv`. |

---

## 🚀 Como Compilar e Rodar

Como este projeto utiliza a biblioteca matemática avançada, é necessário linkar a biblioteca `-lm` ao compilar em ambientes Linux/Unix.

1.  **Clone o repositório e entre na pasta:**
    ```bash
    git clone [https://github.com/SEU-USUARIO/nome-do-repo.git](https://github.com/SEU-USUARIO/nome-do-repo.git)
    cd nome-do-repo
    ```

2.  **Compile o código (GCC):**
    ```bash
    gcc main.c -o calculadora -lm
    ```
    *(A flag `-lm` é essencial para incluir as funções matemáticas)*

3.  **Execute o programa:**
    * **Windows:** `.\calculadora.exe`
    * **Linux/Mac:** `./calculadora`

---

## 💾 Exemplo de Persistência (CSV)

O sistema permite exportar o histórico de cálculos. O arquivo gerado (`historico.csv`) segue o padrão:

```csv
id,tipo,a,b,resultado
1,soma,10,20,30
2,sqrt,144,0,12
3,mat2_mul,0,0,0
