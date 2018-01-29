<h1>�rvores</h1>
- S�o um tipo especial de grafo. <br/>
- Qualquer par de v�rtices esta coenctado a apenas uma aresta.<br/>
- Grafo conexo (Existe exatamente um caminho entre quaisquer dois de seus v�rtices) e ac�clico (n�o possui ciclos).<br/>

<img src="01.PNG"/>

<h2>�rvores</h2>
- Como s�o um tipo especial de "grafo", elas s�o definidas como um conjunto n�o vazio de "v�rtices" (ou "n�s") e "arestas" que satisfazem os requisitos.<br/>

<h2>V�rtices</h2>
- � cada uma das entidades representadas na �rvore (Depende da natureza do problema).<br/>

<h2>Arestas</h2>
- � uma conex�o entre dois "v�rtices".<br/>
<img src="02.PNG"/>


<h2>Aplica��es</h2>
- �rvores s�o adequadas para representar estruturas hier�rquicas n�o lineares.<br/>

<h3>Exemplos</h3>
- Rela��es de descend�ncia (pai, filho, etc).<br/>
- Diagrama Hier�rquico de uma organiza��o. <br/>
- Campeonatos de modalidades desportivas. <br/>
- Taxonomia.<br/>

<h3>Em computa��o</h3>
- Estrutura de Diret�rios (Pastas).<br/>
- Busca de Dados armazenados no computador. <br/>
- Representa��o de espa�o de solu��es. <br/>
(Ex: Jogo de Xadrez).<br/>
- Modelagem de Algoritmos.<br/>

<h1>Formas de Representa��o</h1>
- Grafo (Mais Comum).<br/>
- Diagrama de Venn (Conjuntos Aninhados).<br/>

<img src="03.PNG"/>

- Existem v�rios tipos de �rvores em computa��o, desenvolvidas para diferentes tipos de aplica��o.<br/>
- �rvore Bin�ria de Busca. <br/>
- �rvore AVL. <br/>
- �rvore Rubro-Negra. <br/>
- �rvore B+. <br/>
- �rvore 2-3. <br/>
- �rvore 2-3-4. <br/>
- Quadtree. <br/>
- Octree. <br/>
- ETC. <br/>


------------------------------------------------------------------------------------------------------
<h1>Propriedades</h1>
- Pai: � o antecessor imediato de um v�rtice.<br/>
- Filho: � o sucessor imediato de um v�rtice.<br/>
- Raiz: � o v�rtice que n�o possui pai.<br/>
- N�s terminais ou folhas: Qualquer v�rtice que n�o possui filhos.<br/>
- N�s n�o-terminais ou internos: Qualquer v�rtice que possui pelo menos 1 filho.<br/>

<img src="04.PNG"/>
<br/>

<h2>Caminho em uma �rvore</h2>
- � uma seuq�ncia de v�rtices de modo que existe sempre uma aresta ligando o v�rtice anterior com o seguinte.<br/>
- Existe exatamente um caminho entre a raiz e cada um dos n�s da �rvore.<br/>

<h2>Sub-�rvores</h2>
- Dado um determinado v�rtice, cada filho seu � a raiz de uma nova sub-�rvore.<br/>
- De fato, qualquer v�rtice � a raiz de uma sub-�rvore consistindo dele e dos n�s abaixo dele.<br/>

<h2>Grau de um V�rtice</h2>
- � o n�mero de sub-�rvores do v�rtice.

<h2>Altura da �rvore</h2>
- Tamb�m chamada de profundidade.<br/>
- � o comprimento do caminho mais longo da raiz at� uma das suas folhas.<br/>

<h2>N�veis</h2>
- Numa �rvore, os v�rtices s�o classificados em n�veis.<br/>
- O n�vel � o n�mero de n�s no caminho entre o v�rtice e a raiz.<br/>
<img src="05.PNG"/>


--------------------------------------------------------------------------------
<h1>�rvore Bin�ria: Defini��o</h1>
- � um tipo especial de �rvore.<br/>
- Cada v�rtice pode possuir duas sub-�rvore: sub-�rvore esquerda e sub-�rvore direita.<br/>
- O grau de cada v�rtice (n�mero de filhos) pode ser 0, 1 ou 2.<br/>
<img src="06.PNG"/>

<h2>�rvore Estritamente Bin�ria</h2>
- Cada n� (v�rtice) possui 0 ou 2 sub-�rvores.<br/>
- Nenhum n� tem filho �nico.<br/>
- N�s internos (n�o folhas) sempre tem 2 filhos.<br/>

<h2>�rvore Bin�ria Completa</h2>
- � ESTRITAMENTE BIN�RIA e todos os seus n�s-folha est�o no mesmo n�vel.<br/>
- O n�mero de n�s de uma �rvore bin�ria completa � de 2^h-1, ounde h � a altura da �rvore.<br/>

<h2>�rvore Bin�ria Quase Completa</h2>
- A diferen�a de altura entre as sub-�rvores de qualquer n� � o m�ximo 1.<br/>
- Se a altura da �rvore � D, cada n� folha est� no n�vel D ou D-1.<br/>
