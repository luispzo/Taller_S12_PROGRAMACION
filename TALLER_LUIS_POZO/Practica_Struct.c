#include <stdio.h>

struct direccion {
    char callep[40];
    int num_casa;
    char cedula[10];
    char ciudad[20];
    char provincia[20];
};
typedef struct direccion dir;

typedef struct factura {
    char nombre[40];
    char apellido[40];
    struct direccion dir;
} user;

typedef struct producto {
    char nombre[40];
    float precio;
    int cantidad;
} producto;

int main() {
    int i, j, num_productos;

    // Datos del usuario
    struct factura user[2];

    for (i = 0; i < 2; i++) {
        printf("Por favor ingresar el nombre del usuario %d: ", i);
        scanf("%s", user[i].nombre);

        printf("Por favor ingresar el apellido del usuario %d: ", i);
        scanf("%s", user[i].apellido);

        printf("Por favor ingresar la calle principal del usuario %d: ", i);
        scanf("%s", user[i].dir.callep);

        printf("Por favor ingresar el número de casa del usuario %d: ", i);
        scanf("%d", &user[i].dir.num_casa);

        printf("Por favor ingresar la cédula del usuario %d: ", i);
        scanf("%s", user[i].dir.cedula);

        printf("Por favor ingresar la ciudad del usuario %d: ", i);
        scanf("%s", user[i].dir.ciudad);

        printf("Por favor ingresar la provincia del usuario %d: ", i);
        scanf("%s", user[i].dir.provincia);

        // Datos de los productos
        printf("¿Cuántos productos va a comprar el usuario %d?: ", i);
        scanf("%d", &num_productos);

        producto productos[num_productos];

        for (j = 0; j < num_productos; j++) {
            printf("Por favor ingresar el nombre del producto %d: ", j + 1);
            scanf("%s", productos[j].nombre);

            printf("Por favor ingresar el precio del producto %d: ", j + 1);
            scanf("%f", &productos[j].precio);

            printf("Por favor ingresar la cantidad del producto %d: ", j + 1);
            scanf("%d", &productos[j].cantidad);
        }

        // Mostrar factura
        printf("\n--- Factura Super Mercados Pozo %d ---\n", i);
        printf("Nombre: %s %s\n", user[i].nombre, user[i].apellido);
        printf("Dirección: %s, Casa No. %d, Ciudad: %s, Provincia: %s\n",
               user[i].dir.callep, user[i].dir.num_casa, user[i].dir.ciudad, user[i].dir.provincia);
        printf("Cédula: %s\n", user[i].dir.cedula);
        printf("Productos comprados:\n");

        float total_factura = 0.0;
        for (j = 0; j < num_productos; j++) {
            float total_producto = productos[j].precio * productos[j].cantidad;
            total_factura += total_producto;
            printf("%d. %s - Precio: %.2f, Cantidad: %d, Total: %.2f\n", j + 1, productos[j].nombre, productos[j].precio, productos[j].cantidad, total_producto);
        }
        printf("Total a pagar: %.2f\n", total_factura);
        printf("-----------------------------\n\n");
    }

    return 0;
}
