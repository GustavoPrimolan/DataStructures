#include <stdio.h>
#include <stdlib.h>
#include "Grafo.c"


int main(int argc, char** argv)
{
	/*
	Grafo *gr;	
	//10 V�RTICES, 7 ARESTAS EM CADA V�RTICE NO M�XIMO E ELE NAO � PONDERADO
	gr = cria_Grafo(10, 7, 0);
	
	//PASSA O GRAFO COMO PAR�METRO, LIGA O V�RTICE 0 AO V�RTICE 1, SE � DIGRAFO E O VALOR DO PESO
	insereAresta(gr, 0, 1, 0, 0);
	
	//PASSA O GRAFO COMO PAR�METRO, LIGA O V�RTICE 1 AO V�RTICE 3, SE � DIGRAFO E O VALOR DO PESO	
	insereAresta(gr, 1, 3, 0, 0);
	
	//ARESTA, ORIGEM, DESTINO E SE � DIGRAFO
	removeAresta(gr, 0, 1, 0);
	
	//LIBERA O GRAFO APENAS PASSANDO O GRAFO COMO PAR�METRO
	libera_Grafo(gr);
	*/
	
	int eh_digrafo = 1;
	Grafo* gr = cria_Grafo(5, 5, 0);
	insereAresta(gr, 0, 1, eh_digrafo, 0);
	insereAresta(gr, 1, 3, eh_digrafo, 0);
	insereAresta(gr, 1, 2, eh_digrafo, 0);
	insereAresta(gr, 2, 4, eh_digrafo, 0);
	insereAresta(gr, 3, 0, eh_digrafo, 0);
	insereAresta(gr, 3, 4, eh_digrafo, 0);
	insereAresta(gr, 4, 1, eh_digrafo, 0);
	
	int vis[5];
	
	//GRAFO, V�RTICE INICIAL E OS VISITADOS
	//buscaProfundidade_Grafo(gr, 0, vis);
	
	//PASSA O GRAFO, V�RTICE INICIAL E OS VISITADOS
	buscaLargura_Grafo(gr, 0, vis);
	
	int i = 0;
	for(i=0; i< 5; i++)
		printf("%d ", vis[i]);
	
	libera_Grafo(gr);
	
	
	
	
	system("pause");
	return 0;
}
