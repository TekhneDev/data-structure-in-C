#include <stdio.h>

/* int function(int v[10]) {
	v[0] = 20;
} */

int function(int *v) {
	v[0] = 20;
}

int main() {
	
	// PASSAR UM VETOR PARA UMA FUNCAO
	// NA VERDADE ESTA PASSANDO O ENDERECO INCIAL DO VETOR
	
	
	// Espaco de memoria continuo para armazenar 10 valores inteiros - 40 bytes - [1 int + 4 bytes]
	// v sem indexacao alguma aponta para o primeiro elemento do vetor 
	int v[10], i;
	
	for( i=0; i<10; i++)
	  v[i] = i;
	  
	  
	
	/* function(v);
	   printf("%d \n", v[0]); */
	   
	   
	
	/*
	// C suporta a aritimetica de ponteiros ou seja ele consegue somar ou subtrair ponteiros
	for( i=0; i<10; i++){
	
	  // Nessa aritimetica é trabalhado em cima de endereços
	  printf("%d \n", v + i);
	  
	  // Nessa ja e trabalhado o conteudo
	  printf("%d \n", *( v + i ));
	}
	*/
	
	function(v);
	printf("%d \n", v[0]);
	
	
	return 0;
}
