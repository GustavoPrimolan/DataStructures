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
