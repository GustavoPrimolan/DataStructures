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
	
		
	libera_ArvBin(raiz);
	system("pause");	
	return 0;
}