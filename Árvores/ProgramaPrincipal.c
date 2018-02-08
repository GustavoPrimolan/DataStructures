#include <stdio.h>
#include <stdlib.h>
#include "ArvoreBinaria.c"

int main(){
	
	//PONTEIRO PARA A ÁRVORE
	//PONTEIRO PARA PONTEIRO
	ArvBin* raiz;
	
	raiz = cria_ArvBin();

	
	int x = estaVazia_ArvBin(raiz);
	if(x){
		printf("Vazia\n");
	}
	
	int y = altura_ArvBin(raiz);
	printf("Altura da Arvore: %d\n", y);
	
	int z = totalNO_ArvBin(raiz);
	printf("Total de Nos na Arvore: %d\n", z);
	
	int inseriu = insere_ArvBin(raiz, 10);
	insere_ArvBin(raiz, 13);
	insere_ArvBin(raiz, 12);
	insere_ArvBin(raiz, 20);
	insere_ArvBin(raiz, 30);
	insere_ArvBin(raiz, 15);
	
	
	int removeu = remove_ArvBin(raiz, 10);
	
	int consulta = consulta_ArvBin(raiz, 13);
	
	//IMPRIMIME PRÉ ORDEM, EM ORDEM E PÓS-ORDEM
	printf("\n\nPre-Ordem:\n\n");
	preOrdem_ArvBin(raiz);
	printf("\n\nEmOrdem:\n\n");
	emOrdem_ArvBin(raiz);
	printf("\n\nPosOrdem:\n\n");
	posOrdem_ArvBin(raiz);
	
	libera_ArvBin(raiz);
	system("pause");	
	return 0;
}