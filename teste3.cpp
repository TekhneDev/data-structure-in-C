#include <stdio.h>

// FATORIAL


// função recursiva - 	ESTUDAR MAIS
// primeiro pensar no caso base
// depois pensar no caso geral

int fat(int n) {
	if(n == 0 || n == 1)
		return 1;
	return n * fat(n - 1);
}

int main() {
	
	int num = 4;
	printf("Fatorial de %d = %d\n", num, fat(num));
	return 0;
}


