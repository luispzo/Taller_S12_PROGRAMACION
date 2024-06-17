#include <stdio.h>

struct direccion{
  char callep[40];
  int num_casa;
  char ciudad[40];
  char parroquia[20];
};

//typedef struct direccion dir;

//typedef struct usuario
struct usuario{
  char nombre[40];
  char apellido[40];
  struct direccion dir;
  char fono[15];
}; // user; para declarar directamente 
// como tenemos una estructura dentro de otra, tenemos que declarar un vector dentro de un vector
int main(){
  //user pablo 

  // block struct dir y podrias hacer: 
  // struct usuario user[2] 

  //  int i; 
    // struct usuario user[2];
    // for(i=0;i<2;i++){
    //  scanf("%s",user[i].nombre);
    //  scanf("%d", &user[i].num_casa);
    //}
  struct usuario pablo1 = {
    "Pablo",
    "Picasso",
  {"Calle_P",6969, "UIO","Cumbayork"},
  "593-25465"
    };


  printf("Usuario: %s %s\n", pablo1.nombre, pablo1.apellido);
  printf("Usuario: %s - %d - %s\n", pablo1.dir.callep, pablo1.dir.num_casa, pablo1.fono);
  return 0;
}