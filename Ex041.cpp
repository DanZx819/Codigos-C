#include <stdio.h>


int main(){
	float vh, nh, sal;
	
	printf("Horas: ");
	scanf("%f", &nh);
	printf("Valor Horas: ");
	scanf("%f", &vh);
	
	sal = (nh * vh) * 1.10;
	printf("Salario Final: %.2f", sal);
	
}
