#include <stdio.h>
#include <math.h>

int main(){
	float raio, calc, pi;
	printf("Raio: ");
	scanf("%f", &raio);
	
	
	calc = M_PI * pow(raio,2);
	printf("Area do circulo: %.2f", calc);
	
}
