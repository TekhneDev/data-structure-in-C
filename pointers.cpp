#include <stdio.h>



int main() {
	
	// Variaveis do tipo ponteiro 
	// = Armazenar endere�os de mem�ria
	
	int n = 10;
	int *p;
	
	
	// Nesse exemplo est� trabalhando com o endere�o { P recebe o endere�o de N / P apontando para N }
	p = &n;
	
	// Nesse exemplo est� trabalhando com conteudo
	*p = 20;
	
	
	// Estao apontando para mesma posicao de memoria
	printf("%d \n", n);
	printf("%d \n", *p);
	
	// scanf - guardar o inteiro no endere�o de Var 
	// & - "Endere�o de" 
	// scanf("%d", &var);
	
	
	return 0;
}
