#include <stdio.h>
#include <stdlib.h>
#include "Grafo.c"


int main(int argc, char** argv)
{
	/*
	Grafo *gr;	
	//10 VÉRTICES, 7 ARESTAS EM CADA VÉRTICE NO MÁXIMO E ELE NAO É PONDERADO
	gr = cria_Grafo(10, 7, 0);
	
	//PASSA O GRAFO COMO PARÂMETRO, LIGA O VÉRTICE 0 AO VÉRTICE 1, SE É DIGRAFO E O VALOR DO PESO
	insereAresta(gr, 0, 1, 0, 0);
	
	//PASSA O GRAFO COMO PARÂMETRO, LIGA O VÉRTICE 1 AO VÉRTICE 3, SE É DIGRAFO E O VALOR DO PESO	
	insereAresta(gr, 1, 3, 0, 0);
	
	//ARESTA, ORIGEM, DESTINO E SE É DIGRAFO
	removeAresta(gr, 0, 1, 0);
	
	//LIBERA O GRAFO APENAS PASSANDO O GRAFO COMO PARÂMETRO
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
	
	//GRAFO, VÉRTICE INICIAL E OS VISITADOS
	//buscaProfundidade_Grafo(gr, 0, vis);
	
	//PASSA O GRAFO, VÉRTICE INICIAL E OS VISITADOS
	buscaLargura_Grafo(gr, 0, vis);
	
	int i = 0;
	for(i=0; i< 5; i++)
		printf("%d ", vis[i]);
	
	libera_Grafo(gr);
	
	
	
	
	system("pause");
	return 0;
}
