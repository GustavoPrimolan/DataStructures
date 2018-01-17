//ENVIA O VETOR, O IN�CIO E O FIM DO VETOR
void quickSort(int *V, int inicio, int fim)
{
	int pivo;
	//SEPARA OS DADOS EM 2 PARTI��ES E CHAMA A FUN��O PARA AS 2 METADES
	if(fim > inicio)
	{
		pivo = particiona(V, inicio, fim);
		//UMA METADE
		quickSort(V, inicio, pivo - 1);
		//OUTRA METADE
		quickSort(V, pivo + 1, fim);
	}
}

int particiona(int *V, int inicio, int final)
{
	int esq, dir, pivo, aux;
	esq = inicio;
	dir = final;
	pivo = V[inicio];

	while(esq < dir)
	{
		//AVAN�A POSI��O DA ESQUERDA
		while(V[esq] <= pivo)
		{
			esq++;
		}

		//RECUA POSI��O DA DIREITA
		while(V[dir] > pivo)
		{
			dir--;
		}

		//TROCA esq E dir
		if(esq < dir)
		{
			aux = V[esq];
			V[esq] = V[dir];
			V[dir] = aux;
		}

	}

	V[inicio] = V[dir];
	V[dir] = pivo;Sim
	return dir;
}
