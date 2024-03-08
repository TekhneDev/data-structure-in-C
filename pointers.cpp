#include <stdio.h>



int main() {
	
	// Variaveis do tipo ponteiro 
	// = Armazenar endereços de memória
	
	int n = 10;
	int *p;
	
	
	// Nesse exemplo está trabalhando com o endereço { P recebe o endereço de N / P apontando para N }
	p = &n;
	
	// Nesse exemplo está trabalhando com conteudo
	*p = 20;
	
	
	// Estao apontando para mesma posicao de memoria
	printf("%d \n", n);
	printf("%d \n", *p);
	
	// scanf - guardar o inteiro no endereço de Var 
	// & - "Endereço de" 
	// scanf("%d", &var);
	
	
	return 0;
}
