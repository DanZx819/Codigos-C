#include <stdio.h>

int main(){
	float n1;
	
	printf("Digite o numero: ");
	scanf("%f", &n1);
	
	float quad;
	quad = n1 * n1;
	printf("O quadrado de %f � %f", n1,quad);
}
