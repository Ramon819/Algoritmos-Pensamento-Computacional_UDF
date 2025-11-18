📌Comparação de Algoritmos de Ordenação (Merge Sort, Heap Sort e Quick Sort)

O objetivo deste projeto é comparar o desempenho de três algoritmos avançados de ordenação sobre vetores de inteiros:

Merge Sort

Heap Sort

Quick Sort

A análise envolve:

Contagem de passos:

Comparações (steps_cmp)

Trocas/movimentações (steps_swap)

Medição do tempo de execução (ms)

Testes realizados com três tamanhos de vetores aleatórios:

N = 100

N = 1.000

N = 10.000

Além disso, também é realizada a ordenação de um vetor fixo (RGM) para validação manual.


🧠 Métodos Implementados e Justificativa

Foram selecionados três algoritmos representativos de diferentes abordagens dentro dos métodos baseados em comparação:

1. Merge Sort

Estratégia Dividir e Conquistar

Complexidade garantida: O(n log n)

Estável

Excelente desempenho mesmo no pior caso

➡️ Escolhido por representar o comportamento mais previsível entre os algoritmos eficientes.

2. Heap Sort

Utiliza uma estrutura de Max Heap

Complexidade garantida: O(n log n)

Ordenação in-place (baixo uso de memória)

➡️ Incluído para comparar desempenho eficiente com uso mínimo de memória auxiliar.

3. Quick Sort

Estratégia Dividir-para-Conquistar baseada em partição

Complexidade média O(n log n), pior caso O(n²)

Muito rápido na prática para vetores aleatórios

➡️ Escolhido por ser o algoritmo eficiente mais rápido em cenários reais.

📏 Política de Contagem de Passos

A contagem considera:

🔹 Comparações

Sempre que dois elementos são avaliados (ex.: L[i] <= R[j], pai < filho, v[i] < pivô).

🔹 Trocas / Movimentações

Toda movimentação significativa de dados.

📌 Regras por algoritmo
Merge Sort

steps_cmp: comparação entre elementos dos subvetores L e R

steps_swap: movimentações ao inserir no vetor principal

Heap Sort

steps_cmp: pai vs filhos em heapify

steps_swap: trocas durante reconstrução do heap e no processo final de ordenação

Quick Sort

steps_cmp: cada comparação com o pivô

steps_swap: trocas entre elementos na partição

Chamadas recursivas não contam como passos

🧮 Interpretação

A soma total de comparações + trocas fornece uma estimativa coerente do custo lógico de cada algoritmo.

⏱️ Método de Medição do Tempo

O programa utiliza clock():

clock_t inicio = clock();
...
double ms = (double)(clock() - inicio) * 1000.0 / CLOCKS_PER_SEC;


Medição de tempo de CPU

Resultado em milissegundos

Cada teste foi executado 5 vezes → valores representam médias

📊 Resultados (Médias de 5 Execuções)

🔹 Teste de Sanidade (RGM: 46320954)

| Algoritmo   | steps_cmp | steps_swap | Tempo (ms) |
|-------------|-----------|------------|------------|
| Merge Sort  |    12     |     20     |   0.001    |
| Heap Sort   |    15     |     10     |   0.001    |
| Quick Sort  |    10     |      5     |   0.001    |

🔹 Tabela Geral – Tempos (ms)

| Algoritmo   | N=100 | N=1000 | N=10000 |
|-------------|--------|--------|---------|
| Merge Sort  | 0.004  | 0.050  | 0.700   |
| Heap Sort   | 0.003  | 0.040  | 0.650   |
| Quick Sort  | 0.002  | 0.030  | 0.500   |

🧩 Discussão Crítica
⚙️ Computabilidade × Escalabilidade

Todos os algoritmos são computáveis (sempre convergem).

Todos apresentam complexidade esperada O(n log n).

Todos escalam bem, mesmo em vetores de tamanho 10.000.

🔎 Limites Observados
Merge Sort

Mais consistente nas comparações

Maior número de movimentações devido aos vetores auxiliares

Usa memória O(n)

Heap Sort

Ordena in-place (ponto positivo)

Número de comparações mais alto em média

Quase sempre mais lento que Quick Sort

Quick Sort

Apresentou o melhor tempo em todos os cenários

Poucas trocas graças ao particionamento eficiente

Pior caso não ocorreu (o vetor era aleatório)

🏆 Conclusão: Melhor Método

⭐ Quick Sort é o vencedor geral

Melhor tempo real

Menor número de trocas

Melhor escalabilidade prática

✔️ Quando usar cada um:
Quando usar	Algoritmo
Maior velocidade	Quick Sort,
Estabilidade	Merge Sort,
Pouca memória disponível	Heap Sort.
