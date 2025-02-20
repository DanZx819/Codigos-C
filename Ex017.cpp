#include <stdio.h>

int main(){
	float cent;
	printf("Centimetro: ");
	scanf("%f", &cent);
	
	float pol;
	pol = cent / 2.54;
	printf("Polegadas: %f", pol);
}
