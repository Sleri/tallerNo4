#include <iostream>
#include <stdio.h>
using namespace std;
/*
Programa: Arreglo que genera los 100 primeros numeros pares y los suma
Fecha: 26 de Agosto
Creador: Natalia Agudelo Valdes

*/

//funcion principal
int main(int argc, char *argv[]) {
	int num[200], suma = 0;
	
	//se inicia el arreglo para guardar los numeros en este
	for(int i = 0; i <= 200; i++){
		num[i] = i;
		
		//condicion para saber cuales son pares
		if(num[i] % 2 == 0){
			suma = suma + num[i];
			printf("%d\n", num[i]);
			
		}
	}
	printf("La suma de los numeros es: %d\n", suma);
	
	return 0;
}

