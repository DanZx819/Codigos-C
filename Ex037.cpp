#include <stdio.h>
#include <math.h>

int main(){
	float p, d, c;
	printf("Preço: ");
	scanf("%f", &p);
	
	 
	d = p * 0.12;
	p = p - d;
	
	printf("Preço com desconto: %.2f", p);
}
