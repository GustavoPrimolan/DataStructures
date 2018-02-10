<h1>Definição</h1>
- É um tipo de árvore binária balanceada.<br/>
- Criada por <strong>A</strong>delson-<strong>V</strong>elskii e <strong>L</strong>andis.
<br/>
<br/>
- Permite rebalanceamento local.<br/>
- Apenas a parte afetada pela inserção ou remoção é rebalanceada.<br/>
- Uso de rotações <strong>simples</strong> ou <strong>duplas</strong> na etapa de rebalanceamento.<br/>

- A árvore AVL busca manter-se como uma árvore binária quase completa.<br/>
- Custo de qualquer algoritmo é maximo O(logN).<br/>

<h2>Fator de balanceamento ou fb</h2>
- Diferença nas alturas das sub-árvores esquerda e direita.<br/>
- Se uma das sub-árvores não existir, sua altura será -1.<br/>

<img src="imgs/01.PNG"/>

-É usado no balanceamento da árvore.<br/>
- Numa AVL, <strong>fb</strong> deve ser +1, 0 ou -1.<br/>
- Se fb < -1 ou fb > +1: a árvore deve ser balanceada.<br/>

<img src="imgs/02.PNG"/>

<img src="imgs/03.PNG"/>




