------------------------------------------------------------------------------------------------------
<h1>Defini��o</h1>

Grafos
	- � um modelo matem�tico que representa rela��es entre objetos
	- Utilizados na defini��o e/ou resolu��o de problemas de diversas �reas

Em computa��o
	- � uma forma de solucionar problemas comput�veis.
	- Buscam o desenvolvimento de algoritmos mais eficientes.

Exemplos
	- Qual a melhor rota da minha casa at� um restaurante?
	- Duas pessoas tem algum amigo em comum?

<img src="1.PNG"/>


Grafos
	- � definido como um conjunto de v�rtices e um conjunto de areastas que conectam qualquer par de v�rtices.
	- G = (V, A)
		- V � o conjunto de v�rtices (n�o vazio)
		- A � o conjunto de arestas

<img src="2.PNG"/>


V�rtice
	- � cada uma das entidades representadas em um grafo.
	- Depende da natureza do problema. Podem ser pessoas, casa, etc.
	- Dois v�rtices s�o ADJACENTES se existir uma aresta ligando eles.

Aresta
	- Tamb�ms chamada de ARCO
	- Est� associada a dois v�rtices (v1, v2)
	- Faz a liga��o entre eles, ou seja, diz qual a rela��o entre eles

-----------------------------------------------------------------------------------------------
<h1>Propriedades</h1>

Dire��o das Arestas
Grafo direcionado ou Digrafo
	- Existe uma orienta��o quanto ao sentido das arestas.
	- Se uma aresta liga A e B, podemos ir de A para B, mas n�o o contr�rio.

Grafo n�o direcionado
	- N�o existe nenhuma orienta��o quanto ao sentido da aresta. Podemos ir de A para B ou de B para A.

<img src="3.PNG"/>


Grau de um v�rtice
	- � o n�mero de arestas que chegam ou partem dele
	- No caso dos digrafos, temos:
		- Grau de Entrada: Arestas que chegam ao v�rtice
		- Grau de Sa�da: Arestas que partem do v�rtice

<img src="4.PNG"/>

La�o
	- Uma aresta � chamada de la�o se seu v�rtice de partida � o mesmo que o de chegada, ou seja, a aresta conecta o v�rtice com ele mesmo (v,v).


<img src="5.PNG"/>


Caminho
	- � uma sequ�ncia de v�rtices de modo que existe sempre uma aresta ligando o v�rtice anterior com o seguinte

Caminho Simples
	- Nenhum dos v�rtices no caminho se repete

Comprimento do caminho
	- � o n�mero de arestas que o caminho usa

<img src="6.PNG"/>


Ciclo
	- � um caminho que come�a e termina no mesmo v�rtice.
	- Um la�o � um ciclo de comprimento 1

Grafo ac�clico
	- N�o cont�m ciclos simples (onde cada v�rtice aparece apenas uma vez cada).

<img src="7.PNG"/>


Arestas M�ltiplas
	- Tamb�m chamado Multigrafo
	- � um grafo que permite mais de uma aresta conectando o mesmo par de v�rtices
	- Neste caso, as arestas s�o ditas paralelas

<img src="8.PNG"/>


-------------------------------------------------------------------------------------------------
<h1>Tipos de Grafos</h1>

Grafo Trivial
	- � um grafo com um �nico v�rtice e sem arestas

Grafo Simples
	- � um grafo n�o direcionado, sem la�os e sem arestas paralelas.

<img src="9.PNG"/>


Grafo Completo <br/>
	- � um grafo simples onde cada v�rtice se conecta a todos os outros v�rtices<br/>

<img src="10.PNG"/>

Grafo Regular<br/>
	- � um grafo onde todos os v�rtices possuem o mesmo grau<br/>

<img src="11.PNG"/>

Subgrafo<br/>
	- Um grafo Gs(Vs, As) � chamado de subgrafo de G(V, A) se:<br/>
		- VS est� contido em V<br/>
		- As est� contido em A<br/>

<img src="12.PNG"/>

Grafo Bipartido
	- � um grafo cujos v�rtices podem ser divididos em dois conjuntos.
	- Nesse caso, as arestas ligam os v�rtices que est�o em conjuntos diferentes, nunca ligando v�rtices do mesmo conjunto.


Grafo Conexo
	- Existe um caminho partindo de qualquer v�rtice at� qualquer outro v�rtice do grafo.

Grafo Desconexo
	- N�o existe um caminho ligando dois v�rtices selecionados.

<img src="13.PNG"/>


Grafos Isomorfos
	- Dois grafos, G1(V1, A1) e G2(V2, A2), s�o ditos isomorfos se existe uma fun��o que fa�a o mapeamento de v�rtices e arestas de modo que os dois grafos se tornem coincidentes.

<img src="14.PNG"/>

Grafo Ponderado
	- � o grafo que possui pesos associados a cada uma de suas arestas.

<img src="15.PNG"/>

Grafo Hamiltoniano
	- � o grafo que possui um caminho que visita cada v�rtice apenas umas vez.
		- Sua detec��o � uma tarefa extremamente �rdua.

	- Um ciclo hamiltoniano � o clico que visita cada v�rtice apenas uma vez.

<img src="16.PNG"/>

Grafo Euleriano
	- � o grafo que possui um ciclo que visita cada aresta apenas uma vez.

<img src="17.PNG"/>


Grafo Semi-Euleriano
	- � o grafo que possui um caminho que visita cada aresta apenas uma vez.

<img src="18.PNG"/>
