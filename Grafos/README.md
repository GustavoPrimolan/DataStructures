﻿------------------------------------------------------------------------------------------------------
<h1>Definição</h1>

Grafos <br/>
	- É um modelo matemático que representa relações entre objetos<br/>
	- Utilizados na definição e/ou resolução de problemas de diversas áreas<br/>

Em computação<br/>
	- É uma forma de solucionar problemas computáveis.<br/>
	- Buscam o desenvolvimento de algoritmos mais eficientes.<br/>

Exemplos<br/>
	- Qual a melhor rota da minha casa até um restaurante?<br/>
	- Duas pessoas tem algum amigo em comum?<br/>

<img src="1.PNG"/>


Grafos<br/>
	- É definido como um conjunto de vértices e um conjunto de areastas que conectam qualquer par de vértices.<br/>
	- G = (V, A)<br/>
		- V é o conjunto de vértices (não vazio)<br/>
		- A é o conjunto de arestas<br/>

<img src="2.PNG"/>


Vértice<br/>
	- É cada uma das entidades representadas em um grafo.<br/>
	- Depende da natureza do problema. Podem ser pessoas, casa, etc.<br/>
	- Dois vértices são ADJACENTES se existir uma aresta ligando eles.<br/>

Aresta<br/>
	- Tambéms chamada de ARCO<br/>
	- Está associada a dois vértices (v1, v2)<br/>
	- Faz a ligação entre eles, ou seja, diz qual a relação entre eles<br/>

-----------------------------------------------------------------------------------------------
<h1>Propriedades</h1>

Direção das Arestas<br/>
Grafo direcionado ou Digrafo<br/>
	- Existe uma orientação quanto ao sentido das arestas.<br/>
	- Se uma aresta liga A e B, podemos ir de A para B, mas não o contrário.<br/>

Grafo não direcionado<br/>
	- Não existe nenhuma orientação quanto ao sentido da aresta. Podemos ir de A para B ou de B para A.<br/>

<img src="3.PNG"/>


Grau de um vértice<br/>
	- É o número de arestas que chegam ou partem dele<br/>
	- No caso dos digrafos, temos:<br/>
		- Grau de Entrada: Arestas que chegam ao vértice<br/>
		- Grau de Saída: Arestas que partem do vértice<br/>

<img src="4.PNG"/>

Laço<br/>
	- Uma aresta é chamada de laço se seu vértice de partida é o mesmo que o de chegada, ou seja, a aresta conecta o vértice com ele mesmo (v,v).<br/>


<img src="5.PNG"/>


Caminho<br/>
	- É uma sequência de vértices de modo que existe sempre uma aresta ligando o vértice anterior com o seguinte<br/>

Caminho Simples<br/>
	- Nenhum dos vértices no caminho se repete<br/>

Comprimento do caminho<br/>
	- É o número de arestas que o caminho usa<br/>

<img src="6.PNG"/>


Ciclo<br/>
	- É um caminho que começa e termina no mesmo vértice.<br/>
	- Um laço é um ciclo de comprimento 1<br/>

Grafo acíclico<br/>
	- Não contém ciclos simples (onde cada vértice aparece apenas uma vez cada).<br/>

<img src="7.PNG"/>


Arestas Múltiplas
	- Também chamado Multigrafo
	- É um grafo que permite mais de uma aresta conectando o mesmo par de vértices
	- Neste caso, as arestas são ditas paralelas

<img src="8.PNG"/>


-------------------------------------------------------------------------------------------------
<h1>Tipos de Grafos</h1>

Grafo Trivial
	- É um grafo com um único vértice e sem arestas

Grafo Simples
	- É um grafo não direcionado, sem laços e sem arestas paralelas.

<img src="9.PNG"/>


Grafo Completo <br/>
	- É um grafo simples onde cada vértice se conecta a todos os outros vértices<br/>

<img src="10.PNG"/>

Grafo Regular<br/>
	- É um grafo onde todos os vértices possuem o mesmo grau<br/>

<img src="11.PNG"/>

Subgrafo<br/>
	- Um grafo Gs(Vs, As) é chamado de subgrafo de G(V, A) se:<br/>
		- VS está contido em V<br/>
		- As está contido em A<br/>

<img src="12.PNG"/>

Grafo Bipartido<br/>
	- É um grafo cujos vértices podem ser divididos em dois conjuntos.<br/>
	- Nesse caso, as arestas ligam os vértices que estão em conjuntos diferentes, nunca ligando vértices do mesmo conjunto.<br/>


Grafo Conexo<br/>
	- Existe um caminho partindo de qualquer vértice até qualquer outro vértice do grafo.<br/>

Grafo Desconexo<br/>
	- Não existe um caminho ligando dois vértices selecionados.<br/>

<img src="13.PNG"/>


Grafos Isomorfos<br/>
	- Dois grafos, G1(V1, A1) e G2(V2, A2), são ditos isomorfos se existe uma função que faça o mapeamento de vértices e arestas de modo que os dois grafos se tornem coincidentes.<br/>

<img src="14.PNG"/>

Grafo Ponderado<br/>
	- É o grafo que possui pesos associados a cada uma de suas arestas.<br/>

<img src="15.PNG"/>

Grafo Hamiltoniano<br/>
	- É o grafo que possui um caminho que visita cada vértice apenas umas vez.<br/>
		- Sua detecção é uma tarefa extremamente árdua.<br/>

	- Um ciclo hamiltoniano é o clico que visita cada vértice apenas uma vez.<br/>

<img src="16.PNG"/>

Grafo Euleriano<br/>
	- É o grafo que possui um ciclo que visita cada aresta apenas uma vez.<br/>

<img src="17.PNG"/>


Grafo Semi-Euleriano<br/>
	- É o grafo que possui um caminho que visita cada aresta apenas uma vez.<br/>

<img src="18.PNG"/>

-----------------------------------------------------------------------------------
<h1>Representação de Grafos</h1>

Como representar um grafo no computador?<br />

Duas abordagens são muito utilizadas<br />
	- Matriz de Adjacência <br />
	- Lista de Adjacência <br />

Qual é a representação que deve ser utilizada? <br />
	- Depende da aplicação! <br />

<h2>Matriz de Adjacência</h2>
	- Uma matriz NxN é utilizada para armazenar o grafo, onde N é o número de vértices.<br />
	- Alto custo computacional, O(N^2)<br />
	- Uma aresta é representada por uma "marca" na posição (i,j) da matriz<br />
	- Aresta liga o vértice i ao j<br />

<img src="19.PNG"/>
<img src="20.PNG"/>

<h2>Lista de Adjacência</h2>
<img src="21.PNG"/>


Definindo o TAD Grafo usando Lista de Adjacência<br />
<br/>
Grafo.h: Definir<br/>
	- Os protótipos das funções.<br/>
	- O ponteiro "Grafo". <br/>

Grafo.c: Definir<br/>
	- O tipo de dado grafo. Para isso vamos definir a lista de adjacências.<br/>
	- Implementar as suas funções.<br/>

-----------------------------------------------------------------------------------------------------
<h1>Busca em Grafos</h1>
- Consiste em explorar um grafo. <br/>
- Processo sistemático de como caminhar por seus vértices e arestas. <br/>
- Depende do vértice inicial. <br/>
<br/>
<br/>
- Vários problemas em grafos podem ser resolvidos efetuando uma busca.<br/>
- A operação de busca pode precisar visitar todos os vértices. Para outros problemas, apenas um subconjunto dos vértices precisa ser visitado.<br/>

<h2>Principais tipos de busca em grafos</h2>
- Busca em profundidade. <br/>
- Busca em Largura. <br/>
- Busca pelo menor caminho. <br/>
- Existem mais tipos de buscas. <br/>

<h3>Busca em Profundidade</h3>
- Partindo de um vértice inicial, ela explora o máximo possível cada um dos seus ramos antes de retroceder ("backtracking"). <br/>
- Pode ser usado para: <br/>
&nbsp- Encontrar componentes conectados e fortemente conectados. <br/>
&nbsp- Ordenação topológica de um grafo. <br/>
&nbsp- Resolver quebra-cabeças (Ex: Labirinto).<br/>

<img src="22.PNG"/>



<h3>Busca em Largura</h3>
- Partindo de um vértice inicial, ela explora todos os vértices vizinhos. Em seguida, para cada vértice vizinho, ela repete esse processo visitando os vértices ainda inexplorados. <br/>
- Pode ser usado para: <br/>
&nbsp- Achar componentes conectados.<br/>
&nbsp- Achar todos os vértices conectados a apenas um componente.<br/>
&nbsp- Achar o menor caminho entre dois vértices.<br/>
&nbsp- Testar bipartição em grafos.<br/>
<img src="23.PNG"/>


<h3>Busca pelo menor caminho</h3>
- Partindo de um vértice inicial, calcula a menor distÂncia desse vértice a todos os demais (desde que exista um caminho entre eles).<br/>
- Algoritmo de Dijkstra:<br/>
&nbsp-Resolve esse problema para grafos DIRIGIDOS (digrafos) ou NÃO DIRIGIDOS (grafos) com arestas de peso NÃO NEGATIVO. <br/>

<img src="24.PNG"/>





