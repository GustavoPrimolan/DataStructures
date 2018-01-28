#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 100
//STRUCT PARA GERENCIAR OS BUFFERS
struct arquivo{
	FILE *f;
	int pos, MAX, *buffer;
};

int procuraMenor(struct arquivo* arq, int numArqs, int K, int* menor){
	int i, idx = -1;
	
	//PROCURA MENOR VALOR NA PRIMEIRA POSIÇÃO DE CADA BUFFER
	for(i=0; i < numArqs; i++){
		if(arq[i].pos < arq[i].MAX){
			if(idx == -1)
				idx = i;
			else {
				if(arq[i].buffer[arq[i].pos] < arq[idx].buffer[arq[idx].pos])
					idx = i;
			}
		}
	}
	
	//ACHOU MENOR. ATUALIZA POSIÇÃO DO BUFFER. ENCHER SE ESTIVER VAZIO
	if(idx != -1){
		*menor = arq[idx].buffer[arq[idx].pos];
		arq[idx].pos++;
		if(arq[idx].pos == arq[idx].MAX)
			preencheBuffer(&arq[idx], K);
		return 1;
	}else{
		return 0;
	}
	
}

void preencheBuffer(struct arquivo* arq, int K){
	int i;
	//VERIFICA SE O ARQUIVO É NULO
	if(arq->f == NULL)
		return;
	
	arq->pos = 0;
	arq->MAX = 0;
	
	//LÊ K POSIÇÃO DOS VALORES
	for(i=0; i<K; i++){
		//TEM DADOS NO ARQUIVO. LÊ E COLOCA NO BUFFER
		if(!feof(arq->f)){
			fscanf(arq->f, "%d", &arq->buffer[arq->MAX]);
			arq->MAX++;
		
		//ACABOU OS DADOS. FECHA O ARQUIVO.
		}else{
			fclose(arq->f);
			arq->f = NULL;
			break;
		}
	}
}

void merge(char *nome, int numArqs, int K){
	char novo[20];
	int i;
	int *buffer = (int*)malloc(K*sizeof(int));
	
	struct arquivo* arq;
	arq = (struct arquivo*)malloc(numArqs * sizeof(struct arquivo));
	
	for(i = 0; i < numArqs; i++){
		sprintf(novo, "Temp%d.txt", i+1);
		arq[i].f = fopen(novo, "r");
		arq[i].MAX = 0;
		arq[i].pos = 0;
		arq[i].buffer = (int*)malloc(K*sizeof(int));
		preencherBuffer(&arq[i], K);
	}
	
	//ENQUANTO HOUVER ARQUIVOS PARA PROCESSAR
	int menor, qtdBuffer = 0;
	//EXISTE MENOR ELEMENTO? COLOCA NO BUFFER DE SAÍDA. SALVAR SE BUFFER CHEIO
	while(procuraMenor(arq, numArqs, K, &menor) == 1){
		buffer[qtdBuffer] = menor;
		qtdBuffer++;
		if(qtdBuffer == K){
			salvaArquivo
		}
	}
	
	//SALVA DADOS AINDA NO BUFFER
	//SOBRARAM DADOS NO BUFFER? SALVAR UM ARQUIVO
	if(qtdBuffer != 0)
		salvaArquivo(nome, buffer, qtdBuffer, 1);
	
	for(i=0; i<numArqs; i++)
		free(arq[i].buffer);
	
	free(arq);
	free(buffer);
	
}

void criaArquivoTeste(char *nome){
	int i;
	FILE *f = fopen(nome, "w");
	srand(time(NULL));
	for(i=1; i < 1000; i++)
			fprintf(f, "%d\n", rand());
	
	fprintf(f, "%d", rand());
	fclose(f);	
}

void mergeSortExterno(char *nome){
	char novo[20];
	int numArqs = criaArquivosOrdenados(nome);
	//CADA BUFFER VAI TER TAMANHO K
	int i, K = N / (numArqs + 1);
	
	remove(nome);
	//ORDENAR O ARQUIVO ORDENADO NO NUMARQUIVOS
	merge(nome, numArqs, K);
	
	for(i = 0; i < numArqs; i++){
		sprintf(novo, "Temp%d.txt", i+1);
		remove(novo);
	}
}

void salvaArquivo(char *nome, int *V, int tam, int mudaLinhaFinal){
	int i;
	FILE *f = fopen(nome,"a");
	for(i = 0; i < tam-1; i++)
		fprintf(f, "%d\n",V[i]);
	
	//CONTROLA A MUDANÇA DE LINHA NO FINAL DO ARQUIVO
	if(mudaLinhaFinal == 0)
		fprintf(f, "%d", V[tam-1]);
	else
		fprintf(f,"%d\n", V[tam-1]);	
	
	fclose(f);
	
}

int criaArquivosOrdenados(char *nome){
	int V[N], cont = 0, total = 0;
	char novo[20];
	FILE *f = fopen(nome, "r");
	while(!feof(f)){
		fscanf(f, "%d", &V[total]);
		total++;
		//BUFFER CHEIO: Salva em Disco
		if(total == N){
			cont++;
			sprintf(novo, "Temp%d.txt", cont);
			qsort(V, total, sizeof(int), compara);
			salvaArquivo(novo, V, total, 0);
			total = 0;
		}
	}
	
	//SOBRARAM DADOS NO BUFFER: SALVA EM DISCO
	if(total > 0){
		cont++;
		sprintf(novo, "Temp%d.txt", cont);
		qsort(V, total, sizeof(int), compara);
		salvaArquivo(novo, V, total, 0);
	}
	
	fclose(f);
	return cont;
}


int main(){
	criaArquivoTeste("Dados.txt");
	mergeSortExterno("Dados.txt");

	system("pause");
	return 0;
}