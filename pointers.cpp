#include <stdio.h>



int main() {
	
	// Variaveis do tipo ponteiro 
	// = Armazenar endereços de memória
	
	int n = 10;
	int *p;
	
	
	// Nesse exemplo está trabalhando com o endereço
	p = &n;
	
	// Nesse exemplo está trabalhando com conteudo
	*p = 20;
	
	printf("%d \n", n);
	
	// scanf - guardar o inteiro no endereço de Var 
	// & - "Endereço de" 
	// scanf("%d", &var);
	
	
	return 0;
}
