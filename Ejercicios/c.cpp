#include <iostream>
#include <stdio.h>
using namespace std;
/*
Programa: Arreglo que captura diez numeros por el usuario y muestra en pantalla cuales de ellos son pares
Fecha: 26 de Agosto
Creador: Natalia Agudelo Valdes

*/


//funcion principal
int main(int argc, char *argv[]) {
	int num[10], i;
	printf("Ingrese diez numeros: \n");
	for(i = 0; i < 10; i++){
		scanf("%d", &num[i]);
		
	}
	for(i = 0; i < 10; i++){
		if(num[i] % 2 == 0){
			printf("\nDe los numeros que ingreso, es par: %d", num[i]);
		}
	}
	
	
	return 0;
}

