#include <stdio.h>

int main(){
	float km;
	printf("Digite a veocidade em KM/H: ");
	scanf("%f", &km);
	
	float M;
	M = km / 3.6;
	printf("Em KM/H: %f \nEm M/S: %f",km,M);
}
