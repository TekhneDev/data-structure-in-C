#include <stdio.h>

int somar(int n1, int n2) {
    int soma = n1 + n2;
    return soma;
}

int main() {

	// operador interessante 
	printf("%d \n", sizeof(int));

    int resultado = somar(10, 20);

    printf("%d \n", resultado);
    return 0;
}
