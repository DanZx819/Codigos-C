#include <stdio.h>

int main(){
	float sal, calc1,calc2;
	printf("Salario-base:");
	scanf("%f", &sal);
	
	calc1 = (sal * 1.05);
	calc2 = sal * 0.07; 
	
	sal = calc1 -calc2;
	printf("Salario Final: %.2f", sal);
	
	
}
