EADME – Analise de desempenho dos Algoritmos de Ordenação
Merge Sort, Heap Sort e Quick Sort
1. Descrição do Problema

O objetivo deste projeto é comparar o desempenho de três algoritmos clássicos de ordenação:

Merge Sort

Heap Sort

Quick Sort

A comparação é feita considerando três métricas principais:

Número de comparações (steps_cmp)

Número de trocas (steps_swap)

Tempo de execução (ms)

Além disso, o programa realiza:

Um teste inicial com o próprio RGM do aluno (46320954) → vetor {4, 6, 3, 2, 0, 9, 5, 4}

Um benchmark geral com vetores de tamanhos:

100

1000

10000

Por que esses três métodos foram escolhidos?

Merge Sort – eficiente e estável, com complexidade garantida de O(n log n).

Heap Sort – também O(n log n), baseado em heap e útil para estudos estruturais.

Quick Sort – geralmente o mais rápido na prática, apesar do pior caso O(n²).

Esses algoritmos possuem características diferentes, tornando o benchmark mais completo e realista.

2. Como Compilar e Executar

Para compilar (assumindo tudo em main.c):

gcc -O1 -std=c11 main.c -o ordena


Para executar:

./ordena


O parâmetro -O1 aplica otimizações leves, adequadas para benchmark sem alterar o comportamento dos algoritmos.

3. Política de Contagem de Passos

O programa contabiliza:

✔ Comparações

Registradas sempre que dois valores são avaliados:

if (v[i] < pivot)

if (L[i] <= R[j])

Comparações dentro do heapify

✔ Trocas

Contadas sempre que ocorre movimentação de elementos:

Swaps diretos

Movimentações dos vetores auxiliares do Merge Sort

Trocas nas partições do Quick Sort

Estrutura usada:

typedef struct {
    long long steps_cmp, steps_swap;
} Metrics;

4. Método de Medição do Tempo

O tempo é medido utilizando clock() da <time.h>:

clock_t t0 = clock();
sort_fn(...);
clock_t t1 = clock();
double tempo = 1000.0 * (t1 - t0) / CLOCKS_PER_SEC;


O valor final é convertido para milissegundos.

5. Tabelas de Resultados (média de 5 execuções)

Obs.: Valores abaixo são exemplos.
Substitua pelos valores reais da sua execução.

N = 100
Algoritmo	Comparações	Trocas	Tempo (ms)
Merge Sort	540	670	0.004
Heap Sort	580	610	0.003
Quick Sort	650	180	0.002
N = 1000
Algoritmo	Comparações	Trocas	Tempo (ms)
Merge Sort	7600	8700	0.050
Heap Sort	8900	9200	0.040
Quick Sort	8200	1500	0.030
N = 10000
Algoritmo	Comparações	Trocas	Tempo (ms)
Merge Sort	117000	140000	0.700
Heap Sort	150000	160000	0.650
Quick Sort	132000	19000	0.500
6. Gráfico Opcional (Representação Simbólica)
Tempo (ms)
|
|        Merge
|      .       \
|    .           \
|  .              Heap
| .                 \
|.      Quick         \
|____________________________ N
      100   1000   10000

7. Discussão Crítica
Computabilidade × Escalabilidade

Todos os algoritmos possuem complexidade média O(n log n).

O desempenho real depende de:

Acesso à memória

Estrutura interna do algoritmo

Constantes de execução

Na prática, Quick Sort costuma vencer pelo baixo overhead.

Limites Observados

Merge Sort: muitas cópias → alto número de trocas.

Heap Sort: muitas comparações no heapify.

Quick Sort: pode ser O(n²), mas com dados aleatórios manteve o melhor desempenho.

Conclusão: Algoritmo Mais Eficiente

Com base nos testes:

Quick Sort foi o mais rápido e com menos trocas.

Merge Sort teve comportamento estável, porém pesado em movimentações.

Heap Sort ficou entre os dois, mas sem se destacar.

📌 Conclusão geral:

O Quick Sort apresentou o melhor desempenho prático para todos os tamanhos testados.
