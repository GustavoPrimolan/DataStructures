------------------------------------------------------------------------------------------------------
<h1>Definição</h1>

Grafos
	- É um modelo matemático que representa relações entre objetos
	- Utilizados na definição e/ou resolução de problemas de diversas áreas

Em computação
	- É uma forma de solucionar problemas computáveis.
	- Buscam o desenvolvimento de algoritmos mais eficientes.

Exemplos
	- Qual a melhor rota da minha casa até um restaurante?
	- Duas pessoas tem algum amigo em comum?

<img src="1.PNG"/>


Grafos
	- É definido como um conjunto de vértices e um conjunto de areastas que conectam qualquer par de vértices.
	- G = (V, A)
		- V é o conjunto de vértices (não vazio)
		- A é o conjunto de arestas

<img src="2.PNG"/>


Vértice
	- É cada uma das entidades representadas em um grafo.
	- Depende da natureza do problema. Podem ser pessoas, casa, etc.
	- Dois vértices são ADJACENTES se existir uma aresta ligando eles.

Aresta
	- Tambéms chamada de ARCO
	- Está associada a dois vértices (v1, v2)
	- Faz a ligação entre eles, ou seja, diz qual a relação entre eles

-----------------------------------------------------------------------------------------------
<h1>Propriedades</h1>

Direção das Arestas
Grafo direcionado ou Digrafo
	- Existe uma orientação quanto ao sentido das arestas.
	- Se uma aresta liga A e B, podemos ir de A para B, mas não o contrário.

Grafo não direcionado
	- Não existe nenhuma orientação quanto ao sentido da aresta. Podemos ir de A para B ou de B para A.

<img src="3.PNG"/>


Grau de um vértice
	- É o número de arestas que chegam ou partem dele
	- No caso dos digrafos, temos:
		- Grau de Entrada: Arestas que chegam ao vértice
		- Grau de Saída: Arestas que partem do vértice

<img src="4.PNG"/>

Laço
	- Uma aresta é chamada de laço se seu vértice de partida é o mesmo que o de chegada, ou seja, a aresta conecta o vértice com ele mesmo (v,v).


<img src="5.PNG"/>


Caminho
	- É uma sequência de vértices de modo que existe sempre uma aresta ligando o vértice anterior com o seguinte

Caminho Simples
	- Nenhum dos vértices no caminho se repete

Comprimento do caminho
	- É o número de arestas que o caminho usa

<img src="6.PNG"/>


Ciclo
	- É um caminho que começa e termina no mesmo vértice.
	- Um laço é um ciclo de comprimento 1

Grafo acíclico
	- Não contém ciclos simples (onde cada vértice aparece apenas uma vez cada).

<img src="7.PNG"/>


Arestas Múltiplas
	- Também chamado Multigrafo
	- É um grafo que permite mais de uma aresta conectando o mesmo par de vértices
	- Neste caso, as arestas são ditas paralelas

<img src="8.PNG"/>
