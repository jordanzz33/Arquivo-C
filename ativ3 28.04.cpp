#include <stdio.h>

int main (){
	
	int i,n[5];
	
	printf("Informe 5 numeros:\n");
	
	for (i=0; i < 5; i++){
		scanf("%d",&n[i]);
	}
	printf("Ordem inversa:\n");
	for (i=4;i>=0;i--){
		printf("%d", n[i]);
	}
	printf("\n");
	return 0;
}