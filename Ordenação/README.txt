<h1>Ordena��o</h1>
	- � a tarefa de colocar um conjunto de dados em uma determinada ordem
	- Permite acesso mais eficiente aos dados

Algoritmo de ordena��o
	- � o algoritmo que coloca os elementos de uma dada sequ�ncia em uma certa ordem.

	Exemplo:
	5, 2, 1, 3, 4 -> FORA DE ORDEM
	1, 2, 3, 4, 5 -> ORDENADO

Tipos de ordena��o mais comuns
	- Num�rica
		1, 2, 3, 4, 5
	- Lexicogr�fica (ordem alfab�tica)
		Ana, Andr�, Bianca, Ricardo

Independente do tipo, ela pode ser
	- Crescente
		1, 2, 3, 4
		Ana, Andr�, Bianca, Ricardo

	- Decrescente
		5, 4, 3, 2, 1 
		Ricardo, Bianca, Andr�, Ana

Classifica��o dos m�todos de ordena��o
	- Ordena��o Interna
		- O arquivo a ser ordenado cabe todo na mem�ria principal
		- Qualquer registro pode ser imediatamente acessado
	
	- Ordena��o externa
		- O arquivo a ser ordenado n�o cabe na mem�ria principal
		- Os registros s�o acessados sequencialmente ou em grandes blocos

M�todos de ordena��o estudados
	- B�sicos O(n^2) geralmente
		- F�cil implementa��o
		- Auxiliam o entendimento dos algoritmos complexos
	
	- Sofisticados O(n log n)
		- Em geral, melhor desempenho.

<h1>BubbleSort ou Ordena��o por Bolha</h1>

Compara pares de elementos adjacentes e os troca de lugar se estiver na ordem errada
Esse processo se repete at� que mais nenhuma troca seja necess�ria (elementos j� ordenados)

Performance
	- Melhor Caso: O(n)
	- Pior Caso: O(n^2)
	- N�o recomendado para grandes conjuntos de dados

<h1>InsertionSort ou Ordena��o por Inser��o</h1>
Similar a ordena��o de cartas de baralho com as m�os
Pega-se uma carta de cada vez e a coloca em seu devido lugar, sempre deixando as cartas da m�o em ordem

Perfomance
	- Melhor Caso: O(N)
	- Pior Caso: O(N^2)
	- Eficiente para conjuntos pequenos de dados
	- Est�vel: N�o altera a ordem de dados iguais
	- Capaz de ordenar os dados a medida em que os recebe (tempo real)

	
