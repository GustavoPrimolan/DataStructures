------------------------------------------------------------------------------------------------------
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

------------------------------------------------------------------------------------------------------
<h1>BubbleSort ou Ordena��o por Bolha</h1>

Compara pares de elementos adjacentes e os troca de lugar se estiver na ordem errada
Esse processo se repete at� que mais nenhuma troca seja necess�ria (elementos j� ordenados)

Performance
	- Melhor Caso: O(n)
	- Pior Caso: O(n^2)
	- N�o recomendado para grandes conjuntos de dados

------------------------------------------------------------------------------------------------------
<h1>InsertionSort ou Ordena��o por Inser��o</h1>
Similar a ordena��o de cartas de baralho com as m�os
Pega-se uma carta de cada vez e a coloca em seu devido lugar, sempre deixando as cartas da m�o em ordem

Perfomance
	- Melhor Caso: O(N)
	- Pior Caso: O(N^2)
	- Eficiente para conjuntos pequenos de dados
	- Est�vel: N�o altera a ordem de dados iguais
	- Capaz de ordenar os dados a medida em que os recebe (tempo real)

------------------------------------------------------------------------------------------------------
<h1>SelectionSort ou Ordena��o por Sele��o</h1>

A cada passo, procura o menor valor do array e o coloca na primeira posi��o do array
Descarta-se a primeira posi��o do array e repete-se o processo para a segunda posi��o
Isso � feito para todas as posi��es do array

Performance
	- Melhor Caso: O(N^2)
	- Pior Caso: O(N^2)
	- Ineficiente para grandes conjuntos de dados
	- N�o � est�vel, pode ser est�vel com algumas modifica��es: n�o altera a ordem de dados iguais

------------------------------------------------------------------------------------------------------
<h1>MergeSort ou Ordena��o por Mistura</h1>

Ideia b�sica: Dividir e Conquistar
Divide, recursivamente, o conjunto de dados at� que cada subconjunto possua 1 elemento
Combina 2 subconjuntos de forma a obter 1 conjunto maior e ordenado
Esse processo se repete at� que exista apenas 1 conjunto

Performance
	- Melhor Caso: O(N log N)
	- Pior Caso: O(N log N)
	- Est�vel: N�o altera a ordem de dados iguais
	- Desvantagem: Recursivo e usa um veotr auxiliar durante a ordena��o

------------------------------------------------------------------------------------------------------
<h1>QuickSort ou Ordena��o por Troca de Parti��es</h1>

Ideia b�sica: Dividir e Consquistar.
Um elemento � escolhido como piv�.
Particionar: Os dados s�o rearranjados (valores menores do que o piv� s�o colocados antes dele e os maiores, depois).
Recursivamente ordena as 2 parti��es.

Performance
	- Melhor Caso: O(N log N)
	- Pior Caso (raro): O(N^2)
	- N�o Est�vel, mas pode ser com algumas modifica��es: N�o altera a ordem de dados iguais
	- Desvantagens: Como escolher o piv�?

--------------------------------------------------------------------------------------------------------
<h1>HeapSort ou Ordena��o usando heap</h1>
Heap: Vetor que simula uma arvore bin�ria completa (exce��o do �ltimo n�vel)
Todo elemento pai do vetor possui dois elementos como filhos
pai (i) -> filhos: (2*i+1) e (2*i+2)


