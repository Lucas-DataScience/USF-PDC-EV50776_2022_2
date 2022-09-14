#include <stdio.h>
#include <stdlib.h>

void calculoCilindro (float r, float h, float *v, float *a){
	*v = 3.14 * (r*r) * h;
	*a = 2*(3.14*(r*r)) + 2*(3.14 * r * h);
}
void main (){
	float r=0, h=0, volume=0, area=0;
	
	printf("Digite o valor do raio: ");
		scanf("%f", &r);
	
	printf("Digite o valor da altura: ");
		scanf("%f", &h);
		
	calculoCilindro(r, h, &volume, &area);
	
	printf("O volume e: %.2f\n", volume);
	printf("A area e: %.2f\n", area);
}
