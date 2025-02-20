#include <stdio.h>

int main(){
	float K;
	printf("Temperatura em Kelvin: ");
	scanf("%f", &K);
	
	float C;
	C = K - 273.15;
	printf("Temperatura Kelvin -> %2.f \n", K);
	printf("Temperatura Celsios -> %2.f \n", C);
}
