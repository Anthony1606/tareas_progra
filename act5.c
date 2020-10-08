#include <stdio.h>

 int main(){

     int elementos_maximos = 4;

     int matriz[4][4];

     int matriz2[4][4];
    
     int matriz3[4][4];

     int indice_x;

     int indice_y;

     for(indice_y = 0; indice_y < elementos_maximos; indice_y++){

       for(indice_x = 0; indice_x < elementos_maximos; indice_x++){

         matriz[indice_y][indice_x] = indice_x+indice_y;

       }

     }
     
     for(indice_y = 0; indice_y < elementos_maximos; indice_y++){

       for(indice_x = 0; indice_x < elementos_maximos; indice_x++){

         matriz2[indice_y][indice_x] = (indice_x+indice_y)*4;

       }

     }
     

     for(indice_y = 0; indice_y < elementos_maximos; indice_y++){

       for(indice_x = 0; indice_x < elementos_maximos; indice_x++){

         matriz3[indice_y][indice_x] = matriz[indice_y][indice_x] + matriz2[indice_y][indice_x];

       }

     }

     printf("Matriz 1: \n");

    for(indice_y = 0; indice_y < elementos_maximos; indice_y++){

       for(indice_x = 0; indice_x < elementos_maximos; indice_x++){
         printf("%d, ", matriz[indice_y][indice_x]);

       }

       printf("\n");

     }
     
     printf("Matriz 2: \n");

     for(indice_y = 0; indice_y < elementos_maximos; indice_y++){

       for(indice_x = 0; indice_x < elementos_maximos; indice_x++){
         printf("%d, ", matriz2[indice_y][indice_x]);

       }

       printf("\n");

     }

     printf("Matriz resultante: \n");

     for(indice_y = 0; indice_y < elementos_maximos; indice_y++){

       for(indice_x = 0; indice_x < elementos_maximos; indice_x++){
         printf("%d, ", matriz3[indice_y][indice_x]);

       }

       printf("\n");

     }

     return 0;

 }

