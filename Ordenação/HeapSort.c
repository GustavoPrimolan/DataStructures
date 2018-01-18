void heapSort(int *vet, int N)
{
	int i, aux;
	//CRIA HEAP A PARTIR DOS DADOS
	for(i = (N - 1) / 2; i >= 0 ; i--)
	{
		criaHeap(vet, i, N - 1);
	}

	for(i = N - 1; i >= 1; i--)
	{
		//PEGAR O MAIRO ELEMENTO DA HEAP E COLOCAR NA SUA POSIÇÃO CORRESPONDENTE DO ARRAY
		aux = vet[0];
		vet[0] = vet[i];
		vet[i] = aux;
		//RECONSTRUIR HEAP
		criaHep(vet, 0, i - 1);
	}
}


void criaHeap(int *vet, int i, int f)
{
	int aux = vet[i];
	int j = i * 2 + 1;
	while (j <= f)
	{
		//PAI TEM 2 FILHOS? QUEM É O MAIOR?
		if(j < f)
		{
			if(vet[j] < vet[j + 1])
			{
				j = j + 1;
			}
		}
		
		//FILHO MAIOR QUE O PAI? FILHO SE TORNA O PAI! REPETIR O PROCESSO
		if(aux < vet[j])
		{
			vet[i] = vet[j];
			i = j;
			j = 2 * i + 1;
		}
		else
		{
			j = f + 1;
		}
	}
	//ANTIGO PAI OCUPA LUGAR DO ÚLTIMO FILHO ANALISADO
	vet[i] = aux;
}
