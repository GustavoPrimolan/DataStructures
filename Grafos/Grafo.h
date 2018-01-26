typedef struct grafo Grafo;

Grafo *cria_Grafo(int nro_vertices, int grau_max, int eh_ponderado);

void libera_Grafo(Grafo* gr);

int insereAresta(Grafo* gr, int orig, int dest, int eh_diagrafo, float peso);

int removeAresta(Grafo* gr, int orig, int dest, int eh_diagrafo);

void buscaProfundidade_Grafo(Grafo *gr, int ini, int *visitado);

void buscaLargura_Grafo(Grafo *gr, int ini, int *visitado);

//PARÂMETROS: Grafo, Vértice Inicial, DOIS VETORES INICIAIS COM O TAMANHOD O GRAFO
//ant É O ANTERIOR DAQUELE VÉRTICE
//dist É A DISTÂNCIA
void menorCaminho_Grafo(Grafo *gr, int ini, int *ant, float *dist);