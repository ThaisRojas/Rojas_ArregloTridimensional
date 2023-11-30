#include <stdio.h>

int main() {
    int x, y, z;


    printf("Ingrese las dimensiones (x, y, z) del arreglo tridimensional separadas por espacios: "); // Pide al usuario las dimensiones
    scanf("%d %d %d", &x, &y, &z);


    int arreglo[x][y][z]; // Declara el arreglo tridimensional con las dimensiones

    for (int i = 0; i < x; i++) { // Inicia las matrices en ceros
        for (int j = 0; j < y; j++) {
            for (int k = 0; k < z; k++) {
                arreglo[i][j][k] = 0;
            }
        }
    }
}