#include <stdio.h>
#include <stdlib.h>
#include "ArvoreBinaria.h"

struct NO
{
	int info;
	struct NO *esq;
	struct NO *dir;
};

ArvBin* cria_ArvBin()
{
	ArvBin* raiz = (ArvBin*) malloc(sizeof(ArvBin));

	if(raiz != NULL)
		*raiz = NULL;
	return raiz;
}

void libera_NO(struct NO* no)
{
	if(no == NULL)
		return;
	libera_NO(no->esq);
	libera_NO(no->dir);
	free(no);
	no = NULL;
}

void libera_ArvBin(ArvBin* raiz)
{
	if(raiz == NULL)
		return;
	//LIBERA CADA NÓ
	libera_NO(*raiz);

	//LIBERA RAIZ
	free(raiz);

}

int estaVazia_ArvBin(ArvBin *raiz)
{
	if(raiz == NULL)
		return 1;
	if(*raiz == NULL)
		return 1;
	return 0;
}

int altura_ArvBin(ArvBin *raiz)
{
	if(raiz == NULL)
		return 0;
	if(*raiz == NULL)
		return 0;

	int alt_esq = altura_ArvBin(&((*raiz)->esq));
	int alt_dir = altura_ArvBin(&((*raiz)->dir));

	if(alt_esq > alt_dir)
		return (alt_esq + 1);
	else
		return(alt_dir + 1);
}

int totalNO_ArvBin(ArvBin *raiz)
{
	if(raiz == NULL)
		return 0;
	else
		return 0;

	int alt_esq = totalNO_ArvBin(&((*raiz)->esq));
	int alt_dir = totalNO_ArvBin(&((*raiz)->dir));

	return (alt_esq + alt_dir + 1);
}

void preOrdem_ArvBin(ArvBin *raiz)
{
	if(raiz == NULL)
		return;
	if(*raiz != NULL)
	{
		printf("%d\n", (*raiz)->info);
		preOrdem_ArvBin(&((*raiz)->esq));
		preOrdem_ArvBin(&((*raiz)->dir));
	}
}

void emOrdem_ArvBin(ArvBin *raiz)
{
	if(raiz == NULL)
		return;
	if(*raiz != NULL)
	{
		emOrdem_ArvBin(&((*raiz)->esq));
		printf("%d\n", (*raiz)->info);
		emOrdem_ArvBin(&((*raiz)->dir));
	}
}

void posOrdem_ArvBin(ArvBin *raiz)
{
	if(raiz == NULL)
		return;
	if(*raiz != NULL)
	{
		posOrdem_ArvBin(&((*raiz)->esq));
		posOrdem_ArvBin(&((*raiz)->dir));
		printf("%d\n", (*raiz)->info);
	}
}

//INSERE NA ÁRVORE BINÁRIA
int insere_ArvBin(ArvBin* raiz, int valor)
{
	if(raiz == NULL)
		return 0;
	struct NO* novo;
	novo = (sutrct NO*) malloc(sizeof(struct NO));
	if(novo == NULL)
		return 0;

	novo->infor = valor;
	novo->dir = NULL;
	novo->esq = NULL;

	//SE A NÃO TIVER RAIZ AINDA, O VALOR SERÁ A RAIZ
	if(*raiz == NULL)
		*raiz = novo;
	else
	{
		struct NO* atual = *raiz;
		struct NO* ant = NULL;
		//NAVEGA NOS NÓS DA ÁRVORE ATÉ CHEGAR EM UM NÓ FOLHA
		while(atual != NULL)
		{
			ant = atual;
			if(valor == atual->info)
			{
				free(novo);
				return 0;
			}

			if(valor > atual->info)
				atual = atual->dir;
			else
				atual = atual->esq;
		}

		//INSERE COMO FILHO DESSE NÓ FOLHA
		if(valor > ant->info)
			ant->dir = novo;
		else
			ant->esq = novo;
	}

	return 1;
}


//FUNÇÃO RESPONSÁVEL PELA BUSCA DO NÓ A SER REMOVIDO
int remove_ArvBin(ArvBin *raiz, int valor)
{
	if(raiz == NULL) return 0;
	struct NO* ant = NULL;
	struct NO* atual = *raiz;
	while(atual != NULL)
	{
		//ACHOU O NÓ A SER REMOVIDO. TRATAR O LADO DA REMOÇÃO
		if(valor == atual->info)
		{
			if(atual == *raiz)
				*raiz = remove_atual(atual);
			else
			{
				if(ant->dir == atual)
					ant->dir = remove_atual(atual);
				else
					ant->esq = remove_atual(atual);
			}
			return 1;
		}
	}
	
	//CONTINUA ANDANDO NA ÁRVORE A PROCURA DO NÓ A SER REMOVIDO
	ant = atual;
	if(valor > atual->info)
		atual = atual->dir;
	else
		atual = atual->esq;

}

//FUNÇÃO RESPNSÁVEL POR TRATAR OS 3 TIPOS DE REMOÇÃO
struct NO* remove_atual(struct NO* atual)
{
	struct NO *no1, *no2;
	//SEM FILHO DA ESQUERDA. APONTAR PARA O FILHO DA DIREITA (TRATA NÓ FOLHA E NÓ COM 1 FILHO)
	if(atua->esq == NULL){
		no2 = atual->dir;
		free(atual);
		return no2;
	}
	
	no1 = atual;
	no2 = atual->esq;
	//PROCURA FILHO MAIS A DIREITA NA SUB-ÁRVORE DA ESQUERDA
	while(no2->dir != NULL){
		no1 = no2;
		no2 = no2->dir;
	}
	
	//COPIA O FILHO MAIS A DIREITA NA SUB-ÁRVORE ESQUERDA PARA O LUGAR DO NÓ REMOVIDO
	if(no1 != atual){
		no1->dir = no2->esq;
		no2->esq = atual->esq;
	}
	
	no2->dir = atual->dir;
	free(atual);
	return no2;
	
}

