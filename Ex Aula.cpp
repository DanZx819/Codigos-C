#include <stdio.h>

int main(){

	float c, d, cs, pc, pd;
	d = 125;
	cs = 9;
	pd = 12.90;
	pc = 6.10;
	
	c = ((pc * d) / cs) + pd;
	
	printf("Total: %.2f", c);
}
