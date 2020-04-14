#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "velha.h"

int main()
{
	char j1, j2;
	int vez;
    char vetor[9];

    while(menu() != 0){
	
		preencher(vetor);

		printf("-------------------\n");
		int p1 = aleatoria(&vez);
		printf("-------------------\n");
		
		atribui(&j1,&j2,p1);
		printf("-------------------\n");

		exibe();
		printf("-------------------\n");
		
		escolha(j1, j2, vetor, vez);
	}

	return 0;
}

