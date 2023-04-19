#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int tabuada = 0, i;
	
	printf("Digite um numero: \n");
	scanf("%d", &tabuada);
	
	for(i = 1; i <= 10; ++i){
		printf("%dx%d = %d\n", tabuada, i, i * tabuada);
	}
	
	system("pause");
}
