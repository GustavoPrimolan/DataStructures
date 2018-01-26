#include <stdio.h>
#include <stdlib.h>
#include "Grafo.h"

//DEFINIÇÃO TIPO GRAFO
struct grafo
{
	int eh_ponderado;
	int nro_vertices;
	int grau_max;
	int** arestas;
	float** pesos;
	int* grau;
};


//CRIA O GRAFO
Grafo* cria_Grafo(int nro_vertices, int grau_max, int eh_ponderado)
{

	Grafo *gr = (Grafo*) malloc(sizeof(struct grafo));
	if(gr != NULL)
	{
		int i;

		//GUARDANDO O NÚEMRO DE VÉRTICES
		gr->nro_vertices = nro_vertices;

		//GUARDANDO O VALOR MÁXIMO DO GRÁU DE CADA VÉRTICES
		gr->grau_max = grau_max;

		//ARMAZENANDO SE O GRAFO É PONDERADO OU NÃO ATRAVÉS DE UM OPERADOR TERNÁRIO
		gr->eh_ponderado = (eh_ponderado != 0) ? 1 : 0;

		//CRIO O VETOR GRAU
		//CALLOC PQ ENTRA ZERADO, NEM UMA ARESTA
		gr->grau = (int*)calloc(nro_vertices, sizeof(int));

		//MATRIZ ARESTAS
		//ALOCANDO AS ARESTAS
		gr->arestas = (int**)malloc(nro_vertices * sizeof(int*));
		for(i = 0; i < nro_vertices; i++)
		{
			gr->arestas[i] = (int*)malloc(grau_max * sizeof(int));
		}


		//MATRIZ PESOS
		//SE O GRAFO FOI PONDERADO, ESTÁ SENDO ALOCADO A MATRIZ DE PESOS
		if(gr->eh_ponderado)
		{
			gr->pesos = (float**)malloc(nro_vertices * sizeof(float*));
			for(i = 0; i < nro_vertices; i++)
			{
				gr->pesos[i] = (float*) malloc(grau_max * sizeof(float));
			}
		}

	}

	return gr;
}



//LIBERA O GRAFO
void libera_Grafo(Grafo* gr)
{
	if(gr != NULL)
	{
		int i;

		//LIBERA MATRIZ DE ARESTAS
		for(i = 0; i < gr->nro_vertices; i++)
		{
			free(gr->arestas[i]);
		}
		//POR FIM ELIMINA O VETOR DOS VÉRTICES
		free(gr->arestas);

		//SE FOR PONDERADO A MESMA COISA
		//LIBERA A MATRIZ DE PESOS
		if(gr->eh_ponderado)
		{
			for(i = 0; i < gr->nro_vertices; i++)
			{
				free(gr->pesos[i]);
			}
			free(gr->pesos);
		}

		free(gr->grau);
		free(gr);
	}
}


int insereAresta(Grafo* gr, int orig, int dest, int eh_digrafo, float peso)
{
	if(gr == NULL)
		return 0;

	//VERIFICA SE VÉRTICE EXISTE
	if(orig < 0 || orig >= gr->nro_vertices)
		return 0;

	if(dest < 0 || dest >= gr->nro_vertices)
		return 0;

	//INSERE NO FINAL DA LISTA
	gr->arestas[orig][gr->grau[orig]] = dest;
	if(gr->eh_ponderado)
		gr->pesos[orig][gr->grau[orig]] = peso;
	gr->grau[orig]++;

	//INSERE OUTRA ARESTA SE NÃO DIAGRAFO
	if(eh_digrafo == 0)
		insereAresta(gr, dest, orig, 1, peso); //DESTINO PARA A ORIGEM E VIRA DIGRAFO

	return 1;

}


int removeAresta(Grafo* gr, int orig, int dest, int eh_digrafo)
{
	if(gr == NULL)
		return 0;
	//VERIFICA SE VÉRTICE EXISTE
	if(orig < 0 || orig >= gr->nro_vertices)
		return 0;
	//VERIFICA SE VÉRTICE EXISTE
	if(dest < 0 || dest >= gr->nro_vertices)
		return 0;

	//PROCURA ARESTA
	int i = 0;
	while(i < gr->grau[orig] && gr->arestas[orig][i] != dest)
		i++;

	//ELEMENTO NÃO ENCONTRADO
	if(i == gr->grau[orig])
		return 0;

	//COPIA O ÚLTIMO PARA A POSIÇÃO DO REMOVIDO
	gr->grau[orig]--;
	gr->arestas[orig][i] = gr->arestas[orig][gr->grau[orig]];
	if(gr->eh_ponderado)
		gr->pesos[orig][i] = gr->pesos[orig][gr->grau[orig]];

	//REMOVE OUTRA ARESTA SE NÃO FOR DIGRAFO
	if(eh_digrafo == 0)
		removeAresta(gr, dest, orig, 1);

	return 1;
}


//FUNÇÃO AUXILIAR: REALIZA O CÁLCULO
void buscaProfundidade(Grafo *gr, int ini, int *visitado, int cont)
{
	int i;

	//MARCA O VÉRTICE COMO VISITADO. VISITA OS VIZINHOS AINDA NÃO VISITADOS
	visitado[ini] = cont;
	for(i = 0; i < gr->grau[ini]; i++)
	{
		if(!visitado[gr->arestas[ini][i]])
			buscaProfundidade(gr, gr->arestas[ini][i], visitado, cont + 1);
	}
}

//FUNÇÃO PRINCIPAL: FAZ A INTERFACE COM O USUÁRIO
void buscaProfundidade_Grafo(Grafo *gr, int ini, int *visitado)
{
	int i, cont = 1;
	//MARCA VÉRTICES COMO NÃO VISITADOS
	for(i = 0; i < gr->nro_vertices; i++)
	{
		visitado[i] = 0;
	}
	buscaProfundidade(gr, ini, visitado, cont);
}



void buscaLargura_Grafo(Grafo *gr, int ini, int *visitado)
{
	int i, vert, NV, cont = 1, *fila, IF = 0, FF = 0;

	//MARCA VÉRTICES COMO NÃO VISITADOS PARA NÃO DEIXAR PARA O USUÁRIO
	//NUNCA DEIXAR PARA O USUÁRIO
	for(i = 0; i < gr->nro_vertices; i++)
		visitado[i] = 0;

	//CRIA FILA.
	//VISITA E INSERE "ini" NA FILA
	NV = gr->nro_vertices;
	fila = (int*) malloc(NV * sizeof(int));
	FF++;
	fila[FF] = ini;
	visitado[ini] = cont;

	while(IF != FF)
	{
		//PEGA PRIMEIRO DA FILA
		IF = (IF + 1) % NV;
		vert = fila[IF];
		cont++;
		//VISITA OS VIZINHOS AINDA NÃO VISITADOS E COLOCA NA FILA
		for(i = 0; i < gr->grau[vert]; i++)
		{
			if(!visitado[gr->arestas[vert][i]])
			{
				FF = (FF + 1) % NV;
				fila[FF] = gr->arestas[vert][i];
				visitado[gr->arestas[vert][i]] = cont;
			}
		}
	}

	free(fila);
}



int procuraMenorDistancia(float *dist, int *visitado, int NV)
{
	int i, menor = -1, primeiro = 1;

	for(i = 0; i < NV; i++)
	{
		if(dist[i] >= 0 && visitado[i] == 0)
		{

			//PROCURA VÉRTICE COM MENOR DISTÂNCIA E QUE NÃO TENHA SIDO VISITADO
			if(primeiro)
			{
				menor = i;
				primeiro = 0;

			}
			else
			{
				if(dist[menor] > dist[i])
					menor = i;
			}
		}
	}

	return menor;
}

void menorCaminho_Grafo(Grafo *gr, int ini, int *ant, float *dist)
{
	int i, cont, NV, ind, *visitado, u;

	cont = NV = gr->nro_vertices;

	//CRIA VETOR AUXILIAR.
	//INICIALIZA DISTÂNCIAS E ANTERIORES
	visitado = (int*) malloc(NV * sizeof(int));
	for(i = 0; i < NV; i++)
	{
		ant[i] = -1;
		dist[i] = -1;
		visitado[i] = 0;
	}

	dist[ini] = 0;

	//PROCURA VÉRTICE COM MENOR DISTÂNCIA E MARCA COMO VISITADO
	while(cont > 0)
	{
		u = procuraMenorDistancia(dist, visitado, NV);
		if(u == -1)
			break;

		visitado[u] = 1;
		cont--;

		//PARA CADA VÉRTICE VIZINHO
		for(i = 0; i < gr->grau[u]; i++)
		{
			ind = gr->arestas[u][i];
			if(dist[ind] < 0)
			{
				dist[ind] = dist[u] + 1;
				//OU PESO DA ARESTA
				//dist[ind] = dist[u] + gr->pesos[u][i];
				ant[ind] = u;
			}
			else
			{
				if(dist[ind] > dist[u] + 1){
				//if(dist[ind] > dist[u] + 1){ //OU PESO DA ASRESTA
					dist[ind] = dist[u] + 1;
					//OU PESO DA ARESTA
					//dist[ind] = dist[u] + gr->pesos[u][i]
					ant[ind] = u;
				}
			}
		}

	}

	free(visitado);

}
