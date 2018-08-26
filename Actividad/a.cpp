#include <iostream>
#include <stdio.h>
using namespace std;
/*
Programa: Calcula el promedio de 5 notas ingresadas por el usuario
Fecha: 23 de Agosto
Creador: Natalia Agudelo Valdes

*/

//funcion principal
int main(int argc, char *argv[]) {
	float cali[5];
	float prom = 0;
	
	//iniciar el arreglo para introducir datos por el usuario
	for(int i = 0; i < 5; i++){
		printf("Ingrese la nota %d: \n", i + 1);
		scanf("%f", &cali[i]);
		prom += cali[i];
		printf("\n");
	}
	printf("Las notas son: \n");
	for(int i = 0; i < 5; i++){
		printf("%.2f\n", cali[i]);
	}
	printf("\nEl promedio de notas es %.2f: ", prom / 5);
	
	return 0;
}

