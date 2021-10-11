#include <stdio.h>

int main() {
	//Suma de dos numeros introducidos por el usuario
	int dato1;
	int dato2;
	int resultado;

	printf("\t------------------SUMA DE DOS DATOS--------------------\n\n");

	printf("Introduzca el primer dato: ");

	scanf_s("%d", &dato1);

	printf("\nIntroduzca el segundo dato: ");

	scanf_s("%d", &dato2);


	resultado = dato1 + dato2;


	printf("\nEl resultado de la suma es: %d\n", resultado);
}