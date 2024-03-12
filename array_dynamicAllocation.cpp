#include <stdio.h>

int main() {
	
	// Espaco de memoria continuo para armazenar 10 valores inteiros - 40 bytes - [1 int + 4 bytes] 
	int v[10], i;
	
	for( i=0; i<10; i++)
	  v[i] = i;
	
	printf("%d \n", v[1]);
	
	return 0;
}
