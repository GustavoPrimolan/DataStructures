<h1>Ordenação</h1>
	- É a tarefa de colocar um conjunto de dados em uma determinada ordem
	- Permite acesso mais eficiente aos dados

Algoritmo de ordenação
	- É o algoritmo que coloca os elementos de uma dada sequência em uma certa ordem.

	Exemplo:
	5, 2, 1, 3, 4 -> FORA DE ORDEM
	1, 2, 3, 4, 5 -> ORDENADO

Tipos de ordenação mais comuns
	- Numérica
		1, 2, 3, 4, 5
	- Lexicográfica (ordem alfabética)
		Ana, André, Bianca, Ricardo

Independente do tipo, ela pode ser
	- Crescente
		1, 2, 3, 4
		Ana, André, Bianca, Ricardo

	- Decrescente
		5, 4, 3, 2, 1 
		Ricardo, Bianca, André, Ana

Classificação dos métodos de ordenação
	- Ordenação Interna
		- O arquivo a ser ordenado cabe todo na memória principal
		- Qualquer registro pode ser imediatamente acessado
	
	- Ordenação externa
		- O arquivo a ser ordenado não cabe na memória principal
		- Os registros são acessados sequencialmente ou em grandes blocos

Métodos de ordenação estudados
	- Básicos O(n^2) geralmente
		- Fácil implementação
		- Auxiliam o entendimento dos algoritmos complexos
	
	- Sofisticados O(n log n)
		- Em geral, melhor desempenho.

<h1>BubbleSort ou Ordenação por Bolha</h1>

Compara pares de elementos adjacentes e os troca de lugar se estiver na ordem errada
Esse processo se repete até que mais nenhuma troca seja necessária (elementos já ordenados)

Performance
	- Melhor Caso: O(n)
	- Pior Caso: O(n^2)
	- Não recomendado para grandes conjuntos de dados

<h1>InsertionSort ou Ordenação por Inserção</h1>
Similar a ordenação de cartas de baralho com as mãos
Pega-se uma carta de cada vez e a coloca em seu devido lugar, sempre deixando as cartas da mão em ordem

Perfomance
	- Melhor Caso: O(N)
	- Pior Caso: O(N^2)
	- Eficiente para conjuntos pequenos de dados
	- Estável: Não altera a ordem de dados iguais
	- Capaz de ordenar os dados a medida em que os recebe (tempo real)

	
