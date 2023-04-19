#include <stdio.h>
#include <stdlib.h>

int main(){
	int num, ant, suc;
	
	printf("Digite um numero: \n");
	scanf("%d", &num);
	
	ant = num - 1;
	suc = num + 1;
	
	printf("Antecessor: %d\n", ant);
	printf("Sucessor: %d\n", suc);
	
	system("pause");
}

