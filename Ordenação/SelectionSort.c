
void selectionSort(int *V, int N)
{
	int i, j, menor, troca;

	for(i = 0; i < N - 1; i++)
	{
		menor = i;
		
		//PROCURA O MENOR ELEMENTO EM RELA��O A i
		for(j = i + 1; j < N; j++)
		{
			if(V[j] < V[menor])
			{
				menor = j;
			}
		}

		//TROCA OS VALORES DA POSI��O ATUAL COM A "MENOR"
		if(i != menor)
		{
			troca = V[i];
			V[i] = V[menor];
			V[menor] = troca;
		}
	}
}
