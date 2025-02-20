#include <stdio.h>

int main(){
	float p;
	printf("Polegadas: ");
	scanf("%f", &p);
	
	float cent;
	cent = p * 2.54;
	printf("Centimetros: %f", cent);
}
