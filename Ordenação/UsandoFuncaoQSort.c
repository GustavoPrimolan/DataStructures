#include <stdio.h>
#include <stdlib.h>

int comparaCrescente(const void* a, const void* b)
{
	if(*(int*) a == *(int*)b)
		return 0; //IGUAIS
	else if(*(int*)a < * (int*)b)
	{
		return - 1; //VEM ANTES
	}
	else
	{
		return 1; //VEM DEPOIS
	}
}


int main(){
	int i, vet[10] = {23, 4, 67, -8, 54, 90, 21, 14, -5, 1};
	qsort(vet, 10, sizeof(int), comparaCrescente);
	for(i=0; i<10; i++)
		printf("Number = %d\n", vet[i]);
	
	system("pause");
	return 0;
}