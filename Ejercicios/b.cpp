#include <iostream>
#include <stdio.h>
using namespace std;
/*
Programa: Arreglo que con 4 elementos decimales realiza la suma de estos
Fecha: 26 de Agosto
Creador: Natalia Agudelo Valdes

*/

//funcion principal
int main(int argc, char *argv[]) {
	float num[4] = {1.0, 2.0, 3.0, 4.0}, suma = 0;
	printf("Elementos del arreglo:\n");
	for(int i = 0; i < 4; i++){
		printf("%.2f\n", num[i]);
		suma = suma + num[i];
	}
	printf("\nSumatoria %.2f\n", suma);
	return 0;
}

