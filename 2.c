#include <stdio.h>

int main(){

	int numero;
	int contador;

	printf("Digite um numero Inteiro Positivo: ");
	fflush(stdout);//Necessário para Bug do eclipse em Windows
	scanf("%d", &numero);

	if(numero > 0){
		printf("\nNumeros Naturais de %d ate 0:\n\n", numero);

			for(contador = numero; contador >= 0; contador --){
				printf("%d ", contador);
			}
	}else{
		printf("\nNumero Invalido!!!");
	}

	return 0;
}
