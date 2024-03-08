#include <stdio.h>

void f(int *n){
	*n = 20;
}

int main() {
	// funcao main chama a funcao f
	
	int n = 10;
	
	// passando o endereco
	f(&n);
	
	printf("%d \n", n);
		
	return 0;
}
