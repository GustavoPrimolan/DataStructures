#include <stdio.h>
#include <stdlib.h>
#include "Grafo.h"


int main(int argc, char** argv)
{
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
	
	
	system("pause");
	return 0;
}
