#include <stdio.h>

int main(){
	float n1, su,ant;
	printf("Digite o numero: ");
	scanf("%f", &n1);
	
	su = n1 * 3;
	ant = n1 * 2;
	
	float cont;
	cont = su + ant;
	printf("Soma: %2.f", cont);
}
