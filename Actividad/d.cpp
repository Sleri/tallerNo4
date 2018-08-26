#include <iostream>
#include <stdio.h>
using namespace std;
/*
Programa: Multiplica 5 numeros por 2 y los muestra ordenados
Fecha: 25 de Agosto
Creador: Natalia Agudelo Valdes

*/

//funcion principal
int main(int argc, char *argv[]) {
	int i, num[5], num2[5], num3[5], aux;
	
	//iniciar el arreglo para introducir datos por el usuario
	
	for(i = 0; i < 5; i++){
		printf("Ingrese el %d numero: \n", i + 1);
		scanf("%d", &num[i]);
	}
	
	//Se almacenan los datos del primer arreglo en otro y se multiplican por 2
	for(i = 0; i < 5; i++){
		num2[i] = num[i] * 2;
	}
	
	//Se ordenan los datos del segundo arreglo en un tercero
	for(i = 0; i < 5; i++){
		for(int j = 0; j < 5; j++){
			num3[j] = num2[j];
			if(num3[j] > num3[j+1]){
				aux = num3[j];
				num3[j] = num3[j+1];
				num3[j+1] = aux;
			}
		}
	}
	
	printf("Elementos ordenados de manera ascendente: \n");
	for(i = 0; i < 5; i++){
		printf("%d\n", num3[i]);
	}
	
	return 0;
}

