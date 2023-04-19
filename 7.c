#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int idade, maior, menor;
	
	printf("Informa sua idade: \n");
	scanf("%d", &idade);
	
	if(idade < 18){
		printf("Menor de idade \n");
	} else{
	    printf("Maior de idade \n");
	}
	
	system("pause");
}
