#include <iostream>
#include <stdio.h>
using namespace std;
/*
Programa: Arreglo que captura veinte numeros por el usuario y muestra en pantalla cuales de ellos son impares
Fecha: 26 de Agosto
Creador: Natalia Agudelo Valdes

*/


//funcion principal
int main(int argc, char *argv[]) {
	int num[20], i;
	printf("Ingrese veinte numeros: \n");
	for(i = 0; i < 20; i++){
		scanf("%d", &num[i]);
		
	}
	for(i = 0; i < 20; i++){
		if(num[i] % 2 == 1){
			printf("\nDe los numeros que ingreso, es impar: %d", num[i]);
		}
	}
	
	
	return 0;
}

