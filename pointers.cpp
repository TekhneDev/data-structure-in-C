#include <stdio.h>



int main() {
	
	// Variaveis do tipo ponteiro 
	// = Armazenar endere�os de mem�ria
	
	int n = 10;
	int *p;
	
	
	// Nesse exemplo est� trabalhando com o endere�o
	p = &n;
	
	// Nesse exemplo est� trabalhando com conteudo
	*p = 20;
	
	printf("%d \n", n);
	
	// scanf - guardar o inteiro no endere�o de Var 
	// & - "Endere�o de" 
	// scanf("%d", &var);
	
	
	return 0;
}
