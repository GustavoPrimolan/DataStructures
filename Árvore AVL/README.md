<h1>Defini��o</h1>
- � um tipo de �rvore bin�ria balanceada.<br/>
- Criada por <strong>A</strong>delson-<strong>V</strong>elskii e <strong>L</strong>andis.
<br/>
<br/>
- Permite rebalanceamento local.<br/>
- Apenas a parte afetada pela inser��o ou remo��o � rebalanceada.<br/>
- Uso de rota��es <strong>simples</strong> ou <strong>duplas</strong> na etapa de rebalanceamento.<br/>

- A �rvore AVL busca manter-se como uma �rvore bin�ria quase completa.<br/>
- Custo de qualquer algoritmo � maximo O(logN).<br/>

<h2>Fator de balanceamento ou fb</h2>
- Diferen�a nas alturas das sub-�rvores esquerda e direita.<br/>
- Se uma das sub-�rvores n�o existir, sua altura ser� -1.<br/>

<img src="imgs/01.PNG"/>

-� usado no balanceamento da �rvore.<br/>
- Numa AVL, <strong>fb</strong> deve ser +1, 0 ou -1.<br/>
- Se fb < -1 ou fb > +1: a �rvore deve ser balanceada.<br/>

<img src="imgs/02.PNG"/>

<img src="imgs/03.PNG"/>




