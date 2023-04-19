#include <stdio.h>
#include <stdlib.h>

int main(){
	float temperatura_c, temperatura_f;
	
	printf("Digite a temperatura em graus Celsius: \n");
	scanf("%f", &temperatura_c);
	
	temperatura_f = temperatura_c * 1.8 + 32;
	
	printf("A temperatura em Fahrenheit: %.1f\n", temperatura_f);
	
	system("pause");
}
