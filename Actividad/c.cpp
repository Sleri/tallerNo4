#include <iostream>
#include <stdio.h>
using namespace std;
/*
Programa: Arreglo que imprime los 100 primeros numeros en forma descendente 
Fecha: 25 de Agosto
Creador: Natalia Agudelo Valdes

*/

//funcion principal
int main(int argc, char *argv[]) {
	int i, num[100];
	
	//inicio el arreglo
	for(i = 0; i < 100; i++) 
	{
		num[i] = i;  //se almacenan los numeros en las posiciones del arreglo
	}
	for(i = 100; i >= 1; i--)
	{
		printf("%d\n", num[i]); //se imprimen los numeros del arreglo en forma descendente
	}
	
	return 0;
}

