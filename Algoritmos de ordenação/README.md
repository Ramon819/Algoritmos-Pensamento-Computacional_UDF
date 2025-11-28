# 📊 Benchmark de Algoritmos de Ordenação em C

> **Algoritmos e Estrutura de Dados**
> **Análise de Desempenho e Complexidade**

Este repositório contém uma implementação prática e comparativa de três dos principais algoritmos de ordenação: **Merge Sort**, **Heap Sort** e **Quick Sort**.

O programa foi desenvolvido para medir métricas de desempenho (tempo, comparações e trocas) em diferentes cenários, incluindo um vetor de teste específico (RGM) e vetores aleatórios de tamanho crescente.

---

## 🛠️ Tecnologias e Estruturas

![C](https://img.shields.io/badge/c-%2300599C.svg?style=for-the-badge&logo=c&logoColor=white)

O código utiliza conceitos fundamentais da linguagem C:
* **Structs:** Uso de `typedef struct Metrics` para encapsular contadores de desempenho.
* **Ponteiros de Função:** Para criar uma função de benchmark genérica (`run_sort`) que aceita qualquer algoritmo de ordenação como parâmetro.
* **Alocação Dinâmica:** Uso de `malloc` e `free` para gerenciamento de memória dos vetores.
* **Medição de Tempo:** Uso da biblioteca `<time.h>` e `clock()` para precisão em milissegundos.

---

## 🧠 Algoritmos Implementados

| Algoritmo | Estratégia | Características no Código |
| :--- | :--- | :--- |
| **Merge Sort** | Dividir e Conquistar | Utiliza vetores auxiliares (`L` e `R`) e recursão. Estável. |
| **Heap Sort** | Seleção (Heap) | Implementa `heapify` para organizar a árvore e ordena *in-place*. |
| **Quick Sort** | Dividir e Conquistar | Escolhe o elemento central como pivô. Rápido e eficiente na média. |

---

## 📏 Métricas Analisadas

Para cada execução, o sistema captura:

1.  **Passos de Comparação (`steps_cmp`):** Quantas vezes o algoritmo precisou verificar se "A > B".
2.  **Passos de Troca (`steps_swap`):** Quantas vezes posições de memória foram alteradas ou valores copiados.
3.  **Tempo de Execução:** Tempo de CPU medido em milissegundos (`ms`).

---

## 🧪 Cenários de Teste

O `main` executa duas baterias de testes:

### 1. Teste de Validação (RGM)
Utiliza um vetor fixo para validação lógica e teste unitário:
> **Vetor:** `{4, 6, 3, 2, 0, 9, 5, 4}`

### 2. Teste de Escalabilidade
Gera vetores com números aleatórios (`rand() % 1000`) para testar o comportamento assintótico:
* **N = 100**
* **N = 1.000**
* **N = 10.000**

---

## 🚀 Como Compilar e Rodar

Certifique-se de ter um compilador C (como GCC) instalado.

1.  **Clone o repositório:**
    ```bash
    git clone [https://github.com/SEU-USUARIO/nome-do-repo.git](https://github.com/SEU-USUARIO/nome-do-repo.git)
    ```

2.  **Compile o código:**
    ```bash
    gcc main.c -o benchmark
    ```

3.  **Execute:**
    * **Windows:** `.\benchmark.exe`
    * **Linux/Mac:** `./benchmark`

---

## 📄 Exemplo de Saída

Ao rodar o programa, você verá um output similar a este:

```text
--- Teste com RGM (46320954) ---
Merge Sort: Passos = 18, Trocas = 24, Tempo = 0.002 ms
Heap Sort : Passos = 25, Trocas = 18, Tempo = 0.001 ms
Quick Sort: Passos = 14, Trocas = 8, Tempo = 0.001 ms

--- BENCHMARK GERAL ---

N = 100:
Merge Sort: ...
Heap Sort : ...
Quick Sort: ...
