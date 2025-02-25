#include <stdio.h>

int main(){
	float sal, aum;
	printf("Salario: ");
	scanf("%f", &sal);
	
	aum = sal * 0.25;
	sal = sal + aum;
	printf("Salrio com aumento: %.2f", sal);
}
