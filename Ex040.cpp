#include <stdio.h>

int main(){
	float Dia, calc1, calc2;
	
	printf("Dias trabalhados: ");
	scanf("%f", &Dia);
	
	calc1 = Dia * 30 * 0.08;
	calc2 = Dia * 30 - calc1;
	
	printf("Calculo com desconto: %.2f", calc2);
}
