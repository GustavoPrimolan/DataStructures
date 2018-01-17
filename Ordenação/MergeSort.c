void mergeSort(int *V, int inicio, int fim)
{
	int meio;
	if(inicio < fim)
	{
		meio = floor((inicio + fim) / 2);
		//CHAMA A FUNÇÃO PARA AS DUAS METADES
		mergeSort(V, inicio, meio);
		mergeSort(V, meio + 1, fim);

		//COMBINA AS 2 METADES DE FORMA ORDENADA
		merge(V, inicio, meio, fim);
	}
}

void merge(int *V, int inicio, int meio, int fim)
{
	int *temp, p1, p2, tamanho, i, j, k;
	int fim1 = 0, fim2 = 0;
	tamanho = fim - inicio + 1;
	p1 = inicio;
	p2 = meio + 1;
	temp = (int *) malloc(tamanho * sizeof(int));
	if(temp != NULL)
	{
		for(i = 0; i < tamanho; i++)
		{
			if(!fim1 && !fim2)
			{
				//COMBINAR ORDENANDO
				if(V[p1] < V[p2])
				{
					temp[i] = V[p1++];
				}
				else
				{
					temp[i] = V[p2++];
				}

				//VETOR ACABOU?
				if(p1 > meio)
				{
					fim1 = 1;
				}

				if(p2 > fim)
				{
					fim2 = 1;
				}
			}
			//COPIA O QUE SOBRAR
			else
			{
				if(!fim)
				{
					temp[i] = V[p1++];
				}
				else
				{
					temp[i] = V[p2++];
				}
			}
		}
		//COPIA DO AUXILIAR PARA O ORIGINAL
		for(j = 0, k = inicio; j < tamanho; j++, k++)
		{
			V[k] = temp[j];
		}
	}
	free(temp);
}
