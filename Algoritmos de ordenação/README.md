# 📌 Comparação de Algoritmos de Ordenação

> **Análise de Desempenho e Complexidade Algorítmica**
> **Universidade do Distrito Federal (UDF) - Ciência da Computação**

Este projeto tem como objetivo analisar e comparar o desempenho prático de três algoritmos avançados de ordenação (*Sorting Algorithms*): **Merge Sort**, **Heap Sort** e **Quick Sort**.

A análise foca em vetores de inteiros com diferentes magnitudes, medindo eficiência através de tempo de execução e contagem de passos lógicos.

---

## 🛠️ Tecnologias e Conceitos

![C](https://img.shields.io/badge/c-%2300599C.svg?style=for-the-badge&logo=c&logoColor=white)
![Algorithms](https://img.shields.io/badge/algorithms-O(n_log_n)-green?style=for-the-badge)

* **Linguagem:** C
* **Métricas:** Tempo de CPU (`clock_t`), Comparações e Trocas (*Swaps*).
* **Escopo:** Vetores aleatórios (N = 100, 1.000, 10.000) e Vetor Fixo (Validação).

---

## 🧠 Algoritmos Implementados

| Algoritmo | Estratégia | Complexidade | Características |
| :--- | :--- | :--- | :--- |
| **Merge Sort** | Dividir e Conquistar | $O(n \log n)$ | **Estável**. Excelente desempenho no pior caso, mas consome mais memória (vetores auxiliares). |
| **Heap Sort** | Max Heap (Árvore) | $O(n \log n)$ | **In-place**. Baixo uso de memória, ordenando na própria estrutura do vetor. |
| **Quick Sort** | Particionamento | Médio: $O(n \log n)$ | **Rápido**. Geralmente o mais veloz em cenários reais, apesar do pior caso $O(n^2)$. |

---

## 📏 Metodologia de Análise

Para garantir uma comparação justa, foram adotadas as seguintes métricas:

### 1. Contagem de Passos
* **`steps_cmp` (Comparações):** Incrementado sempre que dois valores são testados (ex: `L[i] <= R[j]` ou `pai < filho`).
* **`steps_swap` (Trocas):** Incrementado a cada movimentação significativa de dados na memória.
* *Nota: Chamadas recursivas não são contabilizadas como passos.*

### 2. Medição de Tempo
Utilizou-se a função `clock()` da biblioteca `time.h` para medir o tempo de CPU em milissegundos:
```c
double ms = (double)(clock() - inicio) * 1000.0 / CLOCKS_PER_SEC;

📊 Resultados dos Testes
  1. Teste de Sanidade (Validação)
Entrada: Vetor fixo baseado em RGM (46320954).
Algoritmo,Comparações,Trocas (Swaps),Tempo (ms)
Merge Sort,12,20,0.001
Heap Sort,15,10,0.001
Quick Sort,10,5,0.001
2. Desempenho em Escala (Tempo em ms)
Algoritmo,N = 100,N = 1.000,N = 10.000
Merge Sort,0.004,0.050,0.700
Heap Sort,0.003,0.040,0.650
Quick Sort,0.002,0.030,0.500
🧩 Discussão e Conclusão
Análise Crítica
Merge Sort: Mostrou-se o mais consistente nas comparações, porém o alto número de movimentações (devido à cópia para vetores auxiliares) impactou levemente o tempo final.

Heap Sort: Vantajoso por ser in-place (economia de memória), mas realizou mais comparações médias que os concorrentes.

Quick Sort: Graças ao particionamento eficiente, realizou menos trocas e obteve o menor tempo em todos os cenários.

🏆 Veredito
O Quick Sort foi o vencedor geral nos testes realizados, apresentando a melhor escalabilidade prática.
 Guia de EscolhaCenárioMelhor EscolhaMaior Velocidade🚀 Quick SortEstabilidade (manter ordem relativa)⚖️ Merge SortPouca Memória Disponível💾 Heap Sort
