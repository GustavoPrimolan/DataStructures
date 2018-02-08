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

-----------------------------------------------------------------------------------
<h1>Implementando uma �rvore Bin�ria</h1>
Em uma �rvore Bin�ria podemos realizar as seguintes opera��es:<br/>
- Cria��o da �rvore.<br/>
- Inser��o de um elemento.<br/>
- Remo��o de um elemento. <br/>
- Acesso a um elemento. <br/>
- Destrui��o da �rvore.<br/>
<br/>
Essas opera��es dependem do tipo de aloca��o de mem�ria usada:<br/>
- Est�tica (Heap).<br/>
- Din�mica (Lista Encadeada).<br/>

<h2>Aloca��o Est�tica (HEAP)</h2>
- Uso de um array. <br/>
- Usa 2 fun��es para retornar a posi��o dos filhos � esquerda e � direita de um pai. <br/>
FILHO_ESQ(PAI) = 2 * PAI + 1;<br/>
FILHO_DIR(PAI) = 2 * PAI + 2; <br/>

<img src="07.PNG"/>

<h2>Aloca��o Din�mica (Lista Encadeada)</h2>
- Cada n� da �rvore � tratado como um ponteiro alocado dinamicamente a medida que os dados s�o inseridos. <br/>

<img src="08.PNG"/>

<h2>Implementando uma �rvore Bin�ria com Aloca��o Din�mica (Lista Encadeada)</h2>
- Para guardar o primeiro n� da �rvore utilizamos um ponteiro para ponteiro. <br/>
- Um ponteiro para ponteiro pode guardar o endere�o de um ponteiro. <br/>
- Assim, fica f�cil mudar quem � a raiz da �rvore (se necess�rio).<br/>

<img src="09.PNG"/>

<br/>

Implementando uma �rvore Bin�ria
ArvoreBinaria.h: Definir:<br/>
- Os prot�tipos das fun��es. <br/>
- O tipo de dado armazenado na �rvore. <br/>
- O ponteiro �rvore.<br/>

ArvoreBinaria.c: Definir:<br/>
- O tipo de dado �rvore.<br/>
- Implementar as suas fun��es.<br/>


--------------------------------------------------------------------------------------
<h1>Criando e Destruindo uma �rvore Bin�ria</h1>
- Cria��o da �rvore: Ato de criar a raiz da �rvore. A raiz � um tipo de n� especial que aponta para o primeiro elemento da �rvore.<br/>
<br/>
- Destrui��o da �rvore: Envolve percorrer todos os n�s da �rvore de modo a liberar a mem�ria alocada para cada um deles.<br/>

-----------------------------------------------------------------------------------------
<h1>Algumas informa��es b�sicas sobre a �rvore</h1>
- Est� vazia? <br/>
- N�mero de n�s? <br/>
- Altura da �rvore? <br/>
<img src="10.PNG" alt="Altura das �rvores"/>


------------------------------------------------------------------------------------------
<h1>Percorrendo uma �rvore Bin�ria</h1>
- Muitas opera��es em �rvores bin�rias necessitam que se percorra todas os n�s de suas sub-�rvores, executando alguma a��o ou tratamento em cada n�. <br/>
<br/>
- Cada n� � visitado uma �nica vez.<br/>
- Isso gera uma sequ�ncia linear de n�s, cuja ordem depende de como a �rvore foi percorrida.<br/>
<br/>

- Podemos percorrer a �rvore de 3 formas<br/>
(Essas s�o as mais importantes, existem outras)<br/>
<h2>Pr�-Ordem</h2>
- Visita a raiz, o filho da esquerda e o filho da direita.<br/>

<h2>Em-Ordem</h2>
- Visita o filho da esquerda, a raiz e o filho da direita.<br/>

<h2>P�s-Ordem</h2>
- Visita o filho da esquerda, o filho da direita e a raiz.<br/>

<img src="11.PNG"/>

------------------------------------------------------------------------------------------------------------
<h1>�rvore Bin�ria de Busca</h1>
- � um tipo de �rvore bin�ria onde cada n� possui um valor (chave) associado a ele, e esse valor determina a posi��o do n� na �rvore.<br/>
<br/>
- N�o existem valores repetidos.<br/>

<h2>Posicionamento dos valores</h2>
- Para cada n� pai:<br/>
- Todos os valores da sub-�rvore esquerda s�o menores do que o n� pai.<br/>
- Todos os valores da sub-�rvore direita s�o maiores do que o n� pai. <br/>
<br/><br/>
- A inser��o e remo��o de n�s da �rvore deve ser realizadas respeitando a propriedade da �rvore.
<br/>
Aplica��es:<br/>
- Busca Bin�ria.<br/>
- An�lise de express�es alg�bricas: prefixa, infixa, e p�sfixa.<br/>
<h2>Principais Opera��es</h2>
Inser��o:<br/>
- Caso m�dio O(log n)<br/>
- Pior caso O(n) (�rvore n�o balanceada).<br/>
<br/>
Remo��o:<br/>
- Caso M�dio O(log n)<br/>
- Pior caso O(n) (�rvore n�o balanceada).<br/>
<br/>
Consulta:<br/>
- Caso m�dio O(log n).<br/>
- Pior caso O(n) (�rvore n�o balanceada).<br/>


-----------------------------------------------------------------------------------------
<h1>Inser��o em �rvore Bin�ria de Busca</h1>
Para inserir um valor V na �rvore bin�ria de busca:<br/>
- Primeiro compare com a raiz.<br/>
- V � menor do que a raiz:<br/>
V� para a sub-arvore esquerda.
<br/>
<br/>
- V � maior do que a raiz:<br/>
V� para a sub-�rvore direita.<br/>
<br/>
- Aplique o m�todo recursivamente (pode ser feito sem recurs�o).<br/>
<br/>
T�mbem existe o caso onde a isner��o � feita em uma �rvore bin�ria que est� vazia.

<img src="12.PNG"/>

-----------------------------------------------------------------------------------------
<h1>Remo��o em �rvore Bin�ria de Busca</h1>
Existem 3 tipos de remo��o: <br/>
- n� folha (sem filhos)<br/>
- n� com 1 filho <br/>
- n� com 2 filhos <br/>
<br/>
<br/>
Os 3 tipos de remo��o trabalham juntos. A remo��o sempre remove um elemento espec�fico da �rvore, o qual pode ser um n� folha, ter um ou dois filhos.
<br/>
Cuidado:<br/>
- N�o se pode remover de uma �rvore vazia.<br/>
- Removendo o �ltimo n�, a �rvore fica vazia.<br/>

-------------------------------------------------------------------------------------
<h1>Consulta em �rvore Bin�ria de Busca</h1>

Para pesquisar um valor V na �rvore bin�ria de busca:
- Primeiro compare com a raiz<br/>
- V � menor do que a raiz:<br/>
V� para a sub-�rvore esquerda
<br/><br/>
- V � maior do que a raiz:<br/>
V� para a sub-�rvore direita.<br/>
<br/>
- Aplique o m�todo recursivamente (pode ser feito sem recurs�o)<br/><br/>

--------------------------------------------------------------------------------------
<h1>�rvores Balanceadas</h1>
- � uma �rvore bin�ria onde as alturas das sub-�rvores esquerda e direita de cada n� diferem de no m�xima uma unidade.<br/>
<br/>
- Essa diferen�a � chamado de <strong>fator de balanceamento</strong> do n�.<br/><br/>

<img src="13.PNG"/>

- A efici�ncia da busca em uma �rvore bin�ria depende do seu balanceamento.<br/>
<br/>
<h2>Problema</h2>
- Algoritmos de inser��o e remo��o n�o garantem que a �rvore gerada a cada passo seja balanceada.<br/>
- Sequ�ncia de inser��es em ordem de escada.<br/>
<br/>
- Custo da inser��o, busca e remo��o em uma �rvore bin�ria:<br/>
- Balanceada: O(logN)<br/>
- N�o balanceada: O(N)<br/>

- N corresponde ao n�mero de n�s na �rvore.<br/>

<img src="14.PNG"/>

- Solu��o para o problema de balanceamento?<br/>
- Modificar as opera��es de inser��o e remo��o da �rvore.<br/>

<h2>Exemplos de �rvore balanceadas</h2>
- �rvore AVL.<br/>
- �rvore 2-3-4.<br/>
- �rvore Red-Black (tamb�m conhecida como vermelho-preto ou rubro-negra).<br/>



