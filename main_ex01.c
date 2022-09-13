#include <stdio.h>
#include <stdlib.h>

void main (){

	int idade[15];
	int i=0, mVelho=0;
	
	for(i=0; i<15; i++){
		printf("Digite a idade da %io pessoa: ", i+1);
		scanf("%i", &idade[i]);
	} 
	
	for(i=0; i<15; i++){
		printf("Idade %i\n", idade[i]);
	}
	
	for(i=0; i<15; i++){
		if(idade[i] > mVelho){
			mVelho = idade[i];
		}
	}
	printf("A pessoa mais velha tem: %i anos", mVelho);
}




