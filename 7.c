#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int idade, maior, menor;
	
	printf("Informa sua idade: \n");
	scanf("%d", &idade);
	
	if(idade < 18 && idade > 0){
		printf("Menor de idade \n");
	} 
	if (idade >= 18){
	    printf("Maior de idade \n");
	}
	if(idade <= 0){
		printf("Idade invalida! \n");
	}
	
	system("pause");
}
