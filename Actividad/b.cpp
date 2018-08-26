#include <iostream>
#include <stdio.h>
using namespace std;
/*
Programa: Elemento mayor de un arreglo
Fecha: 23 de Agosto
Creador: Natalia Agudelo Valdes

*/

//funcion principal
int main(int argc, char *argv[]) {
	int num[] = {0,10,5,8,7,6,1,2,3,4};
	int i = 0, j;
	
	//inicio el arreglo
	for(j = 0; j < 10; j++)
	{
		if(num[j] > i){ //define que dato es mayor al anterior
			i = num[j];
		}
	};
	printf("El elemento mayor es: %d", i);
	
	return 0;
}

