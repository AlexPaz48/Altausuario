/* ⁠Programa para alta de usuario
	Descripción: Escribir un programa en C que solicite al usuario su nombre, edad y altura, y luego muestre 
    esa información en pantalla.
	Ejemplo de ejecución:
        - Ingrese su nombre: Juan Pérez  
        -  Ingrese su edad: 25  
        - Ingrese su altura en metros: 1.75  

	Salida: 
		Hola Juan Pérez, tienes 25 años y mides 1.75 metros
*/


#include <stdio.h>

int main () {

char nombre[50];
int edad;
float altura;   


printf("Ingrese su nombre:\n");

scanf("%s",nombre);

printf ("Por favor, ingresar su edad:\n");

scanf("%d",&edad);


printf (" Un dato mas por favor, puedes escribir tu altura en metros, por favor :\n");

scanf("%f", &altura);



    
    
    
    return 0;}