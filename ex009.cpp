#include <stdio.h>
int main(){
	float C;
	
	printf("Temperatura em Celsious: ");
	scanf("%f", &C);
	
	float K;
	K = C + 273.15;
	printf("Temperatura em Kelvin: %4.f", K);
}
