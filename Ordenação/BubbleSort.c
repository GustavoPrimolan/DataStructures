//VETOR E TAMANHO DO VETOR
//FIM RECEBE O FINAL DO VETOR
//SEMPRE COMPARA 2 A 2 OS ELEMENTOS DO VETOR
void bubbleSort(int *V, int N){
	int i, continua, aux, fim = N;
	
	do{
		continua = 0;
		//AT� A PENULTIMA POSI��O DO VETOR		
		for(i = 0; i < fim-1; i++){
			if(V[i] > V[i+1]){
				aux = V[i];
				V[i] = V[i + 1];
				V[i+1] = aux;
				continua = i;
			}
		}
		fim--;
	}while(continua != 0)
}