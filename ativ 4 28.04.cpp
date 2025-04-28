#include <stdio.h>

int main() {
	float notas[6], soma = 0.0, media;
	int i;
	
	printf("Digite 6 notas:\n");
	for(i=0;i<6;i++){
		scanf("%f", &notas[1]);
		soma+=notas[i];
	}
	media = soma/6;
	printf("Media: %.2f\n", media);
	printf("Notas acima da media:\n");
	
	for(i=0;i<6;i++){
		if(notas[i > media]){
			printf("%.2f", notas[1]);
		}
	}
	
	return 0;
	
}