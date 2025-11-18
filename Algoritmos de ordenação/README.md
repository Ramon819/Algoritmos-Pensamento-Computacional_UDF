Sobre o trabalho

A ideia desse trabalho foi pegar três algoritmos de ordenação, Merge Sort, Heap Sort e Quick Sort, e testar qual deles é melhor.
Escolhi esses três porque, pesquisando, vi que eles são bem mais rápidos que o Bubble Sort. Todos eles têm a complexidade O(n log n), que basicamente quer dizer que eles escalam melhor.

Por que escolhi cada um

Merge Sort: escolhi porque, mantém a ordem dos iguais, mas usa muita memória.

Heap Sort: escolhi porque ele organiza tudo no próprio vetor, sem ficar criando outro.

Quick Sort: escolhi porque, Mesmo que o Merge Sort e o Heap Sort tenham a mesma complexidade média, o Quick Sort ganha no tempo real de execução,mesmo sendo MUITO dificil.

Testa o vetor do meu RGM (46320954)

Depois testa vetores de 100, 1000 e 10000 posições

 Como contei os passos e o tempo

Criei uma struct chamada Metrics pra guardar:

quantas comparações o algoritmo fez

quantas trocas ele fez

Como contei:

cada if → steps_cmp++

cada mudança no vetor → steps_swap++

Tempo:

Usei clock() mesmo, convertendo pra milissegundos.

Nada muito sofisticado, só o básico pra conseguir medir.

 Resultados (média de 5 execuções)
N	Algoritmo	Comparações	Trocas	Tempo (ms)
100	Merge Sort	540	670	0.004
	Heap Sort	580	610	0.003
	Quick Sort	650	180	0.002
1.000	Merge Sort	8.700	9.900	0.045
	Heap Sort	11.000	10.500	0.052
	Quick Sort	10.200	2.100	0.038
10.000	Merge Sort	120.500	133.000	0.650
	Heap Sort	155.000	148.000	0.720
	Quick Sort	145.000	31.000	0.510

5. O que eu achei dos resultados
Quick Sort

Foi o mais rápido e o que fez menos trocas. Dá pra ver claramente que ele escala melhor.
Mas também foi o mais chato de programar, principalmente a parte de dividir o vetor.

Merge Sort

Funciona bem, mas usa muita memória porque vive criando vetor auxiliar.
Me deu muita dor de cabeça na parte da recursão e dos ponteiros.

Heap Sort

Funciona, mas é o mais lento dos três nos testes.
Nada absurdo, mas perde pro Quick e para o Merge.

 Conclusão

O Quick Sort foi o melhor algoritmo nos testes que fiz.
O que me surpreendeu foi ele fazer tão poucas trocas, isso ajuda no tempo.

