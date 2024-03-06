#include <stdio.h>

int somar(int n1, int n2) {
    int soma = n1 + n2;
    return soma;
}

int main() {

	// operador interessante 
	printf("%d \n", sizeof(int));
	
	// obter dados
	int n1, n2, resultado;
	
	printf("Digite dois numeros: \n");
	scanf("%d %d", &n1, &n2);
	resultado = somar(n1, n2);

    //int resultado = somar(10, 20);

    printf("%d \n", resultado);
    return 0;
}
