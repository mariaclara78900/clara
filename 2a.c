#include <stdio.h>
#include <stdlib.h>

int main(){
	
	float raio, pi=3.14, area;
	
	printf("Informe  valor do raio: \n");
	scanf("%f", &raio);
	
	area= pi * raio * raio;
	
	printf("Area: %.2f m2 \n", area);
	
	system("pause");
}
