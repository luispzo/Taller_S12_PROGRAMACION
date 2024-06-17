#include <stdio.h>

//una estructura es un tipo de dato que nos permite agrupar varios tipos de datos
// a lo que yo necesito, no es necesario solo 1: 
//se pueden declarar dentro del main o afuera del main**
// puede estar antes del include o despues del include 
// las estructuras funcionan mejor cuando trabajamos con headers 
//hay que ver la persistencia de datos dentro de una estructura 
// hay como llamarle a la estructura de marias formas antes del 
struct automovil{
  char marca[100];
  char modelo[100];
  char color[100];

  int anio_modelo;
  int km; 
}; 

//con esto le llamamos a la estructura, se le puede poner cualquier nombre y se llama como auto.marca, auto.modelo, etc. depende del nombre que le pongamos a la estructura

int main() {
 // struct automovil auto;
  //printf("El tamaño de la estructura es: %d bytes", sizeof(auto));

  struct automovil *prt; 
  struct automovil auto1 ={"Audi","TT","Azul",2023};
  prt = &auto1;
  printf("El mejor auto es: %s - y el modelo es: %s - el color es: %s - año_modelo: %d", auto1.marca, auto1.modelo, auto1.color, auto1.anio_modelo);
  
  printf("El mejor auto es: %s - y el modelo es: %s - el color es: %s - año_modelo: %d", prt->marca, prt-> modelo, prt->color, prt->anio_modelo);
  return 0;
}