#include <stdio.h>
#include <stdlib.h>
#include "Grafo.h"


int main(int argc, char** argv)
{
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
	
	
	system("pause");
	return 0;
}
