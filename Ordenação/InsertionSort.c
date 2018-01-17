//RECEBE O VETOR E O TAMANHO DO VETOR
//MOVE AS CARTAS MAIORES PARA A FRENTE
void insertionSort(int *V, int N)
{
	int i, j, aux;

	for(i = 1; i < N; i++)
	{
		aux = V[i];
		//DESLOCA TODO MUNDO MAIOR PARA A FRENTE E INSERE NA POSIÇÃO QUE FICOU VAGA
		for(j = i; (j > 0) && (aux < V[j - 1]); j--)
		{
			V[j] = V[j - 1];
		}
		V[j] = aux;
	}
}
