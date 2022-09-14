#include <stdio.h>
#include <stdlib.h>

int f(int n){
	if(n==1 | n==2){
		return n;
	}
	if(n>2){
		return 2*f(n-1) + 3*f(n-2);
	}
}
void main (){
	int x;
	printf("Informe o valor de N: ");
	scanf("%i", &x);
	printf("f(n) = "  "%i", f(x));
}
