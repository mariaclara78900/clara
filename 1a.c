#include <stdio.h>
#include <stdlib.h>

int main(){
	int a, b, soma;
	
	printf("Informe um numero: \n");
	scanf("%d", &a);
	printf("Informe outro numero: \n");
	scanf("%d", &b);
	
	soma = a + b;
	
	printf("Resultado: %d\n", soma);
	
	system ("pause");
}
