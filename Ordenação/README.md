------------------------------------------------------------------------------------------------------
<h1>Ordena��o</h1>
	- � a tarefa de colocar um conjunto de dados em uma determinada ordem<br/>
	- Permite acesso mais eficiente aos dados<br/>

Algoritmo de ordena��o<br/>
	- � o algoritmo que coloca os elementos de uma dada sequ�ncia em uma certa ordem.<br/>

	Exemplo:<br/>
	5, 2, 1, 3, 4 -> FORA DE ORDEM<br/>
	1, 2, 3, 4, 5 -> ORDENADO<br/>

Tipos de ordena��o mais comuns<br/>
	- Num�rica<br/>
		1, 2, 3, 4, 5<br/>
	- Lexicogr�fica (ordem alfab�tica)<br/>
		Ana, Andr�, Bianca, Ricardo<br/>
<br/>
Independente do tipo, ela pode ser<br/>
	- Crescente<br/>
		1, 2, 3, 4<br/>
		Ana, Andr�, Bianca, Ricardo<br/>
<br/>
	- Decrescente<br/>
		5, 4, 3, 2, 1 <br/>
		Ricardo, Bianca, Andr�, Ana<br/>

Classifica��o dos m�todos de ordena��o<br/>
	- Ordena��o Interna<br/>
		- O arquivo a ser ordenado cabe todo na mem�ria principal<br/>
		- Qualquer registro pode ser imediatamente acessado<br/>
	
	- Ordena��o externa<br/>
		- O arquivo a ser ordenado n�o cabe na mem�ria principal<br/>
		- Os registros s�o acessados sequencialmente ou em grandes blocos<br/>

M�todos de ordena��o estudados<br/>
	- B�sicos O(n^2) geralmente<br/>
		- F�cil implementa��o<br/>
		- Auxiliam o entendimento dos algoritmos complexos<br/>
	<br/>
	- Sofisticados O(n log n)<br/>
		- Em geral, melhor desempenho.<br/>
<br/>
------------------------------------------------------------------------------------------------------
<h1>BubbleSort ou Ordena��o por Bolha</h1>

Compara pares de elementos adjacentes e os troca de lugar se estiver na ordem errada<br/>
Esse processo se repete at� que mais nenhuma troca seja necess�ria (elementos j� ordenados)<br/>

Performance<br/>
	- Melhor Caso: O(n)<br/>
	- Pior Caso: O(n^2)<br/>
	- N�o recomendado para grandes conjuntos de dados<br/>
<br/>
<img src="BubbleSort.PNG"/><br/>

------------------------------------------------------------------------------------------------------
<h1>InsertionSort ou Ordena��o por Inser��o</h1>
Similar a ordena��o de cartas de baralho com as m�os<br/>
Pega-se uma carta de cada vez e a coloca em seu devido lugar, sempre deixando as cartas da m�o em ordem<br/>

Perfomance<br/>
	- Melhor Caso: O(N)<br/>
	- Pior Caso: O(N^2)<br/>
	- Eficiente para conjuntos pequenos de dados<br/>
	- Est�vel: N�o altera a ordem de dados iguais<br/>
	- Capaz de ordenar os dados a medida em que os recebe (tempo real)<br/>

<img src="InsertionSort.PNG"/>

------------------------------------------------------------------------------------------------------
<h1>SelectionSort ou Ordena��o por Sele��o</h1>

A cada passo, procura o menor valor do array e o coloca na primeira posi��o do array<br/>
Descarta-se a primeira posi��o do array e repete-se o processo para a segunda posi��o<br/>
Isso � feito para todas as posi��es do array<br/>

Performance<br/>
	- Melhor Caso: O(N^2)<br/>
	- Pior Caso: O(N^2)<br/>
	- Ineficiente para grandes conjuntos de dados<br/>
	- N�o � est�vel, pode ser est�vel com algumas modifica��es: n�o altera a ordem de dados iguais<br/>

<img src="SelectionSort.PNG"/>

------------------------------------------------------------------------------------------------------
<h1>MergeSort ou Ordena��o por Mistura</h1>

Ideia b�sica: Dividir e Conquistar<br/>
Divide, recursivamente, o conjunto de dados at� que cada subconjunto possua 1 elemento<br/>
Combina 2 subconjuntos de forma a obter 1 conjunto maior e ordenado<br/>
Esse processo se repete at� que exista apenas 1 conjunto<br/>

Performance<br/>
	- Melhor Caso: O(N log N)<br/>
	- Pior Caso: O(N log N)<br/>
	- Est�vel: N�o altera a ordem de dados iguais<br/>
	- Desvantagem: Recursivo e usa um veotr auxiliar durante a ordena��o<br/>

<img src="MergeSort01.PNG"/>
<img src="MergeSort02.PNG"/>
------------------------------------------------------------------------------------------------------
<h1>QuickSort ou Ordena��o por Troca de Parti��es</h1>

Ideia b�sica: Dividir e Consquistar.<br/>
Um elemento � escolhido como piv�.<br/>
Particionar: Os dados s�o rearranjados (valores menores do que o piv� s�o colocados antes dele e os maiores, depois).<br/>
Recursivamente ordena as 2 parti��es.<br/>

Performance<br/>
	- Melhor Caso: O(N log N)<br/>
	- Pior Caso (raro): O(N^2)<br/>
	- N�o Est�vel, mas pode ser com algumas modifica��es: N�o altera a ordem de dados iguais<br/>
	- Desvantagens: Como escolher o piv�?<br/>

<img src="QuickSort01.PNG"/>
<img src="QuickSort02.PNG"/>
--------------------------------------------------------------------------------------------------------
<h1>HeapSort ou Ordena��o usando heap</h1>
Heap: Vetor que simula uma arvore bin�ria completa (exce��o do �ltimo n�vel)<br/>
Todo elemento pai do vetor possui dois elementos como filhos<br/>
pai (i) -> filhos: (2*i+1) e (2*i+2)<br/>

<img src="HeapSort01.PNG"/>
<img src="HeapSort02.PNG"/>
<img src="HeapSort03.PNG"/>
<img src="HeapSort04.PNG"/>
<img src="HeapSort05.PNG"/>

----------------------------------------------------------------------------------------------------------
<h1>Ordena��o em Vetor de Struct</h1>

As vezes � necess�rio ordenar dados al�m de num�ricos, como por exemplo, textos.<br/>

---------------------------------------------------------------------------------------------------------
<h1>Usando a fun��o qsort()</h1>

Quicksort<br/>
	- Algoritmo r�pido de ordena��o<br/>
	- Complexidade N log N<br/>
	- Implementado na bibliboteca stdlib.h<br/>

Prot�tipo<br/>
	void qsort(void *base, size_t num, size_t size, int(*compar) (const void*, const void*));<br/>

Par�metros<br/>
	- Base: Endere�o do array a ser ordenado<br/>
	- Num: Tamanho do array<br/>
	- size: tamanho, em bytes, de cada posi��o do array<br/>
	- compar: ponteiro para a fun��o de compara��o<br/>
	
	- size_t � apenas um inteiro sem sinal<br/>

Fun��o de compara��o<br/>
	- Fun��o que define como dois valores (p1 e p2) do array ser�o ser comparados.<br/>
	- Deve seguir o seguinte prot�tipo<br/>

int compar (const void* p1, const void* p2);<br/>

Retorno da fun��o<br/>
	- Valor menor do que 0: p1 vem antes de p2<br/>
	- Valor igual a 0: p1 � igual a p2<br/>
	- Valor maior do que 0: p1 vem depois de p2<br/>

----------------------------------------------------------------------------------------------
<h1>Ordena��o Externa</h1>

- Consiste em ordenar conjuntos de dados maiores do que a mem�ria interna dispon�vel.<br/>
- Ordena��o deve ser feita em arquivos. <br/>
- Os algoritmos devem minizar o n�mero de acesso �s unidades de mem�rida externa.<br/>

Diferen�a em rela��o a ordena��o interna<br/>
	- Custo de acesso a mem�ria secund�ria � muito maior.<br/>
	- Transfer�ncia de dados entre a mem�ria interna e externa.<br/>
	- Acesso sequencial aos dados (acesso direto � muito caro).<br/>

MergeSort Externo<br/>
	- M�todo mais importante de ordena��o externa.<br/>
	- Intercala��o: Combina dois ou mais blocos ordenados em um �nico bloco, maior, ordenado.<br/>
<br/>
MergeSort Externo: Funcionamento
	- RAM comporta N registros de dados.<br/>
	- Carregar parte do arquivo na RAM.<br/>
	- Ordenar os dados na RAM com um algoritmo.<br/>
	in-place (Ex: QuickSort)
	- Salvar os dados ordenados em um arquivo separado.<br/>
	- Repetir os anteriores at� terminar o arquivo original.<br/>
	- Ao final, temos "K" arquivos ordenados.<br/>
	- "Multi-Way Merging"<br/>
		- Criar "K+1" buffers de tamanho "N/(K+1)"<br/>
		- ("1" de sa�da, "K" de entrada)<br/>
		- Carregar parte dos arquivos ordenados nos BUFFERS DE ENTRADA, intercalar no BUFFER DE SA�DA.<br/>
		- BUFFER DE ENTRADA vazio: Carregar mais dados.<br/>
		- BUFFER DE SA�DA cheio: Salvar Dados.<br/>

<img src="OrdenacaoExterna.PNG"/>
		

