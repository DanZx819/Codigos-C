#include <stdio.h>

int main(){
	int n1, n2, n3;
	
	printf("Digite um numero: ");
	scanf("%d", &n1);
	printf("Digite um numero: ");
	scanf("%d", &n2);
	printf("Digite um numero: ");
	scanf("%d", &n3);
	
	int soma;
	soma = n1 + n2 + n3;
	printf("Soma: %d", soma);
}
