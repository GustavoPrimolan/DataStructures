------------------------------------------------------------------------------------------------------
<h1>Ordenação</h1>
	- É a tarefa de colocar um conjunto de dados em uma determinada ordem<br/>
	- Permite acesso mais eficiente aos dados<br/>

Algoritmo de ordenação<br/>
	- É o algoritmo que coloca os elementos de uma dada sequência em uma certa ordem.<br/>

	Exemplo:<br/>
	5, 2, 1, 3, 4 -> FORA DE ORDEM<br/>
	1, 2, 3, 4, 5 -> ORDENADO<br/>

Tipos de ordenação mais comuns<br/>
	- Numérica<br/>
		1, 2, 3, 4, 5<br/>
	- Lexicográfica (ordem alfabética)<br/>
		Ana, André, Bianca, Ricardo<br/>
<br/>
Independente do tipo, ela pode ser<br/>
	- Crescente<br/>
		1, 2, 3, 4<br/>
		Ana, André, Bianca, Ricardo<br/>
<br/>
	- Decrescente<br/>
		5, 4, 3, 2, 1 <br/>
		Ricardo, Bianca, André, Ana<br/>

Classificação dos métodos de ordenação<br/>
	- Ordenação Interna<br/>
		- O arquivo a ser ordenado cabe todo na memória principal<br/>
		- Qualquer registro pode ser imediatamente acessado<br/>
	
	- Ordenação externa<br/>
		- O arquivo a ser ordenado não cabe na memória principal<br/>
		- Os registros são acessados sequencialmente ou em grandes blocos<br/>

Métodos de ordenação estudados<br/>
	- Básicos O(n^2) geralmente<br/>
		- Fácil implementação<br/>
		- Auxiliam o entendimento dos algoritmos complexos<br/>
	<br/>
	- Sofisticados O(n log n)<br/>
		- Em geral, melhor desempenho.<br/>
<br/>
------------------------------------------------------------------------------------------------------
<h1>BubbleSort ou Ordenação por Bolha</h1>

Compara pares de elementos adjacentes e os troca de lugar se estiver na ordem errada<br/>
Esse processo se repete até que mais nenhuma troca seja necessária (elementos já ordenados)<br/>

Performance<br/>
	- Melhor Caso: O(n)<br/>
	- Pior Caso: O(n^2)<br/>
	- Não recomendado para grandes conjuntos de dados<br/>
<br/>
<img src="BubbleSort.PNG"/><br/>

------------------------------------------------------------------------------------------------------
<h1>InsertionSort ou Ordenação por Inserção</h1>
Similar a ordenação de cartas de baralho com as mãos<br/>
Pega-se uma carta de cada vez e a coloca em seu devido lugar, sempre deixando as cartas da mão em ordem<br/>

Perfomance<br/>
	- Melhor Caso: O(N)<br/>
	- Pior Caso: O(N^2)<br/>
	- Eficiente para conjuntos pequenos de dados<br/>
	- Estável: Não altera a ordem de dados iguais<br/>
	- Capaz de ordenar os dados a medida em que os recebe (tempo real)<br/>

<img src="InsertionSort.PNG"/>

------------------------------------------------------------------------------------------------------
<h1>SelectionSort ou Ordenação por Seleção</h1>

A cada passo, procura o menor valor do array e o coloca na primeira posição do array<br/>
Descarta-se a primeira posição do array e repete-se o processo para a segunda posição<br/>
Isso é feito para todas as posições do array<br/>

Performance<br/>
	- Melhor Caso: O(N^2)<br/>
	- Pior Caso: O(N^2)<br/>
	- Ineficiente para grandes conjuntos de dados<br/>
	- Não é estável, pode ser estável com algumas modificações: não altera a ordem de dados iguais<br/>

<img src="SelectionSort.PNG"/>

------------------------------------------------------------------------------------------------------
<h1>MergeSort ou Ordenação por Mistura</h1>

Ideia básica: Dividir e Conquistar<br/>
Divide, recursivamente, o conjunto de dados até que cada subconjunto possua 1 elemento<br/>
Combina 2 subconjuntos de forma a obter 1 conjunto maior e ordenado<br/>
Esse processo se repete até que exista apenas 1 conjunto<br/>

Performance<br/>
	- Melhor Caso: O(N log N)<br/>
	- Pior Caso: O(N log N)<br/>
	- Estável: Não altera a ordem de dados iguais<br/>
	- Desvantagem: Recursivo e usa um veotr auxiliar durante a ordenação<br/>

<img src="MergeSort01.PNG"/>
<img src="MergeSort02.PNG"/>
------------------------------------------------------------------------------------------------------
<h1>QuickSort ou Ordenação por Troca de Partições</h1>

Ideia básica: Dividir e Consquistar.<br/>
Um elemento é escolhido como pivô.<br/>
Particionar: Os dados são rearranjados (valores menores do que o pivô são colocados antes dele e os maiores, depois).<br/>
Recursivamente ordena as 2 partições.<br/>

Performance<br/>
	- Melhor Caso: O(N log N)<br/>
	- Pior Caso (raro): O(N^2)<br/>
	- Não Estável, mas pode ser com algumas modificações: Não altera a ordem de dados iguais<br/>
	- Desvantagens: Como escolher o pivô?<br/>

<img src="QuickSort01.PNG"/>
<img src="QuickSort02.PNG"/>
--------------------------------------------------------------------------------------------------------
<h1>HeapSort ou Ordenação usando heap</h1>
Heap: Vetor que simula uma arvore binária completa (exceção do último nível)<br/>
Todo elemento pai do vetor possui dois elementos como filhos<br/>
pai (i) -> filhos: (2*i+1) e (2*i+2)<br/>

<img src="HeapSort01.PNG"/>
<img src="HeapSort02.PNG"/>
<img src="HeapSort03.PNG"/>
<img src="HeapSort04.PNG"/>
<img src="HeapSort05.PNG"/>

----------------------------------------------------------------------------------------------------------
<h1>Ordenação em Vetor de Struct</h1>

As vezes é necessário ordenar dados além de numéricos, como por exemplo, textos.<br/>

---------------------------------------------------------------------------------------------------------
<h1>Usando a função qsort()</h1>

Quicksort<br/>
	- Algoritmo rápido de ordenação<br/>
	- Complexidade N log N<br/>
	- Implementado na bibliboteca stdlib.h<br/>

Protótipo<br/>
	void qsort(void *base, size_t num, size_t size, int(*compar) (const void*, const void*));<br/>

Parâmetros<br/>
	- Base: Endereço do array a ser ordenado<br/>
	- Num: Tamanho do array<br/>
	- size: tamanho, em bytes, de cada posição do array<br/>
	- compar: ponteiro para a função de comparação<br/>
	
	- size_t é apenas um inteiro sem sinal<br/>

Função de comparação<br/>
	- Função que define como dois valores (p1 e p2) do array serão ser comparados.<br/>
	- Deve seguir o seguinte protótipo<br/>

int compar (const void* p1, const void* p2);<br/>

Retorno da função<br/>
	- Valor menor do que 0: p1 vem antes de p2<br/>
	- Valor igual a 0: p1 é igual a p2<br/>
	- Valor maior do que 0: p1 vem depois de p2<br/>

----------------------------------------------------------------------------------------------
<h1>Ordenação Externa</h1>

- Consiste em ordenar conjuntos de dados maiores do que a memória interna disponível.<br/>
- Ordenação deve ser feita em arquivos. <br/>
- Os algoritmos devem minizar o número de acesso às unidades de memórida externa.<br/>

Diferença em relação a ordenação interna<br/>
	- Custo de acesso a memória secundária é muito maior.<br/>
	- Transferência de dados entre a memória interna e externa.<br/>
	- Acesso sequencial aos dados (acesso direto é muito caro).<br/>

MergeSort Externo<br/>
	- Método mais importante de ordenação externa.<br/>
	- Intercalação: Combina dois ou mais blocos ordenados em um único bloco, maior, ordenado.<br/>
<br/>
MergeSort Externo: Funcionamento
	- RAM comporta N registros de dados.<br/>
	- Carregar parte do arquivo na RAM.<br/>
	- Ordenar os dados na RAM com um algoritmo.<br/>
	in-place (Ex: QuickSort)
	- Salvar os dados ordenados em um arquivo separado.<br/>
	- Repetir os anteriores até terminar o arquivo original.<br/>
	- Ao final, temos "K" arquivos ordenados.<br/>
	- "Multi-Way Merging"<br/>
		- Criar "K+1" buffers de tamanho "N/(K+1)"<br/>
		- ("1" de saída, "K" de entrada)<br/>
		- Carregar parte dos arquivos ordenados nos BUFFERS DE ENTRADA, intercalar no BUFFER DE SAÍDA.<br/>
		- BUFFER DE ENTRADA vazio: Carregar mais dados.<br/>
		- BUFFER DE SAÍDA cheio: Salvar Dados.<br/>

<img src="OrdenacaoExterna.PNG"/>
		

