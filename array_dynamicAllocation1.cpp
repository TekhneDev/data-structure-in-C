#include <stdio.h>



int function(int *v) {
	v[0] = 20;
}

int main() {
	
	
	int v[10], i;
	
	for( i=0; i<10; i++)
	  v[i] = i;
	  

	
	function(v);
	printf("%d \n", v[0]);
	
	
	return 0;
}
