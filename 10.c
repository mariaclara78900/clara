#include <stdio.h>
#include <stdlib.h>

int main(){
	
	char nome[50], saud[1000];
	int idade;
	
	printf("Digite seu nome: \n");
	gets(nome);
	
	printf("Digite sua idade: \n");
	scanf("%d", &idade);
	
	printf("Ola %s, seja bem-vindo(a)! Parabens pelos seus %d anos! \n", nome, idade);
	
	system("pause");
}

