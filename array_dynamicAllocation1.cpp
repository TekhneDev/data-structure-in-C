#include <stdio.h>
#include <stdlib.h>
// #define MAX 10




int main() {
	
	int *v;
	
	v = (int*)malloc(10 * sizeof(int));
	// v = malloc(MAX * sizeof(int));
	if(v == NULL) {
		printf("Memoria insuficiente!");
		exit(1);
	}
	
	v[0] = 10;
	v[1] = 20;
	
	printf("%d \n", v[0]);
	
	// Funcao Malloc recebe como parametros o numero de bytes que se deseja alocar
	// e retorna o endereco inicial da area de memoria alocada
	// malloc - armazena valores de qualquer tipo por conseguinte retorna um ponteiro generico para um tipo qualquer, retorna geramente um VOID *
	// conversao explicita - cast
	
	
	
	// liberar esse espaco de memoria
 	// free, funcao que recebe como parametro o ponteiro da memoria a ser desalocado
	free(v);
	
	return 0;
}
