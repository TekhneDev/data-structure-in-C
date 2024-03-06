#include <stdio.h>

// prototipo de função
int somar(int n1, int n2);

int main() {
	
	printf("Resultado da soma: %d", somar(15,56));
	return 0;
}

int somar(int n1, int n2) {
	return n1 + n2;
}


