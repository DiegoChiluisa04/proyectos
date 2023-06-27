#include <stdio.h>

int main() {
    int id[5];
    char nombre[5][50];
    char descripcion[5][100];
    int cantidad[5];
    float precio[5];

    printf("Ingrese los detalles de 5 productos:\n");
    for (int i = 0; i < 5; i++) {
        printf("Producto %d:\n", i + 1);

        printf("ID: ");
        scanf("%d", &id[i]);

        printf("Nombre: ");
        scanf(" %[^\n]", nombre[i]);

        printf("Descripción: ");
        scanf(" %[^\n]", descripcion[i]);

        printf("Cantidad: ");
        scanf("%d", &cantidad[i]);

        printf("Precio: ");
        scanf("%f", &precio[i]);

        printf("\n");
    }

    printf("Lista de productos:\n");
    for (int i = 0; i < 5; i++) {
        printf("Producto %d:\n", i + 1);
        printf("ID: %d\n", id[i]);
        printf("Nombre: %s\n", nombre[i]);
        printf("Descripción: %s\n", descripcion[i]);
        printf("Cantidad: %d\n", cantidad[i]);
        printf("Precio: %.2f\n", precio[i]);
        printf("\n");
    }

    int opcion;
printf("Seleccione un producto por su ID (1-5): ");
scanf("%d", &opcion);

if (opcion >= 1 && opcion <= 5) {
    int indice = -1;  // Variable para almacenar el índice del producto encontrado
    
    // Buscar el ID ingresado en el arreglo 'id'
    for (int i = 0; i < 5; i++) {
        if (id[i] == opcion) {
            indice = i;
            break;
        }
    }
    
    if (indice != -1) {
        printf("Producto seleccionado:\n");
        printf("ID: %d\n", id[indice]);
        printf("Nombre: %s\n", nombre[indice]);
        printf("Descripción: %s\n", descripcion[indice]);
        printf("Cantidad: %d\n", cantidad[indice]);
        printf("Precio: %.2f\n", precio[indice]);
    } else {
        printf("ID de producto no encontrado.\n");
    }
} else {
    printf("Opción inválida.\n");
}

return 0;
}
