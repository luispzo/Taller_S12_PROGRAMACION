#include <stdio.h>
#include <stdlib.h>
//r abre el fichero para lectura
//w abre el fichero para escritura
//a abre el fichero para añadir datos al final del mismo 
//+ abre el fichero para lectura y escritura
//b abre el fichero en modo binario
//t abre el fichero en modo texto

// el nivel mas alto de persistencia es una base de datos 

int main() {
  { FILE * prt; 
   //cuando voy a trabajar con un archivo lo mas importante es poner FILE y la variable tipo puntero
      char archivo[]="datos.txt";
   // cuando ponemos el path deberiamos de poner doble backslash para que funcione 
   //le declaro como tipo nombre y un vector de caracteres
   //se puede crear donde se creo la aplicación pero eso depende del IDE que tenemos 
      prt = fopen(archivo, "r");
   //se puede tener combinacion de letras pero tiene que ser en orden 
   // esta direccion de memoria le asignamos un archivo  y a "r" es la opcion que se debe poner para abrir el archivo
   //luego de abrir tenemos que validar el archivo porque puede haber un archivo que no exista o que no se pueda abrir
   //declarar, abrir, controlar y luego desplegar o cerrar 
      if (prt == NULL){
        printf("Error al abrir el archivo %s\n", archivo);
        return 1;
      }
  }
  fclose(prt); //nunca hay que olvidarnos de cerrar el archivo 
  return 0;
}