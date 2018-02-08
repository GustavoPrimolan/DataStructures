<h1>Árvores</h1>
- São um tipo especial de grafo. <br/>
- Qualquer par de vértices esta coenctado a apenas uma aresta.<br/>
- Grafo conexo (Existe exatamente um caminho entre quaisquer dois de seus vértices) e acíclico (não possui ciclos).<br/>

<img src="01.PNG"/>

<h2>Árvores</h2>
- Como são um tipo especial de "grafo", elas são definidas como um conjunto não vazio de "vértices" (ou "nós") e "arestas" que satisfazem os requisitos.<br/>

<h2>Vértices</h2>
- É cada uma das entidades representadas na árvore (Depende da natureza do problema).<br/>

<h2>Arestas</h2>
- É uma conexão entre dois "vértices".<br/>
<img src="02.PNG"/>


<h2>Aplicações</h2>
- Árvores são adequadas para representar estruturas hierárquicas não lineares.<br/>

<h3>Exemplos</h3>
- Relações de descendência (pai, filho, etc).<br/>
- Diagrama Hierárquico de uma organização. <br/>
- Campeonatos de modalidades desportivas. <br/>
- Taxonomia.<br/>

<h3>Em computação</h3>
- Estrutura de Diretórios (Pastas).<br/>
- Busca de Dados armazenados no computador. <br/>
- Representação de espaço de soluções. <br/>
(Ex: Jogo de Xadrez).<br/>
- Modelagem de Algoritmos.<br/>

<h1>Formas de Representação</h1>
- Grafo (Mais Comum).<br/>
- Diagrama de Venn (Conjuntos Aninhados).<br/>

<img src="03.PNG"/>

- Existem vários tipos de árvores em computação, desenvolvidas para diferentes tipos de aplicação.<br/>
- Árvore Binária de Busca. <br/>
- Árvore AVL. <br/>
- Árvore Rubro-Negra. <br/>
- Árvore B+. <br/>
- Árvore 2-3. <br/>
- Árvore 2-3-4. <br/>
- Quadtree. <br/>
- Octree. <br/>
- ETC. <br/>


------------------------------------------------------------------------------------------------------
<h1>Propriedades</h1>
- Pai: é o antecessor imediato de um vértice.<br/>
- Filho: É o sucessor imediato de um vértice.<br/>
- Raiz: É o vértice que não possui pai.<br/>
- Nós terminais ou folhas: Qualquer vértice que não possui filhos.<br/>
- Nós não-terminais ou internos: Qualquer vértice que possui pelo menos 1 filho.<br/>

<img src="04.PNG"/>
<br/>

<h2>Caminho em uma árvore</h2>
- É uma seuqência de vértices de modo que existe sempre uma aresta ligando o vértice anterior com o seguinte.<br/>
- Existe exatamente um caminho entre a raiz e cada um dos nós da árvore.<br/>

<h2>Sub-árvores</h2>
- Dado um determinado vértice, cada filho seu é a raiz de uma nova sub-árvore.<br/>
- De fato, qualquer vértice é a raiz de uma sub-árvore consistindo dele e dos nós abaixo dele.<br/>

<h2>Grau de um Vértice</h2>
- É o número de sub-árvores do vértice.

<h2>Altura da Árvore</h2>
- Também chamada de profundidade.<br/>
- É o comprimento do caminho mais longo da raiz até uma das suas folhas.<br/>

<h2>Níveis</h2>
- Numa árvore, os vértices são classificados em níveis.<br/>
- O nível é o número de nós no caminho entre o vértice e a raiz.<br/>
<img src="05.PNG"/>


--------------------------------------------------------------------------------
<h1>Árvore Binária: Definição</h1>
- É um tipo especial de árvore.<br/>
- Cada vértice pode possuir duas sub-árvore: sub-árvore esquerda e sub-árvore direita.<br/>
- O grau de cada vértice (número de filhos) pode ser 0, 1 ou 2.<br/>
<img src="06.PNG"/>

<h2>Árvore Estritamente Binária</h2>
- Cada nó (vértice) possui 0 ou 2 sub-árvores.<br/>
- Nenhum nó tem filho único.<br/>
- Nós internos (não folhas) sempre tem 2 filhos.<br/>

<h2>Árvore Binária Completa</h2>
- É ESTRITAMENTE BINÁRIA e todos os seus nós-folha estão no mesmo nível.<br/>
- O número de nós de uma árvore binária completa é de 2^h-1, ounde h é a altura da árvore.<br/>

<h2>Árvore Binária Quase Completa</h2>
- A diferença de altura entre as sub-árvores de qualquer nó é o máximo 1.<br/>
- Se a altura da árvore é D, cada nó folha está no nível D ou D-1.<br/>

-----------------------------------------------------------------------------------
<h1>Implementando uma Árvore Binária</h1>
Em uma Árvore Binária podemos realizar as seguintes operações:<br/>
- Criação da Árvore.<br/>
- Inserção de um elemento.<br/>
- Remoção de um elemento. <br/>
- Acesso a um elemento. <br/>
- Destruição da Árvore.<br/>
<br/>
Essas operações dependem do tipo de alocação de memória usada:<br/>
- Estática (Heap).<br/>
- Dinâmica (Lista Encadeada).<br/>

<h2>Alocação Estática (HEAP)</h2>
- Uso de um array. <br/>
- Usa 2 funções para retornar a posição dos filhos à esquerda e à direita de um pai. <br/>
FILHO_ESQ(PAI) = 2 * PAI + 1;<br/>
FILHO_DIR(PAI) = 2 * PAI + 2; <br/>

<img src="07.PNG"/>

<h2>Alocação Dinâmica (Lista Encadeada)</h2>
- Cada nó da árvore é tratado como um ponteiro alocado dinamicamente a medida que os dados são inseridos. <br/>

<img src="08.PNG"/>

<h2>Implementando uma Árvore Binária com Alocação Dinâmica (Lista Encadeada)</h2>
- Para guardar o primeiro nó da árvore utilizamos um ponteiro para ponteiro. <br/>
- Um ponteiro para ponteiro pode guardar o endereço de um ponteiro. <br/>
- Assim, fica fácil mudar quem é a raiz da árvore (se necessário).<br/>

<img src="09.PNG"/>

<br/>

Implementando uma Árvore Binária
ArvoreBinaria.h: Definir:<br/>
- Os protótipos das funções. <br/>
- O tipo de dado armazenado na árvore. <br/>
- O ponteiro árvore.<br/>

ArvoreBinaria.c: Definir:<br/>
- O tipo de dado árvore.<br/>
- Implementar as suas funções.<br/>


--------------------------------------------------------------------------------------
<h1>Criando e Destruindo uma Árvore Binária</h1>
- Criação da árvore: Ato de criar a raiz da árvore. A raiz é um tipo de nó especial que aponta para o primeiro elemento da árvore.<br/>
<br/>
- Destruição da árvore: Envolve percorrer todos os nós da árvore de modo a liberar a memória alocada para cada um deles.<br/>

-----------------------------------------------------------------------------------------
<h1>Algumas informações básicas sobre a árvore</h1>
- Está vazia? <br/>
- Número de nós? <br/>
- Altura da árvore? <br/>
<img src="10.PNG" alt="Altura das Árvores"/>


------------------------------------------------------------------------------------------
<h1>Percorrendo uma Árvore Binária</h1>
- Muitas operações em árvores binárias necessitam que se percorra todas os nós de suas sub-árvores, executando alguma ação ou tratamento em cada nó. <br/>
<br/>
- Cada nó é visitado uma única vez.<br/>
- Isso gera uma sequência linear de nós, cuja ordem depende de como a árvore foi percorrida.<br/>
<br/>

- Podemos percorrer a árvore de 3 formas<br/>
(Essas são as mais importantes, existem outras)<br/>
<h2>Pré-Ordem</h2>
- Visita a raiz, o filho da esquerda e o filho da direita.<br/>

<h2>Em-Ordem</h2>
- Visita o filho da esquerda, a raiz e o filho da direita.<br/>

<h2>Pós-Ordem</h2>
- Visita o filho da esquerda, o filho da direita e a raiz.<br/>

<img src="11.PNG"/>

------------------------------------------------------------------------------------------------------------
<h1>Árvore Binária de Busca</h1>
- É um tipo de árvore binária onde cada nó possui um valor (chave) associado a ele, e esse valor determina a posição do nó na árvore.<br/>
<br/>
- Não existem valores repetidos.<br/>

<h2>Posicionamento dos valores</h2>
- Para cada nó pai:<br/>
- Todos os valores da sub-árvore esquerda são menores do que o nó pai.<br/>
- Todos os valores da sub-árvore direita são maiores do que o nó pai. <br/>
<br/><br/>
- A inserção e remoção de nós da árvore deve ser realizadas respeitando a propriedade da árvore.
<br/>
Aplicações:<br/>
- Busca Binária.<br/>
- Análise de expressões algébricas: prefixa, infixa, e pósfixa.<br/>
<h2>Principais Operações</h2>
Inserção:<br/>
- Caso médio O(log n)<br/>
- Pior caso O(n) (Árvore não balanceada).<br/>
<br/>
Remoção:<br/>
- Caso Médio O(log n)<br/>
- Pior caso O(n) (Árvore não balanceada).<br/>
<br/>
Consulta:<br/>
- Caso médio O(log n).<br/>
- Pior caso O(n) (Árvore não balanceada).<br/>


-----------------------------------------------------------------------------------------
<h1>Inserção em Árvore Binária de Busca</h1>
Para inserir um valor V na árvore binária de busca:<br/>
- Primeiro compare com a raiz.<br/>
- V é menor do que a raiz:<br/>
Vá para a sub-arvore esquerda.
<br/>
<br/>
- V é maior do que a raiz:<br/>
Vá para a sub-árvore direita.<br/>
<br/>
- Aplique o método recursivamente (pode ser feito sem recursão).<br/>
<br/>
Támbem existe o caso onde a isnerção é feita em uma árvore binária que está vazia.

<img src="12.PNG"/>

-----------------------------------------------------------------------------------------
<h1>Remoção em Árvore Binária de Busca</h1>
Existem 3 tipos de remoção: <br/>
- nó folha (sem filhos)<br/>
- nó com 1 filho <br/>
- nó com 2 filhos <br/>
<br/>
<br/>
Os 3 tipos de remoção trabalham juntos. A remoção sempre remove um elemento específico da árvore, o qual pode ser um nó folha, ter um ou dois filhos.
<br/>
Cuidado:<br/>
- Não se pode remover de uma árvore vazia.<br/>
- Removendo o último nó, a árvore fica vazia.<br/>

-------------------------------------------------------------------------------------
<h1>Consulta em Árvore Binária de Busca</h1>

Para pesquisar um valor V na árvore binária de busca:
- Primeiro compare com a raiz<br/>
- V é menor do que a raiz:<br/>
Vá para a sub-árvore esquerda
<br/><br/>
- V é maior do que a raiz:<br/>
Vá para a sub-árvore direita.<br/>
<br/>
- Aplique o método recursivamente (pode ser feito sem recursão)<br/><br/>

--------------------------------------------------------------------------------------
<h1>Árvores Balanceadas</h1>
- É uma árvore binária onde as alturas das sub-árvores esquerda e direita de cada nó diferem de no máxima uma unidade.<br/>
<br/>
- Essa diferença é chamado de <strong>fator de balanceamento</strong> do nó.<br/><br/>

<img src="13.PNG"/>

- A eficiência da busca em uma árvore binária depende do seu balanceamento.<br/>
<br/>
<h2>Problema</h2>
- Algoritmos de inserção e remoção não garantem que a árvore gerada a cada passo seja balanceada.<br/>
- Sequência de inserções em ordem de escada.<br/>
<br/>
- Custo da inserção, busca e remoção em uma árvore binária:<br/>
- Balanceada: O(logN)<br/>
- Não balanceada: O(N)<br/>

- N corresponde ao número de nós na árvore.<br/>

<img src="14.PNG"/>

- Solução para o problema de balanceamento?<br/>
- Modificar as operações de inserção e remoção da árvore.<br/>

<h2>Exemplos de árvore balanceadas</h2>
- Árvore AVL.<br/>
- Árvore 2-3-4.<br/>
- Árvore Red-Black (também conhecida como vermelho-preto ou rubro-negra).<br/>



